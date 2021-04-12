/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class PHPhotoLibrary, PHAWorkerHealthMonitor, NSMutableDictionary;

@interface PHAJobGenerator : NSObject {

	BOOL _skippedSomeWorker;
	BOOL _graphIncompatibleWorkersAreInhibited;
	PHPhotoLibrary* _library;
	PHAWorkerHealthMonitor* _healthMonitor;
	NSMutableDictionary* _workInfoReadersByMode;
	long long _generatedJobCountGoal;
	NSMutableDictionary* _countOfJobsGeneratedByWorkerType;

}

@property (nonatomic,readonly) PHPhotoLibrary * library;                                            //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) PHAWorkerHealthMonitor * healthMonitor;                              //@synthesize healthMonitor=_healthMonitor - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * workInfoReadersByMode;                         //@synthesize workInfoReadersByMode=_workInfoReadersByMode - In the implementation block
@property (assign,nonatomic) long long generatedJobCountGoal;                                       //@synthesize generatedJobCountGoal=_generatedJobCountGoal - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * countOfJobsGeneratedByWorkerType;              //@synthesize countOfJobsGeneratedByWorkerType=_countOfJobsGeneratedByWorkerType - In the implementation block
@property (assign) BOOL graphIncompatibleWorkersAreInhibited;                                       //@synthesize graphIncompatibleWorkersAreInhibited=_graphIncompatibleWorkersAreInhibited - In the implementation block
+(long long)maxBatchSize;
-(PHPhotoLibrary *)library;
-(id)_workerTypesEligibleForLoadBalanceSkipping;
-(BOOL)_shouldLoadBalanceSkipForWorkerType:(short)arg1 ;
-(BOOL)_anyWorkerIsLoadBalanceSkipping;
-(void)_increaseGoalLevelIfNeeeded;
-(void)_jumpToGoalJobCountForWorkerType:(short)arg1 ;
-(void)_incrementGeneratedJobCountForWorkerType:(short)arg1 ;
-(id)_transformWorkInfoByUUIDToWorkInfoByLocalIdentifier:(id)arg1 ;
-(BOOL)_workerUnavailableForWorkerType:(short)arg1 defaultsDisabledKey:(id)arg2 unavailableReason:(id*)arg3 ;
-(id)_produceAssetAnalysisOrAdditionalJobWithForWorkerType:(id)arg1 workInfoReaderMode:(id)arg2 scenario:(unsigned long long)arg3 allowLoadBalanceSkip:(BOOL)arg4 additionalStatesToExclude:(id)arg5 askAboutAdditionalJobs:(BOOL)arg6 canUseNetwork:(BOOL)arg7 defaultsDisabledKey:(id)arg8 failureReason:(id*)arg9 ;
-(id)initWithHealthMonitor:(id)arg1 library:(id)arg2 ;
-(id)generateJobWithCurrentConstraints:(id)arg1 workersByType:(id)arg2 ;
-(BOOL)graphIncompatibleWorkersAreInhibited;
-(void)setGraphIncompatibleWorkersAreInhibited:(BOOL)arg1 ;
-(PHAWorkerHealthMonitor *)healthMonitor;
-(NSMutableDictionary *)workInfoReadersByMode;
-(long long)generatedJobCountGoal;
-(void)setGeneratedJobCountGoal:(long long)arg1 ;
-(NSMutableDictionary *)countOfJobsGeneratedByWorkerType;
@end

