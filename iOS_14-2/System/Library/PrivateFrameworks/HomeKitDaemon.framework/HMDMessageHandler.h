/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDMessageHandlerQueuedMessageDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>

@protocol HMDMessageHandlerDataSource;
@class HMFUnfairLock, NSMutableDictionary, NSUUID, NSArray, NSDictionary, HMFMessageDispatcher, NSNotificationCenter, HMDMessageHandlerMetricsDispatcher, NSString;

@interface HMDMessageHandler : HMFObject <HMDMessageHandlerQueuedMessageDelegate, HMFLogging, HMFMessageReceiver> {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _messageIdentifierToQueuedIncomingMessages;
	NSMutableDictionary* _messageNameToQueuedOutgoingMessage;
	NSMutableDictionary* _deviceIdentifierToQueuedOutgoingMessageNames;
	NSUUID* _messageTargetUUID;
	NSArray* _ownerPrivateRemoteMessages;
	NSArray* _adminPrivateRemoteMessages;
	NSArray* _internalMessages;
	NSArray* _notifications;
	NSDictionary* _notificationsToObject;
	HMFMessageDispatcher* _messageDispatcher;
	NSNotificationCenter* _notificationCenter;
	HMDMessageHandlerMetricsDispatcher* _metricsDispatcher;
	id<HMDMessageHandlerDataSource> _dataSource;

}

@property (readonly) HMDMessageHandlerMetricsDispatcher * metricsDispatcher;                  //@synthesize metricsDispatcher=_metricsDispatcher - In the implementation block
@property (__weak) id<HMDMessageHandlerDataSource> dataSource;                                //@synthesize dataSource=_dataSource - In the implementation block
@property (copy,readonly) NSArray * ownerPrivateRemoteMessages;                               //@synthesize ownerPrivateRemoteMessages=_ownerPrivateRemoteMessages - In the implementation block
@property (copy,readonly) NSArray * adminPrivateRemoteMessages;                               //@synthesize adminPrivateRemoteMessages=_adminPrivateRemoteMessages - In the implementation block
@property (copy,readonly) NSArray * internalMessages;                                         //@synthesize internalMessages=_internalMessages - In the implementation block
@property (copy,readonly) NSArray * notifications;                                            //@synthesize notifications=_notifications - In the implementation block
@property (copy,readonly) NSDictionary * notificationsToObject;                               //@synthesize notificationsToObject=_notificationsToObject - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) BOOL hasQueuedIncomingMessages; 
@property (readonly) BOOL hasQueuedOutgoingMessages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID;                                    //@synthesize messageTargetUUID=_messageTargetUUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(NSUUID *)messageTargetUUID;
-(id)privateDescription;
-(NSNotificationCenter *)notificationCenter;
-(id<HMDMessageHandlerDataSource>)dataSource;
-(id)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(void)setDataSource:(id<HMDMessageHandlerDataSource>)arg1 ;
-(void)registerForNotifications;
-(id)attributeDescriptions;
-(NSArray *)notifications;
-(void)configureWithHome:(id)arg1 ;
-(void)routeMessage:(id)arg1 ;
-(void)didTriggerMessageHandlerQueuedMessage:(id)arg1 ;
-(HMDMessageHandlerMetricsDispatcher *)metricsDispatcher;
-(void)relayMessage:(id)arg1 ;
-(id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 ownerPrivateRemoteMessages:(id)arg4 adminPrivateRemoteMessages:(id)arg5 internalMessages:(id)arg6 notifications:(id)arg7 notificationsToObject:(id)arg8 ;
-(BOOL)hasQueuedIncomingMessages;
-(void)routeQueuedIncomingMessages;
-(BOOL)hasQueuedOutgoingMessages;
-(void)sendQueuedOutgoingMessages;
-(BOOL)hasQueuedOutgoingMessagesForDevice:(id)arg1 ;
-(void)sendQueuedOutgoingMessagesForDevice:(id)arg1 ;
-(id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 ownerPrivateRemoteMessages:(id)arg4 adminPrivateRemoteMessages:(id)arg5 internalMessages:(id)arg6 notifications:(id)arg7 notificationsToObject:(id)arg8 metricsDispatcher:(id)arg9 ;
-(void)registerForMessagesWithHome:(id)arg1 ;
-(NSArray *)ownerPrivateRemoteMessages;
-(NSArray *)adminPrivateRemoteMessages;
-(NSArray *)internalMessages;
-(void)registerForSPIRemoteMessages:(id)arg1 home:(id)arg2 userPrivilege:(unsigned long long)arg3 internalBuildOnly:(BOOL)arg4 ;
-(SEL)selectorForName:(id)arg1 ;
-(NSDictionary *)notificationsToObject;
-(id)queuedIncomingMessages;
-(void)routeMessage:(id)arg1 shouldQueue:(BOOL)arg2 ;
-(void)queueIncomingMessage:(id)arg1 ;
-(BOOL)isReadyForIncomingMessage:(id)arg1 error:(id*)arg2 ;
-(id)dequeueIncomingMessage:(id)arg1 ;
-(BOOL)shouldRelayIncomingMessage:(id)arg1 error:(id*)arg2 ;
-(void)relayMessage:(id)arg1 shouldQueue:(BOOL)arg2 ;
-(void)queueOutgoingMessage:(id)arg1 ;
-(id)deviceForMessage:(id)arg1 ;
-(void)associateDevice:(id)arg1 withOutgoingMessage:(id)arg2 ;
-(BOOL)reachableForMessage:(id)arg1 ;
-(id)dequeueOutgoingMessage:(id)arg1 ;
-(id)queuedOutgoingMessages;
-(void)sendQueuedOutgoingMessages:(id)arg1 ;
-(id)queuedOutgoingMessagesForDevice:(id)arg1 ;
-(id)dequeueQueuedIncomingMessages;
-(id)queuedIncomingMessageWithIdentifier:(id)arg1 ;
-(void)didTriggerQueuedIncomingMessage:(id)arg1 ;
-(void)didTriggerQueuedOutgoingMessage:(id)arg1 ;
-(void)triggerQueuedOutgoingMessagesTimeouts;
-(void)triggerQueuedIncomingMessagesTimeouts;
@end
