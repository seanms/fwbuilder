#ifndef INC_PFCfgParserTokenTypes_hpp_
#define INC_PFCfgParserTokenTypes_hpp_

/* $ANTLR 2.7.7 (20100319): "pf.g" -> "PFCfgParserTokenTypes.hpp"$ */

#ifndef CUSTOM_API
# define CUSTOM_API
#endif

#ifdef __cplusplus
struct CUSTOM_API PFCfgParserTokenTypes {
#endif
	enum {
		EOF_ = 1,
		NEWLINE = 4,
		LINE_COMMENT = 5,
		WORD = 6,
		EQUAL = 7,
		ANTISPOOF = 8,
		ALTQ = 9,
		QUEUE = 10,
		SET = 11,
		TIMEOUT = 12,
		// "ruleset-optimization" = 13
		LITERAL_optimization = 14,
		LITERAL_limit = 15,
		LITERAL_loginterface = 16,
		// "block-policy" = 17
		// "state-policy" = 18
		// "state-defaults" = 19
		// "require-order" = 20
		LITERAL_fingerprints = 21,
		LITERAL_skip = 22,
		LITERAL_debug = 23,
		LITERAL_reassemble = 24,
		// "tcp.first" = 25
		// "tcp.opening" = 26
		// "tcp.established" = 27
		// "tcp.closing" = 28
		// "tcp.finwait" = 29
		// "tcp.closed" = 30
		// "udp.first" = 31
		// "udp.single" = 32
		// "udp.multiple" = 33
		// "icmp.first" = 34
		// "icmp.error" = 35
		// "other.first" = 36
		// "other.single" = 37
		// "other.multiple" = 38
		LITERAL_frag = 39,
		LITERAL_interval = 40,
		// "src.track" = 41
		// "adaptive.start" = 42
		// "adaptive.end" = 43
		INT_CONST = 44,
		OPENING_BRACE = 45,
		COMMA = 46,
		CLOSING_BRACE = 47,
		SCRUB = 48,
		TABLE = 49,
		LESS_THAN = 50,
		GREATER_THAN = 51,
		PERSIST = 52,
		CONST = 53,
		COUNTERS = 54,
		FILE = 55,
		STRING = 56,
		EXLAMATION = 57,
		COLON = 58,
		NETWORK = 59,
		BROADCAST = 60,
		PEER = 61,
		SELF = 62,
		IPV4 = 63,
		SLASH = 64,
		NO = 65,
		NAT = 66,
		PASS = 67,
		MINUS = 68,
		STATIC_PORT = 69,
		RDR = 70,
		OPENING_PAREN = 71,
		CLOSING_PAREN = 72,
		PORT = 73,
		IPV6 = 74,
		STAR = 75,
		BITMASK = 76,
		RANDOM = 77,
		SOURCE_HASH = 78,
		HEX_KEY = 79,
		STRING_KEY = 80,
		ROUND_ROBIN = 81,
		STICKY_ADDRESS = 82,
		BINAT = 83,
		BLOCK = 84,
		DROP = 85,
		RETURN = 86,
		RETURN_RST = 87,
		TTL = 88,
		RETURN_ICMP = 89,
		RETURN_ICMP6 = 90,
		IN = 91,
		OUT = 92,
		LOG = 93,
		ALL = 94,
		USER = 95,
		TO = 96,
		QUICK = 97,
		ON = 98,
		INET = 99,
		INET6 = 100,
		PROTO = 101,
		IP = 102,
		ICMP = 103,
		IGMP = 104,
		TCP = 105,
		UDP = 106,
		RDP = 107,
		RSVP = 108,
		GRE = 109,
		ESP = 110,
		AH = 111,
		EIGRP = 112,
		OSPF = 113,
		IPIP = 114,
		VRRP = 115,
		L2TP = 116,
		ISIS = 117,
		FROM = 118,
		URPF_FAILED = 119,
		ANY = 120,
		NO_ROUTE = 121,
		ROUTE_TO = 122,
		REPLY_TO = 123,
		FLAGS = 124,
		ICMP_TYPE = 125,
		ICMP_CODE = 126,
		LITERAL_echorep = 127,
		LITERAL_unreach = 128,
		LITERAL_squench = 129,
		LITERAL_redir = 130,
		LITERAL_althost = 131,
		LITERAL_echoreq = 132,
		LITERAL_routeradv = 133,
		LITERAL_routersol = 134,
		LITERAL_timex = 135,
		LITERAL_paramprob = 136,
		LITERAL_timereq = 137,
		LITERAL_timerep = 138,
		LITERAL_inforeq = 139,
		LITERAL_inforep = 140,
		LITERAL_maskreq = 141,
		LITERAL_maskrep = 142,
		LITERAL_trace = 143,
		LITERAL_dataconv = 144,
		LITERAL_mobredir = 145,
		// "ipv6-where" = 146
		// "ipv6-here" = 147
		LITERAL_mobregreq = 148,
		LITERAL_mobregrep = 149,
		LITERAL_photuris = 150,
		// "net-unr" = 151
		// "host-unr" = 152
		// "proto-unr" = 153
		// "port-unr" = 154
		LITERAL_needfrag = 155,
		LITERAL_srcfail = 156,
		// "net-unk" = 157
		// "host-unk" = 158
		LITERAL_isolate = 159,
		// "net-prohib" = 160
		// "host-prohib" = 161
		// "net-tos" = 162
		// "host-tos" = 163
		// "filter-prohib" = 164
		// "host-preced" = 165
		// "cutoff-preced" = 166
		// "redir-net" = 167
		// "redir-host" = 168
		// "redir-tos-net" = 169
		// "redir-tos-host" = 170
		// "normal-adv" = 171
		// "common-adv" = 172
		LITERAL_transit = 173,
		LITERAL_reassemb = 174,
		LITERAL_badhead = 175,
		LITERAL_optmiss = 176,
		LITERAL_badlen = 177,
		// "unknown-ind" = 178
		// "auth-fail" = 179
		// "decrypt-fail" = 180
		ICMP6_TYPE = 181,
		TAGGED = 182,
		TAG = 183,
		KEEP = 184,
		MODULATE = 185,
		SYNPROXY = 186,
		STATE = 187,
		LABEL = 188,
		EXIT = 189,
		QUIT = 190,
		INTRFACE = 191,
		ICMP6 = 192,
		IGRP = 193,
		IPSEC = 194,
		NOS = 195,
		PCP = 196,
		PIM = 197,
		PPTP = 198,
		RIP = 199,
		SNP = 200,
		HOST = 201,
		RANGE = 202,
		LOG_LEVEL_ALERTS = 203,
		LOG_LEVEL_CRITICAL = 204,
		LOG_LEVEL_DEBUGGING = 205,
		LOG_LEVEL_EMERGENCIES = 206,
		LOG_LEVEL_ERRORS = 207,
		LOG_LEVEL_INFORMATIONAL = 208,
		LOG_LEVEL_NOTIFICATIONS = 209,
		LOG_LEVEL_WARNINGS = 210,
		LOG_LEVEL_DISABLE = 211,
		LOG_LEVEL_INACTIVE = 212,
		Whitespace = 213,
		HEX_CONST = 214,
		NUMBER = 215,
		NEG_INT_CONST = 216,
		HEX_DIGIT = 217,
		DIGIT = 218,
		NUM_3DIGIT = 219,
		NUM_HEX_4DIGIT = 220,
		NUMBER_ADDRESS_OR_WORD = 221,
		PIPE_CHAR = 222,
		NUMBER_SIGN = 223,
		PERCENT = 224,
		AMPERSAND = 225,
		APOSTROPHE = 226,
		PLUS = 227,
		DOT = 228,
		SEMICOLON = 229,
		QUESTION = 230,
		COMMERCIAL_AT = 231,
		OPENING_SQUARE = 232,
		CLOSING_SQUARE = 233,
		CARET = 234,
		UNDERLINE = 235,
		TILDE = 236,
		DOUBLE_QUOTE = 237,
		NULL_TREE_LOOKAHEAD = 3
	};
#ifdef __cplusplus
};
#endif
#endif /*INC_PFCfgParserTokenTypes_hpp_*/
