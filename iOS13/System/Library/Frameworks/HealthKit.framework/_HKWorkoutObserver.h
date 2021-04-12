/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>

@protocol _HKWorkoutObserverDelegate;
@class NSLock, _HKCurrentWorkoutSnapshot, NSMutableArray, HKHealthStore, HKTaskServerProxyProvider, NSUUID, NSString;

@interface _HKWorkoutObserver : NSObject <_HKXPCExportable> {

	NSLock* _lock;
	_HKCurrentWorkoutSnapshot* _latestSnapshot;
	BOOL _receivedInitialSnapshot;
	id<_HKWorkoutObserverDelegate> _delegate;
	NSMutableArray* _pendingHandlers;
	int _notifyToken;
	HKHealthStore* _healthStore;
	HKTaskServerProxyProvider* _proxyProvider;
	NSUUID* _identifier;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;                               //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,readonly) HKTaskServerProxyProvider * proxyProvider;                 //@synthesize proxyProvider=_proxyProvider - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<_HKWorkoutObserverDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
-(void)dealloc;
-(id<_HKWorkoutObserverDelegate>)delegate;
-(void)setDelegate:(id<_HKWorkoutObserverDelegate>)arg1 ;
-(NSUUID *)identifier;
-(id)exportedInterface;
-(HKHealthStore *)healthStore;
-(void)connectionInvalidated;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(HKTaskServerProxyProvider *)proxyProvider;
-(id)initWithHealthStore:(id)arg1 ;
-(void)currentWorkoutSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)_startTaskServerIfNeeded;
-(void)clientRemote_didUpdateWorkoutSnapshot:(id)arg1 ;
-(void)_lock_startTaskServerIfNeeded;
-(void)waitForAutomaticWorkoutRecoveryWithCompletion:(/*^block*/id)arg1 ;
@end

