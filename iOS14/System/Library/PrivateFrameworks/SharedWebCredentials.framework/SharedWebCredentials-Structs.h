/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
*/

typedef struct {
	unsigned field1[8];
} SCD_Struct_SW0;

typedef struct SWCPatternStorage {
	unsigned blocking : 1;
	unsigned hasPath : 1;
	unsigned hasFragment : 1;
	unsigned query : 2;
	unsigned caseInsensitive : 1;
	unsigned notPercentEncoded : 1;
	unsigned hasRequiredEntitlement : 1;
	0c cStrings;
} SWCPatternStorage;

typedef struct SWCSubstitutionVariable {
	unsigned terminator : 1;
	unsigned includesEmptyValue : 1;
	unsigned allValuesAreOneCharLong : 1;
	0c cStrings;
} SWCSubstitutionVariable;

typedef struct _NSZone* NSZoneRef;

typedef struct SWCFields {
	unsigned userApproval : 2;
	unsigned siteOrFrameworkApproval : 2;
	unsigned updating : 1;
	unsigned systemApplication : 1;
	unsigned enabledConfiguration : 2;
	unsigned provenance : 2;
	unsigned enterpriseManaged : 1;
	unsigned systemPlaceholder : 1;
	unsigned unused : 3;
	char relativeOrder;
} SWCFields;

