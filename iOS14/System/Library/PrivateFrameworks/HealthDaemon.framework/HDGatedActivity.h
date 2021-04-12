/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_xpc_object, OS_os_log;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSObject, NSMutableArray, NSString;

@interface HDGatedActivity : NSObject {

	os_unfair_lock_s _lock;
	/*^block*/id _handler;
	NSObject*<OS_xpc_object> _criteria;
	double _nextScheduledFireDeadline;
	BOOL _inProgress;
	NSMutableArray* _pendingCompletions;
	BOOL _waitingForTrigger;
	NSString* _name;
	NSObject*<OS_os_log> _loggingCategory;
	NSObject*<OS_xpc_object> _currentActivity;

}

@property (retain) NSObject*<OS_xpc_object> currentActivity;                      //@synthesize currentActivity=_currentActivity - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> loggingCategory;              //@synthesize loggingCategory=_loggingCategory - In the implementation block
@property (readonly) BOOL shouldDefer; 
@property (assign) BOOL waitingForTrigger;                                        //@synthesize waitingForTrigger=_waitingForTrigger - In the implementation block
-(BOOL)shouldDefer;
-(void)_handleXPCActivityCallback:(id)arg1 ;
-(NSObject*<OS_os_log>)loggingCategory;
-(void)setCurrentActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(NSString *)name;
-(id)description;
-(NSObject*<OS_xpc_object>)currentActivity;
-(void)_registerActivityWithCriteria:(id)arg1 ;
-(void)_performActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_activityFinishedWithResult:(long long)arg1 error:(id)arg2 ;
-(id)initWithName:(id)arg1 criteria:(id)arg2 loggingCategory:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)requestRunWithMaximumDelay:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)runUngatedWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)waitingForTrigger;
-(void)setWaitingForTrigger:(BOOL)arg1 ;
@end

