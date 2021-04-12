/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

typedef struct _NSZone* NSZoneRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	unsigned read : 1;
	unsigned deleted : 1;
	unsigned replied : 1;
	unsigned flagged : 1;
	unsigned draft : 1;
	unsigned forwarded : 1;
	unsigned redirected : 1;
	unsigned junkLevelSetByUser : 1;
	unsigned junkLevel : 2;
	unsigned flagColor : 3;
} SCD_Struct_EC2;

typedef union ECMessageFlagsHashedBitField {
	unsigned long long hashValue;
	SCD_Struct_EC2 bitField;
} ECMessageFlagsHashedBitField;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct sasl_conn* sasl_connRef;

typedef struct __SecTrust* SecTrustRef;

