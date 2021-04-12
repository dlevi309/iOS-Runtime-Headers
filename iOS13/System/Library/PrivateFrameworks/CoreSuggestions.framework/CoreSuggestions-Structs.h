/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned reason : 1;
} SCD_Struct_SG1;

typedef struct {
	unsigned app : 1;
	unsigned extracted : 1;
	unsigned firstNameAdj : 1;
	unsigned isUpdate : 1;
	unsigned lastNameAdj : 1;
	unsigned middleNameAdj : 1;
} SCD_Struct_SG2;

typedef struct {
	unsigned extracted : 1;
	unsigned type : 1;
} SCD_Struct_SG3;

typedef struct {
	unsigned app : 1;
	unsigned extracted : 1;
	unsigned selfId : 1;
} SCD_Struct_SG4;

typedef struct {
	unsigned app : 1;
	unsigned category : 1;
	unsigned dateAdj : 1;
	unsigned duraAdj : 1;
	unsigned extracted : 1;
	unsigned state : 1;
	unsigned titleAdj : 1;
} SCD_Struct_SG5;

typedef struct {
	unsigned app : 1;
	unsigned category : 1;
	unsigned extracted : 1;
	unsigned state : 1;
} SCD_Struct_SG6;

typedef struct {
	unsigned actionType : 1;
	unsigned confidenceScore : 1;
	unsigned dateAdj : 1;
	unsigned daysFromStartDate : 1;
	unsigned duraAdj : 1;
	unsigned extractionLevel : 1;
	unsigned interface : 1;
	unsigned locationAdj : 1;
	unsigned mailAppUsageLevel : 1;
	unsigned messagesAppUsageLevel : 1;
	unsigned participantCount : 1;
	unsigned significantSender : 1;
	unsigned titleAdj : 1;
	unsigned titleSource : 1;
	unsigned usedBubblesCount : 1;
} SCD_Struct_SG7;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct __CFString* CFStringRef;

typedef struct SGUnixTimestamp_ {
	double secondsFromUnixEpoch;
} SGUnixTimestamp_;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_SG12;

