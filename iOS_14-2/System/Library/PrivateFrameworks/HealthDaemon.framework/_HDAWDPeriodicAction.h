/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, HDProfile, NSObject, HDAssertion, HDPeriodicActivity, NSDate;

@interface _HDAWDPeriodicAction : NSObject <HDPeriodicActivityDelegate> {

	NSString* _waitingToRunKey;
	NSString* _lastSubmissionAttemptKey;
	NSString* _intervalCounterKey;
	NSString* _lastProcessedDateKey;
	long long _repeatInterval;
	long long _graceInterval;
	BOOL _requiresClassB;
	long long _intervalMultiple;
	long long _maximumAttemptCount;
	double _minimumDelayBetweenAttempts;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	HDAssertion* _preparedDatabaseAccessibilityAssertion;
	/*^block*/id _block;
	HDPeriodicActivity* _periodicActivity;
	long long _waitingToRun;
	NSDate* _lastSubmissionAttemptDate;
	long long _intervalCounter;
	NSDate* _lastProcessedDate;
	NSString* _taskName;

}

@property (nonatomic,readonly) long long waitingToRun;                          //@synthesize waitingToRun=_waitingToRun - In the implementation block
@property (nonatomic,readonly) NSDate * lastSubmissionAttemptDate; 
@property (nonatomic,readonly) NSDate * lastProcessedDate; 
@property (nonatomic,readonly) long long intervalCounter; 
@property (nonatomic,copy,readonly) NSString * taskName;                        //@synthesize taskName=_taskName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)lastProcessedDate;
-(void)start;
-(BOOL)_queue_shouldAttemptToSubmit;
-(id)initWithTaskName:(id)arg1 keyPrefix:(id)arg2 xpcInterval:(long long)arg3 xpcGraceInterval:(long long)arg4 requiresClassB:(BOOL)arg5 intervalMultiple:(long long)arg6 maximumAttemptCount:(long long)arg7 minimumDelayBetweenAttempts:(double)arg8 profile:(id)arg9 block:(/*^block*/id)arg10 ;
-(void)_queue_setLastSubmissionAttemptDate:(id)arg1 ;
-(long long)intervalCounter;
-(void)stop;
-(BOOL)doIfWaitingWithError:(id*)arg1 ;
-(BOOL)_runBlockWithAccessibilityAssertion:(id)arg1 error:(id*)arg2 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSDate *)lastSubmissionAttemptDate;
-(void)_loadState;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(BOOL)doForced;
-(void)setLastProcessedDate:(NSDate *)arg1 ;
-(void)_beginWaitingToRun;
-(void)reset;
-(NSString *)taskName;
-(void)_queue_setLastProcessedDate:(id)arg1 ;
-(long long)waitingToRun;
-(void)_queue_prepareAccessibilityAssertionIfNeeded;
-(void)_queue_setWaitingToRun:(long long)arg1 ;
-(void)_queue_registerActivity;
-(void)doIfWaitingOnMaintenanceQueueWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_setIntervalCounter:(long long)arg1 ;
-(void)dealloc;
@end

