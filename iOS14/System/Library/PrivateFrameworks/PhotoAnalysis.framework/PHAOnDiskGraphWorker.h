/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAWorker.h>

@interface PHAOnDiskGraphWorker : PHAWorker
+(BOOL)persistsState;
+(long long)applicationDataFolderIdentifier;
+(short)workerType;
-(void)cooldown;
-(void)warmupWithProgressBlock:(/*^block*/id)arg1 ;
-(BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(void)requestOnDiskRelationshipInferencesForPersonLocalIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestOnDiskSuggestedPersonsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestOnDiskContactInferencesForPersonLocalIdentifiers:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)graphCurrentlyUnavailableError;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)requestOnDiskSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)reset;
-(void)requestOnDiskSuggestedRecipientsForAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 options:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2 ;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
@end

