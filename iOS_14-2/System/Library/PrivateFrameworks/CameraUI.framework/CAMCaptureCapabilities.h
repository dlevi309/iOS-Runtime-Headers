/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


#import <CameraUI/CameraUI-Structs.h>
@class UIColor;

@interface CAMCaptureCapabilities : NSObject {

	BOOL _interactiveVideoFormatControlSupported;
	BOOL _interactiveVideoFormatControlAlwaysEnabled;
	BOOL _backCameraSupported;
	BOOL _frontCameraSupported;
	BOOL _captureOnTouchDown;
	BOOL _responsiveShutterSupported;
	BOOL _mirroredFrontCapturesSupported;
	BOOL _backFlashSupported;
	BOOL _frontFlashSupported;
	BOOL _backTorchSupported;
	BOOL _frontTorchSupported;
	BOOL _backHDRSupported;
	BOOL _backAutomaticHDRSupported;
	BOOL _backHDROnSupported;
	BOOL _frontHDRSupported;
	BOOL _frontAutomaticHDRSupported;
	BOOL _frontHDROnSupported;
	BOOL _previewSupportedDuringHDR;
	BOOL _modernHDRSupported;
	BOOL _backSmartHDRSupported;
	BOOL _frontSmartHDRSupported;
	BOOL _HDREV0CaptureSupported;
	BOOL _HDR10BitVideoSupported;
	BOOL _HDR10BitVideoSupports60FPS;
	BOOL _backLivePhotoSupported;
	BOOL _frontLivePhotoSupported;
	BOOL _livePhotoAutoModeSupported;
	BOOL _liveFilteringSupported;
	BOOL _portraitEffectsSupported;
	BOOL _naturalLightingAppliedToOriginal;
	BOOL _backLiveStageLightSupported;
	BOOL _frontLiveStageLightSupported;
	BOOL _backBurstSupported;
	BOOL _frontBurstSupported;
	BOOL _squareModeSupported;
	BOOL _videoSupported;
	BOOL _stillDuringVideoSupported;
	BOOL _back4k24VideoSupported;
	BOOL _front4k24VideoSupported;
	BOOL _back4k30VideoSupported;
	BOOL _front4k30VideoSupported;
	BOOL _back4k60VideoSupported;
	BOOL _front4k60VideoSupported;
	BOOL _HEVCEncodingSupported;
	BOOL _autoLowLightVideoSupported;
	BOOL _variableFramerateVideoSupported;
	BOOL _stereoAudioRecordingSupported;
	BOOL _backSlomoSupported;
	BOOL _frontSlomoSupported;
	BOOL _back720p240Supported;
	BOOL _front720p240Supported;
	BOOL _back1080p120Supported;
	BOOL _front1080p120Supported;
	BOOL _back1080p240Supported;
	BOOL _front1080p240Supported;
	BOOL _backPanoramaSupported;
	BOOL _frontPanoramaSupported;
	BOOL _backTimelapseSupported;
	BOOL _frontTimelapseSupported;
	BOOL _backPortraitModeSupported;
	BOOL _frontPortraitModeSupported;
	BOOL _deferredPortraitRenderingSupported;
	BOOL _ctmSupported;
	BOOL _useReticleStroke;
	BOOL _useCTMTransientImageWell;
	BOOL _useCTMModeSelector;
	BOOL _allowControlDrawer;
	BOOL _sfCameraFontSupported;
	BOOL _overContentFlipButtonSupported;
	BOOL _imagePickerUsesModernLayout;
	BOOL _backSpatialOverCaptureSupported;
	BOOL _frontSpatialOverCaptureSupported;
	BOOL _backLowLightSupported;
	BOOL _frontLowLightSupported;
	BOOL _backSingleCameraPortraitModeSupported;
	BOOL _frontSingleCameraPortraitModeSupported;
	BOOL _backTorchPatternSupported;
	BOOL _frontTorchPatternSupported;
	BOOL _pipelinedStillImageProcessingSupported;
	BOOL _deepFusionSupported;
	BOOL _deferredProcessingSupported;
	BOOL _contentAwareDistortionCorrectionSupported;
	BOOL _hasSystemTelephonyOfAnyKind;
	BOOL _forceTouchSupported;
	BOOL _splitScreenSupported;
	BOOL _backTelephotoSupported;
	BOOL _frontTelephotoSupported;
	BOOL _backDualSupported;
	BOOL _frontDualSupported;
	BOOL _backSuperWideSupported;
	BOOL _frontSuperWideSupported;
	BOOL _backWideDualSupported;
	BOOL _frontWideDualSupported;
	BOOL _backTripleCameraSupported;
	BOOL _frontTripleCameraSupported;
	BOOL _backPearlSupported;
	BOOL _frontPearlSupported;
	BOOL _backTimeOfFlightSupported;
	BOOL _frontTimeOfFlightSupported;
	BOOL _depthEffectApertureSupported;
	BOOL _portraitEffectIntensitySupported;
	BOOL _neuralEngineSupported;
	BOOL _semanticDevelopmentSupported;
	BOOL _enableSemanticDevelopmentFilterDebugging;
	BOOL _internalInstall;
	BOOL _lockButtonAppropriateForShutter;
	BOOL _lowEndHardware;
	BOOL _allowHaptics;
	BOOL _allowHapticsOnConfigurationTaps;
	BOOL _shotBufferSupported;
	BOOL _exposureSliderSupported;
	BOOL __backStageLightPortaitEffectsSupported;
	BOOL __frontStageLightPortaitEffectsSupported;
	BOOL __wideDualPortraitLowLightSupported;
	BOOL __tripleCamera1080p60Supported;
	BOOL __forceEnableExposureClippingIndicator;
	BOOL __forceDisableExposureClippingIndicator;
	BOOL _hasFilteringEntitlement;
	BOOL _ctmSupportSuppressed;
	BOOL _deviceSupportsCTM;
	BOOL _featureDevelopmentEmulateSuperWide;
	BOOL _featureDevelopmentForceSingleCamera;
	BOOL _forceAllowAllInterfaceOrientations;
	long long _maximumNumberOfInflightRequests;
	long long _supportedPortraitLightingVersion;
	long long _maximumBurstLength;
	long long _maximumRecordedFileSize;
	long long _back720pMaxFPS;
	long long _front720pMaxFPS;
	long long _back1080pMaxFPS;
	long long _front1080pMaxFPS;
	double _timelapseFirstShotDelay;
	unsigned long long _backLowLightPreviewOverlayStyle;
	unsigned long long _frontLowLightPreviewOverlayStyle;
	UIColor* _backLowLightPreviewOverlayColor;
	UIColor* _frontLowLightPreviewOverlayColor;
	long long _zoomDialStyle;
	double _wideDisplayZoomFactor;
	double _superWideDisplayZoomFactor;
	double _telephotoDisplayZoomFactor;
	long long _hostProcess;
	double __backPhotoModeMaximumZoomFactor;
	double __frontPhotoModeMaximumZoomFactor;
	double __backVideoModeMaximumZoomFactor;
	double __frontVideoModeMaximumZoomFactor;
	double __backDualPhotoModeMaximumZoomFactor;
	double __backDualVideoModeMaximumZoomFactor;
	double __frontDualPhotoModeMaximumZoomFactor;
	double __frontDualVideoModeMaximumZoomFactor;
	double __backTripleCameraPhotoModeMaximumZoomFactor;
	double __backTripleCameraVideoModeMaximumZoomFactor;
	double __frontTripleCameraPhotoModeMaximumZoomFactor;
	double __frontTripleCameraVideoModeMaximumZoomFactor;
	double __backDualCameraSwitchOverZoomFactor;
	double __frontDualCameraSwitchOverZoomFactor;
	double __backWideDualCameraSwitchOverZoomFactor;
	double __frontWideDualCameraSwitchOverZoomFactor;
	double __backCaptureInterval;
	double __frontCaptureInterval;
	long long __forcedBackCamera;
	double __forcedInitialZoomDisplayFactor;

}

