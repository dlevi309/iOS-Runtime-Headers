/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, HMDAccessory, HMDMessageDispatcher;

@interface HMDCameraResidentMessageHandler : HMFObject <HMFLogging> {

	NSString* _logID;
	HMDAccessory* _accessory;
	HMDMessageDispatcher* _remoteMessageDispatcher;

}

@property (nonatomic,readonly) NSString * logID;                                          //@synthesize logID=_logID - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                           //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) HMDMessageDispatcher * remoteMessageDispatcher;              //@synthesize remoteMessageDispatcher=_remoteMessageDispatcher - In the implementation block
@property (nonatomic,readonly) BOOL companionIsResident; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDAccessory *)accessory;
-(id)logIdentifier;
-(NSString *)logID;
-(HMDMessageDispatcher *)remoteMessageDispatcher;
-(id)residentDeviceForCamera;
-(BOOL)companionIsResident;
-(void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 responseQueue:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(void)setRemoteMessageDispatcher:(HMDMessageDispatcher *)arg1 ;
-(void)sendRemoteMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(/*^block*/id)arg7 ;
-(id)initWithAccessory:(id)arg1 logID:(id)arg2 ;
-(void)updateMessageDispatcher:(id)arg1 ;
-(void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(/*^block*/id)arg7 ;
@end

