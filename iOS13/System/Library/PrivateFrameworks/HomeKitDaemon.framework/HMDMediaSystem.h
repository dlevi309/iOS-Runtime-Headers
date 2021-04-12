/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, HMDApplicationData, HMDAccessorySettingGroup, HMDMediaSession, NSUUID, HMDHome, NSObject, HMFMessageDispatcher, HMFTimer, HMDMediaSystemSymptomHandler, HMDAppleMediaAccessory, NSSet;

@interface HMDMediaSystem : NSObject <NSSecureCoding, HMFDumpState, HMFLogging, HMDBackingStoreObjectProtocol, HMFTimerDelegate, HMDHomeMessageReceiver> {

	NSString* _name;
	NSArray* _components;
	HMDApplicationData* _appData;
	HMDAccessorySettingGroup* _rootSettings;
	HMDMediaSession* _mediaSession;
	NSString* _configuredName;
	NSUUID* _uuid;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMFTimer* _auditSettingsTimer;
	HMFTimer* _fixupSettingsTimer;
	HMDMediaSystemSymptomHandler* _symptomsHandler;

}

@property (nonatomic,retain) NSString * configuredName;                                       //@synthesize configuredName=_configuredName - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) HMDHome * home;                                         //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSArray * components;                                              //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSArray * accessories; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                    //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMDAccessorySettingGroup * rootSettings;                         //@synthesize rootSettings=_rootSettings - In the implementation block
@property (nonatomic,retain) HMDMediaSession * mediaSession;                                  //@synthesize mediaSession=_mediaSession - In the implementation block
@property (nonatomic,retain) HMDApplicationData * appData;                                    //@synthesize appData=_appData - In the implementation block
@property (nonatomic,readonly) HMDAppleMediaAccessory * targetAccessory; 
@property (nonatomic,retain) HMFTimer * auditSettingsTimer;                                   //@synthesize auditSettingsTimer=_auditSettingsTimer - In the implementation block
@property (nonatomic,retain) HMFTimer * fixupSettingsTimer;                                   //@synthesize fixupSettingsTimer=_fixupSettingsTimer - In the implementation block
@property (readonly) HMDMediaSystemSymptomHandler * symptomsHandler;                          //@synthesize symptomsHandler=_symptomsHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(id)sortMediaComponents:(id)arg1 ;
+(void)_configureMediaSystemComponents:(id)arg1 mediaSystem:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id)container;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(NSArray *)components;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(id)serialize;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDHome *)home;
-(HMDAccessorySettingGroup *)rootSettings;
-(void)_registerForNotifications;
-(void)setComponents:(NSArray *)arg1 ;
-(NSArray *)accessories;
-(id)urlString;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMDApplicationData *)appData;
-(void)setAppData:(HMDApplicationData *)arg1 ;
-(id)dumpState;
-(HMDMediaSession *)mediaSession;
-(id)messageDestination;
-(void)setMediaSession:(HMDMediaSession *)arg1 ;
-(HMDMediaSystemSymptomHandler *)symptomsHandler;
-(NSString *)configuredName;
-(void)setConfiguredName:(NSString *)arg1 ;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_updateAppData:(id)arg1 ;
-(void)_registerForMessages;
-(NSSet *)messageReceiverChildren;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(void)handleRemovedAccessory:(id)arg1 ;
-(id)backingStoreObjects;
-(id)assistantObject;
-(void)configureQueue:(id)arg1 messageDispatcher:(id)arg2 ;
-(id)initWithMediaSystemModel:(id)arg1 home:(id)arg2 ;
-(void)auditRootSettingsGroup:(unsigned long long)arg1 ;
-(void)unconfigureMediaSystemComponents;
-(HMDAppleMediaAccessory *)targetAccessory;
-(void)_fixupAccessorySetting;
-(void)fixupAccessorySetting;
-(void)handleHomeCloudZoneReadyNotification:(id)arg1 ;
-(void)handleAddedRootSettingsModel:(id)arg1 message:(id)arg2 ;
-(void)setRootSettings:(HMDAccessorySettingGroup *)arg1 ;
-(void)auditMediaComponents;
-(void)updateMediaSystemSettingsGroup;
-(void)_auditRootSettingsGroup:(unsigned long long)arg1 ;
-(HMFTimer *)auditSettingsTimer;
-(void)setAuditSettingsTimer:(HMFTimer *)arg1 ;
-(id)_mergeSetting:(id)arg1 item:(id)arg2 groupMetadata:(id)arg3 ;
-(void)_setupSettings:(id)arg1 ;
-(void)_updateSettings:(id)arg1 ;
-(void)addModels:(id)arg1 settingsGroup:(id)arg2 ;
-(void)_updateMediaSystemSettingsGroup;
-(HMFTimer *)fixupSettingsTimer;
-(void)setFixupSettingsTimer:(HMFTimer *)arg1 ;
-(void)_auditRootSettingsAfterTimerFire;
-(void)_fixupAccessorySettingAfterTimerFire;
-(void)_handleUpdateMediaSystem:(id)arg1 ;
-(void)_handleAppData:(id)arg1 ;
-(void)_updateMediaSystem:(id)arg1 ;
-(void)unconfigureMediaSystemComponents:(id)arg1 ;
-(void)configureMediaSystemComponents:(id)arg1 ;
-(void)notifyClientsOfUpdatedRootSettings:(id)arg1 ;
-(void)_transactionMediaSystemUpdated:(id)arg1 message:(id)arg2 ;
-(void)_appDataUpdated:(id)arg1 message:(id)arg2 ;
-(void)_notifyClientsOfUpdatedRootSettings:(id)arg1 ;
-(void)_appDataRemoved:(id)arg1 message:(id)arg2 ;
-(void)handleRemovedRootSettingsModel:(id)arg1 message:(id)arg2 ;
@end

