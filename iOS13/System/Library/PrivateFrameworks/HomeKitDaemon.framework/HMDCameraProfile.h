/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessoryProfile.h>
#import <libobjc.A.dylib/HMDCameraSettingProactiveReaderDelegate.h>
#import <libobjc.A.dylib/HMDCameraProfileSettingsManagerDelegate.h>
#import <libobjc.A.dylib/HMDCameraClipManagerDelegate.h>

@class NSUUID, HMDCameraClipManager, HMDService, HMDHAPAccessory, NSSet, HMDCameraSnapshotManager, HMDCameraStreamSnapshotHandler, NSMutableArray, HMFNetMonitor, HMDCameraResidentMessageHandler, HMDCameraProfileSettingsManager, HMDCameraClipUserNotificationCenter, HMDPredicateUtilities, HMDCameraRecordingManager, HMDCameraProfileSettingsModel, NSString;

@interface HMDCameraProfile : HMDAccessoryProfile <HMDCameraSettingProactiveReaderDelegate, HMDCameraProfileSettingsManagerDelegate, HMDCameraClipManagerDelegate> {

	BOOL _microphonePresent;
	BOOL _speakerPresent;
	NSUUID* _cloudZoneUUID;
	HMDCameraClipManager* _clipManager;
	HMDService* _recordingManagementService;
	HMDHAPAccessory* _hapAccessory;
	NSSet* _cameraStreamManagers;
	HMDCameraSnapshotManager* _snapshotManager;
	HMDCameraStreamSnapshotHandler* _streamSnapshotHandler;
	NSMutableArray* _settingProactiveReaders;
	HMFNetMonitor* _networkMonitor;
	HMDCameraResidentMessageHandler* _residentMessageHandler;
	HMDCameraProfileSettingsManager* _cameraSettingsManager;
	/*^block*/id _recordingManagerFactory;
	HMDCameraClipUserNotificationCenter* _clipUserNotificationCenter;
	HMDPredicateUtilities* _predicateUtilities;
	HMDCameraRecordingManager* _cameraRecordingManager;

}

