/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDDevice, HMDAppleMediaAccessory, NSObject, HMDMessageDispatcher, NSString;

@interface HMDRemoteLoginMessageSender : HMFObject <HMFLogging> {

	NSUUID* _target;
	HMDDevice* _device;
	HMDAppleMediaAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDMessageDispatcher* _remoteMessageDispatcher;

}

@property (nonatomic,readonly) NSUUID * target;                                             //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) HMDDevice * device;                                          //@synthesize device=_device - In the implementation block
@property (nonatomic,__weak,readonly) HMDAppleMediaAccessory * accessory;                   //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMDMessageDispatcher * remoteMessageDispatcher;              //@synthesize remoteMessageDispatcher=_remoteMessageDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)target;
-(HMDDevice *)device;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDAppleMediaAccessory *)accessory;
-(id)logIdentifier;
-(void)sendRemoteMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(HMDMessageDispatcher *)remoteMessageDispatcher;
-(id)initWithTarget:(id)arg1 accessory:(id)arg2 device:(id)arg3 workQueue:(id)arg4 remoteMessageDispatcher:(id)arg5 ;
@end

