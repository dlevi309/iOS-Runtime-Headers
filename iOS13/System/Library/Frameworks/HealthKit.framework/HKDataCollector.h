/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKDataCollectorClientInterface.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
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
	NSUUID* _registrationUUID;
	HKDataCollectorCollectionConfiguration* _collectionConfiguration;
	double _unitTest_maxDatumAgeOverride;
	/*^block*/id _unitTest_registrationCompleteHandler;
	BOOL _shouldFlushAll;
	NSMutableArray* _flushRequests;
	NSMutableArray* _pendingBatches;
	NSMutableDictionary* _unconfirmedBatchesByUUID;
	NSMutableDictionary* _unpersistedBatchesByUUID;
	NSObject*<OS_dispatch_source> _reconsiderationSource;
	BOOL _requiresRegistration;
	BOOL _invalidated;
	/*^block*/id _finishCompletion;
	HKQuantityType* _quantityType;

}

@property (copy,readonly) HKQuantityType * quantityType;              //@synthesize quantityType=_quantityType - In the implementation block
@property (copy,readonly) HKDevice * device;                          //@synthesize device=_device - In the implementation block
@property (copy,readonly) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serverInterface;
+(id)clientInterface;
-(NSString *)description;
-(NSString *)bundleIdentifier;
-(id)exportedInterface;
-(HKDevice *)device;
-(HKQuantityType *)quantityType;
-(void)connectionInvalidated;
-(void)connectionInterrupted;
-(id)remoteInterface;
-(void)clientRemote_synchronizeWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestRegistration;
-(BOOL)_validateDatums:(id)arg1 error:(out id*)arg2 ;
-(void)_queue_insertBatchForDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_queue_considerSendingBatches;
-(/*^block*/id)_combineCompletion:(/*^block*/id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_queue_requestRegistration;
-(void)_queue_sendBatch:(id)arg1 ;
-(void)_queue_considerCompletingFlushRequests;
-(void)_queue_updateReconsiderationTimer;
-(void)_queue_taskServer_insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 batchUUID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)clientRemote_beginCollectionWithConfiguration:(id)arg1 lastPersistedDatum:(id)arg2 registrationUUID:(id)arg3 ;
-(void)clientRemote_collectionConfigurationDidChange:(id)arg1 ;
-(void)clientRemote_finishedPersistenceForBatch:(id)arg1 error:(id)arg2 ;
-(void)clientRemote_receivedBatch:(id)arg1 error:(id)arg2 ;
-(void)clientRemote_collectThroughDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_datumsInDateOrder:(id)arg1 secondDatum:(id)arg2 ;
-(id)initWithHealthStore:(id)arg1 bundleIdentifier:(id)arg2 quantityType:(id)arg3 ;
-(void)insertDatums:(id)arg1 device:(id)arg2 metadata:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)finishWithCompletion:(/*^block*/id)arg1 ;
-(void)unitTest_setMaxDatumAgeOverride:(double)arg1 ;
-(void)unitTest_setRegistrationCompleteHandler:(/*^block*/id)arg1 ;
-(id)unitTest_pendingBatches;
-(id)unitTest_unconfirmedBatches;
-(id)unitTest_unpersistedBatches;
@end