@property (readonly) NSSet * cameraStreamManagers;                                                                        //@synthesize cameraStreamManagers=_cameraStreamManagers - In the implementation block
@property (readonly) HMDCameraSnapshotManager * snapshotManager;                                                          //@synthesize snapshotManager=_snapshotManager - In the implementation block
@property (readonly) HMDCameraStreamSnapshotHandler * streamSnapshotHandler;                                              //@synthesize streamSnapshotHandler=_streamSnapshotHandler - In the implementation block
@property (readonly) NSMutableArray * settingProactiveReaders;                                                            //@synthesize settingProactiveReaders=_settingProactiveReaders - In the implementation block
@property (readonly) HMFNetMonitor * networkMonitor;                                                                      //@synthesize networkMonitor=_networkMonitor - In the implementation block
@property (readonly) HMDCameraResidentMessageHandler * residentMessageHandler;                                            //@synthesize residentMessageHandler=_residentMessageHandler - In the implementation block
@property (readonly) HMDCameraProfileSettingsManager * cameraSettingsManager;                                             //@synthesize cameraSettingsManager=_cameraSettingsManager - In the implementation block
@property (retain) NSUUID * cloudZoneUUID;                                                                                //@synthesize cloudZoneUUID=_cloudZoneUUID - In the implementation block
@property (retain) HMDCameraClipManager * clipManager;                                                                    //@synthesize clipManager=_clipManager - In the implementation block
@property (readonly) id recordingManagerFactory;                                                                          //@synthesize recordingManagerFactory=_recordingManagerFactory - In the implementation block
@property (retain) HMDCameraClipUserNotificationCenter * clipUserNotificationCenter;                                      //@synthesize clipUserNotificationCenter=_clipUserNotificationCenter - In the implementation block
@property (retain) HMDPredicateUtilities * predicateUtilities;                                                            //@synthesize predicateUtilities=_predicateUtilities - In the implementation block
@property (retain) HMDCameraRecordingManager * cameraRecordingManager;                                                    //@synthesize cameraRecordingManager=_cameraRecordingManager - In the implementation block
@property (getter=isMicrophonePresent,nonatomic,readonly) BOOL microphonePresent;                                         //@synthesize microphonePresent=_microphonePresent - In the implementation block
@property (getter=isSpeakerPresent,nonatomic,readonly) BOOL speakerPresent;                                               //@synthesize speakerPresent=_speakerPresent - In the implementation block
@property (readonly) HMDCameraProfileSettingsModel * currentSettingsModel; 
@property (readonly) HMDService * recordingManagementService;                                                             //@synthesize recordingManagementService=_recordingManagementService - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * hapAccessory;                                                               //@synthesize hapAccessory=_hapAccessory - In the implementation block
@property (getter=isCameraRecordingFeatureSupported,nonatomic,readonly) BOOL supportsCameraRecordingFeature; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUp;
-(id)urlString;
-(id)logIdentifier;
-(id)dumpState;
-(HMFNetMonitor *)networkMonitor;
-(HMDCameraClipManager *)clipManager;
-(void)registerForMessages;
-(void)setClipManager:(HMDCameraClipManager *)arg1 ;
-(id)messageReceiverChildren;
-(HMDHAPAccessory *)hapAccessory;
-(HMDCameraProfileSettingsModel *)currentSettingsModel;
-(void)clipManagerDidBecomeAvailable:(id)arg1 ;
-(void)clipManagerDidBecomeUnavailable:(id)arg1 ;
-(BOOL)clipManager:(id)arg1 shouldAddNotificationForSignificantEvent:(id)arg2 withHomePresence:(id)arg3 ;
-(void)clipManager:(id)arg1 didAddSignificantEventNotification:(id)arg2 ;
-(void)clipManager:(id)arg1 didDeleteClip:(id)arg2 ;
-(void)clipManagerDidDisableCloudStorage:(id)arg1 ;
-(BOOL)isMicrophonePresent;
-(void)removeCloudData;
-(id)assistantObject;
-(HMDCameraStreamSnapshotHandler *)streamSnapshotHandler;
-(HMDPredicateUtilities *)predicateUtilities;
-(void)setPredicateUtilities:(HMDPredicateUtilities *)arg1 ;
-(HMDCameraResidentMessageHandler *)residentMessageHandler;
-(BOOL)isCameraRecordingFeatureSupported;
-(void)cameraProfileSettingsManager:(id)arg1 canEnableRecordingWithCompletion:(/*^block*/id)arg2 ;
-(void)cameraProfileSettingsManager:(id)arg1 canDisableRecordingWithCompletion:(/*^block*/id)arg2 ;
-(void)cameraSettingProactiveReaderDidCompleteRead:(id)arg1 ;
-(HMDCameraSnapshotManager *)snapshotManager;
-(NSUUID *)cloudZoneUUID;
-(id)initWithAccessory:(id)arg1 services:(id)arg2 msgDispatcher:(id)arg3 settingsManager:(id)arg4 workQueue:(id)arg5 ;
-(id)initWithAccessory:(id)arg1 services:(id)arg2 msgDispatcher:(id)arg3 settingsManager:(id)arg4 workQueue:(id)arg5 recordingManagerFactory:(/*^block*/id)arg6 ;
-(id)_createCameraManagers:(id)arg1 ;
-(void)_setControlSupport;
-(HMDService *)recordingManagementService;
-(void)createCameraClipUserNotificationCenter;
-(HMDCameraProfileSettingsManager *)cameraSettingsManager;
-(void)setClipUserNotificationCenter:(HMDCameraClipUserNotificationCenter *)arg1 ;
-(HMDCameraRecordingManager *)cameraRecordingManager;
-(void)setCameraRecordingManager:(HMDCameraRecordingManager *)arg1 ;
-(id)recordingManagerFactory;
-(void)_handleNegotiateStreamRequest:(id)arg1 ;
-(void)_handleStreamControlRequest:(id)arg1 ;
-(NSSet *)cameraStreamManagers;
-(void)handleCameraProfileSettingsDidChangeNotification:(id)arg1 ;
-(void)handleResidentsChanged:(id)arg1 ;
-(void)_configureForRecording;
-(NSMutableArray *)settingProactiveReaders;
-(HMDCameraClipUserNotificationCenter *)clipUserNotificationCenter;
-(BOOL)isSpeakerPresent;
-(void)setCloudZoneUUID:(NSUUID *)arg1 ;
@end

