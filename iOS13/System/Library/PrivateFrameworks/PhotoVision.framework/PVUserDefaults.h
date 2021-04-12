/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@interface PVUserDefaults : NSObject
+(unsigned)faceAlgorithmUmbrellaVersion;
+(unsigned)sceneAlgorithmUmbrellaVersion;
+(BOOL)personBuilderMergeCandidatesDisabled;
+(BOOL)personBuildingDisabled;
+(BOOL)quarantineTwinsOnAssetEnabled;
+(unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
+(BOOL)faceIDModelAlwaysRebuild;
+(unsigned long long)minimumSuggestionSize;
+(unsigned long long)faceIDModelRebuildPeriod;
+(BOOL)suggestionsLogEnabled;
+(int)_intValueForKey:(id)arg1 defaultValue:(int)arg2 ;
+(float)faceClusteringThreshold;
+(float)faceClusteringJunkThreshold;
+(float)faceClusteringAgeThreshold;
+(float)faceMergeFaceprintDistanceThreshold;
+(float)facePrimarySuggestionsThreshold;
+(unsigned long long)minFaceCountToTriggerClustering;
+(unsigned long long)maxFaceCountForClustering;
+(BOOL)faceClusteringDisabled;
+(BOOL)_boolValueForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(float)_floatValueForKey:(id)arg1 defaultValue:(float)arg2 ;
+(double)_doubleValueForKey:(id)arg1 defaultValue:(double)arg2 ;
+(BOOL)isBlacklistDisabled;
+(unsigned long long)advancedStatusMergeCandidateLimit;
+(unsigned long long)advancedStatusVerifiedPersonLimit;
@end

