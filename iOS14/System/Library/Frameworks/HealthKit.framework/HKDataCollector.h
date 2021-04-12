/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKDataCollectorClientInterface.h>

@protocol OS_dispatch_queue, OS_dispatch_source, HKDataCollectorDelegate;
@class NSObject, HKDevice, HKHealthStore, NSUUID, HKTaskServerProxyProvider, NSString, HKRetryableOperation, HKDataCollectorCollectionConfiguration, NSMutableArray, NSMutableDictionary, HKQuantityType;

@interface HKDataCollector : NSObject <_HKXPCExportable, HKDataCollectorClientInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	long long _state;
	HKDevice* _device;
	HKHealthStore* _healthStore;
	NSUUID* _identifier;
	HKTaskServerProxyProvider* _proxyProvider;
	NSString* _bundleIdentifier;
	HKRetryableOperation* _retryableOperation;
	long long _totalDatumCount;
	BOOL _delegateRespondsToFlushRequest;
	NSUUID* _registrationUUID;
	HKDataCollectorCollectionConfiguration* _collectionConfiguration;
	double _unitTest_maxDatumAgeOverride;
	double _unitTest_clientFlushRequestTimeoutOverride;
	/*^block*/id _unitTest_registrationCompleteHandler;
	BOOL _shouldFlushAll;
	NSMutableArray* _flushRequests;
	NSMutableArray* _pendingBatches;
	NSMutableDictionary* _unconfirmedBatchesByUUID;
	NSMutableDictionary* _unpersistedBatchesByUUID;
	NSObject*<OS_dispatch_source> _reconsiderationSource;
	BOOL _requiresRegistration;
	BOOL _hasResumed;
	BOOL _invalidated;
	/*^block*/id _resumeCompletion;
	/*^block*/id _finishCompletion;
	HKQuantityType* _quantityType;
	id<HKDataCollectorDelegate> _delegate;

}

@property (copy,readonly) HKQuantityType * quantityType;                               //@synthesize quantityType=_quantityType - In the implementation block
@property (copy,readonly) HKDevice * device;                                           //@synthesize device=_device - In the implementation block
@property (copy,readonly) NSString * bundleIdentifier;                                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HKDataCollectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
-(void)connectionInvalidated;
-(void)clientRemote_collectionConfigurationDidChange:(id)arg1 ;
-(/*^block*/id)_combineCompletion:(/*^block*/id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_queue_updateReconsiderationTimer;
-(id)unitTest_unconfirmedBatches;
-(id)initWithHealthStore:(id)arg1 bundleIdentifier:(id)arg2 quantityType:(id)arg3 ;
-(id<HKDataCollectorDelegate>)delegate;
-(void)clientRemote_finishedPersistenceForBatch:(id)arg1 error:(id)arg2 ;
-(id)exportedInterface;
-(id)unitTest_unpersistedBatches;
-(void)_queue_requestRegistration;
-(void)_queue_considerSendingBatches;
-(HKQuantityType *)quantityType;
-(NSString *)bundleIdentifier;
-(void)clientRemote_receivedBatch:(id)arg1 error:(id)arg2 ;
-(void)connectionInterrupted;
-(void)unitTest_setMaxDatumAgeOverride:(double)arg1 ;
-(id)remoteInterface;
-(void)_queue_pruneOldDatums;
-(id)_prunedBatch:(id)arg1 maximumLength:(long long)arg2 ;
-(HKDevice *)device;
-(void)_queue_sendBatch:(id)arg1 ;
-(id)_timerForClientFlushRequest:(id)arg1 ;
-(void)setDelegate:(id<HKDataCollectorDelegate>)arg1 ;
-(NSString *)description;
-(void)_queue_considerCompletingFlushRequests;
-(void)unitTest_setClientFlushRequestTimeoutOverride:(double)arg1 ;
-(void)clientRemote_beginCollectionWithConfiguration:(id)arg1 lastPersistedDatum:(id)arg2 registrationUUID:(id)arg3 ;
-(void)_queue_taskServer_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(void)insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_datumsInDateOrder:(id)arg1 secondDatum:(id)arg2 ;
-(void)_requestRegistration;
-(void)resumeWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_checkForFinish;
-(void)clientRemote_synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_insertBatchForDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_validateDatums:(id)arg1 error:(out id*)arg2 ;
-(void)_removeBatch:(id)arg1 ;
-(id)unitTest_pendingBatches;
-(void)unitTest_setRegistrationCompleteHandler:(/*^block*/id)arg1 ;
-(void)clientRemote_collectThroughDate:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

