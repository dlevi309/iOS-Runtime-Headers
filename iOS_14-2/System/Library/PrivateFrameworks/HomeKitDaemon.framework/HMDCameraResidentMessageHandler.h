/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDAccessory, HMDMessageDispatcher, NSString, NSMutableArray, HMFUnfairLock, HMDDevice;

@interface HMDCameraResidentMessageHandler : HMFObject <HMFLogging> {

	HMDAccessory* _accessory;
	HMDMessageDispatcher* _messageDispatcher;
	NSString* _logIdentifier;
	NSMutableArray* _queuedMessages;
	HMFUnfairLock* _lock;

}

@property (readonly) HMDMessageDispatcher * messageDispatcher;              //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (copy,readonly) NSString * logIdentifier;                         //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) NSMutableArray * queuedMessages;                       //@synthesize queuedMessages=_queuedMessages - In the implementation block
@property (readonly) HMFUnfairLock * lock;                                  //@synthesize lock=_lock - In the implementation block
@property (__weak,readonly) HMDAccessory * accessory;                       //@synthesize accessory=_accessory - In the implementation block
@property (readonly) BOOL companionIsResident; 
@property (readonly) HMDDevice * residentDeviceForCamera; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)enqueueMessage:(id)arg1 ;
-(HMDAccessory *)accessory;
-(HMFUnfairLock *)lock;
-(NSString *)logIdentifier;
-(HMDMessageDispatcher *)messageDispatcher;
-(id)nextMessage;
-(NSMutableArray *)queuedMessages;
-(id)initWithAccessory:(id)arg1 ;
-(HMDDevice *)residentDeviceForCamera;
-(BOOL)companionIsResident;
-(void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 responseQueue:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(id)dequeueMessage;
-(void)sendNextMessage;
-(void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(/*^block*/id)arg7 ;
@end

