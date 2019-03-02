#include "CtpErrorCode.h" 
const char* ctp_strerror(int code){ 
switch(code){ 
	case CTP_NONE: return "NONE";
	case CTP_INVALID_DATA_SYNC_STATUS: return "INVALID_DATA_SYNC_STATUS";
	case CTP_INCONSISTENT_INFORMATION: return "INCONSISTENT_INFORMATION";
	case CTP_INVALID_LOGIN: return "INVALID_LOGIN";
	case CTP_USER_NOT_ACTIVE: return "USER_NOT_ACTIVE";
	case CTP_DUPLICATE_LOGIN: return "DUPLICATE_LOGIN";
	case CTP_NOT_LOGIN_YET: return "NOT_LOGIN_YET";
	case CTP_NOT_INITED: return "NOT_INITED";
	case CTP_FRONT_NOT_ACTIVE: return "FRONT_NOT_ACTIVE";
	case CTP_NO_PRIVILEGE: return "NO_PRIVILEGE";
	case CTP_CHANGE_OTHER_PASSWORD: return "CHANGE_OTHER_PASSWORD";
	case CTP_USER_NOT_FOUND: return "USER_NOT_FOUND";
	case CTP_BROKER_NOT_FOUND: return "BROKER_NOT_FOUND";
	case CTP_INVESTOR_NOT_FOUND: return "INVESTOR_NOT_FOUND";
	case CTP_OLD_PASSWORD_MISMATCH: return "OLD_PASSWORD_MISMATCH";
	case CTP_BAD_FIELD: return "BAD_FIELD";
	case CTP_INSTRUMENT_NOT_FOUND: return "INSTRUMENT_NOT_FOUND";
	case CTP_INSTRUMENT_NOT_TRADING: return "INSTRUMENT_NOT_TRADING";
	case CTP_NOT_EXCHANGE_PARTICIPANT: return "NOT_EXCHANGE_PARTICIPANT";
	case CTP_INVESTOR_NOT_ACTIVE: return "INVESTOR_NOT_ACTIVE";
	case CTP_NOT_EXCHANGE_CLIENT: return "NOT_EXCHANGE_CLIENT";
	case CTP_NO_VALID_TRADER_AVAILABLE: return "NO_VALID_TRADER_AVAILABLE";
	case CTP_DUPLICATE_ORDER_REF: return "DUPLICATE_ORDER_REF";
	case CTP_BAD_ORDER_ACTION_FIELD: return "BAD_ORDER_ACTION_FIELD";
	case CTP_DUPLICATE_ORDER_ACTION_REF: return "DUPLICATE_ORDER_ACTION_REF";
	case CTP_ORDER_NOT_FOUND: return "ORDER_NOT_FOUND";
	case CTP_INSUITABLE_ORDER_STATUS: return "INSUITABLE_ORDER_STATUS";
	case CTP_UNSUPPORTED_FUNCTION: return "UNSUPPORTED_FUNCTION";
	case CTP_NO_TRADING_RIGHT: return "NO_TRADING_RIGHT";
	case CTP_CLOSE_ONLY: return "CLOSE_ONLY";
	case CTP_OVER_CLOSE_POSITION: return "OVER_CLOSE_POSITION";
	case CTP_INSUFFICIENT_MONEY: return "INSUFFICIENT_MONEY";
	case CTP_DUPLICATE_PK: return "DUPLICATE_PK";
	case CTP_CANNOT_FIND_PK: return "CANNOT_FIND_PK";
	case CTP_CAN_NOT_INACTIVE_BROKER: return "CAN_NOT_INACTIVE_BROKER";
	case CTP_BROKER_SYNCHRONIZING: return "BROKER_SYNCHRONIZING";
	case CTP_BROKER_SYNCHRONIZED: return "BROKER_SYNCHRONIZED";
	case CTP_SHORT_SELL: return "SHORT_SELL";
	case CTP_INVALID_SETTLEMENT_REF: return "INVALID_SETTLEMENT_REF";
	case CTP_CFFEX_NETWORK_ERROR: return "CFFEX_NETWORK_ERROR";
	case CTP_CFFEX_OVER_REQUEST: return "CFFEX_OVER_REQUEST";
	case CTP_CFFEX_OVER_REQUEST_PER_SECOND: return "CFFEX_OVER_REQUEST_PER_SECOND";
	case CTP_SETTLEMENT_INFO_NOT_CONFIRMED: return "SETTLEMENT_INFO_NOT_CONFIRMED";
	case CTP_DEPOSIT_NOT_FOUND: return "DEPOSIT_NOT_FOUND";
	case CTP_EXCHANG_TRADING: return "EXCHANG_TRADING";
	case CTP_PARKEDORDER_NOT_FOUND: return "PARKEDORDER_NOT_FOUND";
	case CTP_PARKEDORDER_HASSENDED: return "PARKEDORDER_HASSENDED";
	case CTP_PARKEDORDER_HASDELETE: return "PARKEDORDER_HASDELETE";
	case CTP_INVALID_INVESTORIDORPASSWORD: return "INVALID_INVESTORIDORPASSWORD";
	case CTP_INVALID_LOGIN_IPADDRESS: return "INVALID_LOGIN_IPADDRESS";
	case CTP_OVER_CLOSETODAY_POSITION: return "OVER_CLOSETODAY_POSITION";
	case CTP_OVER_CLOSEYESTERDAY_POSITION: return "OVER_CLOSEYESTERDAY_POSITION";
	case CTP_BROKER_NOT_ENOUGH_CONDORDER: return "BROKER_NOT_ENOUGH_CONDORDER";
	case CTP_INVESTOR_NOT_ENOUGH_CONDORDER: return "INVESTOR_NOT_ENOUGH_CONDORDER";
	case CTP_BROKER_NOT_SUPPORT_CONDORDER: return "BROKER_NOT_SUPPORT_CONDORDER";
	case CTP_RESEND_ORDER_BROKERINVESTOR_NOTMATCH: return "RESEND_ORDER_BROKERINVESTOR_NOTMATCH";
	case CTP_SYC_OTP_FAILED: return "SYC_OTP_FAILED";
	case CTP_OTP_MISMATCH: return "OTP_MISMATCH";
	case CTP_OTPPARAM_NOT_FOUND: return "OTPPARAM_NOT_FOUND";
	case CTP_UNSUPPORTED_OTPTYPE: return "UNSUPPORTED_OTPTYPE";
	case CTP_SINGLEUSERSESSION_EXCEED_LIMIT: return "SINGLEUSERSESSION_EXCEED_LIMIT";
	case CTP_EXCHANGE_UNSUPPORTED_ARBITRAGE: return "EXCHANGE_UNSUPPORTED_ARBITRAGE";
	case CTP_NO_CONDITIONAL_ORDER_RIGHT: return "NO_CONDITIONAL_ORDER_RIGHT";
	case CTP_AUTH_FAILED: return "AUTH_FAILED";
	case CTP_NOT_AUTHENT: return "NOT_AUTHENT";
	case CTP_SWAPORDER_UNSUPPORTED: return "SWAPORDER_UNSUPPORTED";
	case CTP_OPTIONS_ONLY_SUPPORT_SPEC: return "OPTIONS_ONLY_SUPPORT_SPEC";
	case CTP_DUPLICATE_EXECORDER_REF: return "DUPLICATE_EXECORDER_REF";
	case CTP_RESEND_EXECORDER_BROKERINVESTOR_NOTMATCH: return "RESEND_EXECORDER_BROKERINVESTOR_NOTMATCH";
	case CTP_EXECORDER_NOTOPTIONS: return "EXECORDER_NOTOPTIONS";
	case CTP_OPTIONS_NOT_SUPPORT_EXEC: return "OPTIONS_NOT_SUPPORT_EXEC";
	case CTP_BAD_EXECORDER_ACTION_FIELD: return "BAD_EXECORDER_ACTION_FIELD";
	case CTP_DUPLICATE_EXECORDER_ACTION_REF: return "DUPLICATE_EXECORDER_ACTION_REF";
	case CTP_EXECORDER_NOT_FOUND: return "EXECORDER_NOT_FOUND";
	case CTP_OVER_EXECUTE_POSITION: return "OVER_EXECUTE_POSITION";
	case CTP_LOGIN_FORBIDDEN: return "LOGIN_FORBIDDEN";
	case CTP_INVALID_TRANSFER_AGENT: return "INVALID_TRANSFER_AGENT";
	case CTP_NO_FOUND_FUNCTION: return "NO_FOUND_FUNCTION";
	case CTP_SEND_EXCHANGEORDER_FAILED: return "SEND_EXCHANGEORDER_FAILED";
	case CTP_SEND_EXCHANGEORDERACTION_FAILED: return "SEND_EXCHANGEORDERACTION_FAILED";
	case CTP_PRICETYPE_NOTSUPPORT_BYEXCHANGE: return "PRICETYPE_NOTSUPPORT_BYEXCHANGE";
	case CTP_BAD_EXECUTE_TYPE: return "BAD_EXECUTE_TYPE";
	case CTP_BAD_OPTION_INSTR: return "BAD_OPTION_INSTR";
	case CTP_INSTR_NOTSUPPORT_FORQUOTE: return "INSTR_NOTSUPPORT_FORQUOTE";
	case CTP_RESEND_QUOTE_BROKERINVESTOR_NOTMATCH: return "RESEND_QUOTE_BROKERINVESTOR_NOTMATCH";
	case CTP_INSTR_NOTSUPPORT_QUOTE: return "INSTR_NOTSUPPORT_QUOTE";
	case CTP_QUOTE_NOT_FOUND: return "QUOTE_NOT_FOUND";
	case CTP_OPTIONS_NOT_SUPPORT_ABANDON: return "OPTIONS_NOT_SUPPORT_ABANDON";
	case CTP_COMBOPTIONS_SUPPORT_IOC_ONLY: return "COMBOPTIONS_SUPPORT_IOC_ONLY";
	case CTP_OPEN_FILE_FAILED: return "OPEN_FILE_FAILED";
	case CTP_NEED_RETRY: return "NEED_RETRY";
	case CTP_EXCHANGE_RTNERROR: return "EXCHANGE_RTNERROR";
	case CTP_QUOTE_DERIVEDORDER_ACTIONERROR: return "QUOTE_DERIVEDORDER_ACTIONERROR";
	case CTP_INSTRUMENTMAP_NOT_FOUND: return "INSTRUMENTMAP_NOT_FOUND";
	case CTP_SPEC_COVERED_ONLY: return "SPEC_COVERED_ONLY";
	case CTP_SPEC_OPEN_ONLY: return "SPEC_OPEN_ONLY";
	case CTP_DUP_INSTRUMENT: return "DUP_INSTRUMENT";
	case CTP_DUP_ORDER: return "DUP_ORDER";
	case CTP_NOT_ENOUGH_LOCKPOSITION: return "NOT_ENOUGH_LOCKPOSITION";
	case CTP_NOT_ENOUGH_STOCKPOSITION: return "NOT_ENOUGH_STOCKPOSITION";
	case CTP_NOT_SUPPORT_LOCK: return "NOT_SUPPORT_LOCK";
	case CTP_NO_TRADING_RIGHT_IN_SEPC_DR: return "NO_TRADING_RIGHT_IN_SEPC_DR";
	case CTP_NO_DR_NO: return "NO_DR_NO";
	case CTP_COVER_ONLY_SELL: return "COVER_ONLY_SELL";
	case CTP_VOLUME_NOTSUPPORT: return "VOLUME_NOTSUPPORT";
	case CTP_PRICE_NOTSUPPORT: return "PRICE_NOTSUPPORT";
	case CTP_POSI_LIMIT: return "POSI_LIMIT";
	case CTP_BROKERPOSI_LIMIT: return "BROKERPOSI_LIMIT";
	case CTP_BAD_STOCKDISPOSAL_ACTION_FIELD: return "BAD_STOCKDISPOSAL_ACTION_FIELD";
	case CTP_DUPLICATE_STOCKDISPOSAL_ACTION_REF: return "DUPLICATE_STOCKDISPOSAL_ACTION_REF";
	case CTP_STOCKDISPOSAL_NOT_FOUND: return "STOCKDISPOSAL_NOT_FOUND";
	case CTP_NO_INSTRUCTION_RIGHT: return "NO_INSTRUCTION_RIGHT";
	case CTP_NO_RIGHT_LEVEL: return "NO_RIGHT_LEVEL";
	case CTP_OUT_OF_TIMEINTERVAL: return "OUT_OF_TIMEINTERVAL";
	case CTP_OUT_OF_PRICEINTERVAL: return "OUT_OF_PRICEINTERVAL";
	case CTP_SEND_INSTITUTION_CODE_ERROR: return "SEND_INSTITUTION_CODE_ERROR";
	case CTP_NO_GET_PLATFORM_SN: return "NO_GET_PLATFORM_SN";
	case CTP_ILLEGAL_TRANSFER_BANK: return "ILLEGAL_TRANSFER_BANK";
	case CTP_ALREADY_OPEN_ACCOUNT: return "ALREADY_OPEN_ACCOUNT";
	case CTP_NOT_OPEN_ACCOUNT: return "NOT_OPEN_ACCOUNT";
	case CTP_PROCESSING: return "PROCESSING";
	case CTP_OVERTIME: return "OVERTIME";
	case CTP_RECORD_NOT_FOUND: return "RECORD_NOT_FOUND";
	case CTP_NO_FOUND_REVERSAL_ORIGINAL_TRANSACTION: return "NO_FOUND_REVERSAL_ORIGINAL_TRANSACTION";
	case CTP_CONNECT_HOST_FAILED: return "CONNECT_HOST_FAILED";
	case CTP_SEND_FAILED: return "SEND_FAILED";
	case CTP_LATE_RESPONSE: return "LATE_RESPONSE";
	case CTP_REVERSAL_BANKID_NOT_MATCH: return "REVERSAL_BANKID_NOT_MATCH";
	case CTP_REVERSAL_BANKACCOUNT_NOT_MATCH: return "REVERSAL_BANKACCOUNT_NOT_MATCH";
	case CTP_REVERSAL_BROKERID_NOT_MATCH: return "REVERSAL_BROKERID_NOT_MATCH";
	case CTP_REVERSAL_ACCOUNTID_NOT_MATCH: return "REVERSAL_ACCOUNTID_NOT_MATCH";
	case CTP_REVERSAL_AMOUNT_NOT_MATCH: return "REVERSAL_AMOUNT_NOT_MATCH";
	case CTP_DB_OPERATION_FAILED: return "DB_OPERATION_FAILED";
	case CTP_SEND_ASP_FAILURE: return "SEND_ASP_FAILURE";
	case CTP_NOT_SIGNIN: return "NOT_SIGNIN";
	case CTP_ALREADY_SIGNIN: return "ALREADY_SIGNIN";
	case CTP_AMOUNT_OR_TIMES_OVER: return "AMOUNT_OR_TIMES_OVER";
	case CTP_NOT_IN_TRANSFER_TIME: return "NOT_IN_TRANSFER_TIME";
	case CTP_BANK_SERVER_ERROR: return "BANK_SERVER_ERROR";
	case CTP_BANK_SERIAL_IS_REPEALED: return "BANK_SERIAL_IS_REPEALED";
	case CTP_BANK_SERIAL_NOT_EXIST: return "BANK_SERIAL_NOT_EXIST";
	case CTP_NOT_ORGAN_MAP: return "NOT_ORGAN_MAP";
	case CTP_EXIST_TRANSFER: return "EXIST_TRANSFER";
	case CTP_BANK_FORBID_REVERSAL: return "BANK_FORBID_REVERSAL";
	case CTP_DUP_BANK_SERIAL: return "DUP_BANK_SERIAL";
	case CTP_FBT_SYSTEM_BUSY: return "FBT_SYSTEM_BUSY";
	case CTP_MACKEY_SYNCING: return "MACKEY_SYNCING";
	case CTP_ACCOUNTID_ALREADY_REGISTER: return "ACCOUNTID_ALREADY_REGISTER";
	case CTP_BANKACCOUNT_ALREADY_REGISTER: return "BANKACCOUNT_ALREADY_REGISTER";
	case CTP_DUP_BANK_SERIAL_REDO_OK: return "DUP_BANK_SERIAL_REDO_OK";
	case CTP_CURRENCYID_NOT_SUPPORTED: return "CURRENCYID_NOT_SUPPORTED";
	case CTP_INVALID_MAC: return "INVALID_MAC";
	case CTP_NOT_SUPPORT_SECAGENT_BY_BANK: return "NOT_SUPPORT_SECAGENT_BY_BANK";
	case CTP_PINKEY_SYNCING: return "PINKEY_SYNCING";
	case CTP_SECAGENT_QUERY_BY_CCB: return "SECAGENT_QUERY_BY_CCB";
	case CTP_ALREADY_SIGNOUT: return "ALREADY_SIGNOUT";
	case CTP_NO_WORKKEY: return "NO_WORKKEY";
	case CTP_NO_VALID_BANKOFFER_AVAILABLE: return "NO_VALID_BANKOFFER_AVAILABLE";
	case CTP_PASSWORD_MISMATCH: return "PASSWORD_MISMATCH";
	case CTP_DUPLATION_BANK_SERIAL: return "DUPLATION_BANK_SERIAL";
	case CTP_DUPLATION_OFFER_SERIAL: return "DUPLATION_OFFER_SERIAL";
	case CTP_SERIAL_NOT_EXSIT: return "SERIAL_NOT_EXSIT";
	case CTP_SERIAL_IS_REPEALED: return "SERIAL_IS_REPEALED";
	case CTP_SERIAL_MISMATCH: return "SERIAL_MISMATCH";
	case CTP_IdentifiedCardNo_MISMATCH: return "IdentifiedCardNo_MISMATCH";
	case CTP_ACCOUNT_NOT_FUND: return "ACCOUNT_NOT_FUND";
	case CTP_ACCOUNT_NOT_ACTIVE: return "ACCOUNT_NOT_ACTIVE";
	case CTP_NOT_ALLOW_REPEAL_BYMANUAL: return "NOT_ALLOW_REPEAL_BYMANUAL";
	case CTP_AMOUNT_OUTOFTHEWAY: return "AMOUNT_OUTOFTHEWAY";
	case CTP_EXCHANGERATE_NOT_FOUND: return "EXCHANGERATE_NOT_FOUND";
	case CTP_WAITING_OFFER_RSP: return "WAITING_OFFER_RSP";
	case CTP_FBE_NO_GET_PLATFORM_SN: return "FBE_NO_GET_PLATFORM_SN";
	case CTP_FBE_ILLEGAL_TRANSFER_BANK: return "FBE_ILLEGAL_TRANSFER_BANK";
	case CTP_FBE_PROCESSING: return "FBE_PROCESSING";
	case CTP_FBE_OVERTIME: return "FBE_OVERTIME";
	case CTP_FBE_RECORD_NOT_FOUND: return "FBE_RECORD_NOT_FOUND";
	case CTP_FBE_CONNECT_HOST_FAILED: return "FBE_CONNECT_HOST_FAILED";
	case CTP_FBE_SEND_FAILED: return "FBE_SEND_FAILED";
	case CTP_FBE_LATE_RESPONSE: return "FBE_LATE_RESPONSE";
	case CTP_FBE_DB_OPERATION_FAILED: return "FBE_DB_OPERATION_FAILED";
	case CTP_FBE_NOT_SIGNIN: return "FBE_NOT_SIGNIN";
	case CTP_FBE_ALREADY_SIGNIN: return "FBE_ALREADY_SIGNIN";
	case CTP_FBE_AMOUNT_OR_TIMES_OVER: return "FBE_AMOUNT_OR_TIMES_OVER";
	case CTP_FBE_NOT_IN_TRANSFER_TIME: return "FBE_NOT_IN_TRANSFER_TIME";
	case CTP_FBE_BANK_SERVER_ERROR: return "FBE_BANK_SERVER_ERROR";
	case CTP_FBE_NOT_ORGAN_MAP: return "FBE_NOT_ORGAN_MAP";
	case CTP_FBE_SYSTEM_BUSY: return "FBE_SYSTEM_BUSY";
	case CTP_FBE_CURRENCYID_NOT_SUPPORTED: return "FBE_CURRENCYID_NOT_SUPPORTED";
	case CTP_FBE_WRONG_BANK_ACCOUNT: return "FBE_WRONG_BANK_ACCOUNT";
	case CTP_FBE_BANK_ACCOUNT_NO_FUNDS: return "FBE_BANK_ACCOUNT_NO_FUNDS";
	case CTP_FBE_DUP_CERT_NO: return "FBE_DUP_CERT_NO";
	default: return "";

 }
 }

