/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue, PKIDSManagerDataSource;
@class NSMutableArray, NSMutableDictionary, PKProximityAdvertiser, NSHashTable, NSObject, IDSService, NSArray, NSString;

@interface PKIDSManager : NSObject <IDSServiceDelegate> {

	NSMutableArray* _remoteDevices;
	NSMutableArray* _paymentRequests;
	NSMutableDictionary* _completionHandlers;
	NSMutableDictionary* _thumbnailCompletionHandlers;
	PKProximityAdvertiser* _proximityAdvertiser;
	NSHashTable* _delegates;
	os_unfair_lock_s _delegatesLock;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _requestCLTMThrottleUncapToken;
	id<PKIDSManagerDataSource> _dataSource;
	NSMutableArray* _pendingCancellations;
	NSMutableDictionary* _pendingDiscoveries;
	IDSService* _service;
	NSMutableDictionary* _recentlySeenUUIDs;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,retain) NSMutableArray * pendingCancellations;                   //@synthesize pendingCancellations=_pendingCancellations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingDiscoveries;                //@synthesize pendingDiscoveries=_pendingDiscoveries - In the implementation block
@property (nonatomic,retain) IDSService * service;                                    //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recentlySeenUUIDs;                 //@synthesize recentlySeenUUIDs=_recentlySeenUUIDs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * remoteDevices; 
@property (nonatomic,readonly) NSArray * paymentRequests; 
@property (nonatomic,readonly) NSArray * delegates; 
@property (assign,nonatomic) id<PKIDSManagerDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)delegates;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)_registerListeners;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)discoverRemoteDevicesWithProximity:(BOOL)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)_promptDetailsForVirtualCardRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(BOOL)hasRemoteDevices;
-(NSMutableDictionary *)pendingDiscoveries;
-(void)_paymentCancellationReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)deleteArchivedDevices;
-(id)sendSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)_paymentClientUpdateReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)requestForIdentifier:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)initWithTargetQueue:(id)arg1 ;
-(id)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
-(void)_paymentDiscoveryRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id<PKIDSManagerDataSource>)dataSource;
-(void)invalidateMessage:(id)arg1 ;
-(void)_paymentSetupRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(NSArray *)remoteDevices;
-(void)promptDetailsForVirtualCard:(id)arg1 showNotification:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_archiveDevicesToDisk;
-(void)_thumbnailRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_queue_sendDeviceDiscoveryRequestToAllDevicesWithProximity:(BOOL)arg1 ;
-(NSMutableDictionary *)recentlySeenUUIDs;
-(BOOL)_queue_deviceIsRegistered:(id)arg1 ;
-(void)_queue_addThumbnailCompletionHandler:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(void)discoverRemoteDevices;
-(BOOL)_queue_hasRegisteredAccounts;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)_paymentHostUpdateReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_paymentDiscoveryResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)setDataSource:(id<PKIDSManagerDataSource>)arg1 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)setRecentlySeenUUIDs:(NSMutableDictionary *)arg1 ;
-(id)_remoteDevicesWithArchive;
-(void)_postCTLMThrottleUncapNotification;
-(void)_queue_sendDeviceDiscoveryRequestWithProximity:(BOOL)arg1 devices:(id)arg2 ;
-(void)setService:(IDSService *)arg1 ;
-(void)_queue_removeThumbnailCompletionHandlersForKeys:(id)arg1 ;
-(id)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_fetchPaymentInstrumentsForRequestingDevice:(id)arg1 ;
-(id)sendRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)paymentRequests;
-(id)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_paymentResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_unregisterCTLMThrottleUncapNotification;
-(id)_queue_cancelRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_paymentResultReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_createThumbnailCacheDirectory;
-(id)initWithIDSService:(id)arg1 ;
-(void)_registerCTLMThrottleUncapNotification;
-(id)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(id)_queue_requestForIdentifier:(id)arg1 ;
-(BOOL)_queue_hasRemoteDevices;
-(void)setPendingDiscoveries:(NSMutableDictionary *)arg1 ;
-(void)_queue_logCloudPairingState;
-(void)_thumbnailResponseReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)cancelRemotePaymentRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_preparePaymentDeviceResponseForRequestingDevice:(id)arg1 userDisabled:(BOOL)arg2 ;
-(NSMutableArray *)pendingCancellations;
-(void)_populateDevicesIfNeeded;
-(IDSService *)service;
-(id)sendPaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)_paymentRequestReceived:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_queue_sendDiscoveryResponse:(id)arg1 toDeviceWithFromID:(id)arg2 ;
-(void)setPendingCancellations:(NSMutableArray *)arg1 ;
@end

