/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDHealthDaemonActivatedObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_os_log, HDPeriodicActivityDelegate, OS_xpc_object;
@class HDProfile, NSString, NSObject;

@interface HDPeriodicActivity : NSObject <HDHealthDaemonActivatedObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject> {

	HDProfile* _profile;
	os_unfair_lock_s _lock;
	NSString* _lastSuccessfulRunDateUserDefaultsKey;
	/*^block*/id _waitingActivityCompletion;
	NSString* _errorCountUserDefaultsKey;
	NSString* _minimumIntervalDefaultsKey;
	BOOL _unitTest_shouldDeferOverride;
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
+(id)_userDefaultsKeyForName:(id)arg1 key:(id)arg2 ;
+(void)registerDisabledPeriodicActivityWithName:(id)arg1 loggingCategory:(id)arg2 ;
-(BOOL)shouldDefer;
-(void)_performActivityIfPossibleWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleXPCActivityCallback:(id)arg1 ;
-(double)interval;
-(id<HDPeriodicActivityDelegate>)delegate;
-(id)_criteriaForInterval:(double)arg1 ;
-(void)_performActivity:(id)arg1 ;
-(NSObject*<OS_os_log>)loggingCategory;
-(void)unitTest_setShouldDefer:(BOOL)arg1 ;
-(void)daemonActivated:(id)arg1 ;
-(double)_currentInterval;
-(void)_performActivityIfWaiting;
-(void)updateCriteria;
-(void)setCurrentActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)name;
-(id)initWithProfile:(id)arg1 name:(id)arg2 interval:(double)arg3 delegate:(id)arg4 loggingCategory:(id)arg5 ;
-(NSString *)description;
-(id)diagnosticDescription;
-(BOOL)_requiresProtectedData;
-(void)resetInterval;
-(double)_lock_currentInterval;
-(void)_performActivityWithCompletion:(/*^block*/id)arg1 ;
-(void)reset;
-(void)didPerformActivityWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 activityStartDate:(id)arg3 error:(id)arg4 ;
-(NSObject*<OS_xpc_object>)currentActivity;
-(id)_dateForDefaultsKey:(id)arg1 ;
-(void)_lock_activityFinishedWithResult:(long long)arg1 minimumRetryInterval:(double)arg2 activityStartDate:(id)arg3 error:(id)arg4 ;
-(long long)errorCount;
-(void)_finishActivity:(id)arg1 result:(long long)arg2 ;
-(void)_lock_incrementErrorCount;
-(BOOL)isWaitingToRun;
-(long long)_lock_errorCount;
-(id)lastSuccessfulRunDate;
-(id)currentCriteria;
-(void)_registerActivityWithCriteria:(id)arg1 ;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_lock_setLastSuccessfulRunDate:(id)arg1 ;
-(void)_unitTest_activityFiredButRunDeclined;
-(void)_updateCriteriaForActivity:(id)arg1 ;
-(void)synthesizeActivityFire;
-(void)dealloc;
@end