const char* ctp_strerror_cn(int code){ 
switch(code){  	case CTP_NONE: return "CTP:正确";
	case CTP_INVALID_DATA_SYNC_STATUS: return "CTP:不在已同步状态";
	case CTP_INCONSISTENT_INFORMATION: return "CTP:会话信息不一致";
	case CTP_INVALID_LOGIN: return "CTP:不合法的登录";
	case CTP_USER_NOT_ACTIVE: return "CTP:用户不活跃";
	case CTP_DUPLICATE_LOGIN: return "CTP:重复的登录";
	case CTP_NOT_LOGIN_YET: return "CTP:还没有登录";
	case CTP_NOT_INITED: return "CTP:还没有初始化";
	case CTP_FRONT_NOT_ACTIVE: return "CTP:前置不活跃";
	case CTP_NO_PRIVILEGE: return "CTP:无此权限";
	case CTP_CHANGE_OTHER_PASSWORD: return "CTP:修改别人的口令";
	case CTP_USER_NOT_FOUND: return "CTP:找不到该用户";
	case CTP_BROKER_NOT_FOUND: return "CTP:找不到该经纪公司";
	case CTP_INVESTOR_NOT_FOUND: return "CTP:找不到投资者";
	case CTP_OLD_PASSWORD_MISMATCH: return "CTP:原口令不匹配";
	case CTP_BAD_FIELD: return "CTP:报单字段有误";
	case CTP_INSTRUMENT_NOT_FOUND: return "CTP:找不到合约";
	case CTP_INSTRUMENT_NOT_TRADING: return "CTP:合约不能交易";
	case CTP_NOT_EXCHANGE_PARTICIPANT: return "CTP:经纪公司不是交易所的会员";
	case CTP_INVESTOR_NOT_ACTIVE: return "CTP:投资者不活跃";
	case CTP_NOT_EXCHANGE_CLIENT: return "CTP:投资者未在交易所开户";
	case CTP_NO_VALID_TRADER_AVAILABLE: return "CTP:该交易席位未连接到交易所";
	case CTP_DUPLICATE_ORDER_REF: return "CTP:报单错误：不允许重复报单";
	case CTP_BAD_ORDER_ACTION_FIELD: return "CTP:错误的报单操作字段";
	case CTP_DUPLICATE_ORDER_ACTION_REF: return "CTP:撤单已报送，不允许重复撤单";
	case CTP_ORDER_NOT_FOUND: return "CTP:撤单找不到相应报单";
	case CTP_INSUITABLE_ORDER_STATUS: return "CTP:报单已全成交或已撤销，不能再撤";
	case CTP_UNSUPPORTED_FUNCTION: return "CTP:不支持的功能";
	case CTP_NO_TRADING_RIGHT: return "CTP:没有报单交易权限";
	case CTP_CLOSE_ONLY: return "CTP:只能平仓";
	case CTP_OVER_CLOSE_POSITION: return "CTP:平仓量超过持仓量";
	case CTP_INSUFFICIENT_MONEY: return "CTP:资金不足";
	case CTP_DUPLICATE_PK: return "CTP:主键重复";
	case CTP_CANNOT_FIND_PK: return "CTP:找不到主键";
	case CTP_CAN_NOT_INACTIVE_BROKER: return "CTP:设置经纪公司不活跃状态失败";
	case CTP_BROKER_SYNCHRONIZING: return "CTP:经纪公司正在同步";
	case CTP_BROKER_SYNCHRONIZED: return "CTP:经纪公司已同步";
	case CTP_SHORT_SELL: return "CTP:现货交易不能卖空";
	case CTP_INVALID_SETTLEMENT_REF: return "CTP:不合法的结算引用";
	case CTP_CFFEX_NETWORK_ERROR: return "CTP:交易所网络连接失败";
	case CTP_CFFEX_OVER_REQUEST: return "CTP:交易所未处理请求超过许可数";
	case CTP_CFFEX_OVER_REQUEST_PER_SECOND: return "CTP:交易所每秒发送请求数超过许可数";
	case CTP_SETTLEMENT_INFO_NOT_CONFIRMED: return "CTP:结算结果未确认";
	case CTP_DEPOSIT_NOT_FOUND: return "CTP:没有对应的入金记录";
	case CTP_EXCHANG_TRADING: return "CTP:交易所已经进入连续交易状态";
	case CTP_PARKEDORDER_NOT_FOUND: return "CTP:找不到预埋（撤单）单";
	case CTP_PARKEDORDER_HASSENDED: return "CTP:预埋（撤单）单已经发送";
	case CTP_PARKEDORDER_HASDELETE: return "CTP:预埋（撤单）单已经删除";
	case CTP_INVALID_INVESTORIDORPASSWORD: return "CTP:无效的投资者或者密码";
	case CTP_INVALID_LOGIN_IPADDRESS: return "CTP:不合法的登录IP地址";
	case CTP_OVER_CLOSETODAY_POSITION: return "CTP:平今仓位不足";
	case CTP_OVER_CLOSEYESTERDAY_POSITION: return "CTP:平昨仓位不足";
	case CTP_BROKER_NOT_ENOUGH_CONDORDER: return "CTP:经纪公司没有足够可用的条件单数量";
	case CTP_INVESTOR_NOT_ENOUGH_CONDORDER: return "CTP:投资者没有足够可用的条件单数量";
	case CTP_BROKER_NOT_SUPPORT_CONDORDER: return "CTP:经纪公司不支持条件单";
	case CTP_RESEND_ORDER_BROKERINVESTOR_NOTMATCH: return "CTP:重发未知单经济公司/投资者不匹配";
	case CTP_SYC_OTP_FAILED: return "CTP:同步动态令牌失败";
	case CTP_OTP_MISMATCH: return "CTP:动态令牌校验错误";
	case CTP_OTPPARAM_NOT_FOUND: return "CTP:找不到动态令牌配置信息";
	case CTP_UNSUPPORTED_OTPTYPE: return "CTP:不支持的动态令牌类型";
	case CTP_SINGLEUSERSESSION_EXCEED_LIMIT: return "CTP:用户在线会话超出上限";
	case CTP_EXCHANGE_UNSUPPORTED_ARBITRAGE: return "CTP:该交易所不支持套利类型报单";
	case CTP_NO_CONDITIONAL_ORDER_RIGHT: return "CTP:没有条件单交易权限";
	case CTP_AUTH_FAILED: return "CTP:客户端认证失败";
	case CTP_NOT_AUTHENT: return "CTP:客户端未认证";
	case CTP_SWAPORDER_UNSUPPORTED: return "CTP:该合约不支持互换类型报单";
	case CTP_OPTIONS_ONLY_SUPPORT_SPEC: return "CTP:该期权合约只支持投机类型报单";
	case CTP_DUPLICATE_EXECORDER_REF: return "CTP:执行宣告错误，不允许重复执行";
	case CTP_RESEND_EXECORDER_BROKERINVESTOR_NOTMATCH: return "CTP:重发未知执行宣告经纪公司/投资者不匹配";
	case CTP_EXECORDER_NOTOPTIONS: return "CTP:只有期权合约可执行";
	case CTP_OPTIONS_NOT_SUPPORT_EXEC: return "CTP:该期权合约不支持执行";
	case CTP_BAD_EXECORDER_ACTION_FIELD: return "CTP:执行宣告字段有误";
	case CTP_DUPLICATE_EXECORDER_ACTION_REF: return "CTP:执行宣告撤单已报送，不允许重复撤单";
	case CTP_EXECORDER_NOT_FOUND: return "CTP:执行宣告撤单找不到相应执行宣告";
	case CTP_OVER_EXECUTE_POSITION: return "CTP:执行仓位不足";
	case CTP_LOGIN_FORBIDDEN: return "CTP:连续登录失败次数超限，登录被禁止";
	case CTP_INVALID_TRANSFER_AGENT: return "CTP:非法银期代理关系";
	case CTP_NO_FOUND_FUNCTION: return "CTP:无此功能";
	case CTP_SEND_EXCHANGEORDER_FAILED: return "CTP:发送报单失败";
	case CTP_SEND_EXCHANGEORDERACTION_FAILED: return "CTP:发送报单操作失败";
	case CTP_PRICETYPE_NOTSUPPORT_BYEXCHANGE: return "CTP:交易所不支持的价格类型";
	case CTP_BAD_EXECUTE_TYPE: return "CTP:错误的执行类型";
	case CTP_BAD_OPTION_INSTR: return "CTP:无效的组合合约";
	case CTP_INSTR_NOTSUPPORT_FORQUOTE: return "CTP:该合约不支持询价";
	case CTP_RESEND_QUOTE_BROKERINVESTOR_NOTMATCH: return "CTP:重发未知报价经纪公司/投资者不匹配";
	case CTP_INSTR_NOTSUPPORT_QUOTE: return "CTP:该合约不支持报价";
	case CTP_QUOTE_NOT_FOUND: return "CTP:报价撤单找不到相应报价";
	case CTP_OPTIONS_NOT_SUPPORT_ABANDON: return "CTP:该期权合约不支持放弃执行";
	case CTP_COMBOPTIONS_SUPPORT_IOC_ONLY: return "CTP:该组合期权合约只支持IOC";
	case CTP_OPEN_FILE_FAILED: return "CTP:打开文件失败";
	case CTP_NEED_RETRY: return "CTP：查询未就绪，请稍后重试";
	case CTP_EXCHANGE_RTNERROR: return "CTP：交易所返回的错误";
	case CTP_QUOTE_DERIVEDORDER_ACTIONERROR: return "CTP:报价衍生单要等待交易所返回才能撤单";
	case CTP_INSTRUMENTMAP_NOT_FOUND: return "CTP:找不到组合合约映射";
	case CTP_SPEC_COVERED_ONLY: return "CTP:个股期权只支持投机或者备兑";
	case CTP_SPEC_OPEN_ONLY: return "CTP:证券只支持投机开仓";
	case CTP_DUP_INSTRUMENT: return "CTP:存在相同的合约编号需指定交易所";
	case CTP_DUP_ORDER: return "CTP:找到多笔报单";
	case CTP_NOT_ENOUGH_LOCKPOSITION: return "CTP:锁定仓位不足";
	case CTP_NOT_ENOUGH_STOCKPOSITION: return "CTP:证券仓位不足";
	case CTP_NOT_SUPPORT_LOCK: return "CTP:该交易所不支持锁定";
	case CTP_NO_TRADING_RIGHT_IN_SEPC_DR: return "CTP:用户在本系统没有报单权限";
	case CTP_NO_DR_NO: return "CTP:系统缺少灾备标示号";
	case CTP_COVER_ONLY_SELL: return "CTP:备兑只支持卖开或买平或认购";
	case CTP_VOLUME_NOTSUPPORT: return "CTP:数量不正确";
	case CTP_PRICE_NOTSUPPORT: return "CTP:价格不正确";
	case CTP_POSI_LIMIT: return "CTP:投资者限仓";
	case CTP_BROKERPOSI_LIMIT: return "CTP:经纪公司限仓";
	case CTP_BAD_STOCKDISPOSAL_ACTION_FIELD: return "CTP:证券处置操作字段有误";
	case CTP_DUPLICATE_STOCKDISPOSAL_ACTION_REF: return "CTP:证券处置撤单已报送，不允许重复撤单";
	case CTP_STOCKDISPOSAL_NOT_FOUND: return "CTP:证券处置撤单找不到相应证券处置";
	case CTP_NO_INSTRUCTION_RIGHT: return "CTP:投资者没有该交易指令权限";
	case CTP_NO_RIGHT_LEVEL: return "CTP:投资者分级权限不足";
	case CTP_OUT_OF_TIMEINTERVAL: return "CTP:当前时间禁止询价";
	case CTP_OUT_OF_PRICEINTERVAL: return "CTP:当前价差禁止询价";
	case CTP_SEND_INSTITUTION_CODE_ERROR: return "CTP:银期转账：发送机构代码错误";
	case CTP_NO_GET_PLATFORM_SN: return "CTP:银期转账：取平台流水号错误";
	case CTP_ILLEGAL_TRANSFER_BANK: return "CTP:银期转账：不合法的转账银行";
	case CTP_ALREADY_OPEN_ACCOUNT: return "CTP:银期转账：已经开户";
	case CTP_NOT_OPEN_ACCOUNT: return "CTP:银期转账：未开户";
	case CTP_PROCESSING: return "CTP:银期转账：处理中";
	case CTP_OVERTIME: return "CTP:银期转账：交易超时";
	case CTP_RECORD_NOT_FOUND: return "CTP:银期转账：找不到记录";
	case CTP_NO_FOUND_REVERSAL_ORIGINAL_TRANSACTION: return "CTP:银期转账：找不到被冲正的原始交易";
	case CTP_CONNECT_HOST_FAILED: return "CTP:银期转账：连接主机失败";
	case CTP_SEND_FAILED: return "CTP:银期转账：发送失败";
	case CTP_LATE_RESPONSE: return "CTP:银期转账：迟到应答";
	case CTP_REVERSAL_BANKID_NOT_MATCH: return "CTP:银期转账：冲正交易银行代码错误";
	case CTP_REVERSAL_BANKACCOUNT_NOT_MATCH: return "CTP:银期转账：冲正交易银行账户错误";
	case CTP_REVERSAL_BROKERID_NOT_MATCH: return "CTP:银期转账：冲正交易经纪公司代码错误";
	case CTP_REVERSAL_ACCOUNTID_NOT_MATCH: return "CTP:银期转账：冲正交易资金账户错误";
	case CTP_REVERSAL_AMOUNT_NOT_MATCH: return "CTP:银期转账：冲正交易交易金额错误";
	case CTP_DB_OPERATION_FAILED: return "CTP:银期转账：数据库操作错误";
	case CTP_SEND_ASP_FAILURE: return "CTP:银期转账：发送到交易系统失败";
	case CTP_NOT_SIGNIN: return "CTP:银期转账：没有签到";
	case CTP_ALREADY_SIGNIN: return "CTP:银期转账：已经签到";
	case CTP_AMOUNT_OR_TIMES_OVER: return "CTP:银期转账：金额或次数超限";
	case CTP_NOT_IN_TRANSFER_TIME: return "CTP:银期转账：这一时间段不能转账";
	case CTP_BANK_SERVER_ERROR: return "银行主机错";
	case CTP_BANK_SERIAL_IS_REPEALED: return "CTP:银期转账：银行已经冲正";
	case CTP_BANK_SERIAL_NOT_EXIST: return "CTP:银期转账：银行流水不存在";
	case CTP_NOT_ORGAN_MAP: return "CTP:银期转账：机构没有签约";
	case CTP_EXIST_TRANSFER: return "CTP:银期转账：存在转账，不能销户";
	case CTP_BANK_FORBID_REVERSAL: return "CTP:银期转账：银行不支持冲正";
	case CTP_DUP_BANK_SERIAL: return "CTP:银期转账：重复的银行流水";
	case CTP_FBT_SYSTEM_BUSY: return "CTP:银期转账：转账系统忙，稍后再试";
	case CTP_MACKEY_SYNCING: return "CTP:银期转账：MAC密钥正在同步";
	case CTP_ACCOUNTID_ALREADY_REGISTER: return "CTP:银期转账：资金账户已经登记";
	case CTP_BANKACCOUNT_ALREADY_REGISTER: return "CTP:银期转账：银行账户已经登记";
	case CTP_DUP_BANK_SERIAL_REDO_OK: return "CTP:银期转账：重复的银行流水,重发成功";
	case CTP_CURRENCYID_NOT_SUPPORTED: return "CTP:银期转账：该币种代码不支持";
	case CTP_INVALID_MAC: return "CTP:银期转账：MAC值验证失败";
	case CTP_NOT_SUPPORT_SECAGENT_BY_BANK: return "CTP:银期转账：不支持银行端发起的二级代理商转账和查询";
	case CTP_PINKEY_SYNCING: return "CTP:银期转账：PIN密钥正在同步";
	case CTP_SECAGENT_QUERY_BY_CCB: return "CTP:银期转账：建行发起的二级代理商查询";
	case CTP_ALREADY_SIGNOUT: return "CTP:银期转账：已经签退";
	case CTP_NO_WORKKEY: return "CTP:银期转账：取密钥错误";
	case CTP_NO_VALID_BANKOFFER_AVAILABLE: return "CTP:该报盘未连接到银行";
	case CTP_PASSWORD_MISMATCH: return "CTP:资金密码错误";
	case CTP_DUPLATION_BANK_SERIAL: return "CTP:银行流水号重复";
	case CTP_DUPLATION_OFFER_SERIAL: return "CTP:报盘流水号重复";
	case CTP_SERIAL_NOT_EXSIT: return "CTP:被冲正流水不存在(冲正交易)";
	case CTP_SERIAL_IS_REPEALED: return "CTP:原流水已冲正(冲正交易)";
	case CTP_SERIAL_MISMATCH: return "CTP:与原流水信息不符(冲正交易)";
	case CTP_IdentifiedCardNo_MISMATCH: return "CTP:证件号码或类型错误";
	case CTP_ACCOUNT_NOT_FUND: return "CTP:资金账户不存在";
	case CTP_ACCOUNT_NOT_ACTIVE: return "CTP:资金账户已经销户";
	case CTP_NOT_ALLOW_REPEAL_BYMANUAL: return "CTP:该交易不能执行手工冲正";
	case CTP_AMOUNT_OUTOFTHEWAY: return "CTP:转帐金额错误";
	case CTP_EXCHANGERATE_NOT_FOUND: return "CTP:找不到汇率";
	case CTP_WAITING_OFFER_RSP: return "CTP:等待银期报盘处理结果";
	case CTP_FBE_NO_GET_PLATFORM_SN: return "CTP:银期换汇：取平台流水号错误";
	case CTP_FBE_ILLEGAL_TRANSFER_BANK: return "CTP:银期换汇：不合法的转账银行";
	case CTP_FBE_PROCESSING: return "CTP:银期换汇：处理中";
	case CTP_FBE_OVERTIME: return "CTP:银期换汇：交易超时";
	case CTP_FBE_RECORD_NOT_FOUND: return "CTP:银期换汇：找不到记录";
	case CTP_FBE_CONNECT_HOST_FAILED: return "CTP:银期换汇：连接主机失败";
	case CTP_FBE_SEND_FAILED: return "CTP:银期换汇：发送失败";
	case CTP_FBE_LATE_RESPONSE: return "CTP:银期换汇：迟到应答";
	case CTP_FBE_DB_OPERATION_FAILED: return "CTP:银期换汇：数据库操作错误";
	case CTP_FBE_NOT_SIGNIN: return "CTP:银期换汇：没有签到";
	case CTP_FBE_ALREADY_SIGNIN: return "CTP:银期换汇：已经签到";
	case CTP_FBE_AMOUNT_OR_TIMES_OVER: return "CTP:银期换汇：金额或次数超限";
	case CTP_FBE_NOT_IN_TRANSFER_TIME: return "CTP:银期换汇：这一时间段不能换汇";
	case CTP_FBE_BANK_SERVER_ERROR: return "CTP:银期换汇：银行主机错";
	case CTP_FBE_NOT_ORGAN_MAP: return "CTP:银期换汇：机构没有签约";
	case CTP_FBE_SYSTEM_BUSY: return "CTP:银期换汇：换汇系统忙，稍后再试";
	case CTP_FBE_CURRENCYID_NOT_SUPPORTED: return "CTP:银期换汇：该币种代码不支持";
	case CTP_FBE_WRONG_BANK_ACCOUNT: return "CTP:银期换汇：银行帐号不正确";
	case CTP_FBE_BANK_ACCOUNT_NO_FUNDS: return "CTP:银期换汇：银行帐户余额不足";
	case CTP_FBE_DUP_CERT_NO: return "CTP:银期换汇：凭证号重复";
	default: return "";

 }
 };