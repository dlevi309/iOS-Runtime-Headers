/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMDHomeMediaSystemMessageHandlerDelegate, OS_dispatch_queue;
@class HMDHome, HMFMessageDispatcher, NSObject, NSUUID, NSString;

@interface HMDHomeMediaSystemControllerMessageHandler : NSObject <HMFMessageReceiver> {

	HMDHome* _home;
	id<HMDHomeMediaSystemMessageHandlerDelegate> _delegate;
	HMFMessageDispatcher* _messageDispatcher;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (__weak,readonly) HMDHome * home;                                                     //@synthesize home=_home - In the implementation block
@property (__weak,readonly) id<HMDHomeMediaSystemMessageHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                  //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id<HMDHomeMediaSystemMessageHandlerDelegate>)delegate;
-(void)_registerForMessages;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)messageDestination;
-(NSObject*<OS_dispatch_queue>)queue;
-(HMDHome *)home;
-(void)_handleAddMediaSystem:(id)arg1 ;
-(void)_handleRemoveMediaSystem:(id)arg1 ;
-(id)preProcessMediaSystemMessage:(id)arg1 ;
-(void)_handleAddMediaSystemWithPreProcessedMessage:(id)arg1 ;
-(id)initWithQueue:(id)arg1 home:(id)arg2 messageDispatcher:(id)arg3 delegate:(id)arg4 ;
-(void)handleUpdateMediaSystem:(id)arg1 ;
@end

