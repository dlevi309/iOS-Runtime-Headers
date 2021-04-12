/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@protocol OS_dispatch_queue;
@class HMDHome, NSObject, NSString, NSUUID, HMFMessageDispatcher, HMDNotificationRegistration, NSSet;

@interface HMDHomePresenceBase : HMFObject <HMFLogging, HMDHomeMessageReceiver> {

	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _logString;
	NSUUID* _uuid;
	HMFMessageDispatcher* _msgDispatcher;
	HMDNotificationRegistration* _notificationRegistration;

}

@property (assign,nonatomic,__weak) HMDHome * home;                                                 //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSString * logString;                                                  //@synthesize logString=_logString - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                  //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,readonly) HMDNotificationRegistration * notificationRegistration;              //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(NSString *)logString;
-(id)logIdentifier;
-(void)timerFired:(id)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHome *)home;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 ;
-(void)residentChanged;
-(void)handleHomeDataLoadedNotification:(id)arg1 ;
-(HMDNotificationRegistration *)notificationRegistration;
-(void)_initialize:(id)arg1 ;
-(void)setLogString:(NSString *)arg1 ;
@end

