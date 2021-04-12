/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class HDPeriodicActivity, HDProfile, NSObject, NSString;

@interface HDDatabasePruningManager : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {

	HDPeriodicActivity* _activity;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timerSource;
	unsigned long long _prunedObjectLimit;
	unsigned long long _prunedObjectTransactionLimit;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timerSource;              //@synthesize timerSource=_timerSource - In the implementation block
@property (assign) unsigned long long prunedObjectLimit;                             //@synthesize prunedObjectLimit=_prunedObjectLimit - In the implementation block
@property (assign) unsigned long long prunedObjectTransactionLimit;                  //@synthesize prunedObjectTransactionLimit=_prunedObjectTransactionLimit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timerSource;
-(id)diagnosticDescription;
-(void)daemonReady:(id)arg1 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)pruneDatabaseWithAccessibilityAssertion:(id)arg1 nowDate:(id)arg2 error:(id*)arg3 ;
-(BOOL)_pruneDatabaseWithNowDate:(id)arg1 error:(id*)arg2 ;
-(void)_setLastAttemptDate:(id)arg1 completed:(BOOL)arg2 ;
-(id)_minimumFrozenAnchorMapForPruningDate:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)prunedObjectLimit;
-(unsigned long long)prunedObjectTransactionLimit;
-(id)_lastAttemptDateWithCompleted:(BOOL*)arg1 ;
-(void)setPrunedObjectLimit:(unsigned long long)arg1 ;
-(void)setPrunedObjectTransactionLimit:(unsigned long long)arg1 ;
@end

