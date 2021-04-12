/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <DataAccessExpress/DADisableableObject.h>
#import <libobjc.A.dylib/UMUserSwitchStakeholder.h>
#import <DADaemonSupport/DATransactionMonitorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSTimer, NSObject, NSArray, NSString;

@interface DADMain : DADisableableObject <UMUserSwitchStakeholder, DATransactionMonitorDelegate> {

	NSTimer* _delayedShutdownTimer;
	NSTimer* _forceShutdownTimer;
	BOOL* _runLoopStoppedRef;
	NSObject*<OS_dispatch_queue> _aggdStatsQueue;
	NSObject*<OS_dispatch_source> _aggdStatsSource;
	NSArray* _userSwitchTasks;

}

@property (nonatomic,retain) NSArray * userSwitchTasks;              //@synthesize userSwitchTasks=_userSwitchTasks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMain;
-(void)disable;
-(void)addSignalHandler;
-(id)init;
-(void)willSwitchUser;
-(void)didFinishAllXPCTransactions;
-(void)dealloc;
-(void)addToOperationsQueueDisabledCheckAndGoBlock:(/*^block*/id)arg1 wrappedBlock:(/*^block*/id)arg2 ;
-(void)shutdownDAD;
-(NSArray *)userSwitchTasks;
-(void)_setRunLoopStopped:(BOOL)arg1 ;
-(void)_shutdownDaemon;
-(void)_forceShutdownTimerFired:(id)arg1 ;
-(void)setUserSwitchTasks:(NSArray *)arg1 ;
-(void)_forceShutdownDaemonOnLogoutInTimeInterval:(int)arg1 ;
-(void)addLanguageChangeHandler;
-(void)waitForSystemAvailabilityWithCompletionBlock:(/*^block*/id)arg1 completionQueue:(id)arg2 ;
-(void)_configureAggdLogging;
@end

