/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDProcessStateObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue, HDQueryManagerUnitTestDelegate;
@class NSMutableDictionary, NSMutableArray, HDDaemon, NSObject, NSString;

@interface HDQueryManager : NSObject <HDProcessStateObserver, HDDiagnosticObject> {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _queryServersByUUID;
	NSMutableDictionary* _queryCollectionsByProcessBundleIdentifier;
	NSMutableArray* _pendingDatabaseAccessBlocks;
	NSMutableArray* _executingDatabaseAccessBlocks;
	long long _countOfExecutingThrottledDatabaseAccessBlocks;
	long long _unitTest_suspendCount;
	HDDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _unitTest_delegateQueue;
	id<HDQueryManagerUnitTestDelegate> _unitTest_delegate;

}

@property (retain) NSObject*<OS_dispatch_queue> unitTest_delegateQueue;               //@synthesize unitTest_delegateQueue=_unitTest_delegateQueue - In the implementation block
@property (__weak) id<HDQueryManagerUnitTestDelegate> unitTest_delegate;              //@synthesize unitTest_delegate=_unitTest_delegate - In the implementation block
@property (nonatomic,__weak,readonly) HDDaemon * daemon;                              //@synthesize daemon=_daemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(HDDaemon *)daemon;
-(id)diagnosticDescription;
-(id)initWithDaemon:(id)arg1 ;
-(void)_queryServerDidFinish:(id)arg1 ;
-(void)_lock_startQueryServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_lock_registerQueryServer:(id)arg1 error:(id*)arg2 ;
-(void)_lock_executeDatabaseAccessBlocks;
-(id)_lock_dequeueNextDatabaseAccessBlock;
-(void)_lock_willExecuteDatabaseAccessBlock:(id)arg1 ;
-(void)_didExecuteDatabaseAccessBlock:(id)arg1 ;
-(void)_performAsyncWithUnitTestDelegate:(/*^block*/id)arg1 ;
-(id)_lock_foregroundBundleIdentifiers;
-(BOOL)_lock_canDequeueBlock:(id)arg1 ;
-(id)_lock_registerQueryServer:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_logQueryActivationWithServer:(id)arg1 ;
-(void)_lock_unregisterQueryServer:(id)arg1 ;
-(id)_lock_queryCollectionForBundleIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)_lock_handleClientStateChangeWithQueryCollection:(id)arg1 ;
-(id<HDQueryManagerUnitTestDelegate>)unitTest_delegate;
-(NSObject*<OS_dispatch_queue>)unitTest_delegateQueue;
-(void)processWithBundleIdentifier:(id)arg1 didTransitionFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(void)startQueryServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scheduleDatabaseAccessForQueryServer:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)logDiagnostics;
-(void)unitTest_suspendWithCount:(unsigned long long)arg1 ;
-(void)setUnitTest_delegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setUnitTest_delegate:(id<HDQueryManagerUnitTestDelegate>)arg1 ;
@end
