/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HDDaemon *)daemon;
-(void)logDiagnostics;
-(id)_lock_queryCollectionForBundleIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2 ;
-(void)processWithBundleIdentifier:(id)arg1 didTransitionFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(void)_lock_executeDatabaseAccessBlocks;
-(void)_logQueryActivationWithServer:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)unitTest_delegateQueue;
-(void)startQueryServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDaemon:(id)arg1 ;
-(id)_lock_foregroundBundleIdentifiers;
-(void)scheduleDatabaseAccessForQueryServer:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setUnitTest_delegate:(id<HDQueryManagerUnitTestDelegate>)arg1 ;
-(void)_didExecuteDatabaseAccessBlock:(id)arg1 ;
-(id)diagnosticDescription;
-(void)unitTest_suspendWithCount:(unsigned long long)arg1 ;
-(id)_lock_registerQueryServer:(id)arg1 bundleIdentifier:(id)arg2 ;
-(void)_lock_unregisterQueryServer:(id)arg1 ;
-(id)_lock_dequeueNextDatabaseAccessBlock;
-(BOOL)_lock_canDequeueBlock:(id)arg1 ;
-(void)setUnitTest_delegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_lock_registerQueryServer:(id)arg1 error:(id*)arg2 ;
-(void)_performAsyncWithUnitTestDelegate:(/*^block*/id)arg1 ;
-(void)_lock_handleClientStateChangeWithQueryCollection:(id)arg1 ;
-(id)_monitoringIdentifierForProcess:(id)arg1 ;
-(id<HDQueryManagerUnitTestDelegate>)unitTest_delegate;
-(void)_queryServerDidFinish:(id)arg1 ;
-(void)_lock_startQueryServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_lock_willExecuteDatabaseAccessBlock:(id)arg1 ;
-(void)dealloc;
@end

