/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HMDDataStreamSetupOperationDelegate, OS_dispatch_queue;
@class HMDHAPAccessory, NSObject, NSString, HMDService, NSMutableSet;

@interface HMDDataStreamSetupOperation : NSObject {

	id<HMDDataStreamSetupOperationDelegate> _delegate;
	HMDHAPAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _logIdentifier;
	HMDService* _transferManagementService;
	NSMutableSet* _pendingBulkSendListeners;

}

@property (nonatomic,readonly) HMDHAPAccessory * accessory;                                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * logIdentifier;                                           //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (nonatomic,readonly) HMDService * transferManagementService;                             //@synthesize transferManagementService=_transferManagementService - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pendingBulkSendListeners;                            //@synthesize pendingBulkSendListeners=_pendingBulkSendListeners - In the implementation block
@property (assign,nonatomic,__weak) id<HMDDataStreamSetupOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)tcpSetupOperationWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 ;
+(id)hapSetupOperationWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 maxControllerTransportMTU:(unsigned long long)arg5 setupOperationReadRequired:(BOOL)arg6 ;
-(id<HMDDataStreamSetupOperationDelegate>)delegate;
-(void)startSetup;
-(HMDHAPAccessory *)accessory;
-(NSString *)logIdentifier;
-(void)setDelegate:(id<HMDDataStreamSetupOperationDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 ;
-(void)_clearPendingBulkSendListeners;
-(void)postDidFailWithError:(id)arg1 ;
-(void)processTransportSetupResponse:(id)arg1 ;
-(NSMutableSet *)pendingBulkSendListeners;
-(void)postDidSucceedWithTransport:(id)arg1 sessionEncryption:(id)arg2 ;
-(void)continueStreamSetupWithResponse:(id)arg1 ;
-(void)cancelSetup;
-(void)addBulkSendListener:(id)arg1 fileType:(id)arg2 ;
-(BOOL)removeBulkSendListener:(id)arg1 ;
-(void)movePendingBulkSendListenersToBulkSendProtocol:(id)arg1 ;
-(HMDService *)transferManagementService;
@end

