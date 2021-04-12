/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDSettingsMessageHandler, NSObject, NSString;

@interface HMDSettingMessageMapper : NSObject <HMFMessageReceiver> {

	NSUUID* _identifier;
	HMDSettingsMessageHandler* _messageHandler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (retain) NSUUID * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (__weak) HMDSettingsMessageHandler * messageHandler;                                //@synthesize messageHandler=_messageHandler - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setMessageHandler:(HMDSettingsMessageHandler *)arg1 ;
-(HMDSettingsMessageHandler *)messageHandler;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 messageHandler:(id)arg3 ;
-(void)registerForMessage:(id)arg1 policies:(id)arg2 messageHandler:(/*^block*/id)arg3 ;
@end

