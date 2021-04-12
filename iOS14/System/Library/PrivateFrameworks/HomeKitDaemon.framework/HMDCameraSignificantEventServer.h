/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDCameraSnapshotIDSRelayInitiatorDelegate.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject, HMFMessageDispatcher, NSMutableDictionary, NSMapTable, HMDCharacteristic, HMDNotificationRegistry, HMDCameraSignificantEventServerDataSource, NSString;

@interface HMDCameraSignificantEventServer : HMFObject <HMFMessageReceiver, HMFLogging, HMDCameraSnapshotIDSRelayInitiatorDelegate, HMFTimerDelegate> {

	NSUUID* _messageTargetUUID;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _messageDispatcher;
	NSMutableDictionary* _heroFrameDataByNotificationUUID;
	NSMutableDictionary* _relayInitiatorBySessionUUID;
	NSMapTable* _notificationUUIDByHeroFrameExpiryTimer;
	HMDCharacteristic* _motionCharacteristic;
	HMDNotificationRegistry* _notificationRegistry;
	HMDCameraSignificantEventServerDataSource* _dataSource;
	NSString* _logIdentifier;
	/*^block*/id _heroFrameExpiryTimerFactory;
	/*^block*/id _idsRelayInitiatorFactory;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) NSMutableDictionary * heroFrameDataByNotificationUUID;                   //@synthesize heroFrameDataByNotificationUUID=_heroFrameDataByNotificationUUID - In the implementation block
@property (readonly) NSMutableDictionary * relayInitiatorBySessionUUID;                       //@synthesize relayInitiatorBySessionUUID=_relayInitiatorBySessionUUID - In the implementation block
@property (readonly) NSMapTable * notificationUUIDByHeroFrameExpiryTimer;                     //@synthesize notificationUUIDByHeroFrameExpiryTimer=_notificationUUIDByHeroFrameExpiryTimer - In the implementation block
@property (readonly) HMDCharacteristic * motionCharacteristic;                                //@synthesize motionCharacteristic=_motionCharacteristic - In the implementation block
@property (readonly) HMDNotificationRegistry * notificationRegistry;                          //@synthesize notificationRegistry=_notificationRegistry - In the implementation block
@property (readonly) HMDCameraSignificantEventServerDataSource * dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSString * logIdentifier;                                                //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (copy) id heroFrameExpiryTimerFactory;                                              //@synthesize heroFrameExpiryTimerFactory=_heroFrameExpiryTimerFactory - In the implementation block
@property (copy) id idsRelayInitiatorFactory;                                                 //@synthesize idsRelayInitiatorFactory=_idsRelayInitiatorFactory - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID;                                    //@synthesize messageTargetUUID=_messageTargetUUID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)start;
-(HMDCameraSignificantEventServerDataSource *)dataSource;
-(NSString *)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(HMDNotificationRegistry *)notificationRegistry;
-(id)initWithWorkQueue:(id)arg1 camera:(id)arg2 ;
-(void)relayInitiatorIDSSessionDidStart:(id)arg1 ;
-(void)relayInitiatorDidSendIDSInvitation:(id)arg1 ;
-(void)relayInitiator:(id)arg1 didEndIDSSessionWithError:(id)arg2 ;
-(void)relayInitiatorDidSendDataSuccessfully:(id)arg1 ;
-(void)relayInitiatorDidStartDataSend:(id)arg1 ;
-(void)notifyListenersAboutEvent:(id)arg1 ;
-(id)initWithWorkQueue:(id)arg1 logIdentifier:(id)arg2 messageDispatcher:(id)arg3 messageTargetUUID:(id)arg4 motionCharacteristic:(id)arg5 notificationRegistry:(id)arg6 dataSource:(id)arg7 ;
-(void)handleCameraSignificantEventFetchHeroFrameMessage:(id)arg1 ;
-(HMDCharacteristic *)motionCharacteristic;
-(void)_notifyDevice:(id)arg1 aboutEvent:(id)arg2 ;
-(id)heroFrameExpiryTimerFactory;
-(NSMutableDictionary *)heroFrameDataByNotificationUUID;
-(NSMapTable *)notificationUUIDByHeroFrameExpiryTimer;
-(NSMutableDictionary *)relayInitiatorBySessionUUID;
-(id)idsRelayInitiatorFactory;
-(void)setHeroFrameExpiryTimerFactory:(id)arg1 ;
-(void)setIdsRelayInitiatorFactory:(id)arg1 ;
@end

