/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned timeToTap : 1;
	unsigned engagedItem : 1;
	unsigned generationStatus : 1;
	unsigned inputMethod : 1;
} SCD_Struct_PR1;

typedef struct {
	unsigned ageGroup : 1;
	unsigned generationStatus : 1;
	unsigned inputMethod : 1;
	unsigned modelId : 1;
	unsigned numberOfCustomResponses : 1;
	unsigned numberOfResponsesGenerated : 1;
	unsigned position : 1;
	unsigned replyTextId : 1;
	unsigned responseClassId : 1;
	unsigned hasQuestionMark : 1;
	unsigned isApricotDevice : 1;
	unsigned isCustomResponse : 1;
} SCD_Struct_PR2;

typedef struct {
	unsigned responseTimePerf : 1;
	unsigned generationStatus : 1;
	unsigned isCached : 1;
} SCD_Struct_PR3;

typedef struct {
	unsigned ageGroup : 1;
	unsigned generationStatus : 1;
	unsigned numberOfCustomResponses : 1;
	unsigned numberOfResponsesGenerated : 1;
	unsigned isApricotDevice : 1;
	unsigned isCached : 1;
} SCD_Struct_PR4;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned ageGroup : 1;
	unsigned modelId : 1;
	unsigned position : 1;
	unsigned replyTextId : 1;
	unsigned responseClassId : 1;
	unsigned isApricotDevice : 1;
	unsigned isCustomResponse : 1;
} SCD_Struct_PR6;

