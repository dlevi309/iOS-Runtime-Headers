/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAAssetProcessingJob.h>

@class NSDictionary, NSMutableDictionary;

@interface PHAAnalysisWorkerJob : PHAAssetProcessingJob {

	BOOL _persistsAnalysisState;
	BOOL _canUseNetwork;
	BOOL _shouldBackoffForFailedNoResourceErrors;
	NSDictionary* _workerFlagsByAssetLocalIdentifier;
	NSMutableDictionary* _ignoreUntilDatesByAssetLocalIdentifier;

}

@property (nonatomic,readonly) BOOL canUseNetwork;                                                        //@synthesize canUseNetwork=_canUseNetwork - In the implementation block
@property (nonatomic,readonly) BOOL shouldBackoffForFailedNoResourceErrors;                               //@synthesize shouldBackoffForFailedNoResourceErrors=_shouldBackoffForFailedNoResourceErrors - In the implementation block
@property (nonatomic,readonly) NSDictionary * workerFlagsByAssetLocalIdentifier;                          //@synthesize workerFlagsByAssetLocalIdentifier=_workerFlagsByAssetLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * ignoreUntilDatesByAssetLocalIdentifier;              //@synthesize ignoreUntilDatesByAssetLocalIdentifier=_ignoreUntilDatesByAssetLocalIdentifier - In the implementation block
@property (assign,nonatomic) BOOL persistsAnalysisState;                                                  //@synthesize persistsAnalysisState=_persistsAnalysisState - In the implementation block
-(id)description;
-(void)finish;
-(void)prepare;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(id)statusAsDictionary;
-(BOOL)canUseNetwork;
-(id)_fetchAllAssetsForLocalIdentifiers:(id)arg1 ;
-(void)_markAssetsPending;
-(void)_processFailures;
-(id)_resultsDescription;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 workInfos:(id)arg3 canUseNetwork:(BOOL)arg4 shouldBackoffForFailedNoResource:(BOOL)arg5 library:(id)arg6 ;
-(id)dataLoaderOptions;
-(int)workerFlagsForAssetLocalIdentifier:(id)arg1 ;
-(void)setIgnoreUntilDate:(id)arg1 forAssetLocalIdentifier:(id)arg2 ;
-(id)ignoreUntilDateForAssetLocalIdentifier:(id)arg1 ;
-(BOOL)persistsAnalysisState;
-(void)setPersistsAnalysisState:(BOOL)arg1 ;
-(BOOL)shouldBackoffForFailedNoResourceErrors;
-(NSDictionary *)workerFlagsByAssetLocalIdentifier;
-(NSMutableDictionary *)ignoreUntilDatesByAssetLocalIdentifier;
@end

