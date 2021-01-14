/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_anyWorkerIsLoadBalanceSkipping;
-(id)_transformWorkInfoByUUIDToWorkInfoByLocalIdentifier:(id)arg1 ;
-(void)_jumpToGoalJobCountForWorkerType:(short)arg1 ;
-(NSMutableDictionary *)countOfJobsGeneratedByWorkerType;
-(PHAWorkerHealthMonitor *)healthMonitor;
-(void)_increaseGoalLevelIfNeeeded;
-(id)initWithHealthMonitor:(id)arg1 library:(id)arg2 ;
-(void)setGraphIncompatibleWorkersAreInhibited:(BOOL)arg1 ;
-(id)_produceAssetAnalysisOrAdditionalJobWithForWorkerType:(id)arg1 workInfoReaderMode:(id)arg2 scenario:(unsigned long long)arg3 allowLoadBalanceSkip:(BOOL)arg4 additionalStatesToExclude:(id)arg5 askAboutAdditionalJobs:(BOOL)arg6 canUseNetwork:(BOOL)arg7 defaultsDisabledKey:(id)arg8 failureReason:(id*)arg9 ;
-(BOOL)_shouldLoadBalanceSkipForWorkerType:(short)arg1 ;
-(id)_workerTypesEligibleForLoadBalanceSkipping;
-(void)_incrementGeneratedJobCountForWorkerType:(short)arg1 ;
-(BOOL)graphIncompatibleWorkersAreInhibited;
-(void)setGeneratedJobCountGoal:(long long)arg1 ;
-(NSMutableDictionary *)workInfoReadersByMode;
-(long long)generatedJobCountGoal;
-(BOOL)_workerUnavailableForWorkerType:(short)arg1 defaultsDisabledKey:(id)arg2 unavailableReason:(id*)arg3 ;
-(id)generateJobWithCurrentConstraints:(id)arg1 workersByType:(id)arg2 ;
@end

