/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned containerEnvironment : 1;
} SCD_Struct_CK1;

typedef struct {
	unsigned field1[8];
} SCD_Struct_CK2;

typedef struct _OpaquePCSShareProtection* OpaquePCSShareProtectionRef;

typedef struct {
	unsigned badgeCount : 1;
	unsigned forDevice : 1;
} SCD_Struct_CK4;

typedef struct __CFError* CFErrorRef;

typedef struct _PCSIdentityData* PCSIdentityDataRef;

typedef struct _PCSPublicIdentityData* PCSPublicIdentityDataRef;

typedef struct _PCSIdentitySetData* PCSIdentitySetDataRef;

typedef struct __CFData* CFDataRef;

typedef struct {
	int field1;
	unsigned char field2[16];
} SCD_Struct_CK10;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;

typedef struct {
	unsigned assetQuotaUsage : 1;
	unsigned metadataQuotaUsage : 1;
	unsigned deviceCount : 1;
	unsigned zoneKeyRollAllowed : 1;
	unsigned zoneishPcsNeedsRolled : 1;
} SCD_Struct_CK12;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct {
	unsigned applicationConfigVersion : 1;
	unsigned deviceFlowControlBudget : 1;
	unsigned deviceFlowControlBudgetCap : 1;
	unsigned deviceProtocolVersion : 1;
	unsigned globalConfigVersion : 1;
	unsigned operationGroupQuantity : 1;
	unsigned applicationContainerEnvironment : 1;
	unsigned deviceFlowControlRegeneration : 1;
	unsigned isolationLevel : 1;
	unsigned targetDatabase : 1;
	unsigned deviceSoftwareIsAppleInternal : 1;
} SCD_Struct_CK14;

typedef struct _mkbbackupref* mkbbackuprefRef;

typedef struct {
	unsigned type : 1;
	unsigned last : 1;
	unsigned synchronousMode : 1;
} SCD_Struct_CK16;

typedef struct {
	unsigned doubleValue : 1;
	unsigned signedValue : 1;
	unsigned type : 1;
	unsigned isEncrypted : 1;
} SCD_Struct_CK17;

typedef struct _mmcs_engine* mmcs_engineRef;

typedef struct {
	long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_CK19;

typedef struct __SecPolicy* SecPolicyRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct __SecKey* SecKeyRef;

typedef struct MMCSItemReaderWriter* MMCSItemReaderWriterRef;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_CK24;

typedef struct {
	unsigned sharingType : 1;
	unsigned atomicSaves : 1;
	unsigned ckql : 1;
	unsigned fetchChanges : 1;
	unsigned hierarchicalSharing : 1;
	unsigned sharing : 1;
	unsigned zoneSharing : 1;
} SCD_Struct_CK25;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct sqlite3_value* sqlite3_valueRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

