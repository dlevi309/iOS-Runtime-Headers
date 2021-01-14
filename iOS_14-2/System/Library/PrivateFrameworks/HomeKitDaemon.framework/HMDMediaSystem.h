/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDMediaDestinationsManagerDataSource.h>
#import <libobjc.A.dylib/HMDMediaDestinationsManagerDelegate.h>
#import <libobjc.A.dylib/HMDAccessorySettingsControllerDataSource.h>
#import <libobjc.A.dylib/HMDAccessorySettingsControllerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>

@protocol HMFLocking, OS_dispatch_queue;
@class NSString, NSArray, HMDApplicationData, HMDMediaSession, HMMediaDestination, NSUUID, HMDHome, NSObject, HMFMessageDispatcher, HMDMediaSystemSymptomHandler, HMDAccessorySettingsController, HMDMediaDestinationsManager, NSNotificationCenter, HMDRoom, HMDAppleMediaAccessory, HMDBackingStore, HMFActivity, NSSet;

@interface HMDMediaSystem : HMFObject <HMDMediaDestinationsManagerDataSource, HMDMediaDestinationsManagerDelegate, HMDAccessorySettingsControllerDataSource, HMDAccessorySettingsControllerDelegate, NSSecureCoding, HMFDumpState, HMFLogging, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver> {

	id<HMFLocking> _lock;
	NSString* _name;
	NSArray* _components;
	HMDApplicationData* _appData;
	HMDMediaSession* _mediaSession;
	NSString* _configuredName;
	HMMediaDestination* _audioDestination;
	NSUUID* _uuid;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFMessageDispatcher* _msgDispatcher;
	HMDMediaSystemSymptomHandler* _symptomsHandler;
	HMDAccessorySettingsController* _settingsController;
	HMDMediaDestinationsManager* _audioDestinationsManager;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,retain) NSString * configuredName;                                       //@synthesize configuredName=_configuredName - In the implementation block
