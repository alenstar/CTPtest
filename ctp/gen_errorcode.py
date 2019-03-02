#!/usr/bin/env python
 #-*-coding: utf-8-*-

import os
import sys
import xml.sax
import xml.etree.ElementTree as ET

def generate_error_code(filename, out):
    body = ''
    #with open(filename) as f:
    #    body = f.read().decode('gbk').encode('utf-8')
    tree = ET.ElementTree(file = filename)
    root = tree.getroot()
    
    # enum code
    for child in root:
        #print(child.tag,child.attrib)
        body = body + '\tCTP_' + child.attrib['id'] + ' = ' + child.attrib['value'] + ',\n'
    
    body = """#pragma once \n enum CtpErrorCode{{ \n{}\n }};\nconst char* ctp_strerror(int code);\nconst char* ctp_strerror_cn(int code);""".format(body)
    print(body)
    print('------------------')
    f = open(out + '.h','w',encoding='utf-8')
    f.write(body)
    f.close()
    
    # eng str
    body = ''
    for child in root:
        #print(child.tag,child.attrib)
        body = body + '\tcase CTP_' + child.attrib['id'] + ': return "' + child.attrib['id'] + '";\n'
    body = body + '\tdefault: return "";\n'
    body = """#include "{}.h" \nconst char* ctp_strerror(int code){{ \nswitch(code){{ \n{}\n }}\n }}\n\n""".format(out, body)
    print(body)
    print('------------------')
    f = open(out + '.cpp','w',encoding='utf-8')
    f.write(body)
    
    # chi str
    body ='' # body +'\n\n'
    for child in root:
        #print(child.tag,child.attrib)
        body = body + '\tcase CTP_' + child.attrib['id'] + ': return "' + child.attrib['prompt'] + '";\n'
    body = body + '\tdefault: return "";\n'
    body = """const char* ctp_strerror_cn(int code){{ \nswitch(code){{  {}\n }}\n }};""".format(body) 
    print(body)
    print('------------------')
    f.write(body)
    f.close
    
    pass


if __name__ == '__main__':
    generate_error_code(sys.argv[1], sys.argv[2])
