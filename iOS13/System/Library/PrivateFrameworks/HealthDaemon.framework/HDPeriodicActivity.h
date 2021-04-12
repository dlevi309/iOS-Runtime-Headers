/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue, OS_os_log, HDPeriodicActivityDelegate, OS_xpc_object;
@class HDProfile, NSObject, NSString;

@interface HDPeriodicActivity : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _lastSuccessfulRunDateUserDefaultsKey;
	/*^block*/id _waitingActivityCompletion;
	NSString* _errorCountUserDefaultsKey;
	NSString* _minimumIntervalDefaultsKey;
	BOOL _unitTest_shouldDeferOverride;
	BOOL _hasUpdatedCriteria;
	NSString* _name;
	NSObject*<OS_os_log> _loggingCategory;
	double _interval;
	id<HDPeriodicActivityDelegate> _delegate;
	NSObject*<OS_xpc_object> _currentActivity;

}

@property (retain) NSObject*<OS_xpc_object> currentActivity;                                //@synthesize currentActivity=_currentActivity - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> loggingCategory;                        //@synthesize loggingCategory=_loggingCategory - In the implementation block
@property (nonatomic,readonly) double interval;                                             //@synthesize interval=_interval - In the implementation block
@property (nonatomic,__weak,readonly) id<HDPeriodicActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long errorCount; 
@property (nonatomic,readonly) BOOL shouldDefer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerDisabledPeriodicActivityWithName:(id)arg1 loggingCategory:(id)arg2 ;
+(id)_userDefaultsKeyForName:(id)arg1 key:(id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id<HDPeriodicActivityDelegate>)delegate;
-(NSObject*<OS_xpc_object>)currentActivity;
-(void)setCurrentActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(double)interval;
-(BOOL)shouldDefer;
-(void)reset;
-(long long)errorCount;
-(NSObject*<OS_os_log>)loggingCategory;
-(void)_performActivity:(id)arg1 ;
-(BOOL)_requiresProtectedData;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(id)initWithProfile:(id)arg1 name:(id)arg2 interval:(double)arg3 delegate:(id)arg4 loggingCategory:(id)arg5 ;
-(id)lastSuccessfulRunDate;
-(void)_queue_performActivityWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isWaitingToRun;
-(void)didPerformActivityWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 activityStartDate:(id)arg3 error:(id)arg4 ;
-(id)_dateForDefaultsKey:(id)arg1 ;
-(void)_queue_activityFinishedWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 activityStartDate:(id)arg3 error:(id)arg4 ;
-(long long)_queue_errorCount;
-(void)_queue_setLastSuccessfulRunDate:(id)arg1 ;
-(void)_queue_performActivityIfPossibleWithCompletion:(/*^block*/id)arg1 ;
-(void)_registerActivity;
-(void)_queue_performActivityIfWaiting;
-(void)_handleXPCActivityCallback:(id)arg1 ;
-(void)_queue_updateCriteriaForActivity:(id)arg1 ;
-(void)_queue_incrementErrorCount;
-(double)_queue_currentInterval;
-(id)_queue_criteriaForInterval:(double)arg1 ;
-(void)_queue_unitTest_activityFiredButRunDeclined;
-(void)synthesizeActivityFire;
-(void)unitTest_setShouldDefer:(BOOL)arg1 ;
@end