@property (retain) HMDMediaDestinationsManager * audioDestinationsManager;                    //@synthesize audioDestinationsManager=_audioDestinationsManager - In the implementation block
@property (retain) NSNotificationCenter * notificationCenter;                                 //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) HMDHome * home;                                         //@synthesize home=_home - In the implementation block
@property (readonly) HMDRoom * room; 
@property (nonatomic,copy) NSArray * components;                                              //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) NSArray * accessories; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                            //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) HMDMediaSession * mediaSession;                                  //@synthesize mediaSession=_mediaSession - In the implementation block
@property (nonatomic,retain) HMDApplicationData * appData;                                    //@synthesize appData=_appData - In the implementation block
@property (nonatomic,readonly) HMDAppleMediaAccessory * targetAccessory; 
@property (readonly) HMDMediaSystemSymptomHandler * symptomsHandler;                          //@synthesize symptomsHandler=_symptomsHandler - In the implementation block
@property (readonly) HMDAccessorySettingsController * settingsController;                     //@synthesize settingsController=_settingsController - In the implementation block
@property (readonly) HMMediaDestination * audioDestination;                                   //@synthesize audioDestination=_audioDestination - In the implementation block
@property (readonly) id<HMDMediaDestinationManager> audioDestinationManager; 
@property (copy,readonly) NSArray * associatedAudioDestinationManagers; 
@property (readonly) HMDBackingStore * backingStore; 
@property (retain) HMFActivity * setupActivity; 
@property (assign) double setupStartTimestamp; 
@property (assign) double homepodSetupLatency; 
@property (assign) double homepodSettingsCreationTimestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(BOOL)hasMessageReceiverChildren;
+(void)_configureMediaSystemComponents:(id)arg1 mediaSystem:(id)arg2 ;
+(id)sortMediaComponents:(id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)urlString;
-(id)serialize;
-(HMDRoom *)room;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(void)_registerForNotifications;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)uuid;
-(void)setComponents:(NSArray *)arg1 ;
-(id)privateDescription;
-(HMMediaDestination *)audioDestination;
-(HMDMediaSystemSymptomHandler *)symptomsHandler;
-(void)setConfiguredName:(NSString *)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(HMDBackingStore *)backingStore;
-(id)dumpState;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)_registerForMessages;
-(void)encodeWithCoder:(id)arg1 ;
-(id)logIdentifier;
-(NSString *)name;
-(NSArray *)components;
-(id)messageDestination;
-(BOOL)isValid;
-(id)audioDestinationIdentifier;
-(NSString *)configuredName;
-(id)attributeDescriptions;
-(HMDAccessorySettingsController *)settingsController;
-(NSArray *)accessories;
-(id)initWithCoder:(id)arg1 ;
-(HMDApplicationData *)appData;
-(void)setName:(NSString *)arg1 ;
-(void)_updateAppData:(id)arg1 ;
-(HMDMediaSession *)mediaSession;
-(void)setMediaSession:(HMDMediaSession *)arg1 ;
-(void)dealloc;
-(HMDHome *)home;
-(NSSet *)messageReceiverChildren;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 ;
-(id)modelForMediaSystem;
-(void)configureWithMessageDispatcher:(id)arg1 ;
-(void)mediaDestinationsManager:(id)arg1 didUpdateDestination:(id)arg2 ;
-(id)associatedDestinationManagersForMediaDestinationsManager:(id)arg1 ;
-(id)targetAccessoryForMediaDestinationManager:(id)arg1 ;
-(id)mediaDestinationsManager:(id)arg1 destinationControllerWithIdentifier:(id)arg2 ;
-(id<HMDMediaDestinationManager>)audioDestinationManager;
-(HMDAppleMediaAccessory *)targetAccessory;
-(void)handleRemovedAccessory:(id)arg1 ;
-(void)setAppData:(HMDApplicationData *)arg1 ;
-(double)homepodSettingsCreationTimestamp;
-(double)homepodSetupLatency;
-(id)backingStoreObjectsForVersion:(long long)arg1 ;
-(void)setHomepodSetupLatency:(double)arg1 ;
-(void)setHomepodSettingsCreationTimestamp:(double)arg1 ;
-(id)assistantObject;
-(HMFActivity *)setupActivity;
-(id)initWithMediaSystemModel:(id)arg1 home:(id)arg2 ;
-(void)unconfigureMediaSystemComponents;
-(void)handleHomeCloudZoneReadyNotification:(id)arg1 ;
-(void)setSetupActivity:(HMFActivity *)arg1 ;
-(void)setSetupStartTimestamp:(double)arg1 ;
-(double)setupStartTimestamp;
-(id)modelsToMakeSettingsForController:(id)arg1 parentUUID:(id)arg2 ;
-(id)modelsToMigrateSettingsForController:(id)arg1 ;
-(void)accessorySettingsController:(id)arg1 saveWithReason:(id)arg2 ;
-(void)accessorySettingsController:(id)arg1 saveWithReason:(id)arg2 model:(id)arg3 ;
-(id)remoteMessageDestinationForAccessorySettingsController:(id)arg1 target:(id)arg2 ;
-(id)supportedMultiUserLanguageCodesForAccessorySettingsController:(id)arg1 ;
-(BOOL)isMultiUserEnabledForAccessorySettingsController:(id)arg1 ;
-(id)assistantAccessControlModelWithRemovedAccessoriesForAccessorySettingsController:(id)arg1 ;
-(id)initWithUUID:(id)arg1 configuredName:(id)arg2 home:(id)arg3 components:(id)arg4 settingsControllerCreator:(/*^block*/id)arg5 ;
-(id)initWithUUID:(id)arg1 configuredName:(id)arg2 home:(id)arg3 components:(id)arg4 ;
-(id)targetAccessoryBySerial;
-(void)configureAudioDestinationsManager;
-(HMDMediaDestinationsManager *)audioDestinationsManager;
-(void)setAudioDestinationsManager:(HMDMediaDestinationsManager *)arg1 ;
-(NSArray *)associatedAudioDestinationManagers;
-(void)auditMediaComponents;
-(void)_handleUpdateMediaSystem:(id)arg1 ;
-(void)_handleAppData:(id)arg1 ;
-(void)handleAccessorySoftwareUpdated:(id)arg1 ;
-(void)unconfigureMediaSystemComponents:(id)arg1 ;
-(void)configureMediaSystemComponents:(id)arg1 ;
-(void)_transactionMediaSystemUpdated:(id)arg1 message:(id)arg2 ;
-(void)_appDataUpdated:(id)arg1 message:(id)arg2 ;
-(void)_appDataRemoved:(id)arg1 message:(id)arg2 ;
-(void)relayMessage:(id)arg1 ;
@end

