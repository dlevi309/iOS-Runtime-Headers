/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_HD1;

typedef struct {
	unsigned count : 1;
	unsigned extractionRulesVersion : 1;
	unsigned avgLength : 1;
	unsigned maxLength : 1;
	unsigned property : 1;
	unsigned resourceType : 1;
	unsigned stdLength : 1;
	unsigned subProperty : 1;
	unsigned containsNoLowercaseCharacter : 1;
	unsigned containsSpecialCharacter : 1;
} SCD_Struct_HD2;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	unsigned count : 1;
	unsigned max : 1;
	unsigned median : 1;
	unsigned min : 1;
	unsigned interactionType : 1;
	unsigned resourceType : 1;
} SCD_Struct_HD4;

typedef struct {
	unsigned count : 1;
	unsigned extractionRulesVersion : 1;
	unsigned property : 1;
	unsigned resourceType : 1;
	unsigned subProperty : 1;
	unsigned system : 1;
	unsigned hasCode : 1;
	unsigned hasDisplayString : 1;
} SCD_Struct_HD5;

typedef struct {
	unsigned count : 1;
	unsigned interactionType : 1;
	unsigned resourceType : 1;
	unsigned statusCode : 1;
} SCD_Struct_HD6;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct {
	id field1;
	id field2;
	unsigned char field3;
} SCD_Struct_HD8;

typedef struct HDSQLiteRow* HDSQLiteRowRef;

typedef struct __SecCertificate* SecCertificateRef;

