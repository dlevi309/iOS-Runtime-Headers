/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HKHealthStore *)healthStore;
-(void)connectionInvalidated;
-(id)initWithHealthStore:(id)arg1 ;
-(id<_HKWorkoutObserverDelegate>)delegate;
-(id)exportedInterface;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)setDelegate:(id<_HKWorkoutObserverDelegate>)arg1 ;
-(NSUUID *)identifier;
-(HKTaskServerProxyProvider *)proxyProvider;
-(void)_startTaskServerIfNeeded;
-(void)clientRemote_didUpdateWorkoutSnapshot:(id)arg1 ;
-(void)_lock_startTaskServerIfNeeded;
-(void)currentWorkoutSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)waitForAutomaticWorkoutRecoveryWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

