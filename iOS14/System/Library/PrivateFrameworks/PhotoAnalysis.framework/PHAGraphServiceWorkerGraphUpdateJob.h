/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAWorkerJob.h>
#import <libobjc.A.dylib/PHAGraphRegistration.h>

@protocol OS_os_transaction;
@class NSString, NSDate, NSObject, PHAGraphManager, NSConditionLock;

@interface PHAGraphServiceWorkerGraphUpdateJob : PHAWorkerJob <PHAGraphRegistration> {

	BOOL _finished;
	BOOL _isChangeProcessingJob;
	float _completionScore;
	long long _originalExecutionContext;
	/*^block*/id _updateBlock;
	/*^block*/id _completionBlock;
	NSString* _label;
	NSDate* _creationDate;
	NSObject*<OS_os_transaction> _transaction;
	PHAGraphManager* _graphManager;
	id _pgManager;
	NSConditionLock* _completionWaitLock;

}

@property (assign,nonatomic) BOOL finished;                                   //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic) float completionScore;                           //@synthesize completionScore=_completionScore - In the implementation block
@property (copy) NSString * label;                                            //@synthesize label=_label - In the implementation block
@property (retain) NSDate * creationDate;                                     //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSObject*<OS_os_transaction> transaction;                  //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) PHAGraphManager * graphManager;                  //@synthesize graphManager=_graphManager - In the implementation block
@property (retain) id pgManager;                                              //@synthesize pgManager=_pgManager - In the implementation block
@property (assign,nonatomic) long long originalExecutionContext;              //@synthesize originalExecutionContext=_originalExecutionContext - In the implementation block
@property (retain) NSConditionLock * completionWaitLock;                      //@synthesize completionWaitLock=_completionWaitLock - In the implementation block
@property (copy) id updateBlock;                                              //@synthesize updateBlock=_updateBlock - In the implementation block
@property (copy) id completionBlock;                                          //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) BOOL isChangeProcessingJob;                                //@synthesize isChangeProcessingJob=_isChangeProcessingJob - In the implementation block
@property (nonatomic,readonly) BOOL isRebuildJob; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)graphUpdateJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 updateBlock:(/*^block*/id)arg4 ;
-(long long)executionContext;
-(BOOL)wantsLiveGraphUpdates;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(BOOL)finished;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setGraphManager:(PHAGraphManager *)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(void)waitUntilFinished;
-(BOOL)wantsGraphUpdateNotifications;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)description;
-(NSDate *)creationDate;
-(void)setFinished:(BOOL)arg1 ;
-(void)graphUpdateIsConsistent;
-(void)graphUpdateMadeProgress:(double)arg1 ;
-(PHAGraphManager *)graphManager;
-(void)setUpdateBlock:(id)arg1 ;
-(void)setCompletionScore:(float)arg1 ;
-(float)completionScore;
-(void)setLabel:(NSString *)arg1 ;
-(id)updateBlock;
-(void)graphUpdateDidStop;
-(NSString *)label;
-(BOOL)startProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2 ;
-(BOOL)isRebuildJob;
-(BOOL)graphIsReady;
-(void)markAsFinishedWithCompletionScore:(float)arg1 ;
-(void)setIsChangeProcessingJob:(BOOL)arg1 ;
-(id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 library:(id)arg4 ;
-(void)updateCompletionScore:(float)arg1 ;
-(void)onGraphUpdateComplete;
-(void)_restoreGraphUpdateManagerExecutionContext;
-(void)_makeWorkerAvailable;
-(void)_transitionWorkerStateToWorking;
-(void)_resetGraphManager;
-(void)markJobFinishWorkForCancellation;
-(void)prepareProcessingForWorker:(id)arg1 ;
-(void)additionalWorkAfterUpdate;
-(long long)originalExecutionContext;
-(void)setOriginalExecutionContext:(long long)arg1 ;
-(BOOL)isChangeProcessingJob;
-(id)pgManager;
-(void)setPgManager:(id)arg1 ;
-(NSConditionLock *)completionWaitLock;
-(void)setCompletionWaitLock:(NSConditionLock *)arg1 ;
@end

