/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMFMessageReceiver;
@class HMDHomeAdministratorHandler, NSString, NSUUID;

@interface __HMDHomeAdministratorReceiver : HMFObject <HMFLogging, HMFMessageReceiver> {

	id<HMFMessageReceiver> _receiver;
	HMDHomeAdministratorHandler* _handler;

}

@property (__weak,readonly) id<HMFMessageReceiver> receiver;                                  //@synthesize receiver=_receiver - In the implementation block
@property (__weak,readonly) HMDHomeAdministratorHandler * handler;                            //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(void)dealloc;
-(HMDHomeAdministratorHandler *)handler;
-(id)shortDescription;
-(id<HMFMessageReceiver>)receiver;
-(id)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)__handleMessage:(id)arg1 ;
-(id)initWithReceiver:(id)arg1 handler:(id)arg2 ;
-(void)registerForMessage:(id)arg1 policies:(id)arg2 ;
@end

