/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@protocol OS_dispatch_queue;
@class HMDAppleMediaAccessory, NSUUID, NSObject, HMFMessageDispatcher, AKAnisetteProvisioningController, NSString, NSSet;

@interface HMDRemoteLoginAnisetteDataHandler : HMFObject <HMFLogging, HMDHomeMessageReceiver> {

	HMDAppleMediaAccessory* _accessory;
	NSUUID* _uuid;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	AKAnisetteProvisioningController* _provisioningController;

}

@property (__weak,readonly) HMDAppleMediaAccessory * accessory;                                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                     //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,readonly) AKAnisetteProvisioningController * provisioningController;              //@synthesize provisioningController=_provisioningController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(NSUUID *)uuid;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDAppleMediaAccessory *)accessory;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)registerForMessages;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(AKAnisetteProvisioningController *)provisioningController;
-(void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)_handleProvisionAnisetteDataRequestMessage:(id)arg1 ;
-(void)_handleSyncAnisetteDataRequestMessage:(id)arg1 ;
-(void)_handleEraseAnisetteDataRequestMessage:(id)arg1 ;
-(void)_handleFetchAnisetteDataRequestMessage:(id)arg1 ;
-(void)_handleLegacyAnisetteDataRequestMessage:(id)arg1 ;
-(id)initWithUUID:(id)arg1 accessory:(id)arg2 ;
@end

