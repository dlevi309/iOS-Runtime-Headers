/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

typedef struct _NSZone* NSZoneRef;

typedef struct local_resultset_id_values_mapping {
	unsigned long long start_idx;
	unsigned long long end_idx;
	__CFDictionary mapping;
	unsigned long long numPRSRankingBundleFeatures;
	unsigned long long PRSRankingBundleFeatureOrder;
	/*^block*/id PRSRankingBundleFeaturePickers;
	float score_vector;
	unsigned long long mapSize;
} local_resultset_id_values_mapping;

typedef struct parsec_resultset_id_values_mapping {
	unsigned long long start_idx;
	unsigned long long end_idx;
	unsigned long long numFeatures;
	__CFDictionary mapping;
	/*^block*/id PRSRankingBundleFeaturePickers;
	float score_vector;
	unsigned long long mapSize;
} parsec_resultset_id_values_mapping;

typedef struct json_writer* json_writerRef;

typedef struct _MDPlistContainer* MDPlistContainerRef;

typedef struct {
	unsigned embeddedReference;
	unsigned char type;
} SCD_Struct_SS5;

typedef struct {
	char* containerBytes;
	SCD_Struct_SS5 reference;
} SCD_Struct_SS6;

typedef struct {
	char* field1;
	SCD_Struct_SS5 field2;
} SCD_Struct_SS7;

typedef struct {
	long long field1;
	unsigned long long field2[2];
	T field3;
	T field4;
	void* field5[0];
} SCD_Struct_PR8;

typedef struct PRSL2FeatureScoreSmallCache {
	unsigned short features[32];
	float scores[32];
	unsigned short count;
} PRSL2FeatureScoreSmallCache;

typedef struct __CFSet* CFSetRef;