@property (nonatomic,readonly) double _backPhotoModeMaximumZoomFactor;                                                                   //@synthesize _backPhotoModeMaximumZoomFactor=__backPhotoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontPhotoModeMaximumZoomFactor;                                                                  //@synthesize _frontPhotoModeMaximumZoomFactor=__frontPhotoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backVideoModeMaximumZoomFactor;                                                                   //@synthesize _backVideoModeMaximumZoomFactor=__backVideoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontVideoModeMaximumZoomFactor;                                                                  //@synthesize _frontVideoModeMaximumZoomFactor=__frontVideoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backDualPhotoModeMaximumZoomFactor;                                                               //@synthesize _backDualPhotoModeMaximumZoomFactor=__backDualPhotoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backDualVideoModeMaximumZoomFactor;                                                               //@synthesize _backDualVideoModeMaximumZoomFactor=__backDualVideoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontDualPhotoModeMaximumZoomFactor;                                                              //@synthesize _frontDualPhotoModeMaximumZoomFactor=__frontDualPhotoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontDualVideoModeMaximumZoomFactor;                                                              //@synthesize _frontDualVideoModeMaximumZoomFactor=__frontDualVideoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backTripleCameraPhotoModeMaximumZoomFactor;                                                       //@synthesize _backTripleCameraPhotoModeMaximumZoomFactor=__backTripleCameraPhotoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backTripleCameraVideoModeMaximumZoomFactor;                                                       //@synthesize _backTripleCameraVideoModeMaximumZoomFactor=__backTripleCameraVideoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontTripleCameraPhotoModeMaximumZoomFactor;                                                      //@synthesize _frontTripleCameraPhotoModeMaximumZoomFactor=__frontTripleCameraPhotoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontTripleCameraVideoModeMaximumZoomFactor;                                                      //@synthesize _frontTripleCameraVideoModeMaximumZoomFactor=__frontTripleCameraVideoModeMaximumZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backDualCameraSwitchOverZoomFactor;                                                               //@synthesize _backDualCameraSwitchOverZoomFactor=__backDualCameraSwitchOverZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontDualCameraSwitchOverZoomFactor;                                                              //@synthesize _frontDualCameraSwitchOverZoomFactor=__frontDualCameraSwitchOverZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backWideDualCameraSwitchOverZoomFactor;                                                           //@synthesize _backWideDualCameraSwitchOverZoomFactor=__backWideDualCameraSwitchOverZoomFactor - In the implementation block
@property (nonatomic,readonly) double _frontWideDualCameraSwitchOverZoomFactor;                                                          //@synthesize _frontWideDualCameraSwitchOverZoomFactor=__frontWideDualCameraSwitchOverZoomFactor - In the implementation block
@property (nonatomic,readonly) double _backCaptureInterval;                                                                              //@synthesize _backCaptureInterval=__backCaptureInterval - In the implementation block
@property (nonatomic,readonly) double _frontCaptureInterval;                                                                             //@synthesize _frontCaptureInterval=__frontCaptureInterval - In the implementation block
@property (nonatomic,readonly) BOOL _backStageLightPortaitEffectsSupported;                                                              //@synthesize _backStageLightPortaitEffectsSupported=__backStageLightPortaitEffectsSupported - In the implementation block
@property (nonatomic,readonly) BOOL _frontStageLightPortaitEffectsSupported;                                                             //@synthesize _frontStageLightPortaitEffectsSupported=__frontStageLightPortaitEffectsSupported - In the implementation block
@property (nonatomic,readonly) BOOL _wideDualPortraitLowLightSupported;                                                                  //@synthesize _wideDualPortraitLowLightSupported=__wideDualPortraitLowLightSupported - In the implementation block
@property (nonatomic,readonly) long long _forcedBackCamera;                                                                              //@synthesize _forcedBackCamera=__forcedBackCamera - In the implementation block
@property (nonatomic,readonly) double _forcedInitialZoomDisplayFactor;                                                                   //@synthesize _forcedInitialZoomDisplayFactor=__forcedInitialZoomDisplayFactor - In the implementation block
@property (getter=_isTripleCamera1080p60Supported,nonatomic,readonly) BOOL _tripleCamera1080p60Supported;                                //@synthesize _tripleCamera1080p60Supported=__tripleCamera1080p60Supported - In the implementation block
@property (nonatomic,readonly) BOOL _forceEnableExposureClippingIndicator;                                                               //@synthesize _forceEnableExposureClippingIndicator=__forceEnableExposureClippingIndicator - In the implementation block
@property (nonatomic,readonly) BOOL _forceDisableExposureClippingIndicator;                                                              //@synthesize _forceDisableExposureClippingIndicator=__forceDisableExposureClippingIndicator - In the implementation block
@property (nonatomic,readonly) BOOL hasFilteringEntitlement;                                                                             //@synthesize hasFilteringEntitlement=_hasFilteringEntitlement - In the implementation block
@property (getter=isCTMSupportSupressed,nonatomic,readonly) BOOL ctmSupportSuppressed;                                                   //@synthesize ctmSupportSuppressed=_ctmSupportSuppressed - In the implementation block
@property (nonatomic,readonly) BOOL deviceSupportsCTM;                                                                                   //@synthesize deviceSupportsCTM=_deviceSupportsCTM - In the implementation block
@property (nonatomic,readonly) BOOL featureDevelopmentEmulateSuperWide;                                                                  //@synthesize featureDevelopmentEmulateSuperWide=_featureDevelopmentEmulateSuperWide - In the implementation block
@property (nonatomic,readonly) BOOL featureDevelopmentForceSingleCamera;                                                                 //@synthesize featureDevelopmentForceSingleCamera=_featureDevelopmentForceSingleCamera - In the implementation block
@property (nonatomic,readonly) BOOL forceAllowAllInterfaceOrientations;                                                                  //@synthesize forceAllowAllInterfaceOrientations=_forceAllowAllInterfaceOrientations - In the implementation block
@property (nonatomic,readonly) BOOL interactiveVideoFormatControlSupported;                                                              //@synthesize interactiveVideoFormatControlSupported=_interactiveVideoFormatControlSupported - In the implementation block
@property (nonatomic,readonly) BOOL interactiveVideoFormatControlAlwaysEnabled;                                                          //@synthesize interactiveVideoFormatControlAlwaysEnabled=_interactiveVideoFormatControlAlwaysEnabled - In the implementation block
@property (getter=isBackCameraSupported,nonatomic,readonly) BOOL backCameraSupported;                                                    //@synthesize backCameraSupported=_backCameraSupported - In the implementation block
@property (getter=isFrontCameraSupported,nonatomic,readonly) BOOL frontCameraSupported;                                                  //@synthesize frontCameraSupported=_frontCameraSupported - In the implementation block
@property (nonatomic,readonly) BOOL captureOnTouchDown;                                                                                  //@synthesize captureOnTouchDown=_captureOnTouchDown - In the implementation block
@property (nonatomic,readonly) long long maximumNumberOfInflightRequests;                                                                //@synthesize maximumNumberOfInflightRequests=_maximumNumberOfInflightRequests - In the implementation block
@property (nonatomic,readonly) BOOL responsiveShutterSupported;                                                                          //@synthesize responsiveShutterSupported=_responsiveShutterSupported - In the implementation block
@property (getter=isMirroredFrontCapturesSupported,nonatomic,readonly) BOOL mirroredFrontCapturesSupported;                              //@synthesize mirroredFrontCapturesSupported=_mirroredFrontCapturesSupported - In the implementation block
@property (getter=isBackFlashSupported,nonatomic,readonly) BOOL backFlashSupported;                                                      //@synthesize backFlashSupported=_backFlashSupported - In the implementation block
@property (getter=isFrontFlashSupported,nonatomic,readonly) BOOL frontFlashSupported;                                                    //@synthesize frontFlashSupported=_frontFlashSupported - In the implementation block
@property (getter=isBackTorchSupported,nonatomic,readonly) BOOL backTorchSupported;                                                      //@synthesize backTorchSupported=_backTorchSupported - In the implementation block
@property (getter=isFrontTorchSupported,nonatomic,readonly) BOOL frontTorchSupported;                                                    //@synthesize frontTorchSupported=_frontTorchSupported - In the implementation block
@property (getter=isBackHDRSupported,nonatomic,readonly) BOOL backHDRSupported;                                                          //@synthesize backHDRSupported=_backHDRSupported - In the implementation block
@property (getter=isBackAutomaticHDRSupported,nonatomic,readonly) BOOL backAutomaticHDRSupported;                                        //@synthesize backAutomaticHDRSupported=_backAutomaticHDRSupported - In the implementation block
@property (getter=isBackHDROnSupported,nonatomic,readonly) BOOL backHDROnSupported;                                                      //@synthesize backHDROnSupported=_backHDROnSupported - In the implementation block
@property (getter=isFrontHDRSupported,nonatomic,readonly) BOOL frontHDRSupported;                                                        //@synthesize frontHDRSupported=_frontHDRSupported - In the implementation block
@property (getter=isFrontAutomaticHDRSupported,nonatomic,readonly) BOOL frontAutomaticHDRSupported;                                      //@synthesize frontAutomaticHDRSupported=_frontAutomaticHDRSupported - In the implementation block
@property (getter=isFrontHDROnSupported,nonatomic,readonly) BOOL frontHDROnSupported;                                                    //@synthesize frontHDROnSupported=_frontHDROnSupported - In the implementation block
@property (getter=isPreviewDuringHDRSupported,nonatomic,readonly) BOOL previewSupportedDuringHDR;                                        //@synthesize previewSupportedDuringHDR=_previewSupportedDuringHDR - In the implementation block
@property (getter=isModernHDRSupported,nonatomic,readonly) BOOL modernHDRSupported;                                                      //@synthesize modernHDRSupported=_modernHDRSupported - In the implementation block
@property (getter=isSmartHDRSupported,nonatomic,readonly) BOOL smartHDRSupported; 
@property (getter=isBackSmartHDRSupported,nonatomic,readonly) BOOL backSmartHDRSupported;                                                //@synthesize backSmartHDRSupported=_backSmartHDRSupported - In the implementation block
@property (getter=isFrontSmartHDRSupported,nonatomic,readonly) BOOL frontSmartHDRSupported;                                              //@synthesize frontSmartHDRSupported=_frontSmartHDRSupported - In the implementation block
@property (getter=isHDREV0CaptureSupported,nonatomic,readonly) BOOL HDREV0CaptureSupported;                                              //@synthesize HDREV0CaptureSupported=_HDREV0CaptureSupported - In the implementation block
@property (getter=isHDR10BitVideoSupported,nonatomic,readonly) BOOL HDR10BitVideoSupported;                                              //@synthesize HDR10BitVideoSupported=_HDR10BitVideoSupported - In the implementation block
@property (getter=isHDR10BitVideoSupports60FPS,nonatomic,readonly) BOOL HDR10BitVideoSupports60FPS;                                      //@synthesize HDR10BitVideoSupports60FPS=_HDR10BitVideoSupports60FPS - In the implementation block
@property (getter=isLivePhotoSupported,nonatomic,readonly) BOOL livePhotoSupported; 
@property (getter=isBackLivePhotoSupported,nonatomic,readonly) BOOL backLivePhotoSupported;                                              //@synthesize backLivePhotoSupported=_backLivePhotoSupported - In the implementation block
@property (getter=isFrontLivePhotoSupported,nonatomic,readonly) BOOL frontLivePhotoSupported;                                            //@synthesize frontLivePhotoSupported=_frontLivePhotoSupported - In the implementation block
@property (getter=isLivePhotoAutoModeSupported,nonatomic,readonly) BOOL livePhotoAutoModeSupported;                                      //@synthesize livePhotoAutoModeSupported=_livePhotoAutoModeSupported - In the implementation block
@property (getter=isLiveFilteringSupported,nonatomic,readonly) BOOL liveFilteringSupported;                                              //@synthesize liveFilteringSupported=_liveFilteringSupported - In the implementation block
@property (getter=arePortraitEffectsSupported,nonatomic,readonly) BOOL portraitEffectsSupported;                                         //@synthesize portraitEffectsSupported=_portraitEffectsSupported - In the implementation block
@property (nonatomic,readonly) long long supportedPortraitLightingVersion;                                                               //@synthesize supportedPortraitLightingVersion=_supportedPortraitLightingVersion - In the implementation block
@property (getter=isNaturalLightingAppliedToOriginal,nonatomic,readonly) BOOL naturalLightingAppliedToOriginal;                          //@synthesize naturalLightingAppliedToOriginal=_naturalLightingAppliedToOriginal - In the implementation block
@property (getter=isBackLiveStageLightSupported,nonatomic,readonly) BOOL backLiveStageLightSupported;                                    //@synthesize backLiveStageLightSupported=_backLiveStageLightSupported - In the implementation block
@property (getter=isFrontLiveStageLightSupported,nonatomic,readonly) BOOL frontLiveStageLightSupported;                                  //@synthesize frontLiveStageLightSupported=_frontLiveStageLightSupported - In the implementation block
@property (getter=isBackBurstSupported,nonatomic,readonly) BOOL backBurstSupported;                                                      //@synthesize backBurstSupported=_backBurstSupported - In the implementation block
@property (getter=isFrontBurstSupported,nonatomic,readonly) BOOL frontBurstSupported;                                                    //@synthesize frontBurstSupported=_frontBurstSupported - In the implementation block
@property (nonatomic,readonly) long long maximumBurstLength;                                                                             //@synthesize maximumBurstLength=_maximumBurstLength - In the implementation block
@property (getter=isSquareModeSupported,nonatomic,readonly) BOOL squareModeSupported;                                                    //@synthesize squareModeSupported=_squareModeSupported - In the implementation block
@property (getter=isVideoSupported,nonatomic,readonly) BOOL videoSupported;                                                              //@synthesize videoSupported=_videoSupported - In the implementation block
@property (getter=isStillDuringVideoSupported,nonatomic,readonly) BOOL stillDuringVideoSupported;                                        //@synthesize stillDuringVideoSupported=_stillDuringVideoSupported - In the implementation block
@property (nonatomic,readonly) long long maximumRecordedFileSize;                                                                        //@synthesize maximumRecordedFileSize=_maximumRecordedFileSize - In the implementation block
@property (nonatomic,readonly) long long back720pMaxFPS;                                                                                 //@synthesize back720pMaxFPS=_back720pMaxFPS - In the implementation block
@property (nonatomic,readonly) long long front720pMaxFPS;                                                                                //@synthesize front720pMaxFPS=_front720pMaxFPS - In the implementation block
@property (nonatomic,readonly) long long back1080pMaxFPS;                                                                                //@synthesize back1080pMaxFPS=_back1080pMaxFPS - In the implementation block
@property (nonatomic,readonly) long long front1080pMaxFPS;                                                                               //@synthesize front1080pMaxFPS=_front1080pMaxFPS - In the implementation block
@property (getter=isBack4k24VideoSupported,nonatomic,readonly) BOOL back4k24VideoSupported;                                              //@synthesize back4k24VideoSupported=_back4k24VideoSupported - In the implementation block
@property (getter=isFront4k24VideoSupported,nonatomic,readonly) BOOL front4k24VideoSupported;                                            //@synthesize front4k24VideoSupported=_front4k24VideoSupported - In the implementation block
@property (getter=isBack4k30VideoSupported,nonatomic,readonly) BOOL back4k30VideoSupported;                                              //@synthesize back4k30VideoSupported=_back4k30VideoSupported - In the implementation block
@property (getter=isFront4k30VideoSupported,nonatomic,readonly) BOOL front4k30VideoSupported;                                            //@synthesize front4k30VideoSupported=_front4k30VideoSupported - In the implementation block
@property (getter=isBack4k60VideoSupported,nonatomic,readonly) BOOL back4k60VideoSupported;                                              //@synthesize back4k60VideoSupported=_back4k60VideoSupported - In the implementation block
@property (getter=isFront4k60VideoSupported,nonatomic,readonly) BOOL front4k60VideoSupported;                                            //@synthesize front4k60VideoSupported=_front4k60VideoSupported - In the implementation block
@property (getter=isHEVCEncodingSupported,nonatomic,readonly) BOOL HEVCEncodingSupported;                                                //@synthesize HEVCEncodingSupported=_HEVCEncodingSupported - In the implementation block
@property (getter=isAutoLowLightVideoSupported,nonatomic,readonly) BOOL autoLowLightVideoSupported;                                      //@synthesize autoLowLightVideoSupported=_autoLowLightVideoSupported - In the implementation block
@property (getter=isVariableFramerateVideoSupported,nonatomic,readonly) BOOL variableFramerateVideoSupported;                            //@synthesize variableFramerateVideoSupported=_variableFramerateVideoSupported - In the implementation block
@property (getter=isStereoAudioRecordingSupported,nonatomic,readonly) BOOL stereoAudioRecordingSupported;                                //@synthesize stereoAudioRecordingSupported=_stereoAudioRecordingSupported - In the implementation block
@property (getter=isBackSlomoSupported,nonatomic,readonly) BOOL backSlomoSupported;                                                      //@synthesize backSlomoSupported=_backSlomoSupported - In the implementation block
@property (getter=isFrontSlomoSupported,nonatomic,readonly) BOOL frontSlomoSupported;                                                    //@synthesize frontSlomoSupported=_frontSlomoSupported - In the implementation block
@property (getter=isBack720p240Supported,nonatomic,readonly) BOOL back720p240Supported;                                                  //@synthesize back720p240Supported=_back720p240Supported - In the implementation block
@property (getter=isFront720p240Supported,nonatomic,readonly) BOOL front720p240Supported;                                                //@synthesize front720p240Supported=_front720p240Supported - In the implementation block
@property (getter=isBack1080p120Supported,nonatomic,readonly) BOOL back1080p120Supported;                                                //@synthesize back1080p120Supported=_back1080p120Supported - In the implementation block
@property (getter=isFront1080p120Supported,nonatomic,readonly) BOOL front1080p120Supported;                                              //@synthesize front1080p120Supported=_front1080p120Supported - In the implementation block
@property (getter=isBack1080p240Supported,nonatomic,readonly) BOOL back1080p240Supported;                                                //@synthesize back1080p240Supported=_back1080p240Supported - In the implementation block
@property (getter=isFront1080p240Supported,nonatomic,readonly) BOOL front1080p240Supported;                                              //@synthesize front1080p240Supported=_front1080p240Supported - In the implementation block
@property (getter=isBackPanoramaSupported,nonatomic,readonly) BOOL backPanoramaSupported;                                                //@synthesize backPanoramaSupported=_backPanoramaSupported - In the implementation block
@property (getter=isFrontPanoramaSupported,nonatomic,readonly) BOOL frontPanoramaSupported;                                              //@synthesize frontPanoramaSupported=_frontPanoramaSupported - In the implementation block
@property (getter=isBackTimelapseSupported,nonatomic,readonly) BOOL backTimelapseSupported;                                              //@synthesize backTimelapseSupported=_backTimelapseSupported - In the implementation block
@property (getter=isFrontTimelapseSupported,nonatomic,readonly) BOOL frontTimelapseSupported;                                            //@synthesize frontTimelapseSupported=_frontTimelapseSupported - In the implementation block
@property (nonatomic,readonly) double timelapseFirstShotDelay;                                                                           //@synthesize timelapseFirstShotDelay=_timelapseFirstShotDelay - In the implementation block
@property (getter=isPortraitModeSupported,nonatomic,readonly) BOOL portraitModeSupported; 
@property (getter=isBackPortraitModeSupported,nonatomic,readonly) BOOL backPortraitModeSupported;                                        //@synthesize backPortraitModeSupported=_backPortraitModeSupported - In the implementation block
@property (getter=isFrontPortraitModeSupported,nonatomic,readonly) BOOL frontPortraitModeSupported;                                      //@synthesize frontPortraitModeSupported=_frontPortraitModeSupported - In the implementation block
@property (getter=isDeferredPortraitRenderingSupported,nonatomic,readonly) BOOL deferredPortraitRenderingSupported;                      //@synthesize deferredPortraitRenderingSupported=_deferredPortraitRenderingSupported - In the implementation block
@property (getter=isCTMSupported,nonatomic,readonly) BOOL ctmSupported;                                                                  //@synthesize ctmSupported=_ctmSupported - In the implementation block
@property (nonatomic,readonly) BOOL useReticleStroke;                                                                                    //@synthesize useReticleStroke=_useReticleStroke - In the implementation block
@property (nonatomic,readonly) BOOL useCTMTransientImageWell;                                                                            //@synthesize useCTMTransientImageWell=_useCTMTransientImageWell - In the implementation block
@property (nonatomic,readonly) BOOL useCTMModeSelector;                                                                                  //@synthesize useCTMModeSelector=_useCTMModeSelector - In the implementation block
@property (nonatomic,readonly) BOOL allowControlDrawer;                                                                                  //@synthesize allowControlDrawer=_allowControlDrawer - In the implementation block
@property (getter=isAspectRatioCropSupported,nonatomic,readonly) BOOL aspectRatioCropSupported; 
@property (nonatomic,readonly) BOOL sfCameraFontSupported;                                                                               //@synthesize sfCameraFontSupported=_sfCameraFontSupported - In the implementation block
@property (nonatomic,readonly) BOOL overContentFlipButtonSupported;                                                                      //@synthesize overContentFlipButtonSupported=_overContentFlipButtonSupported - In the implementation block
@property (nonatomic,readonly) BOOL imagePickerUsesModernLayout;                                                                         //@synthesize imagePickerUsesModernLayout=_imagePickerUsesModernLayout - In the implementation block
@property (getter=isSpatialOverCaptureSupported,nonatomic,readonly) BOOL spatialOverCaptureSupported; 
@property (getter=isBackSpatialOverCaptureSupported,nonatomic,readonly) BOOL backSpatialOverCaptureSupported;                            //@synthesize backSpatialOverCaptureSupported=_backSpatialOverCaptureSupported - In the implementation block
@property (getter=isFrontSpatialOverCaptureSupported,nonatomic,readonly) BOOL frontSpatialOverCaptureSupported;                          //@synthesize frontSpatialOverCaptureSupported=_frontSpatialOverCaptureSupported - In the implementation block
@property (getter=isLowLightSupported,nonatomic,readonly) BOOL lowLightSupported; 
@property (getter=isBackLowLightSupported,nonatomic,readonly) BOOL backLowLightSupported;                                                //@synthesize backLowLightSupported=_backLowLightSupported - In the implementation block
@property (getter=isFrontLowLightSupported,nonatomic,readonly) BOOL frontLowLightSupported;                                              //@synthesize frontLowLightSupported=_frontLowLightSupported - In the implementation block
@property (nonatomic,readonly) unsigned long long backLowLightPreviewOverlayStyle;                                                       //@synthesize backLowLightPreviewOverlayStyle=_backLowLightPreviewOverlayStyle - In the implementation block
@property (nonatomic,readonly) unsigned long long frontLowLightPreviewOverlayStyle;                                                      //@synthesize frontLowLightPreviewOverlayStyle=_frontLowLightPreviewOverlayStyle - In the implementation block
@property (nonatomic,readonly) UIColor * backLowLightPreviewOverlayColor;                                                                //@synthesize backLowLightPreviewOverlayColor=_backLowLightPreviewOverlayColor - In the implementation block
@property (nonatomic,readonly) UIColor * frontLowLightPreviewOverlayColor;                                                               //@synthesize frontLowLightPreviewOverlayColor=_frontLowLightPreviewOverlayColor - In the implementation block
@property (getter=isBackSingleCameraPortraitModeSupported,nonatomic,readonly) BOOL backSingleCameraPortraitModeSupported;                //@synthesize backSingleCameraPortraitModeSupported=_backSingleCameraPortraitModeSupported - In the implementation block
@property (getter=isFrontSingleCameraPortraitModeSupported,nonatomic,readonly) BOOL frontSingleCameraPortraitModeSupported;              //@synthesize frontSingleCameraPortraitModeSupported=_frontSingleCameraPortraitModeSupported - In the implementation block
@property (getter=isBackTorchPatternSupported,nonatomic,readonly) BOOL backTorchPatternSupported;                                        //@synthesize backTorchPatternSupported=_backTorchPatternSupported - In the implementation block
@property (getter=isFrontTorchPatternSupported,nonatomic,readonly) BOOL frontTorchPatternSupported;                                      //@synthesize frontTorchPatternSupported=_frontTorchPatternSupported - In the implementation block
@property (nonatomic,readonly) long long zoomDialStyle;                                                                                  //@synthesize zoomDialStyle=_zoomDialStyle - In the implementation block
@property (nonatomic,readonly) BOOL zoomControlSupported; 
@property (getter=isPipelinedStillImageProcessingSupported,nonatomic,readonly) BOOL pipelinedStillImageProcessingSupported;              //@synthesize pipelinedStillImageProcessingSupported=_pipelinedStillImageProcessingSupported - In the implementation block
@property (getter=isDeepFusionSupported,nonatomic,readonly) BOOL deepFusionSupported;                                                    //@synthesize deepFusionSupported=_deepFusionSupported - In the implementation block
@property (getter=isDeferredProcessingSupported,nonatomic,readonly) BOOL deferredProcessingSupported;                                    //@synthesize deferredProcessingSupported=_deferredProcessingSupported - In the implementation block
@property (nonatomic,readonly) BOOL contentAwareDistortionCorrectionSupported;                                                           //@synthesize contentAwareDistortionCorrectionSupported=_contentAwareDistortionCorrectionSupported - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemTelephonyOfAnyKind;                                                                         //@synthesize hasSystemTelephonyOfAnyKind=_hasSystemTelephonyOfAnyKind - In the implementation block
@property (getter=isForceTouchSupported,nonatomic,readonly) BOOL forceTouchSupported;                                                    //@synthesize forceTouchSupported=_forceTouchSupported - In the implementation block
@property (getter=isSplitScreenSupported,nonatomic,readonly) BOOL splitScreenSupported;                                                  //@synthesize splitScreenSupported=_splitScreenSupported - In the implementation block
@property (nonatomic,readonly) double wideDisplayZoomFactor;                                                                             //@synthesize wideDisplayZoomFactor=_wideDisplayZoomFactor - In the implementation block
@property (getter=isTelephotoSupported,nonatomic,readonly) BOOL telephotoSupported; 
@property (getter=isBackTelephotoSupported,nonatomic,readonly) BOOL backTelephotoSupported;                                              //@synthesize backTelephotoSupported=_backTelephotoSupported - In the implementation block
@property (getter=isFrontTelephotoSupported,nonatomic,readonly) BOOL frontTelephotoSupported;                                            //@synthesize frontTelephotoSupported=_frontTelephotoSupported - In the implementation block
@property (getter=isDualSupported,nonatomic,readonly) BOOL dualSupported; 
@property (getter=isBackDualSupported,nonatomic,readonly) BOOL backDualSupported;                                                        //@synthesize backDualSupported=_backDualSupported - In the implementation block
@property (getter=isFrontDualSupported,nonatomic,readonly) BOOL frontDualSupported;                                                      //@synthesize frontDualSupported=_frontDualSupported - In the implementation block
@property (getter=isSuperWideSupported,nonatomic,readonly) BOOL superWideSupported; 
@property (getter=isBackSuperWideSupported,nonatomic,readonly) BOOL backSuperWideSupported;                                              //@synthesize backSuperWideSupported=_backSuperWideSupported - In the implementation block
@property (getter=isFrontSuperWideSupported,nonatomic,readonly) BOOL frontSuperWideSupported;                                            //@synthesize frontSuperWideSupported=_frontSuperWideSupported - In the implementation block
@property (nonatomic,readonly) double superWideDisplayZoomFactor;                                                                        //@synthesize superWideDisplayZoomFactor=_superWideDisplayZoomFactor - In the implementation block
@property (getter=isWideDualSupported,nonatomic,readonly) BOOL wideDualSupported; 
@property (getter=isBackWideDualSupported,nonatomic,readonly) BOOL backWideDualSupported;                                                //@synthesize backWideDualSupported=_backWideDualSupported - In the implementation block
@property (getter=isFrontWideDualSupported,nonatomic,readonly) BOOL frontWideDualSupported;                                              //@synthesize frontWideDualSupported=_frontWideDualSupported - In the implementation block
@property (getter=isTripleCameraSupported,nonatomic,readonly) BOOL tripleCameraSupported; 
@property (getter=isBackTripleCameraSupported,nonatomic,readonly) BOOL backTripleCameraSupported;                                        //@synthesize backTripleCameraSupported=_backTripleCameraSupported - In the implementation block
@property (getter=isFrontTripleCameraSupported,nonatomic,readonly) BOOL frontTripleCameraSupported;                                      //@synthesize frontTripleCameraSupported=_frontTripleCameraSupported - In the implementation block
@property (nonatomic,readonly) double telephotoDisplayZoomFactor;                                                                        //@synthesize telephotoDisplayZoomFactor=_telephotoDisplayZoomFactor - In the implementation block
@property (getter=isBackPearlSupported,nonatomic,readonly) BOOL backPearlSupported;                                                      //@synthesize backPearlSupported=_backPearlSupported - In the implementation block
@property (getter=isFrontPearlSupported,nonatomic,readonly) BOOL frontPearlSupported;                                                    //@synthesize frontPearlSupported=_frontPearlSupported - In the implementation block
@property (getter=isTimeOfFlightSupported,nonatomic,readonly) BOOL timeOfFlightSupported; 
@property (getter=isBackTimeOfFlightSupported,nonatomic,readonly) BOOL backTimeOfFlightSupported;                                        //@synthesize backTimeOfFlightSupported=_backTimeOfFlightSupported - In the implementation block
@property (getter=isFrontTimeOfFlightSupported,nonatomic,readonly) BOOL frontTimeOfFlightSupported;                                      //@synthesize frontTimeOfFlightSupported=_frontTimeOfFlightSupported - In the implementation block
@property (getter=isDepthEffectApertureSupported,nonatomic,readonly) BOOL depthEffectApertureSupported;                                  //@synthesize depthEffectApertureSupported=_depthEffectApertureSupported - In the implementation block
@property (getter=isPortraitEffectIntensitySupported,nonatomic,readonly) BOOL portraitEffectIntensitySupported;                          //@synthesize portraitEffectIntensitySupported=_portraitEffectIntensitySupported - In the implementation block
@property (nonatomic,readonly) double minimumPortraitEffectIntensity; 
@property (nonatomic,readonly) double maximumPortraitEffectIntensity; 
@property (nonatomic,readonly) double defaultPortraitEffectIntensity; 
@property (getter=isNeuralEngineSupported,nonatomic,readonly) BOOL neuralEngineSupported;                                                //@synthesize neuralEngineSupported=_neuralEngineSupported - In the implementation block
@property (nonatomic,readonly) BOOL semanticDevelopmentSupported;                                                                        //@synthesize semanticDevelopmentSupported=_semanticDevelopmentSupported - In the implementation block
@property (nonatomic,readonly) BOOL enableSemanticDevelopmentFilterDebugging;                                                            //@synthesize enableSemanticDevelopmentFilterDebugging=_enableSemanticDevelopmentFilterDebugging - In the implementation block
@property (nonatomic,readonly) long long hostProcess;                                                                                    //@synthesize hostProcess=_hostProcess - In the implementation block
@property (getter=isInternalInstall,nonatomic,readonly) BOOL internalInstall;                                                            //@synthesize internalInstall=_internalInstall - In the implementation block
@property (getter=isLockButtonAppropriateForShutter,nonatomic,readonly) BOOL lockButtonAppropriateForShutter;                            //@synthesize lockButtonAppropriateForShutter=_lockButtonAppropriateForShutter - In the implementation block
@property (getter=isLowEndHardware,nonatomic,readonly) BOOL lowEndHardware;                                                              //@synthesize lowEndHardware=_lowEndHardware - In the implementation block
@property (nonatomic,readonly) BOOL allowHaptics;                                                                                        //@synthesize allowHaptics=_allowHaptics - In the implementation block
@property (nonatomic,readonly) BOOL allowHapticsOnConfigurationTaps;                                                                     //@synthesize allowHapticsOnConfigurationTaps=_allowHapticsOnConfigurationTaps - In the implementation block
@property (getter=isShotBufferSupported,nonatomic,readonly) BOOL shotBufferSupported;                                                    //@synthesize shotBufferSupported=_shotBufferSupported - In the implementation block
@property (getter=isExposureSliderSupported,nonatomic,readonly) BOOL exposureSliderSupported;                                            //@synthesize exposureSliderSupported=_exposureSliderSupported - In the implementation block
+(id)capabilities;
-(BOOL)isSpatialOverCaptureSupported;
-(BOOL)isBack720p240Supported;
-(BOOL)isTripleCameraSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isBack4k24VideoSupported;
-(BOOL)featureDevelopmentEmulateSuperWide;
-(BOOL)isBackFlashSupported;
-(BOOL)isFrontTorchPatternSupported;
-(BOOL)isTripleCameraSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)isSupportedVideoConfiguration:(long long)arg1 forMode:(long long)arg2 device:(long long)arg3 ;
-(BOOL)isHDR10BitVideoSupported;
-(double)_forcedInitialZoomDisplayFactor;
-(double)_frontTripleCameraVideoModeMaximumZoomFactor;
-(BOOL)zoomControlSupported;
-(BOOL)isExposureClippingIndicatorSupportedForMode:(long long)arg1 videoConfiguration:(long long)arg2 ;
-(BOOL)isTapAndBiasSupportedForMode:(long long)arg1 ;
-(double)_backVideoModeMaximumZoomFactor;
-(BOOL)isSpatialOverCaptureSupportedForCTMCaptureType:(long long)arg1 ;
-(long long)hostProcess;
-(BOOL)isAutoFPSVideoSupportedForMode:(long long)arg1 videoConfiguration:(long long)arg2 ;
-(double)_backTripleCameraVideoModeMaximumZoomFactor;
-(BOOL)isLivePhotoSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)isModernHDRSupported;
-(CGSize)tripleCameraSwitchOverZoomFactorsForDevicePosition:(long long)arg1 ;
-(BOOL)isCameraSupportedForDevice:(long long)arg1 ;
-(BOOL)isFrontSpatialOverCaptureSupported;
-(BOOL)isBackLowLightSupported;
-(double)_frontTripleCameraPhotoModeMaximumZoomFactor;
-(BOOL)isAutoLowLightVideoSupportedForMode:(long long)arg1 videoConfiguration:(long long)arg2 ;
-(BOOL)isTorchSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)isDualSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isTimeOfFlightSupported;
-(BOOL)isSmartHDRSupported;
-(BOOL)isSemanticDevelopmentSupportedForMode:(long long)arg1 ;
-(double)wideDisplayZoomFactor;
-(BOOL)isFront4k60VideoSupported;
-(BOOL)isFlashSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 ;
-(BOOL)isFrontFlashSupported;
-(BOOL)isBackTimeOfFlightSupported;
-(long long)sanitizeDesiredDevice:(long long)arg1 forMode:(long long)arg2 ;
-(BOOL)isLowLightSupported;
-(BOOL)isSpatialOverCapturePreviewSupportedForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)forceAllowAllInterfaceOrientations;
-(BOOL)isBackPearlSupported;
-(BOOL)isStereoAudioRecordingSupportedForMode:(long long)arg1 ;
-(BOOL)isVariableFramerateVideoSupported;
-(BOOL)useCTMModeSelector;
-(double)dualCameraSwitchOverZoomFactorForDevicePosition:(long long)arg1 ;
-(BOOL)allowControlDrawer;
-(BOOL)isBackTorchSupported;
-(double)_frontPhotoModeMaximumZoomFactor;
-(BOOL)isPearlSupportedForDevicePosition:(long long)arg1 ;
-(double)defaultPortraitEffectIntensity;
-(double)maximumPortraitEffectIntensity;
-(BOOL)isWideSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isPortraitModeSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)_isTripleCamera1080p60Supported;
-(BOOL)isSpatialOverCaptureSupportedForDevice:(long long)arg1 ;
-(double)_frontWideDualCameraSwitchOverZoomFactor;
-(BOOL)allowCaptureWhileViewfinderIsOpeningForMode:(long long)arg1 devicePosition:(long long)arg2 ;
-(BOOL)interactiveVideoFormatControlSupported;
-(BOOL)isFrontSmartHDRSupported;
-(BOOL)isTorchPatternSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)isFrontLowLightSupported;
-(long long)back1080pMaxFPS;
-(BOOL)_shouldUseTripleCameraForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isBackLivePhotoSupported;
-(double)captureIntervalForDevice:(long long)arg1 ;
-(BOOL)isShotBufferSupported;
-(BOOL)hasSystemTelephonyOfAnyKind;
-(BOOL)isCTMVideoCaptureSupportedForMode:(long long)arg1 ;
-(BOOL)isResponsiveShutterSupportedForMode:(long long)arg1 ;
-(BOOL)isBackLiveStageLightSupported;
-(BOOL)featureDevelopmentForceSingleCamera;
-(double)_backDualVideoModeMaximumZoomFactor;
-(BOOL)isPortraitEffectIntensitySupportedForLightingType:(long long)arg1 ;
-(BOOL)isCTMSupported;
-(double)maximumZoomFactorForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 shouldResolveDevice:(BOOL)arg4 ;
-(BOOL)isVideoSupported;
-(long long)_forcedBackCamera;
-(BOOL)isBackWideDualSupported;
-(double)_backDualPhotoModeMaximumZoomFactor;
-(BOOL)isLowLightSupportedForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)isNaturalLightingAppliedToOriginal;
-(BOOL)isFrontPearlSupported;
-(BOOL)isPanoramaSupportedForDevice:(long long)arg1 ;
-(BOOL)isFront1080p120Supported;
-(BOOL)isAspectRatioCropSupportedForMode:(long long)arg1 ;
-(BOOL)isBurstSupportedForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)isExposureSliderSupported;
-(BOOL)isBackPortraitModeSupported;
-(BOOL)isLivePhotoSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 ;
-(double)wideToTelephotoZoomFactorForDevicePosition:(long long)arg1 ;
-(BOOL)isPipelinedStillImageProcessingSupported;
-(BOOL)isSingleCameraPortraitModeSupportedForDevicePosition:(long long)arg1 ;
-(UIColor *)backLowLightPreviewOverlayColor;
-(BOOL)isFrontBurstSupported;
-(double)minimumPortraitEffectIntensity;
-(BOOL)allowHapticsOnConfigurationTaps;
-(BOOL)isWideDualSupported;
-(long long)back720pMaxFPS;
-(double)defaultZoomFactorForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 captureOrientation:(long long)arg4 ;
-(BOOL)isFrontTelephotoSupported;
-(BOOL)isHEVCEncodingSupported;
-(BOOL)useReticleStroke;
-(BOOL)isFrontCameraSupported;
-(BOOL)isFrontTimelapseSupported;
-(BOOL)isFrontTorchSupported;
-(BOOL)isPreviewDuringHDRSupported;
-(BOOL)isStereoAudioRecordingSupported;
-(double)telephotoDisplayZoomFactor;
-(BOOL)enableSemanticDevelopmentFilterDebugging;
-(double)_doubleForKey:(id)arg1 applicationID:(id)arg2 ;
-(BOOL)isSuperWideSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)isDualSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)isTelephotoSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)isFrontLiveStageLightSupported;
-(BOOL)isBackSpatialOverCaptureSupported;
-(BOOL)isSquareModeSupported;
-(BOOL)isZoomAllowedForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)_backStageLightPortaitEffectsSupported;
-(BOOL)isBackTelephotoSupported;
-(BOOL)isFrontSlomoSupported;
-(BOOL)isSpatialOverCaptureSupportedForMode:(long long)arg1 device:(long long)arg2 ctmCaptureType:(long long)arg3 photoEncodingBehavior:(long long)arg4 ;
-(BOOL)isFrontLivePhotoSupported;
-(BOOL)imagePickerUsesModernLayout;
-(BOOL)isWideSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)isHDRSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)mirroredFrontCapturesSupportedForMode:(long long)arg1 ;
-(BOOL)isLivePhotoSupported;
-(unsigned long long)backLowLightPreviewOverlayStyle;
-(BOOL)isHDR10BitVideoSupportedForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2 ;
-(double)_frontDualVideoModeMaximumZoomFactor;
-(BOOL)deviceSupportsCTM;
-(BOOL)isLiveFilteringSupported;
-(BOOL)isTelephotoSupported;
-(long long)resolvedDeviceForDesiredDevice:(long long)arg1 mode:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isAspectRatioCropSupported;
-(BOOL)is1080p60VideoSupportedForDevice:(long long)arg1 ;
-(BOOL)isFlashOrTorchSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 ;
-(long long)front1080pMaxFPS;
-(BOOL)isHDROnSupportedForDevicePosition:(long long)arg1 ;
-(unsigned long long)frontLowLightPreviewOverlayStyle;
-(BOOL)isSuperWideSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isLowEndHardware;
-(BOOL)isBackSmartHDRSupported;
-(BOOL)isDepthEffectApertureSupported;
-(BOOL)isBackPanoramaSupported;
-(BOOL)hasFilteringEntitlement;
-(BOOL)isPortraitModeSupportedForDevice:(long long)arg1 ;
-(long long)maximumNumberOfInflightRequests;
-(BOOL)semanticDevelopmentSupported;
-(BOOL)isSplitScreenSupported;
-(double)superWideToWideZoomFactorForDevicePosition:(long long)arg1 ;
-(BOOL)overContentFlipButtonSupported;
-(BOOL)isSlomoSupportedForDevice:(long long)arg1 ;
-(BOOL)isFrontAutomaticHDRSupported;
-(BOOL)_frontStageLightPortaitEffectsSupported;
-(UIColor *)frontLowLightPreviewOverlayColor;
-(BOOL)isLivePhotoAutoModeSupported;
-(BOOL)isHDR10BitVideoSupports60FPS;
-(double)maximumZoomFactorForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isCameraSupportedForDevicePosition:(long long)arg1 ;
-(long long)front720pMaxFPS;
-(BOOL)isSmartHDRSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 ;
-(BOOL)isBackSingleCameraPortraitModeSupported;
-(BOOL)arePortraitEffectsSupported;
-(BOOL)is4k30VideoSupportedForDevice:(long long)arg1 ;
-(BOOL)isFrontPanoramaSupported;
-(BOOL)captureOnTouchDown;
-(BOOL)useCTMTransientImageWell;
-(BOOL)isHDR10BitVideoSupportedForMode:(long long)arg1 ;
-(double)minimumDepthEffectApertureForDevicePosition:(long long)arg1 ;
-(BOOL)isFront4k24VideoSupported;
-(BOOL)isFront4k30VideoSupported;
-(double)_backWideDualCameraSwitchOverZoomFactor;
-(BOOL)isBackSuperWideSupported;
-(BOOL)isTimelapseSupportedForDevice:(long long)arg1 ;
-(id)initWithHostProcess:(long long)arg1 ;
-(double)_frontVideoModeMaximumZoomFactor;
-(BOOL)responsiveShutterSupported;
-(BOOL)isBackAutomaticHDRSupported;
-(BOOL)isAutomaticHDRSupportedForDevicePosition:(long long)arg1 ;
-(double)_backPhotoModeMaximumZoomFactor;
-(BOOL)isTorchSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 ;
-(double)defaultDepthEffectApertureForDevice:(long long)arg1 ;
-(BOOL)_isVariableFramerateVideoSupportedForResolvedVideoConfiguration:(long long)arg1 ;
-(BOOL)isBackHDRSupported;
-(BOOL)isBack4k30VideoSupported;
-(long long)zoomDialStyle;
-(BOOL)isHDRSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 ;
-(BOOL)isFrontHDROnSupported;
-(BOOL)isSuperWideSupported;
-(BOOL)isInternalInstall;
-(BOOL)isFrontTimeOfFlightSupported;
-(double)_backCaptureInterval;
-(double)_backDualCameraSwitchOverZoomFactor;
-(BOOL)isExposureSliderSupportedForMode:(long long)arg1 ;
-(BOOL)isDeferredPortraitRenderingSupported;
-(BOOL)isBackBurstSupported;
-(BOOL)isFrontTripleCameraSupported;
-(BOOL)isAutoLowLightVideoSupported;
-(long long)resolvedVideoConfigurationForMode:(long long)arg1 device:(long long)arg2 videoEncodingBehavior:(long long)arg3 videoConfiguration:(long long)arg4 ;
-(BOOL)isFrontSuperWideSupported;
-(BOOL)isFlashSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)isFrontDualSupported;
-(BOOL)_forceEnableExposureClippingIndicator;
-(BOOL)is4k24VideoSupportedForDevice:(long long)arg1 ;
-(BOOL)isSupportedVideoConfiguration:(long long)arg1 forVideoEncodingBehavior:(long long)arg2 ;
-(BOOL)isPearlSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 ;
-(BOOL)isPortraitEffectIntensitySupported;
-(BOOL)isFront1080p240Supported;
-(BOOL)isHDREV0CaptureSupported;
-(BOOL)_isSpatialOverCaptureSupportedForMode:(long long)arg1 ;
-(BOOL)is4k60VideoSupportedForDevice:(long long)arg1 ;
-(BOOL)contentAwareDistortionCorrectionSupported;
-(BOOL)isTelephotoSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isTimeOfFlightSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)is1080p120SupportedForDevice:(long long)arg1 ;
-(BOOL)isDualSupported;
-(BOOL)isBack4k60VideoSupported;
-(double)superWideDisplayZoomFactor;
-(BOOL)isContentAwareDistortionCorrectionSupportedForMode:(long long)arg1 ;
-(BOOL)isFrontPortraitModeSupported;
-(long long)maximumBurstLength;
-(BOOL)isFrontHDRSupported;
-(BOOL)_forceDisableExposureClippingIndicator;
-(BOOL)isBackTimelapseSupported;
-(double)_frontDualPhotoModeMaximumZoomFactor;
-(BOOL)isFront720p240Supported;
-(BOOL)_wideDualPortraitLowLightSupported;
-(BOOL)isBackTorchPatternSupported;
-(double)_frontDualCameraSwitchOverZoomFactor;
-(BOOL)allowHaptics;
-(BOOL)isTimerSupportedForMode:(long long)arg1 ;
-(long long)supportedEffectSetForDevicePosition:(long long)arg1 ;
-(double)wideDualCameraSwitchOverZoomFactorForDevicePosition:(long long)arg1 ;
-(BOOL)is1080p240SupportedForDevice:(long long)arg1 ;
-(BOOL)is720p240SupportedForDevice:(long long)arg1 ;
-(double)_backTripleCameraPhotoModeMaximumZoomFactor;
-(BOOL)isBackTripleCameraSupported;
-(double)timelapseFirstShotDelay;
-(BOOL)isLockButtonAppropriateForShutter;
-(BOOL)isWideDualSupportedForDevicePosition:(long long)arg1 ;
-(BOOL)isBackCameraSupported;
-(double)_frontCaptureInterval;
-(long long)maximumRecordedFileSize;
-(BOOL)isDeferredProcessingSupported;
-(BOOL)isStillDuringVideoSupported;
-(BOOL)isVariableFramerateVideoSupportedForMode:(long long)arg1 videoConfiguration:(long long)arg2 ;
-(BOOL)sfCameraFontSupported;
-(BOOL)isFrontWideDualSupported;
-(BOOL)isBackDualSupported;
-(BOOL)isWideDualSupportedForMode:(long long)arg1 devicePosition:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isBack1080p240Supported;
-(BOOL)isDeepFusionSupported;
-(BOOL)isFrontSingleCameraPortraitModeSupported;
-(double)maximumDepthEffectApertureForDevicePosition:(long long)arg1 ;
-(BOOL)isSupportedMode:(long long)arg1 withDevice:(long long)arg2 ;
-(BOOL)shouldSuspendVideoHDRForHDRMode:(long long)arg1 captureMode:(long long)arg2 ;
-(BOOL)isLivePreviewSupportedForLightingType:(long long)arg1 devicePosition:(long long)arg2 ;
-(id)lowLightPreviewOverlayColorForDevicePosition:(long long)arg1 ;
-(BOOL)isBackSlomoSupported;
-(long long)supportedPortraitLightingVersion;
-(BOOL)isCTMSupportSupressed;
-(unsigned long long)lowLightPreviewOverlayStyleForDevicePosition:(long long)arg1 sensitiveToChangingDisplayFeedback:(BOOL)arg2 ;
-(BOOL)interactiveVideoFormatControlAlwaysEnabled;
-(BOOL)isTripleCameraSupported;
-(BOOL)isPortraitModeSupported;
-(long long)preferredDeviceForPosition:(long long)arg1 mode:(long long)arg2 videoConfiguration:(long long)arg3 ;
-(BOOL)isForceTouchSupported;
-(BOOL)isNeuralEngineSupported;
-(BOOL)isBack1080p120Supported;
-(BOOL)isMirroredFrontCapturesSupported;
-(BOOL)isBackHDROnSupported;
-(BOOL)shouldAllowCameraToggleForMode:(long long)arg1 devicePosition:(long long)arg2 videoConfiguration:(long long)arg3 ;
@end

