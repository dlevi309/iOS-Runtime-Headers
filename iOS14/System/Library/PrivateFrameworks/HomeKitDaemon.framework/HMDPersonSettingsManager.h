/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDHome, HMBLocalZone, HMFMessageDispatcher, NSUUID, NSObject, NSString;

@interface HMDPersonSettingsManager : HMFObject <HMFMessageReceiver, HMFLogging> {

	HMDHome* _home;
	HMBLocalZone* _localZone;
	HMFMessageDispatcher* _messageDispatcher;
	NSUUID* _UUID;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (__weak,readonly) HMDHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (readonly) HMBLocalZone * localZone;                                                //@synthesize localZone=_localZone - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (copy,readonly) NSUUID * UUID;                                                      //@synthesize UUID=_UUID - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)remove;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)configure;
-(NSUUID *)UUID;
-(void)_registerForMessages;
-(id)logIdentifier;
-(HMFMessageDispatcher *)messageDispatcher;
-(HMBLocalZone *)localZone;
-(HMDHome *)home;
-(BOOL)areClassificationNotificationsEnabledForPersonUUID:(id)arg1 ;
-(id)_setClassificationNotificationsEnabled:(id)arg1 forPersonUUID:(id)arg2 ;
-(void)_handleFetchClassificationNotificationsEnabledForPersonMessage:(id)arg1 ;
-(void)_handleSetClassificationNotificationsEnabledForPersonMessage:(id)arg1 ;
-(id)initWithHome:(id)arg1 localZone:(id)arg2 workQueue:(id)arg3 ;
@end

