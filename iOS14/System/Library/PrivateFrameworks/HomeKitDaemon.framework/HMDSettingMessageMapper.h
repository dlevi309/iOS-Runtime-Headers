/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMFMessageDispatcher, NSObject, NSString;

@interface HMDSettingMessageMapper : HMFObject <HMFMessageReceiver> {

	NSUUID* _identifier;
	HMFMessageDispatcher* _messageDispatcher;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NSUUID * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (retain) HMFMessageDispatcher * messageDispatcher;                                  //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 ;
-(HMFMessageDispatcher *)messageDispatcher;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSUUID *)identifier;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(void)registerForMessage:(id)arg1 policies:(id)arg2 messageDispatcher:(id)arg3 messageHandler:(/*^block*/id)arg4 ;
-(void)deregisterFromAllMessages;
@end

