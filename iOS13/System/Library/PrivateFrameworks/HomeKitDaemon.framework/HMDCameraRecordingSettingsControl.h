/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraRecordingSettingsControlDelegate, OS_dispatch_queue;
@class NSObject, HMDHAPAccessory, HMDService, NSDictionary, HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingSupportedVideoConfiguration, HMDCameraRecordingSupportedAudioConfiguration, HMDCameraRecordingSelectedConfiguration, NSString, NSDate, NSNumber;

@interface HMDCameraRecordingSettingsControl : HMFObject <HMFLogging> {

	BOOL _configureCameraInProgress;
	BOOL _canConfigureCameraForRecording;
	BOOL _didTriggerABCForConfigure;
	id<HMDCameraRecordingSettingsControlDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMDHAPAccessory* _accessory;
	HMDService* _recordingService;
	NSDictionary* _recordingConfigurationOverrides;
	HMDCameraRecordingGeneralConfiguration* _supportedRecordingConfiguration;
	HMDCameraRecordingSupportedVideoConfiguration* _supportedVideoConfiguration;
	HMDCameraRecordingSupportedAudioConfiguration* _supportedAudioConfiguration;
	NSDictionary* _characteristicByType;
	HMDCameraRecordingSelectedConfiguration* _currentSelectedConfiguration;
	NSString* _clientIdentifier;
	NSDate* _configureStartDate;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                                     //@synthesize accessory=_accessory - In the implementation block
@property (readonly) HMDService * recordingService;                                                          //@synthesize recordingService=_recordingService - In the implementation block
@property (retain) NSDictionary * recordingConfigurationOverrides;                                           //@synthesize recordingConfigurationOverrides=_recordingConfigurationOverrides - In the implementation block
@property (retain) HMDCameraRecordingGeneralConfiguration * supportedRecordingConfiguration;                 //@synthesize supportedRecordingConfiguration=_supportedRecordingConfiguration - In the implementation block
@property (retain) HMDCameraRecordingSupportedVideoConfiguration * supportedVideoConfiguration;              //@synthesize supportedVideoConfiguration=_supportedVideoConfiguration - In the implementation block
@property (retain) HMDCameraRecordingSupportedAudioConfiguration * supportedAudioConfiguration;              //@synthesize supportedAudioConfiguration=_supportedAudioConfiguration - In the implementation block
@property (copy) NSDictionary * characteristicByType;                                                        //@synthesize characteristicByType=_characteristicByType - In the implementation block
@property (assign) BOOL configureCameraInProgress;                                                           //@synthesize configureCameraInProgress=_configureCameraInProgress - In the implementation block
@property (assign) BOOL canConfigureCameraForRecording;                                                      //@synthesize canConfigureCameraForRecording=_canConfigureCameraForRecording - In the implementation block
@property (retain) HMDCameraRecordingSelectedConfiguration * currentSelectedConfiguration;                   //@synthesize currentSelectedConfiguration=_currentSelectedConfiguration - In the implementation block
@property (copy,readonly) NSString * clientIdentifier;                                                       //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (retain) NSDate * configureStartDate;                                                              //@synthesize configureStartDate=_configureStartDate - In the implementation block
@property (assign) BOOL didTriggerABCForConfigure;                                                           //@synthesize didTriggerABCForConfigure=_didTriggerABCForConfigure - In the implementation block
@property (copy,readonly) NSNumber * configuredBitRate; 
@property (copy,readonly) NSNumber * configuredIFrameInterval; 
@property (copy,readonly) NSNumber * configuredImageWidth; 
@property (copy,readonly) NSNumber * configuredImageHeight; 
@property (readonly) double configuredFragmentDuration; 
@property (readonly) double configuredPrebufferDuration; 
@property (getter=isCameraConfiguredForRecording,readonly) BOOL cameraConfiguredForRecording; 
@property (__weak) id<HMDCameraRecordingSettingsControlDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)isSupportedH264Profile:(id)arg1 ;
+(BOOL)isSupportedVideoCodec:(id)arg1 ;
+(id)videoConfigurationsByPreferenceOrder;
+(id)videoCodecForCodecConfiguration:(id)arg1 ;
+(id)h264ProfileForCodecConfiguration:(id)arg1 ;
+(BOOL)isSupportedAudioCodec:(id)arg1 ;
+(id)audioConfigurationsByPreferenceOrder;
+(id)audioCodecForCodecConfiguration:(id)arg1 ;
+(id)audioBitRateForCodecConfiguration:(id)arg1 ;
-(void)dealloc;
-(id<HMDCameraRecordingSettingsControlDelegate>)delegate;
-(void)setDelegate:(id<HMDCameraRecordingSettingsControlDelegate>)arg1 ;
-(void)start;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)clientIdentifier;
-(HMDHAPAccessory *)accessory;
-(id)logIdentifier;
-(void)handleCharacteristicValueUpdated:(id)arg1 ;
-(void)handleAccessoryIsNotConfiguredError;
-(double)configuredFragmentDuration;
-(double)configuredPrebufferDuration;
-(BOOL)isCameraConfiguredForRecording;
-(void)configureCameraRecordingSettings;
-(NSNumber *)configuredBitRate;
-(NSNumber *)configuredIFrameInterval;
-(NSNumber *)configuredImageWidth;
-(NSNumber *)configuredImageHeight;
-(HMDCameraRecordingSelectedConfiguration *)currentSelectedConfiguration;
-(void)handleAccessoryConfigured:(id)arg1 ;
-(void)handleAccessoryUnreachable:(id)arg1 ;
-(void)handleCharacteristicsUpdated:(id)arg1 ;
-(void)handleCameraProfileSettingsDidWriteToAccessory:(id)arg1 ;
-(void)updateCanConfigureCameraForRecording;
-(void)setRecordingConfigurationOverrides:(NSDictionary *)arg1 ;
-(NSDictionary *)recordingConfigurationOverrides;
-(NSDictionary *)characteristicByType;
-(HMDCameraRecordingGeneralConfiguration *)supportedRecordingConfiguration;
-(id)_preferredVideoConfigurationOverride;
-(HMDCameraRecordingSupportedVideoConfiguration *)supportedVideoConfiguration;
-(id)_preferredAudioConfigurationOverride;
-(HMDCameraRecordingSupportedAudioConfiguration *)supportedAudioConfiguration;
-(void)setCanConfigureCameraForRecording:(BOOL)arg1 ;
-(void)setCurrentSelectedConfiguration:(HMDCameraRecordingSelectedConfiguration *)arg1 ;
-(HMDService *)recordingService;
-(void)setCharacteristicByType:(NSDictionary *)arg1 ;
-(BOOL)didTriggerABCForConfigure;
-(NSDate *)configureStartDate;
-(void)setDidTriggerABCForConfigure:(BOOL)arg1 ;
-(BOOL)configureCameraInProgress;
-(void)triggerABCForConfigure;
-(void)setConfigureStartDate:(NSDate *)arg1 ;
-(void)_configureCameraRecordingSettings;
-(void)_readCameraRecordingSettings;
-(BOOL)canConfigureCameraForRecording;
-(void)setConfigureCameraInProgress:(BOOL)arg1 ;
-(void)_readSupportedCameraRecordingConfiguration;
-(void)_selectedConfigurationDidUpdateTo:(id)arg1 ;
-(void)_readSelectedCameraRecordingConfiguration;
-(void)_handleSelectedCameraRecordingConfigurationReadResponse:(id)arg1 ;
-(id)_parseSelectedRecordingConfiguration:(id)arg1 ;
-(void)_handleSupportedConfigurationCharacteristicsReadResponse:(id)arg1 ;
-(id)_parseSupportedRecordingConfiguration:(id)arg1 ;
-(void)setSupportedRecordingConfiguration:(HMDCameraRecordingGeneralConfiguration *)arg1 ;
-(id)_parseSupportedVideoConfiguration:(id)arg1 ;
-(void)setSupportedVideoConfiguration:(HMDCameraRecordingSupportedVideoConfiguration *)arg1 ;
-(id)_parseSupportedAudioConfiguration:(id)arg1 ;
-(void)setSupportedAudioConfiguration:(HMDCameraRecordingSupportedAudioConfiguration *)arg1 ;
-(id)_recordingGeneralConfiguration;
-(id)_recordingVideoConfiguration;
-(id)_recordingAudioConfiguration;
-(void)_setSelectedRecordingConfiguration:(id)arg1 ;
-(id)_parseResponse:(id)arg1 forCharacteristicType:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 recordingManagementService:(id)arg3 ;
@end

