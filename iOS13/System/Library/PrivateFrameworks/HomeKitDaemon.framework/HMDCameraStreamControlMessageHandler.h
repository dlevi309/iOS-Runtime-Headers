/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMDCameraStreamControlManagerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDCameraStreamManagerSession, HMDService, HMDNotificationRegistration, HMDCameraResidentMessageHandler, NSObject, HMDHAPAccessory, NSUUID, HMDCameraSupportedConfigurationCache, HMDCameraStreamSnapshotHandler, HMDCameraSettingsControlManager, HMFNetMonitor, NSString;

@interface HMDCameraStreamControlMessageHandler : HMFObject <HMFTimerDelegate, HMDCameraStreamControlManagerDelegate, HMFLogging> {

	HMDCameraStreamManagerSession* _streamSession;
	HMDService* _streamManagementService;
	HMDNotificationRegistration* _notificationRegistration;
	HMDCameraResidentMessageHandler* _residentMessageHandler;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _accessory;
	/*^block*/id _messageSender;
	NSUUID* _uniqueIdentifier;
	NSUUID* _profileUniqueIdentifier;
	HMDCameraSupportedConfigurationCache* _supportedConfigCache;
	HMDCameraStreamSnapshotHandler* _streamSnapshotHandler;
	HMDCameraSettingsControlManager* _settingsControlManager;
	HMFNetMonitor* _networkMonitor;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                           //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,__weak,readonly) HMDHAPAccessory * accessory;                                               //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) id messageSender;                                                                 //@synthesize messageSender=_messageSender - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                                        //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * profileUniqueIdentifier;                                                 //@synthesize profileUniqueIdentifier=_profileUniqueIdentifier - In the implementation block
@property (nonatomic,retain) HMDCameraStreamManagerSession * streamSession;                                      //@synthesize streamSession=_streamSession - In the implementation block
@property (nonatomic,retain) HMDCameraSupportedConfigurationCache * supportedConfigCache;                        //@synthesize supportedConfigCache=_supportedConfigCache - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSnapshotHandler * streamSnapshotHandler;                           //@synthesize streamSnapshotHandler=_streamSnapshotHandler - In the implementation block
@property (nonatomic,readonly) HMDCameraSettingsControlManager * settingsControlManager;                         //@synthesize settingsControlManager=_settingsControlManager - In the implementation block
@property (nonatomic,retain) HMFNetMonitor * networkMonitor;                                                     //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (nonatomic,copy,readonly) NSString * streamSessionID; 
@property (nonatomic,readonly) HMDService * streamManagementService;                                             //@synthesize streamManagementService=_streamManagementService - In the implementation block
@property (nonatomic,readonly) HMDNotificationRegistration * notificationRegistration;                           //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (nonatomic,readonly) HMDCameraResidentMessageHandler * residentMessageHandler;                         //@synthesize residentMessageHandler=_residentMessageHandler - In the implementation block
@property (getter=isStreamingSessionInProgress,nonatomic,readonly) BOOL streamingSessionInProgress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSUUID *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDHAPAccessory *)accessory;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(HMFNetMonitor *)networkMonitor;
-(void)setNetworkMonitor:(HMFNetMonitor *)arg1 ;
-(NSUUID *)profileUniqueIdentifier;
-(void)registerForMessages;
-(NSString *)streamSessionID;
-(id)messageSender;
-(void)handleCameraSettingsDidChangeNotification:(id)arg1 ;
-(HMDCameraStreamSnapshotHandler *)streamSnapshotHandler;
-(void)setStreamSession:(HMDCameraStreamManagerSession *)arg1 ;
-(HMDCameraStreamManagerSession *)streamSession;
-(HMDCameraResidentMessageHandler *)residentMessageHandler;
-(void)handleAccessoryIsNotReachable:(id)arg1 ;
-(HMDService *)streamManagementService;
-(void)handleForegroundAppsNotification:(id)arg1 ;
-(void)handleActivePhoneCallEstablishedNotification:(id)arg1 ;
-(void)_stopStream:(id)arg1 ;
-(void)_handleStopMessage:(id)arg1 ;
-(BOOL)_isStopMessage:(id)arg1 ;
-(BOOL)_isSetAudioStreamSettingMessage:(id)arg1 ;
-(void)_handleSetAudioState:(id)arg1 ;
-(BOOL)_isSetAudioVolumeMessage:(id)arg1 ;
-(void)_handleSetAudioVolume:(id)arg1 ;
-(BOOL)_isRemoteSetupMessage:(id)arg1 ;
-(void)_handleRemoteSetupMessage:(id)arg1 ;
-(BOOL)_isNegotiateMessage:(id)arg1 ;
-(void)_handleNegotiateMessage:(id)arg1 ;
-(BOOL)_isStartMessage:(id)arg1 ;
-(void)_handleStartMessage:(id)arg1 ;
-(BOOL)_isReconfigureMessage:(id)arg1 ;
-(void)_handleReconfigureMessage:(id)arg1 ;
-(HMDCameraSupportedConfigurationCache *)supportedConfigCache;
-(void)setAudioVolume:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_resetCurrentStreamState:(id)arg1 ;
-(void)_sendStreamStoppedNotification:(id)arg1 ;
-(void)streamControlManagerDidNegotiateStream:(id)arg1 selectedParameters:(id)arg2 ;
-(void)streamControlManagerDidSetupRemoteConnection:(id)arg1 ;
-(void)streamControlManagerDidStartStream:(id)arg1 slotIdentifier:(id)arg2 ;
-(void)streamControlManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4 ;
-(void)streamControlManagerDidReconfigureStream:(id)arg1 ;
-(void)streamControlManagerDidStopStreamForSessionID:(id)arg1 error:(id)arg2 ;
-(void)streamControlManager:(id)arg1 didFail:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg1 streamSnapshotHandler:(id)arg2 messageSender:(/*^block*/id)arg3 accessory:(id)arg4 streamManagementService:(id)arg5 msgDispatcher:(id)arg6 profileUniqueIdentifier:(id)arg7 networkMonitor:(id)arg8 residentMessageHandler:(id)arg9 ;
-(BOOL)isStreamingSessionInProgress;
-(HMDNotificationRegistration *)notificationRegistration;
-(void)setSupportedConfigCache:(HMDCameraSupportedConfigurationCache *)arg1 ;
-(HMDCameraSettingsControlManager *)settingsControlManager;
@end

