/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CAMModeDialDataSource.h>
#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMVideoCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMPanoramaCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMFacesDelegate.h>
#import <libobjc.A.dylib/CAMMachineReadableCodeDelegate.h>
#import <libobjc.A.dylib/CAMConfigurationDelegate.h>
#import <libobjc.A.dylib/CAMSuggestionDelegate.h>
#import <libobjc.A.dylib/CAMAvailabilityDelegate.h>
#import <libobjc.A.dylib/CAMBurstDelegate.h>
#import <libobjc.A.dylib/CAMTimerButtonDelegate.h>
#import <libobjc.A.dylib/CAMControlVisibilityDelegate.h>
#import <libobjc.A.dylib/CAMControlVisibilityUpdateDelegate.h>
#import <libobjc.A.dylib/CAMPreviewViewControllerDelegate.h>
#import <libobjc.A.dylib/CAMCaptureRecoveryDelegate.h>
#import <libobjc.A.dylib/CAMCaptureInterruptionDelegate.h>
#import <libobjc.A.dylib/CAMCaptureRunningDelegate.h>
#import <libobjc.A.dylib/CAMZoomDelegate.h>
#import <libobjc.A.dylib/CAMZoomSliderDelegate.h>
#import <libobjc.A.dylib/CAMTimelapseControllerDelegate.h>
#import <libobjc.A.dylib/CAMCameraRollControllerImageWellDelegate.h>
#import <libobjc.A.dylib/CAMCameraRollControllerSessionDelegate.h>
#import <libobjc.A.dylib/CAMCameraRollControllerPresentationDelegate.h>
#import <libobjc.A.dylib/CAMClosedViewfinderControllerDelegate.h>
#import <libobjc.A.dylib/CAMDisabledPreviewControllerDelegate.h>
#import <libobjc.A.dylib/CAMStillImageCapturingVideoDelegate.h>
#import <libobjc.A.dylib/CAMZoomControlDelegate.h>
#import <libobjc.A.dylib/CAMShallowDepthOfFieldStatusDelegate.h>
#import <libobjc.A.dylib/CAMPhysicalCaptureNotifierDelegate.h>
#import <libobjc.A.dylib/CEKWheelScrubberViewDelegate.h>
#import <libobjc.A.dylib/CAMVideoThumbnailContentsDelegate.h>
#import <libobjc.A.dylib/CAMBarsAccessibilityHUDManagerDelegate.h>
#import <libobjc.A.dylib/CAMDescriptionOverlayViewDelegate.h>
#import <libobjc.A.dylib/CAMShutterButtonDelegate.h>
#import <libobjc.A.dylib/CEKLightingControlDelegate.h>
#import <libobjc.A.dylib/CAMStorageControllerDelegate.h>
#import <libobjc.A.dylib/CAMFullscreenViewfinderDelegate.h>
#import <libobjc.A.dylib/CAMDynamicShutterControlDelegate.h>
#import <libobjc.A.dylib/CAMControlStatusBarDelegate.h>
#import <libobjc.A.dylib/CAMBadgeTrayDelegate.h>
#import <libobjc.A.dylib/CAMControlDrawerDelegate.h>
#import <libobjc.A.dylib/CAMFullscreenModeSelectorDataSource.h>
#import <libobjc.A.dylib/CAMFullscreenModeSelectorDelegate.h>
#import <libobjc.A.dylib/CAMPreviewLayerOverCaptureStatusDelegate.h>
#import <libobjc.A.dylib/CAMDynamicShutterControlAGGDDelegate.h>
#import <libobjc.A.dylib/CAMVideoConfigurationStatusIndicatorDelegate.h>
#import <libobjc.A.dylib/CAMHistogramDelegate.h>
#import <libobjc.A.dylib/CAMRemoteShutterDelegate.h>

@protocol CAMViewfinderReviewButtonSource, CAMCreativeCameraDelegate, CAMCameraConfigurationDelegate;
@class CUCaptureController, CAMPreviewViewController, CAMPanoramaViewController, CAMCameraRollController, CAMIdleController, CAMClosedViewfinderController, CAMDisabledPreviewController, BCSAVParsingSession, CAMMachineReadableCodeLoggingController, CAMCallStatusMonitor, CAMLocationController, CAMMotionController, CAMTimelapseController, CAMRemoteShutterController, CAMKeepAliveController, CAMPowerController, CAMStorageController, CAMAnalyticsCaptureEvent, CAMCaptureGraphConfiguration, NSMutableDictionary, CAMMomentCaptureSettings, CAMViewfinderTransitionController, CAMTopBar, CAMBottomBar, CAMFlashButton, CAMFlashBadge, CAMHDRButton, CAMHDRBadge, CAMTimerButton, CAMLivePhotoButton, CAMFlipButton, CAMFocusLockBadge, UIButton, CAMCreativeCameraButton, CAMMessagesPhotosButton, PUReviewScreenDoneButton, CAMFilterNameBadge, CAMLivePhotoBadge, CAMElapsedTimeView, CAMShallowDepthOfFieldBadge, CAMPortraitModeInstructionLabel, CAMQRCodeInstructionLabel, CAMPortraitModeDescriptionOverlayView, CAMCTMDescriptionOverlayView, CAMMetalContext, CUShutterButton, CAMDynamicShutterControl, CAMModeDial, CAMImageWell, CAMFilterButton, CEKApertureButton, CAMIntensityButton, CAMBurstIndicatorView, CAMTimerIndicatorView, CAMZoomSlider, CAMZoomControl, CAMGridView, CAMLevelIndicatorView, CAMLevelViewModel, CAMUtilityBar, CEKWheelScrubberView, CEKApertureSlider, CEKSlider, CEKLightingControl, CEKLightingNameBadge, CAMVideoConfigurationStatusIndicator, UIView, UISwipeGestureRecognizer, CAMPhysicalCaptureRecognizer, UIPinchGestureRecognizer, UIPanGestureRecognizer, CAMPhysicalCaptureNotifier, CAMPreciseTimer, CAMAnimationDelegate, NSDate, CAMTorchPatternController, UIAlertController, CAMDisabledModeOverlayView, NSMutableSet, NSMutableArray, CAMFeedbackController, NSArray, NSSet, CAMControlDrawer, CAMFullscreenViewfinder, UIControl, NSString;

@interface CAMViewfinderViewController : UIViewController <UIGestureRecognizerDelegate, CAMModeDialDataSource, CAMStillImageCaptureRequestDelegate, CAMVideoCaptureRequestDelegate, CAMPanoramaCaptureRequestDelegate, CAMFacesDelegate, CAMMachineReadableCodeDelegate, CAMConfigurationDelegate, CAMSuggestionDelegate, CAMAvailabilityDelegate, CAMBurstDelegate, CAMTimerButtonDelegate, CAMControlVisibilityDelegate, CAMControlVisibilityUpdateDelegate, CAMPreviewViewControllerDelegate, CAMCaptureRecoveryDelegate, CAMCaptureInterruptionDelegate, CAMCaptureRunningDelegate, CAMZoomDelegate, CAMZoomSliderDelegate, CAMTimelapseControllerDelegate, CAMCameraRollControllerImageWellDelegate, CAMCameraRollControllerSessionDelegate, CAMCameraRollControllerPresentationDelegate, CAMClosedViewfinderControllerDelegate, CAMDisabledPreviewControllerDelegate, CAMStillImageCapturingVideoDelegate, CAMZoomControlDelegate, CAMShallowDepthOfFieldStatusDelegate, CAMPhysicalCaptureNotifierDelegate, CEKWheelScrubberViewDelegate, CAMVideoThumbnailContentsDelegate, CAMBarsAccessibilityHUDManagerDelegate, CAMDescriptionOverlayViewDelegate, CAMShutterButtonDelegate, CEKLightingControlDelegate, CAMStorageControllerDelegate, CAMFullscreenViewfinderDelegate, CAMDynamicShutterControlDelegate, CAMControlStatusBarDelegate, CAMBadgeTrayDelegate, CAMControlDrawerDelegate, CAMFullscreenModeSelectorDataSource, CAMFullscreenModeSelectorDelegate, CAMPreviewLayerOverCaptureStatusDelegate, CAMDynamicShutterControlAGGDDelegate, CAMVideoConfigurationStatusIndicatorDelegate, CAMHistogramDelegate, CAMRemoteShutterDelegate> {

	struct {
		BOOL respondsToWillBeginConfiguration;
		BOOL respondsToDidCompleteConfiguration;
	}  _configurationDelegateFlags;
	BOOL __openingViewfinder;
	BOOL __closingViewfinder;
	BOOL __reconfiguring;
	BOOL __reconfiguringForTripleCameraEmulation;
	BOOL __lowLightCaptureUIVisible;
	BOOL __currentLowLightCaptureCancelable;
	BOOL __useCreativeCameraControls;
	BOOL __proactiveFlashSuggestionSuppressed;
	BOOL __capturingFromPhysicalButton;
	BOOL __shouldIgnoreZoomFactorKVOForRamping;
	BOOL __capturingFromTimer;
	BOOL __burstEndSoundPlaying;
	BOOL __resetTimerDurationAfterDelayedCapture;
	BOOL __outOfDiskSpace;
	BOOL __performingTopBarOrientationChange;
	BOOL __flashingLivePhotoBadge;
	BOOL __wantsFilterScrubberVisible;
	BOOL __shouldShowFilterScrubberAfterNextRender;
	BOOL __showingFilterScrubber;
	BOOL __showingPortraitApertureSlider;
	BOOL __showingPortraitIntensitySlider;
	BOOL __animatingFilterScrubberDismissal;
	BOOL __modeDisabledForMultitasking;
	BOOL __lastMRCResultsCount;
	BOOL _userInteractionLoggingEnabled;
	BOOL _automaticallyAdjustsAvailableCaptureModes;
	BOOL _automaticallyAdjustsAutorotationStyle;
	BOOL _automaticallyAdjustsApplicationIdleTimer;
	BOOL _performingTileTransition;
	BOOL _disablingMultipleCaptureFeatures;
	BOOL _disablingAdditionalCaptures;
	BOOL _preventingAdditionalCaptures;
	BOOL _showingStandardControls;
	BOOL _performingReviewUsingOverlay;
	int __lastConfigurationRequestID;
	long long _photoModeAspectRatioCrop;
	long long _configuredCaptureMode;
	long long _configuredCaptureDevice;
	id<CAMViewfinderReviewButtonSource> _reviewButtonSource;
	id<CAMCreativeCameraDelegate> _creativeCameraDelegate;
	CUCaptureController* __captureController;
	CAMPreviewViewController* __previewViewController;
	CAMPanoramaViewController* __panoramaViewController;
	CAMCameraRollController* __cameraRollController;
	CAMIdleController* __idleController;
	CAMClosedViewfinderController* __closedViewfinderController;
	CAMDisabledPreviewController* __disabledPreviewController;
	BCSAVParsingSession* __barcodeParsingSession;
	CAMMachineReadableCodeLoggingController* __machineReadableCodeLoggingController;
	CAMCallStatusMonitor* __callStatusMonitor;
	CAMLocationController* __locationController;
	CAMMotionController* __motionController;
	CAMTimelapseController* __timelapseController;
	CAMRemoteShutterController* __remoteShutterController;
	CAMKeepAliveController* __keepAliveController;
	CAMPowerController* __powerController;
	CAMStorageController* __storageController;
	CAMAnalyticsCaptureEvent* __timelapseAnalyticsEvent;
	CAMCaptureGraphConfiguration* __currentGraphConfiguration;
	long long __videoConfigurationOverride;
	long long __slomoConfigurationOverride;
	CAMCaptureGraphConfiguration* __configuredGraphConfiguration;
	long long __resolvedFlashMode;
	long long __resolvedHDRMode;
	long long __resolvedLivePhotoMode;
	long long __resolvedTorchMode;
	long long __desiredFlashMode;
	long long __desiredHDRMode;
	long long __desiredLivePhotoMode;
	long long __desiredTorchMode;
	unsigned long long __desiredLowLightControlMode;
	unsigned long long __resolvedLowLightControlMode;
	long long __resolvedLowLightMode;
	unsigned long long __lowLightConflicts;
	long long __resolvedTimerDuration;
	long long __photoModeEffectFilterType;
	long long __squareModeEffectFilterType;
	long long __portraitModeEffectFilterType;
	long long __portraitModeLightingEffectType;
	double __portraitModeApertureValue;
	double __portraitModeIntensityValue;
	NSMutableDictionary* __exposureBiasesByMode;
	double __shadowClippingValue;
	double __highlightClippingValue;
	CAMMomentCaptureSettings* __currentStillImageCaptureMomentSettings;
	long long __homeIndicatorAutoHideOrientation;
	long long __internalAutorotationStyle;
	long long __layoutStyle;
	CAMViewfinderTransitionController* __transitionController;
	CAMTopBar* __topBar;
	CAMBottomBar* __bottomBar;
	CAMFlashButton* __flashButton;
	CAMFlashBadge* __flashBadge;
	CAMHDRButton* __HDRButton;
	CAMHDRBadge* __HDRBadge;
	CAMTimerButton* __timerButton;
	CAMLivePhotoButton* __livePhotoButton;
	CAMFlipButton* __flipButton;
	CAMFocusLockBadge* __focusAndExposureLockBadge;
	UIButton* __reviewButton;
	CAMCreativeCameraButton* __creativeCameraButton;
	CAMMessagesPhotosButton* __photosButton;
	PUReviewScreenDoneButton* __doneButton;
	CAMFilterNameBadge* __filterNameBadge;
	CAMLivePhotoBadge* __livePhotoBadge;
	CAMElapsedTimeView* __elapsedTimeView;
	long long __shallowDepthOfFieldStatus;
	long long __stagePreviewStatus;
	CAMShallowDepthOfFieldBadge* __shallowDepthOfFieldBadge;
	CAMPortraitModeInstructionLabel* __portraitModeInstructionLabel;
	CAMQRCodeInstructionLabel* __qrCodeInstructionLabel;
	CAMPortraitModeDescriptionOverlayView* __portraitModeDescriptionOverlayView;
	CAMCTMDescriptionOverlayView* __ctmDescriptionOverlayView;
	CAMMetalContext* __metalContext;
	CUShutterButton* __shutterButton;
	CAMDynamicShutterControl* __dynamicShutterControl;
	CUShutterButton* __stillDuringVideoButton;
	CAMModeDial* __modeDial;
	CAMImageWell* __imageWell;
	CAMFilterButton* __filterButton;
	CEKApertureButton* __apertureButton;
	CAMIntensityButton* __intensityButton;
	CAMBurstIndicatorView* __burstIndicatorView;
	CAMTimerIndicatorView* __timerIndicatorView;
	CAMZoomSlider* __zoomSlider;
	CAMZoomControl* __zoomControl;
	CAMGridView* __gridView;
	CAMLevelIndicatorView* __levelView;
	CAMLevelViewModel* __levelViewModel;
	CAMUtilityBar* __utilityBar;
	CEKWheelScrubberView* __filterScrubberView;
	CEKApertureSlider* __portraitApertureSlider;
	CEKSlider* __portraitIntensitySlider;
	CEKLightingControl* __lightingControl;
	CEKLightingNameBadge* __lightingNameBadge;
	CAMVideoConfigurationStatusIndicator* __videoConfigurationStatusIndicator;
	UIView* __captureAnimationPreviewOverlay;
	long long __flashAndHDRConflictingControl;
	UISwipeGestureRecognizer* __previousModeGestureRecognizer;
	UISwipeGestureRecognizer* __nextModeGestureRecognizer;
	CAMPhysicalCaptureRecognizer* __physicalCaptureRecognizer;
	UIPinchGestureRecognizer* __zoomPinchGestureRecognizer;
	UIPanGestureRecognizer* __cameraRollSwipeUpGestureRecognizer;
	UISwipeGestureRecognizer* __swipeDownGestureRecognizer;
	UISwipeGestureRecognizer* __swipeUpGestureRecognizer;
	UISwipeGestureRecognizer* __previousFilterGestureRecognizer;
	UISwipeGestureRecognizer* __nextFilterGestureRecognizer;
	CAMPhysicalCaptureNotifier* __physicalCaptureNotifier;
	double __cachedVideoZoomFactor;
	double __videoZoomFactorAtPinchStart;
	CAMPreciseTimer* __currentBurstTimer;
	CAMAnimationDelegate* __synchronizedCaptureTimerDelegate;
	unsigned long long __remainingCaptureTimerTicks;
	NSDate* __lastTimerIndicatorFaceUpdateDate;
	CAMTorchPatternController* __torchPatternController;
	unsigned long long __lastShutterButtonTouchDownTime;
	UIAlertController* __diskSpaceAlertController;
	UIAlertController* __flashOrTorchUnavailableAlertController;
	long long __overCapturePreviewStatus;
	CAMDisabledModeOverlayView* __disabledModeOverlayView;
	NSMutableSet* __filterNamesSelectedBeforeCapture;
	long long __lastZoomInteractionType;
	NSMutableArray* __accessibilityHUDManagers;
	CAMFeedbackController* __feedbackController;
	unsigned long long __lastPerformedShutterButtonFeedbackType;
	id __filterScrubberLayerContents;
	NSArray* __filterTypes;
	NSSet* _availableCaptureModes;
	id<CAMCameraConfigurationDelegate> _configurationDelegate;
	unsigned long long _persistenceBehavior;
	long long _messagesTransitionState;
	long long _emulationMode;
	long long _imagePickerVideoConfiguration;
	double _maximumVideoRecordingDuration;
	UIView* _customOverlayView;
	CGSize __lowLightDurationMapping;
	CGAffineTransform _customPreviewViewTransform;

}

@property (nonatomic,readonly) CUCaptureController * _captureController;                                                                                                                 //@synthesize _captureController=__captureController - In the implementation block
@property (nonatomic,readonly) CAMPreviewViewController * _previewViewController;                                                                                                        //@synthesize _previewViewController=__previewViewController - In the implementation block
@property (nonatomic,readonly) CAMPanoramaViewController * _panoramaViewController;                                                                                                      //@synthesize _panoramaViewController=__panoramaViewController - In the implementation block
@property (nonatomic,readonly) CAMCameraRollController * _cameraRollController;                                                                                                          //@synthesize _cameraRollController=__cameraRollController - In the implementation block
@property (nonatomic,readonly) CAMIdleController * _idleController;                                                                                                                      //@synthesize _idleController=__idleController - In the implementation block
@property (nonatomic,readonly) CAMClosedViewfinderController * _closedViewfinderController;                                                                                              //@synthesize _closedViewfinderController=__closedViewfinderController - In the implementation block
@property (nonatomic,readonly) CAMDisabledPreviewController * _disabledPreviewController;                                                                                                //@synthesize _disabledPreviewController=__disabledPreviewController - In the implementation block
@property (setter=_setBarcodeParsingSession:,nonatomic,retain) BCSAVParsingSession * _barcodeParsingSession;                                                                             //@synthesize _barcodeParsingSession=__barcodeParsingSession - In the implementation block
@property (nonatomic,readonly) CAMMachineReadableCodeLoggingController * _machineReadableCodeLoggingController;                                                                          //@synthesize _machineReadableCodeLoggingController=__machineReadableCodeLoggingController - In the implementation block
@property (nonatomic,readonly) CAMCallStatusMonitor * _callStatusMonitor;                                                                                                                //@synthesize _callStatusMonitor=__callStatusMonitor - In the implementation block
@property (assign,setter=_setOpeningViewfinder:,getter=_isOpeningViewfinder,nonatomic) BOOL _openingViewfinder;                                                                          //@synthesize _openingViewfinder=__openingViewfinder - In the implementation block
@property (assign,setter=_setClosingViewfinder:,getter=_isClosingViewfinder,nonatomic) BOOL _closingViewfinder;                                                                          //@synthesize _closingViewfinder=__closingViewfinder - In the implementation block
@property (nonatomic,readonly) CAMLocationController * _locationController;                                                                                                              //@synthesize _locationController=__locationController - In the implementation block
@property (nonatomic,readonly) CAMMotionController * _motionController;                                                                                                                  //@synthesize _motionController=__motionController - In the implementation block
@property (nonatomic,readonly) CAMTimelapseController * _timelapseController;                                                                                                            //@synthesize _timelapseController=__timelapseController - In the implementation block
@property (nonatomic,readonly) CAMRemoteShutterController * _remoteShutterController;                                                                                                    //@synthesize _remoteShutterController=__remoteShutterController - In the implementation block
@property (nonatomic,readonly) CAMKeepAliveController * _keepAliveController;                                                                                                            //@synthesize _keepAliveController=__keepAliveController - In the implementation block
@property (nonatomic,readonly) CAMPowerController * _powerController;                                                                                                                    //@synthesize _powerController=__powerController - In the implementation block
@property (nonatomic,readonly) CAMStorageController * _storageController;                                                                                                                //@synthesize _storageController=__storageController - In the implementation block
@property (nonatomic,retain) CAMAnalyticsCaptureEvent * _timelapseAnalyticsEvent;                                                                                                        //@synthesize _timelapseAnalyticsEvent=__timelapseAnalyticsEvent - In the implementation block
@property (setter=_setCurrentGraphConfiguration:,nonatomic,retain) CAMCaptureGraphConfiguration * _currentGraphConfiguration;                                                            //@synthesize _currentGraphConfiguration=__currentGraphConfiguration - In the implementation block
@property (nonatomic,readonly) long long _currentMode; 
@property (nonatomic,readonly) long long _currentDevice; 
@property (nonatomic,readonly) long long _currentDevicePosition; 
@property (nonatomic,readonly) long long _currentVideoConfiguration; 
@property (assign,nonatomic) long long _videoConfigurationOverride;                                                                                                                      //@synthesize _videoConfigurationOverride=__videoConfigurationOverride - In the implementation block
@property (assign,nonatomic) long long _slomoConfigurationOverride;                                                                                                                      //@synthesize _slomoConfigurationOverride=__slomoConfigurationOverride - In the implementation block
@property (setter=_setConfiguredGraphConfiguration:,nonatomic,retain) CAMCaptureGraphConfiguration * _configuredGraphConfiguration;                                                      //@synthesize _configuredGraphConfiguration=__configuredGraphConfiguration - In the implementation block
@property (nonatomic,readonly) long long _configuredMode; 
@property (nonatomic,readonly) long long _configuredDevice; 
@property (assign,setter=_setReconfiguring:,getter=_isReconfiguring,nonatomic) BOOL _reconfiguring;                                                                                      //@synthesize _reconfiguring=__reconfiguring - In the implementation block
@property (assign,setter=_setReconfiguringForTripleCameraEmulation:,getter=_isReconfiguringForTripleCameraEmulation,nonatomic) BOOL _reconfiguringForTripleCameraEmulation;              //@synthesize _reconfiguringForTripleCameraEmulation=__reconfiguringForTripleCameraEmulation - In the implementation block
@property (assign,setter=_setResolvedFlashMode:,nonatomic) long long _resolvedFlashMode;                                                                                                 //@synthesize _resolvedFlashMode=__resolvedFlashMode - In the implementation block
@property (assign,setter=_setResolvedHDRMode:,nonatomic) long long _resolvedHDRMode;                                                                                                     //@synthesize _resolvedHDRMode=__resolvedHDRMode - In the implementation block
@property (assign,setter=_setResolvedLivePhotoMode:,nonatomic) long long _resolvedLivePhotoMode;                                                                                         //@synthesize _resolvedLivePhotoMode=__resolvedLivePhotoMode - In the implementation block
@property (assign,setter=_setResolvedTorchMode:,nonatomic) long long _resolvedTorchMode;                                                                                                 //@synthesize _resolvedTorchMode=__resolvedTorchMode - In the implementation block
@property (assign,setter=_setDesiredFlashMode:,nonatomic) long long _desiredFlashMode;                                                                                                   //@synthesize _desiredFlashMode=__desiredFlashMode - In the implementation block
@property (assign,setter=_setDesiredHDRMode:,nonatomic) long long _desiredHDRMode;                                                                                                       //@synthesize _desiredHDRMode=__desiredHDRMode - In the implementation block
@property (assign,setter=_setDesiredLivePhotoMode:,nonatomic) long long _desiredLivePhotoMode;                                                                                           //@synthesize _desiredLivePhotoMode=__desiredLivePhotoMode - In the implementation block
@property (assign,setter=_setDesiredTorchMode:,nonatomic) long long _desiredTorchMode;                                                                                                   //@synthesize _desiredTorchMode=__desiredTorchMode - In the implementation block
@property (assign,setter=_setDesiredLowLightControlMode:,nonatomic) unsigned long long _desiredLowLightControlMode;                                                                      //@synthesize _desiredLowLightControlMode=__desiredLowLightControlMode - In the implementation block
@property (assign,setter=_setResolvedLowLightControlMode:,nonatomic) unsigned long long _resolvedLowLightControlMode;                                                                    //@synthesize _resolvedLowLightControlMode=__resolvedLowLightControlMode - In the implementation block
@property (assign,setter=_setResolvedLowLightMode:,nonatomic) long long _resolvedLowLightMode;                                                                                           //@synthesize _resolvedLowLightMode=__resolvedLowLightMode - In the implementation block
@property (assign,setter=_setLowLightDurationMapping:,nonatomic) CGSize _lowLightDurationMapping;                                                                                        //@synthesize _lowLightDurationMapping=__lowLightDurationMapping - In the implementation block
@property (assign,setter=_setLowLightConflicts:,nonatomic) unsigned long long _lowLightConflicts;                                                                                        //@synthesize _lowLightConflicts=__lowLightConflicts - In the implementation block
@property (assign,setter=_setLowLightCaptureUIVisible:,getter=_isLowLightCaptureUIVisible,nonatomic) BOOL _lowLightCaptureUIVisible;                                                     //@synthesize _lowLightCaptureUIVisible=__lowLightCaptureUIVisible - In the implementation block
@property (assign,setter=_setCurrentLowLightCaptureCancelable:,getter=_isCurrentLowLightCaptureCancelable,nonatomic) BOOL _currentLowLightCaptureCancelable;                             //@synthesize _currentLowLightCaptureCancelable=__currentLowLightCaptureCancelable - In the implementation block
@property (getter=_isLowLightCaptureCanceling,nonatomic,readonly) BOOL _lowLightCaptureCanceling; 
@property (assign,setter=_setResolvedTimerDuration:,nonatomic) long long _resolvedTimerDuration;                                                                                         //@synthesize _resolvedTimerDuration=__resolvedTimerDuration - In the implementation block
@property (assign,setter=_setPhotoModeEffectFilterType:,nonatomic) long long _photoModeEffectFilterType;                                                                                 //@synthesize _photoModeEffectFilterType=__photoModeEffectFilterType - In the implementation block
@property (assign,setter=_setSquareModeEffectFilterType:,nonatomic) long long _squareModeEffectFilterType;                                                                               //@synthesize _squareModeEffectFilterType=__squareModeEffectFilterType - In the implementation block
@property (assign,setter=_setPortraitModeEffectFilterType:,nonatomic) long long _portraitModeEffectFilterType;                                                                           //@synthesize _portraitModeEffectFilterType=__portraitModeEffectFilterType - In the implementation block
@property (assign,setter=_setPortraitModeLightingEffectType:,nonatomic) long long _portraitModeLightingEffectType;                                                                       //@synthesize _portraitModeLightingEffectType=__portraitModeLightingEffectType - In the implementation block
@property (assign,setter=_setPortraitModeApertureValue:,nonatomic) double _portraitModeApertureValue;                                                                                    //@synthesize _portraitModeApertureValue=__portraitModeApertureValue - In the implementation block
@property (assign,setter=_setPortraitModeIntensityValue:,nonatomic) double _portraitModeIntensityValue;                                                                                  //@synthesize _portraitModeIntensityValue=__portraitModeIntensityValue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _exposureBiasesByMode;                                                                                                              //@synthesize _exposureBiasesByMode=__exposureBiasesByMode - In the implementation block
@property (assign,setter=_setShadowClippingValue:,nonatomic) double _shadowClippingValue;                                                                                                //@synthesize _shadowClippingValue=__shadowClippingValue - In the implementation block
@property (assign,setter=_setHighlightClippingValue:,nonatomic) double _highlightClippingValue;                                                                                          //@synthesize _highlightClippingValue=__highlightClippingValue - In the implementation block
@property (setter=_setCurrentStillImageCaptureMomentSettings:,nonatomic,retain) CAMMomentCaptureSettings * _currentStillImageCaptureMomentSettings;                                      //@synthesize _currentStillImageCaptureMomentSettings=__currentStillImageCaptureMomentSettings - In the implementation block
@property (assign,setter=_setHomeIndicatorAutoHideOrientation:,nonatomic) long long _homeIndicatorAutoHideOrientation;                                                                   //@synthesize _homeIndicatorAutoHideOrientation=__homeIndicatorAutoHideOrientation - In the implementation block
@property (assign,setter=_setLastConfigurationRequestID:,nonatomic) int _lastConfigurationRequestID;                                                                                     //@synthesize _lastConfigurationRequestID=__lastConfigurationRequestID - In the implementation block
@property (assign,setter=_setInternalAutorotationStyle:,nonatomic) long long _internalAutorotationStyle;                                                                                 //@synthesize _internalAutorotationStyle=__internalAutorotationStyle - In the implementation block
@property (assign,setter=_setLayoutStyle:,nonatomic) long long _layoutStyle;                                                                                                             //@synthesize _layoutStyle=__layoutStyle - In the implementation block
@property (nonatomic,readonly) BOOL _useCreativeCameraControls;                                                                                                                          //@synthesize _useCreativeCameraControls=__useCreativeCameraControls - In the implementation block
@property (nonatomic,readonly) CAMControlDrawer * _controlDrawer; 
@property (nonatomic,readonly) CAMFullscreenViewfinder * _fullscreenViewfinder; 
@property (nonatomic,readonly) CAMViewfinderTransitionController * _transitionController;                                                                                                //@synthesize _transitionController=__transitionController - In the implementation block
@property (nonatomic,__weak,readonly) id<CAMViewfinderTransitionable> _viewfinderTransitionable; 
@property (nonatomic,readonly) CAMTopBar * _topBar;                                                                                                                                      //@synthesize _topBar=__topBar - In the implementation block
@property (nonatomic,readonly) CAMBottomBar * _bottomBar;                                                                                                                                //@synthesize _bottomBar=__bottomBar - In the implementation block
@property (nonatomic,readonly) CAMFlashButton * _flashButton;                                                                                                                            //@synthesize _flashButton=__flashButton - In the implementation block
@property (nonatomic,readonly) CAMFlashBadge * _flashBadge;                                                                                                                              //@synthesize _flashBadge=__flashBadge - In the implementation block
@property (nonatomic,readonly) CAMHDRButton * _HDRButton;                                                                                                                                //@synthesize _HDRButton=__HDRButton - In the implementation block
@property (nonatomic,readonly) CAMHDRBadge * _HDRBadge;                                                                                                                                  //@synthesize _HDRBadge=__HDRBadge - In the implementation block
@property (nonatomic,readonly) CAMTimerButton * _timerButton;                                                                                                                            //@synthesize _timerButton=__timerButton - In the implementation block
@property (nonatomic,readonly) CAMLivePhotoButton * _livePhotoButton;                                                                                                                    //@synthesize _livePhotoButton=__livePhotoButton - In the implementation block
@property (nonatomic,readonly) CAMFlipButton * _flipButton;                                                                                                                              //@synthesize _flipButton=__flipButton - In the implementation block
@property (nonatomic,readonly) CAMFocusLockBadge * _focusAndExposureLockBadge;                                                                                                           //@synthesize _focusAndExposureLockBadge=__focusAndExposureLockBadge - In the implementation block
@property (nonatomic,retain) UIButton * _reviewButton;                                                                                                                                   //@synthesize _reviewButton=__reviewButton - In the implementation block
@property (nonatomic,readonly) CAMCreativeCameraButton * _creativeCameraButton;                                                                                                          //@synthesize _creativeCameraButton=__creativeCameraButton - In the implementation block
@property (nonatomic,readonly) CAMMessagesPhotosButton * _photosButton;                                                                                                                  //@synthesize _photosButton=__photosButton - In the implementation block
@property (nonatomic,readonly) PUReviewScreenDoneButton * _doneButton;                                                                                                                   //@synthesize _doneButton=__doneButton - In the implementation block
@property (nonatomic,readonly) CAMFilterNameBadge * _filterNameBadge;                                                                                                                    //@synthesize _filterNameBadge=__filterNameBadge - In the implementation block
@property (nonatomic,readonly) CAMLivePhotoBadge * _livePhotoBadge;                                                                                                                      //@synthesize _livePhotoBadge=__livePhotoBadge - In the implementation block
@property (nonatomic,readonly) CAMElapsedTimeView * _elapsedTimeView;                                                                                                                    //@synthesize _elapsedTimeView=__elapsedTimeView - In the implementation block
@property (nonatomic,readonly) CAMElapsedTimeView * _targetElapsedTimeView; 
@property (assign,setter=_setShallowDepthOfFieldStatus:,nonatomic) long long _shallowDepthOfFieldStatus;                                                                                 //@synthesize _shallowDepthOfFieldStatus=__shallowDepthOfFieldStatus - In the implementation block
@property (assign,setter=_setStagePreviewStatus:,nonatomic) long long _stagePreviewStatus;                                                                                               //@synthesize _stagePreviewStatus=__stagePreviewStatus - In the implementation block
@property (nonatomic,readonly) CAMShallowDepthOfFieldBadge * _shallowDepthOfFieldBadge;                                                                                                  //@synthesize _shallowDepthOfFieldBadge=__shallowDepthOfFieldBadge - In the implementation block
@property (nonatomic,readonly) CAMPortraitModeInstructionLabel * _portraitModeInstructionLabel;                                                                                          //@synthesize _portraitModeInstructionLabel=__portraitModeInstructionLabel - In the implementation block
@property (nonatomic,readonly) CAMQRCodeInstructionLabel * _qrCodeInstructionLabel;                                                                                                      //@synthesize _qrCodeInstructionLabel=__qrCodeInstructionLabel - In the implementation block
@property (nonatomic,readonly) CAMPortraitModeInstructionLabel * _targetPortraitModeInstructionLabel; 
@property (nonatomic,readonly) CAMQRCodeInstructionLabel * _targetQRCodeInstructionLabel; 
@property (setter=_setPortraitModeDescriptionOverlayView:,nonatomic,retain) CAMPortraitModeDescriptionOverlayView * _portraitModeDescriptionOverlayView;                                 //@synthesize _portraitModeDescriptionOverlayView=__portraitModeDescriptionOverlayView - In the implementation block
@property (setter=_setCTMDescriptionOverlayView:,nonatomic,retain) CAMCTMDescriptionOverlayView * _ctmDescriptionOverlayView;                                                            //@synthesize _ctmDescriptionOverlayView=__ctmDescriptionOverlayView - In the implementation block
@property (nonatomic,readonly) CAMMetalContext * _metalContext;                                                                                                                          //@synthesize _metalContext=__metalContext - In the implementation block
@property (nonatomic,readonly) CUShutterButton * _shutterButton;                                                                                                                         //@synthesize _shutterButton=__shutterButton - In the implementation block
@property (nonatomic,readonly) CAMDynamicShutterControl * _dynamicShutterControl;                                                                                                        //@synthesize _dynamicShutterControl=__dynamicShutterControl - In the implementation block
@property (nonatomic,readonly) UIControl * _primaryShutterControl; 
@property (nonatomic,readonly) CUShutterButton * _stillDuringVideoButton;                                                                                                                //@synthesize _stillDuringVideoButton=__stillDuringVideoButton - In the implementation block
@property (nonatomic,readonly) CAMModeDial * _modeDial;                                                                                                                                  //@synthesize _modeDial=__modeDial - In the implementation block
@property (nonatomic,readonly) CAMImageWell * _imageWell;                                                                                                                                //@synthesize _imageWell=__imageWell - In the implementation block
@property (nonatomic,readonly) CAMFilterButton * _filterButton;                                                                                                                          //@synthesize _filterButton=__filterButton - In the implementation block
@property (nonatomic,readonly) CEKApertureButton * _apertureButton;                                                                                                                      //@synthesize _apertureButton=__apertureButton - In the implementation block
@property (nonatomic,readonly) CAMIntensityButton * _intensityButton;                                                                                                                    //@synthesize _intensityButton=__intensityButton - In the implementation block
@property (nonatomic,readonly) CAMBurstIndicatorView * _burstIndicatorView;                                                                                                              //@synthesize _burstIndicatorView=__burstIndicatorView - In the implementation block
@property (nonatomic,readonly) CAMTimerIndicatorView * _timerIndicatorView;                                                                                                              //@synthesize _timerIndicatorView=__timerIndicatorView - In the implementation block
@property (nonatomic,readonly) CAMZoomSlider * _zoomSlider;                                                                                                                              //@synthesize _zoomSlider=__zoomSlider - In the implementation block
@property (nonatomic,readonly) CAMZoomControl * _zoomControl;                                                                                                                            //@synthesize _zoomControl=__zoomControl - In the implementation block
@property (nonatomic,readonly) CAMGridView * _gridView;                                                                                                                                  //@synthesize _gridView=__gridView - In the implementation block
@property (nonatomic,readonly) CAMLevelIndicatorView * _levelView;                                                                                                                       //@synthesize _levelView=__levelView - In the implementation block
@property (nonatomic,readonly) CAMLevelViewModel * _levelViewModel;                                                                                                                      //@synthesize _levelViewModel=__levelViewModel - In the implementation block
@property (nonatomic,readonly) CAMUtilityBar * _utilityBar;                                                                                                                              //@synthesize _utilityBar=__utilityBar - In the implementation block
@property (nonatomic,readonly) CEKWheelScrubberView * _filterScrubberView;                                                                                                               //@synthesize _filterScrubberView=__filterScrubberView - In the implementation block
@property (nonatomic,readonly) CEKApertureSlider * _portraitApertureSlider;                                                                                                              //@synthesize _portraitApertureSlider=__portraitApertureSlider - In the implementation block
@property (nonatomic,readonly) CEKSlider * _portraitIntensitySlider;                                                                                                                     //@synthesize _portraitIntensitySlider=__portraitIntensitySlider - In the implementation block
@property (nonatomic,readonly) CEKLightingControl * _lightingControl;                                                                                                                    //@synthesize _lightingControl=__lightingControl - In the implementation block
@property (nonatomic,readonly) CEKLightingNameBadge * _lightingNameBadge;                                                                                                                //@synthesize _lightingNameBadge=__lightingNameBadge - In the implementation block
@property (nonatomic,readonly) CAMVideoConfigurationStatusIndicator * _videoConfigurationStatusIndicator;                                                                                //@synthesize _videoConfigurationStatusIndicator=__videoConfigurationStatusIndicator - In the implementation block
@property (nonatomic,readonly) CAMVideoConfigurationStatusIndicator * _targetVideoConfigurationStatusIndicator; 
@property (assign,setter=_setCaptureAnimationPreviewOverlay:,nonatomic,__weak) UIView * _captureAnimationPreviewOverlay;                                                                 //@synthesize _captureAnimationPreviewOverlay=__captureAnimationPreviewOverlay - In the implementation block
@property (assign,setter=_setProactiveFlashSuggestionSuppressed:,getter=_isProactiveFlashSuggestionSuppressed,nonatomic) BOOL _proactiveFlashSuggestionSuppressed;                       //@synthesize _proactiveFlashSuggestionSuppressed=__proactiveFlashSuggestionSuppressed - In the implementation block
@property (assign,setter=_setFlashAndHDRConflictingControl:,nonatomic) long long _flashAndHDRConflictingControl;                                                                         //@synthesize _flashAndHDRConflictingControl=__flashAndHDRConflictingControl - In the implementation block
@property (assign,setter=_setCapturingFromPhysicalButton:,nonatomic) BOOL _capturingFromPhysicalButton;                                                                                  //@synthesize _capturingFromPhysicalButton=__capturingFromPhysicalButton - In the implementation block
@property (assign,setter=_setSwipeToModeSwitchEnabled:,getter=_isSwipeToModeSwitchEnabled,nonatomic) BOOL _swipeToModeSwitchEnabled; 
@property (nonatomic,readonly) UISwipeGestureRecognizer * _previousModeGestureRecognizer;                                                                                                //@synthesize _previousModeGestureRecognizer=__previousModeGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UISwipeGestureRecognizer * _nextModeGestureRecognizer;                                                                                                    //@synthesize _nextModeGestureRecognizer=__nextModeGestureRecognizer - In the implementation block
@property (nonatomic,retain) CAMPhysicalCaptureRecognizer * _physicalCaptureRecognizer;                                                                                                  //@synthesize _physicalCaptureRecognizer=__physicalCaptureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * _zoomPinchGestureRecognizer;                                                                                                   //@synthesize _zoomPinchGestureRecognizer=__zoomPinchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * _cameraRollSwipeUpGestureRecognizer;                                                                                             //@synthesize _cameraRollSwipeUpGestureRecognizer=__cameraRollSwipeUpGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UISwipeGestureRecognizer * _swipeDownGestureRecognizer;                                                                                                   //@synthesize _swipeDownGestureRecognizer=__swipeDownGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UISwipeGestureRecognizer * _swipeUpGestureRecognizer;                                                                                                     //@synthesize _swipeUpGestureRecognizer=__swipeUpGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UISwipeGestureRecognizer * _previousFilterGestureRecognizer;                                                                                              //@synthesize _previousFilterGestureRecognizer=__previousFilterGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UISwipeGestureRecognizer * _nextFilterGestureRecognizer;                                                                                                  //@synthesize _nextFilterGestureRecognizer=__nextFilterGestureRecognizer - In the implementation block
@property (nonatomic,retain) CAMPhysicalCaptureNotifier * _physicalCaptureNotifier;                                                                                                      //@synthesize _physicalCaptureNotifier=__physicalCaptureNotifier - In the implementation block
@property (assign,setter=_setCachedVideoZoomFactor:,nonatomic) double _cachedVideoZoomFactor;                                                                                            //@synthesize _cachedVideoZoomFactor=__cachedVideoZoomFactor - In the implementation block
@property (assign,setter=_setShouldIgnoreZoomFactorKVOForRamping:,nonatomic) BOOL _shouldIgnoreZoomFactorKVOForRamping;                                                                  //@synthesize _shouldIgnoreZoomFactorKVOForRamping=__shouldIgnoreZoomFactorKVOForRamping - In the implementation block
@property (assign,setter=_setVideoZoomFactorAtPinchStart:,nonatomic) double _videoZoomFactorAtPinchStart;                                                                                //@synthesize _videoZoomFactorAtPinchStart=__videoZoomFactorAtPinchStart - In the implementation block
@property (nonatomic,readonly) BOOL _shouldUseZoomControlInsteadOfSlider; 
@property (setter=_setCurrentBurstTimer:,nonatomic,retain) CAMPreciseTimer * _currentBurstTimer;                                                                                         //@synthesize _currentBurstTimer=__currentBurstTimer - In the implementation block
@property (nonatomic,readonly) BOOL _shouldCaptureWithTimer; 
@property (assign,setter=_setCapturingFromTimer:,getter=_isCapturingFromTimer,nonatomic) BOOL _capturingFromTimer;                                                                       //@synthesize _capturingFromTimer=__capturingFromTimer - In the implementation block
@property (setter=_setSynchronizedCaptureTimerDelegate:,nonatomic,retain) CAMAnimationDelegate * _synchronizedCaptureTimerDelegate;                                                      //@synthesize _synchronizedCaptureTimerDelegate=__synchronizedCaptureTimerDelegate - In the implementation block
@property (assign,setter=_setRemainingCaptureTimerTicks:,nonatomic) unsigned long long _remainingCaptureTimerTicks;                                                                      //@synthesize _remainingCaptureTimerTicks=__remainingCaptureTimerTicks - In the implementation block
@property (setter=_setLastTimerIndicatorFaceUpdateDate:,nonatomic,retain) NSDate * _lastTimerIndicatorFaceUpdateDate;                                                                    //@synthesize _lastTimerIndicatorFaceUpdateDate=__lastTimerIndicatorFaceUpdateDate - In the implementation block
@property (nonatomic,readonly) CAMTorchPatternController * _torchPatternController;                                                                                                      //@synthesize _torchPatternController=__torchPatternController - In the implementation block
@property (assign,setter=_setLastShutterButtonTouchDownTime:,nonatomic) unsigned long long _lastShutterButtonTouchDownTime;                                                              //@synthesize _lastShutterButtonTouchDownTime=__lastShutterButtonTouchDownTime - In the implementation block
@property (setter=_setDiskSpaceAlertController:,nonatomic,retain) UIAlertController * _diskSpaceAlertController;                                                                         //@synthesize _diskSpaceAlertController=__diskSpaceAlertController - In the implementation block
@property (assign,setter=_setBurstEndSoundPlaying:,getter=_isBurstEndSoundPlaying,nonatomic) BOOL _burstEndSoundPlaying;                                                                 //@synthesize _burstEndSoundPlaying=__burstEndSoundPlaying - In the implementation block
@property (setter=_setFlashOrTorchUnavailableAlertController:,nonatomic,retain) UIAlertController * _flashOrTorchUnavailableAlertController;                                             //@synthesize _flashOrTorchUnavailableAlertController=__flashOrTorchUnavailableAlertController - In the implementation block
@property (assign,setter=_setResetTimerDurationAfterDelayedCapture:,getter=_resetTimerDurationAfterDelayedCapture,nonatomic) BOOL _resetTimerDurationAfterDelayedCapture;                //@synthesize _resetTimerDurationAfterDelayedCapture=__resetTimerDurationAfterDelayedCapture - In the implementation block
@property (assign,setter=_setOutOfDiskSpace:,getter=_isOutOfDiskSpace,nonatomic) BOOL _outOfDiskSpace;                                                                                   //@synthesize _outOfDiskSpace=__outOfDiskSpace - In the implementation block
@property (assign,setter=_setPerformingTopBarOrientationChange:,getter=_isPerformingTopBarOrientationChange,nonatomic) BOOL _performingTopBarOrientationChange;                          //@synthesize _performingTopBarOrientationChange=__performingTopBarOrientationChange - In the implementation block
@property (assign,setter=_setFlashingLivePhotoBadge:,getter=_isFlashingLivePhotoBadge,nonatomic) BOOL _flashingLivePhotoBadge;                                                           //@synthesize _flashingLivePhotoBadge=__flashingLivePhotoBadge - In the implementation block
@property (assign,setter=_setWantsFilterScrubberVisible:,nonatomic) BOOL _wantsFilterScrubberVisible;                                                                                    //@synthesize _wantsFilterScrubberVisible=__wantsFilterScrubberVisible - In the implementation block
@property (assign,setter=_setShouldShowFilterScrubberAfterNextRender:,nonatomic) BOOL _shouldShowFilterScrubberAfterNextRender;                                                          //@synthesize _shouldShowFilterScrubberAfterNextRender=__shouldShowFilterScrubberAfterNextRender - In the implementation block
@property (assign,setter=_setShowingFilterScrubber:,getter=_isShowingFilterScrubber,nonatomic) BOOL _showingFilterScrubber;                                                              //@synthesize _showingFilterScrubber=__showingFilterScrubber - In the implementation block
@property (assign,setter=_setShowingPortraitApertureSlider:,getter=_isShowingPortraitApertureSlider,nonatomic) BOOL _showingPortraitApertureSlider;                                      //@synthesize _showingPortraitApertureSlider=__showingPortraitApertureSlider - In the implementation block
@property (assign,setter=_setShowingPortraitIntensitySlider:,getter=_isShowingPortraitIntensitySlider,nonatomic) BOOL _showingPortraitIntensitySlider;                                   //@synthesize _showingPortraitIntensitySlider=__showingPortraitIntensitySlider - In the implementation block
@property (assign,setter=_setAnimatingFilterScrubberDismissal:,getter=_isAnimatingFilterScrubberDismissal,nonatomic) BOOL _animatingFilterScrubberDismissal;                             //@synthesize _animatingFilterScrubberDismissal=__animatingFilterScrubberDismissal - In the implementation block
@property (assign,setter=_setOverCapturePreviewStatus:,nonatomic) long long _overCapturePreviewStatus;                                                                                   //@synthesize _overCapturePreviewStatus=__overCapturePreviewStatus - In the implementation block
@property (nonatomic,readonly) BOOL _shouldDisableUserInteractionForTransitioning; 
@property (getter=_isTransitioningToCreativeCamera,nonatomic,readonly) BOOL _transitioningToCreativeCamera; 
@property (getter=_isTransitioningToReview,nonatomic,readonly) BOOL _transitioningToReview; 
@property (getter=_isTransitioningBackFromReview,nonatomic,readonly) BOOL _transitioningBackFromReview; 
@property (assign,setter=_setModeDisabledForMultitasking:,getter=_isModeDisabledForMultitasking,nonatomic) BOOL _modeDisabledForMultitasking;                                            //@synthesize _modeDisabledForMultitasking=__modeDisabledForMultitasking - In the implementation block
@property (setter=_setDisabledModeOverlayView:,nonatomic,retain) CAMDisabledModeOverlayView * _disabledModeOverlayView;                                                                  //@synthesize _disabledModeOverlayView=__disabledModeOverlayView - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _filterNamesSelectedBeforeCapture;                                                                                                         //@synthesize _filterNamesSelectedBeforeCapture=__filterNamesSelectedBeforeCapture - In the implementation block
@property (assign,setter=_setLastZoomInteractionType:,nonatomic) long long _lastZoomInteractionType;                                                                                     //@synthesize _lastZoomInteractionType=__lastZoomInteractionType - In the implementation block
@property (setter=_setAccessibilityHUDManagers:,nonatomic,retain) NSMutableArray * _accessibilityHUDManagers;                                                                            //@synthesize _accessibilityHUDManagers=__accessibilityHUDManagers - In the implementation block
@property (nonatomic,readonly) CAMFeedbackController * _feedbackController;                                                                                                              //@synthesize _feedbackController=__feedbackController - In the implementation block
@property (assign,setter=_setLastPerformedShutterButtonFeedbackType:,nonatomic) unsigned long long _lastPerformedShutterButtonFeedbackType;                                              //@synthesize _lastPerformedShutterButtonFeedbackType=__lastPerformedShutterButtonFeedbackType - In the implementation block
@property (nonatomic,retain) id _filterScrubberLayerContents;                                                                                                                            //@synthesize _filterScrubberLayerContents=__filterScrubberLayerContents - In the implementation block
@property (nonatomic,retain) NSArray * _filterTypes;                                                                                                                                     //@synthesize _filterTypes=__filterTypes - In the implementation block
@property (assign,setter=_setLastMRCResultsCount:,nonatomic) BOOL _lastMRCResultsCount;                                                                                                  //@synthesize _lastMRCResultsCount=__lastMRCResultsCount - In the implementation block
@property (assign,getter=isUserInteractionLoggingEnabled,nonatomic) BOOL userInteractionLoggingEnabled;                                                                                  //@synthesize userInteractionLoggingEnabled=_userInteractionLoggingEnabled - In the implementation block
@property (nonatomic,copy) NSSet * availableCaptureModes;                                                                                                                                //@synthesize availableCaptureModes=_availableCaptureModes - In the implementation block
@property (assign,nonatomic) BOOL automaticallyAdjustsAvailableCaptureModes;                                                                                                             //@synthesize automaticallyAdjustsAvailableCaptureModes=_automaticallyAdjustsAvailableCaptureModes - In the implementation block
@property (assign,nonatomic) long long autorotationStyle; 
@property (assign,nonatomic) BOOL automaticallyAdjustsAutorotationStyle;                                                                                                                 //@synthesize automaticallyAdjustsAutorotationStyle=_automaticallyAdjustsAutorotationStyle - In the implementation block
@property (assign,nonatomic) BOOL automaticallyAdjustsApplicationIdleTimer;                                                                                                              //@synthesize automaticallyAdjustsApplicationIdleTimer=_automaticallyAdjustsApplicationIdleTimer - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCameraConfigurationDelegate> configurationDelegate;                                                                                            //@synthesize configurationDelegate=_configurationDelegate - In the implementation block
@property (assign,getter=isPerformingTileTransition,nonatomic) BOOL performingTileTransition;                                                                                            //@synthesize performingTileTransition=_performingTileTransition - In the implementation block
@property (assign,getter=isDisablingMultipleCaptureFeatures,nonatomic) BOOL disablingMultipleCaptureFeatures;                                                                            //@synthesize disablingMultipleCaptureFeatures=_disablingMultipleCaptureFeatures - In the implementation block
@property (assign,getter=isDisablingAdditionalCaptures,nonatomic) BOOL disablingAdditionalCaptures;                                                                                      //@synthesize disablingAdditionalCaptures=_disablingAdditionalCaptures - In the implementation block
@property (assign,setter=_setPreventingAdditionalCaptures:,getter=isPreventingAdditionalCaptures,nonatomic) BOOL preventingAdditionalCaptures;                                           //@synthesize preventingAdditionalCaptures=_preventingAdditionalCaptures - In the implementation block
@property (assign,nonatomic) unsigned long long persistenceBehavior;                                                                                                                     //@synthesize persistenceBehavior=_persistenceBehavior - In the implementation block
@property (nonatomic,readonly) long long messagesTransitionState;                                                                                                                        //@synthesize messagesTransitionState=_messagesTransitionState - In the implementation block
@property (nonatomic,readonly) long long emulationMode;                                                                                                                                  //@synthesize emulationMode=_emulationMode - In the implementation block
@property (assign,getter=isShowingStandardControls,nonatomic) BOOL showingStandardControls;                                                                                              //@synthesize showingStandardControls=_showingStandardControls - In the implementation block
@property (assign,nonatomic) long long imagePickerVideoConfiguration;                                                                                                                    //@synthesize imagePickerVideoConfiguration=_imagePickerVideoConfiguration - In the implementation block
@property (assign,nonatomic) double maximumVideoRecordingDuration;                                                                                                                       //@synthesize maximumVideoRecordingDuration=_maximumVideoRecordingDuration - In the implementation block
@property (nonatomic,retain) UIView * customOverlayView;                                                                                                                                 //@synthesize customOverlayView=_customOverlayView - In the implementation block
@property (assign,nonatomic) CGAffineTransform customPreviewViewTransform;                                                                                                               //@synthesize customPreviewViewTransform=_customPreviewViewTransform - In the implementation block
@property (assign,getter=isPerformingReviewUsingOverlay,nonatomic) BOOL performingReviewUsingOverlay;                                                                                    //@synthesize performingReviewUsingOverlay=_performingReviewUsingOverlay - In the implementation block
@property (nonatomic,readonly) CGRect reviewUsingOverlayFrame; 
@property (assign,nonatomic) long long flashMode; 
@property (assign,nonatomic) long long torchMode; 
@property (assign,setter=setHDRMode:,nonatomic) long long hdrMode; 
@property (assign,nonatomic) long long timerDuration; 
@property (assign,nonatomic) long long livePhotoMode; 
@property (assign,nonatomic) long long photoModeAspectRatioCrop;                                                                                                                         //@synthesize photoModeAspectRatioCrop=_photoModeAspectRatioCrop - In the implementation block
@property (nonatomic,readonly) long long configuredCaptureMode;                                                                                                                          //@synthesize configuredCaptureMode=_configuredCaptureMode - In the implementation block
@property (nonatomic,readonly) long long currentCaptureMode; 
@property (nonatomic,readonly) long long configuredCaptureDevice;                                                                                                                        //@synthesize configuredCaptureDevice=_configuredCaptureDevice - In the implementation block
@property (nonatomic,readonly) long long currentCaptureDevice; 
@property (getter=isCapturingPhoto,nonatomic,readonly) BOOL capturingPhoto; 
@property (getter=isCapturingLivePhoto,nonatomic,readonly) BOOL capturingLivePhoto; 
@property (getter=isRecording,nonatomic,readonly) BOOL recording; 
@property (assign,nonatomic,__weak) id<CAMViewfinderReviewButtonSource> reviewButtonSource;                                                                                              //@synthesize reviewButtonSource=_reviewButtonSource - In the implementation block
@property (assign,nonatomic,__weak) id<CAMCreativeCameraDelegate> creativeCameraDelegate;                                                                                                //@synthesize creativeCameraDelegate=_creativeCameraDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldHideTopBar; 
@property (nonatomic,readonly) BOOL shouldHideFlashButton; 
@property (nonatomic,readonly) BOOL shouldHideHDRButton; 
@property (nonatomic,readonly) BOOL shouldHideTimerButton; 
@property (nonatomic,readonly) BOOL shouldHideFlipButton; 
@property (nonatomic,readonly) BOOL shouldHideElapsedTimeView; 
@property (nonatomic,readonly) BOOL shouldHideLivePhotoButton; 
@property (nonatomic,readonly) BOOL shouldHidePortraitModeInstructionLabel; 
@property (nonatomic,readonly) BOOL shouldHideQRCodeInstructionLabel; 
@property (nonatomic,readonly) BOOL shouldHideFilterNameBadge; 
@property (nonatomic,readonly) BOOL shouldHideLightingControl; 
@property (nonatomic,readonly) BOOL shouldLayoutLightingNameBadgeAtBottom; 
@property (nonatomic,readonly) BOOL shouldShiftPreviewForUtilityBar; 
-(void)_hideControlsForGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)stillImageRequestDidStopCapturingStillImage:(id)arg1 ;
-(void)controlDrawerDidCreateLowLightSlider:(id)arg1 ;
-(long long)_currentMode;
-(BOOL)_shouldEnableFlipButton;
-(void)_updateExposureButtonForCurrentState;
-(void)_setSwipeToModeSwitchEnabled:(BOOL)arg1 ;
-(void)_handleApplicationWillResignActive:(id)arg1 ;
-(void)_stopCapturingBurst;
-(BOOL)_shouldEnableDrawerControl:(long long)arg1 ;
-(void)_createModeDialIfNecessary;
-(CAMControlDrawer *)_controlDrawer;
-(void)_updateFlashButtonForMode:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)configuredCaptureDevice;
-(void)_setEffectFilterType:(long long)arg1 forMode:(long long)arg2 ;
-(CAMGridView *)_gridView;
-(void)_teardownBurstTimer;
-(CAMCameraRollController *)_cameraRollController;
-(long long)_deviceForModeChange;
-(void)_updateEnabledControlsWithReason:(id)arg1 ;
-(CAMKeepAliveController *)_keepAliveController;
-(void)_cancelCTMCapture;
-(void)_createModeSpecificControlsForConfiguration:(id)arg1 ;
-(void)_createLightingNameBadgeIfNecessary;
-(UIButton *)_reviewButton;
-(void)_updateUIForCaptureOrientationAnimated:(BOOL)arg1 ;
-(CGSize)_portraitOrientedSizeForSize:(CGSize)arg1 ;
-(void)_handleFlashButtonChangedFlashMode;
-(BOOL)_shouldHideLivePhotoBadgeForGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldHideControlStatusIndicatorsForGraphConfiguration:(id)arg1 ;
-(void)_updatePanoramaViewVisibilityForViewfinderTransition;
-(BOOL)_shouldUseBurstForCaptureTimer;
-(CAMFilterButton *)_filterButton;
-(CAMPowerController *)_powerController;
-(CAMPreviewViewController *)_previewViewController;
-(BOOL)_isShowingCameraRoll;
-(void)toggleBetweenZoomFactorsForZoomControl:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateVideoAGGDForCaptureRequest:(id)arg1 ;
-(long long)livePhotoMode;
-(BOOL)_shouldShowLowLightControlForGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldEnableCreativeCameraButton;
-(CAMHDRButton *)_HDRButton;
-(void)remoteShutter:(id)arg1 setMode:(long long)arg2 ;
-(void)_layoutViewfinderForShowingFilterScrubber:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setCapturingFromTimer:(BOOL)arg1 ;
-(BOOL)_wantsZoomSliderForGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldEnableApertureButton;
-(BOOL)_autoHideHomeIndicatorForOrientation:(long long)arg1 ;
-(void)_updateFilterScrubberAfterCapture;
-(void)controlDrawer:(id)arg1 didSelectMenuItemForControlType:(long long)arg2 ;
-(void)_createZoomPinchGestureRecognizerIfNecessary;
-(void)captureController:(id)arg1 didOutputFaceResults:(id)arg2 bodyResults:(id)arg3 ;
-(void)_createOrDestroyHDRButtonIfNecessary;
-(void)setTimerDuration:(long long)arg1 ;
-(CAMFocusLockBadge *)_focusAndExposureLockBadge;
-(void)_apertureSliderDidChangeApertureValue:(id)arg1 ;
-(void)_updateAGGDForStillImageCaptureRequest:(id)arg1 ;
-(void)updateControlVisibilityAnimated:(BOOL)arg1 ;
-(void)_resetZoom;
-(long long)_flashAndHDRConflictingControl;
-(void)_updatePressTypeAggregateDictionariesForRequest:(id)arg1 ;
-(BOOL)_shouldHideFlashBadgeForGraphConfiguration:(id)arg1 ;
-(void)_createCreativeCameraButtonIfNecessary;
-(void)_handlePhysicalCaptureRecognizer:(id)arg1 ;
-(void)_updateLowLightConflict:(unsigned long long)arg1 isConflicting:(BOOL)arg2 ;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(BOOL)_shouldEnableShutterButton;
-(void)_embedPortraitIntensitySliderWithLayoutStyle:(long long)arg1 ;
-(SCD_Struct_CA12)_dynamicShutterSettingsForCameraMode:(long long)arg1 ;
-(void)_setDiskSpaceAlertController:(id)arg1 ;
-(void)_applyTransformsForAutorotationStyle:(long long)arg1 ;
-(unsigned long long)_resolvedLowLightControlMode;
-(BOOL)automaticallyAdjustsAvailableCaptureModes;
-(long long)_configuredDevice;
-(BOOL)_isExposureBiasNonDefault:(double)arg1 ;
-(void)_embedTimerButtonWithLayoutStyle:(long long)arg1 ;
-(void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2 ;
-(CAMTimerButton *)_timerButton;
-(long long)_aspectRatioForMode:(long long)arg1 ;
-(void)_handleShutterButtonPressed:(id)arg1 ;
-(CAMPhysicalCaptureRecognizer *)_physicalCaptureRecognizer;
-(void)_destroyHDRButtonIfNecessary;
-(BOOL)_shouldHideBottomBarForGraphConfiguration:(id)arg1 ;
-(void)_createFlashBadgeIfNecessary;
-(double)timeIntervalForDuration:(long long)arg1 ;
-(void)_updatePanoramaSizeIfNeededForGraphConfiguration:(id)arg1 ;
-(void)suspendCameraSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)_hideUtilityBarAnimated:(BOOL)arg1 ;
-(CAMHDRBadge *)_HDRBadge;
-(BOOL)_isSwipeToModeSwitchEnabled;
-(BOOL)_shouldHideAspectRatioControlForGraphConfiguration:(id)arg1 ;
-(CAMImageWell *)_imageWell;
-(void)_updateZoomAggregateDictionaryForRequest:(id)arg1 response:(id)arg2 ;
-(CAMIntensityButton *)_intensityButton;
-(BOOL)_isMenuButtonConflictingWithView:(id)arg1 ;
-(void)_setResolvedTorchMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_setLastMRCResultsCount:(BOOL)arg1 ;
-(void)_embedElapsedTimeViewWithLayoutStyle:(long long)arg1 ;
-(void)_createQRCodeInstructionLabelIfNecessary;
-(void)controlDrawerDidCreateExposureSlider:(id)arg1 ;
-(void)_applySelectedEffectFilterType:(long long)arg1 ;
-(void)_handleUserChangedToMode:(long long)arg1 ;
-(CAMTimelapseController *)_timelapseController;
-(void)_updateSphereAggregateDictionariesForResponse:(id)arg1 ;
-(void)_updateEnabledControlsWithReason:(id)arg1 forceLog:(BOOL)arg2 ;
-(void)captureController:(id)arg1 didOutputVideoZoomFactor:(double)arg2 ;
-(void)_handleTimelapseLowDiskSpaceNotification:(id)arg1 ;
-(CAMStorageController *)_storageController;
-(BOOL)_shouldShowShutterButtonDisabled;
-(void)_setPortraitModeLightingEffectType:(long long)arg1 ;
-(CGSize)viewSystemLayoutSizeFittingSize:(CGSize)arg1 forCaptureMode:(long long)arg2 ;
-(long long)_currentCaptureRequestOrigin;
-(BOOL)shouldHideLightingControl;
-(CAMFlashButton *)_flashButton;
-(BOOL)_shouldShowExposureButtonForGraphConfiguration:(id)arg1 ;
-(void)captureControllerWillStartCapturingBurst:(id)arg1 ;
-(long long)_internalAutorotationStyle;
-(BOOL)_isProactiveFlashSuggestionSuppressed;
-(void)_handleSwipeToPreviousFilterRecognizer:(id)arg1 ;
-(BOOL)isPreventingAdditionalCaptures;
-(NSMutableSet *)_filterNamesSelectedBeforeCapture;
-(BOOL)_wantsLightingControlForGraphConfiguration:(id)arg1 ;
-(unsigned long long)_lastShutterButtonTouchDownTime;
-(BOOL)isDisablingAdditionalCaptures;
-(void)_createOrDestroyHDRBadgeIfNecessary;
-(void)_startFlashingLivePhotoBadge;
-(long long)autorotationStyle;
-(long long)_desiredFlashMode;
-(id)viewfinderView;
-(void)_unembedGridView;
-(void)_limitZoomRangeForRecordingIfNecessary;
-(id)cameraRollControllerImageForReveal:(id)arg1 ;
-(void)_handleCreativeCameraButtonPressed:(id)arg1 ;
-(void)simulateImageWellTap;
-(void)_setRemainingCaptureTimerTicks:(unsigned long long)arg1 ;
-(void)_createDoneButtonIfNecessary;
-(void)_setDisabledModeOverlayView:(id)arg1 ;
-(void)_updateShutterButtonForCameraMode:(long long)arg1 isCapturing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setShowingStandardControls:(BOOL)arg1 ;
-(void)physicalCaptureNotifierDidChangeState:(id)arg1 forButton:(long long)arg2 ;
-(BOOL)_shouldEnableTimerButton;
-(CAMCreativeCameraButton *)_creativeCameraButton;
-(void)_updateVideoConfigurationAggregateDictionaryForRequest:(id)arg1 ;
-(long long)_videoConfigurationOverride;
-(void)stillImageRequestsWillRequestCTMVideoCaptureStart;
-(void)setLivePhotoMode:(long long)arg1 ;
-(void)_handleUserChangedToFlashMode:(long long)arg1 ;
-(CAMMotionController *)_motionController;
-(void)_handleModeDialTouchDown:(id)arg1 ;
-(void)_setPortraitModeApertureValue:(double)arg1 ;
-(void)_handleDoneButtonReleased:(id)arg1 ;
-(long long)_lastZoomInteractionType;
-(BOOL)dynamicShutterControlShouldBeginGesture:(id)arg1 ;
-(CAMQRCodeInstructionLabel *)_targetQRCodeInstructionLabel;
-(void)dynamicShutterControlDidShortPress:(id)arg1 ;
-(void)stillImageRequestDidBeginCaptureBeforeResolvingSettings:(id)arg1 ;
-(void)_setCaptureAnimationPreviewOverlay:(id)arg1 ;
-(void)setFlashMode:(long long)arg1 ;
-(void)_dismissOverlays;
-(void)_showDiskSpaceAlertView;
-(long long)_resolvedTorchMode;
-(CAMTopBar *)_topBar;
-(id)_controlTypesForGraphConfiguration:(id)arg1 ;
-(CAMVideoConfigurationStatusIndicator *)_videoConfigurationStatusIndicator;
-(unsigned long long)persistenceBehavior;
-(void)_handleLowLightSliderDidChangeValue:(id)arg1 ;
-(void)_unembedAndDestroyAllControls;
-(void)_handleCreativeCameraButtonReleased:(id)arg1 ;
-(CAMLevelViewModel *)_levelViewModel;
-(void)_setShallowDepthOfFieldStatus:(long long)arg1 stagePreviewStatus:(long long)arg2 ;
-(void)_embedReviewButtonWithLayoutStyle:(long long)arg1 ;
-(void)_setSynchronizedCaptureTimerDelegate:(id)arg1 ;
-(void)_createZoomSliderIfNecessary;
-(void)cameraRollController:(id)arg1 shouldHideSourceAsset:(BOOL)arg2 ;
-(BOOL)_shouldHideLevelViewForGraphConfiguration:(id)arg1 ;
-(void)resumeCameraSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateFocusAfterZoomIfNecessary;
-(BOOL)_shouldHideLightingControlForGraphConfiguration:(id)arg1 ;
-(void)_snapshotShutterButtonAndPersist;
-(BOOL)_shouldEnableImageWell;
-(CAMPreciseTimer *)_currentBurstTimer;
-(long long)timerDuration;
-(BOOL)_startTimelapse;
-(void)_setResolvedLowLightMode:(long long)arg1 ;
-(void)_reconfigureCaptureGraphWithCurrentMode;
-(BOOL)_isModeDisabledForMultitasking;
-(void)_handleLivePhotoIndicator;
-(void)lightingControlDidChangeExpanded:(id)arg1 ;
-(void)_handleUserChangedToHDRMode:(long long)arg1 ;
-(UIAlertController *)_diskSpaceAlertController;
-(long long)_currentDevicePosition;
-(void)_embedApertureButtonWithLayoutStyle:(long long)arg1 ;
-(void)_writeUserPreferences;
-(void)_imageWellSetContentHidden:(BOOL)arg1 ;
-(id)_videoCaptureRequestWithCurrentSettings;
-(BOOL)_isReconfiguring;
-(void)_handleHDRIndicator;
-(id)_originalCaptureFiltersForMode:(long long)arg1 ;
-(void)_handlePhysicalButtonCancelled:(long long)arg1 ;
-(void)_updateLayoutStyleForSize:(CGSize)arg1 ;
-(void)_createPhotosButtonIfNecessary;
-(void)_createStillDuringVideoButtonIfNecessary;
-(BOOL)_shouldShowViewfinderLegibilityBackgroundsForGraphConfiguration:(id)arg1 ;
-(void)_createGridViewIfNecessary;
-(void)captureController:(id)arg1 didOutputLowLightStatus:(long long)arg2 ;
-(long long)_desiredLivePhotoMode;
-(BOOL)capturePhoto;
-(UISwipeGestureRecognizer *)_previousModeGestureRecognizer;
-(void)_updateAGGDForPanoramaCaptureResponse:(id)arg1 request:(id)arg2 ;
-(long long)_stagePreviewStatus;
-(void)_createTimerIndicatorViewIfNecessary;
-(CGSize)_lowLightDurationMapping;
-(void)_setShadowClippingValue:(double)arg1 ;
-(long long)_videoConfigurationFramerateForGraphConfiguration:(id)arg1 ;
-(void)stillImageRequestWillStartCapturingCTMVideoWithCaptureInFlight:(BOOL)arg1 ;
-(CAMShallowDepthOfFieldBadge *)_shallowDepthOfFieldBadge;
-(void)_updateLowLightSlider;
-(void)_setModeDisabledForMultitasking:(BOOL)arg1 ;
-(UIPanGestureRecognizer *)_cameraRollSwipeUpGestureRecognizer;
-(void)_updateDesiredPhysicalButtonsForDominantButton:(long long)arg1 ;
-(void)_previewDidStartRunning:(id)arg1 ;
-(void)_setDesiredTorchMode:(long long)arg1 ;
-(CAMElapsedTimeView *)_elapsedTimeView;
-(void)set_physicalCaptureNotifier:(CAMPhysicalCaptureNotifier *)arg1 ;
-(CAMPhysicalCaptureNotifier *)_physicalCaptureNotifier;
-(CAMElapsedTimeView *)_targetElapsedTimeView;
-(void)_createLivePhotoButtonIfNecessary;
-(void)stillImageRequestDidCompleteVideoCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)_setWantsFilterScrubberVisible:(BOOL)arg1 ;
-(BOOL)_stopCapturingPanorama;
-(void)setMaximumVideoRecordingDuration:(double)arg1 ;
-(CUShutterButton *)_stillDuringVideoButton;
-(CAMDynamicShutterControl *)_dynamicShutterControl;
-(void)_embedLightingControlWithLayoutStyle:(long long)arg1 ;
-(void)setUserInteractionLoggingEnabled:(BOOL)arg1 ;
-(long long)currentCaptureDevice;
-(void)_setShouldShowFilterScrubberAfterNextRender:(BOOL)arg1 ;
-(long long)preferredWhitePointAdaptivityStyle;
-(BOOL)_shouldCreatePhotosButton;
-(void)_embedShutterButtonWithLayoutStyle:(long long)arg1 ;
-(BOOL)_shouldEnableFilterButton;
-(void)_createVideoConfigurationStatusIndicatorIfNecessary;
-(BOOL)_shouldCreateLevelViewForMode:(long long)arg1 ;
-(void)dynamicShutterControlGesturesDidEnd:(id)arg1 ;
-(BOOL)shouldHideTimerButton;
-(void)_updateDiskSpaceAlertViewVisibilityAnimated:(BOOL)arg1 ;
-(void)_updateFocusAndExposureLockBadgeAnimated:(BOOL)arg1 ;
-(void)videoConfigurationStatusIndicatorDidTapResolution:(id)arg1 ;
-(void)_updateVideoConfigurationStatusIndicatorForGraphConfiguration:(id)arg1 ;
-(void)_resetLowLightDurationMappingAnimated:(BOOL)arg1 ;
-(BOOL)_shouldCaptureWithTimer;
-(long long)configuredCaptureMode;
-(void)_presentCameraRollViewControllerIfPossibleAnimated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)_setPortraitModeEffectFilterType:(long long)arg1 ;
-(long long)_sanitizedLightingTypeForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)shouldShiftPreviewForUtilityBar;
-(long long)_configuredMode;
-(void)_setOpeningViewfinder:(BOOL)arg1 ;
-(BOOL)_isLivePhotoSupportedForMode:(long long)arg1 device:(long long)arg2 ;
-(CAMFlipButton *)_flipButton;
-(CAMLivePhotoBadge *)_livePhotoBadge;
-(BOOL)_isZooming;
-(BOOL)_captureStillImageWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_shouldHideFilterNameBadgeForGraphConfiguration:(id)arg1 ;
-(void)panoramaRequest:(id)arg1 didGeneratePaintingStatus:(id)arg2 ;
-(long long)_appropriateLayoutStyleForSize:(CGSize)arg1 ;
-(void)_setStagePreviewStatus:(long long)arg1 ;
-(void)_setShowingPortraitIntensitySlider:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setAnimatingFilterScrubberDismissal:(BOOL)arg1 ;
-(void)_setLowLightConflicts:(unsigned long long)arg1 ;
-(void)_updateLivePhotoAggregateDictionaryForRequest:(id)arg1 ;
-(void)_updateForCurrentConfiguration;
-(void)_embedTimerIndicatorViewWithLayoutStyle:(long long)arg1 ;
-(long long)_overCapturePreviewStatus;
-(CAMQRCodeInstructionLabel *)_qrCodeInstructionLabel;
-(void)_setDesiredFlashMode:(long long)arg1 ;
-(void)_setShouldIgnoreZoomFactorKVOForRamping:(BOOL)arg1 ;
-(void)_createImageWellIfNecessary;
-(CAMTimerIndicatorView *)_timerIndicatorView;
-(CAMBurstIndicatorView *)_burstIndicatorView;
-(long long)emulationMode;
-(void)remoteShutter:(id)arg1 setHDRMode:(long long)arg2 ;
-(BOOL)_shouldHideReviewButtonForGraphConfiguration:(id)arg1 ;
-(BOOL)_wantsHDRControlsVisible;
-(void)dynamicShutterControlDidPressLockButton:(id)arg1 ;
-(void)_unembedLevelView;
-(void)dynamicShutterControlDidPresentCounter:(id)arg1 ;
-(void)_createPortraitModeControlsIfNecessary;
-(BOOL)shouldHideTopBar;
-(UISwipeGestureRecognizer *)_swipeDownGestureRecognizer;
-(void)_updateTorchModeAnimated:(BOOL)arg1 ;
-(BOOL)remoteShutterBeginBurstCapture:(id)arg1 ;
-(void)stillImageRequestDidStartCapturing:(id)arg1 resolvedSettings:(id)arg2 ;
-(long long)imagePickerVideoConfiguration;
-(BOOL)isCapturingLivePhoto;
-(BOOL)_shouldHideFlashButtonForGraphConfiguration:(id)arg1 ;
-(void)_embedIntensityButtonWithLayoutStyle:(long long)arg1 ;
-(void)_setCurrentLowLightCaptureCancelable:(BOOL)arg1 ;
-(unsigned long long)_remainingCaptureTimerTicks;
-(double)maximumVideoRecordingDuration;
-(BOOL)_shouldShowFilterScrubberAfterNextRender;
-(void)_setShowingPortraitApertureSlider:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_redirectShutterEventIfNecessary:(unsigned long long)arg1 ;
-(BOOL)shouldHideHDRButton;
-(void)_createFlipButtonIfNecessary;
-(UIAlertController *)_flashOrTorchUnavailableAlertController;
-(long long)_sanitizedVideoConfigurationForMode:(long long)arg1 device:(long long)arg2 ;
-(CEKWheelScrubberView *)_filterScrubberView;
-(void)_handleModeDialValueChanged:(id)arg1 ;
-(void)_swipedToNextCameraMode;
-(void)captureControllerDidStartRunning:(id)arg1 ;
-(void)remoteShutter:(id)arg1 setIrisMode:(long long)arg2 ;
-(void)_destroyGridViewIfNecessary;
-(void)_createTimerButtonIfNecessary;
-(void)_updateShutterButtonLegibility;
-(void)_handleShutterButtonDragEnter:(id)arg1 ;
-(void)_handleZoomPinchGestureRecognizer:(id)arg1 ;
-(long long)_photoModeEffectFilterType;
-(void)_resetExposureClipping;
-(long long)currentCaptureMode;
-(unsigned long long)_lowLightConflicts;
-(void)shutterControlTouchAttemptedWhileDisabled:(id)arg1 ;
-(void)_handleSwipeToNextFilterRecognizer:(id)arg1 ;
-(CAMFeedbackController *)_feedbackController;
-(void)_stopCapturingCTMVideo;
-(void)_updatePortraitIntensitySliderForCurrentState;
-(CEKLightingNameBadge *)_lightingNameBadge;
-(CAMUtilityBar *)_utilityBar;
-(void)_handleCreativeCameraButtonTouchAttemptedWhileDisabled:(id)arg1 ;
-(void)_createMetalContextIfNecessary;
-(void)panoramaRequestDidStopCapturing:(id)arg1 interrupted:(BOOL)arg2 ;
-(CAMFlashBadge *)_flashBadge;
-(BOOL)_shouldHideModeDialForGraphConfiguration:(id)arg1 isCapturingBurst:(BOOL)arg2 ;
-(long long)flashMode;
-(void)disabledPreviewController:(id)arg1 wantsPreviewDisabledForReason:(long long)arg2 ;
-(void)dynamicShutterControlGesturesDidCancel:(id)arg1 ;
-(NSDate *)_lastTimerIndicatorFaceUpdateDate;
-(void)remoteShutter:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2 ;
-(double)_highlightClippingValue;
-(void)setTorchMode:(long long)arg1 ;
-(void)_embedPhotosButtonWithLayoutStyle:(long long)arg1 ;
-(void)set_filterScrubberLayerContents:(id)arg1 ;
-(void)_handleShutterButtonCancelled:(id)arg1 ;
-(BOOL)_isShowingPortraitIntensitySlider;
-(void)_performCaptureAnimation;
-(void)_snapshotAndFadeDisappearingView:(id)arg1 ;
-(void)_hideBurstIndicatorView;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(BOOL)_isExpectedLowLightDurationCancelable;
-(double)_exposureBiasForMode:(long long)arg1 ;
-(void)_stopCountdownForCaptureTimer;
-(BOOL)_isAnimatingFilterScrubberDismissal;
-(void)_handleStillDuringVideoButtonPressed:(id)arg1 ;
-(BOOL)isCapturingPhoto;
-(BOOL)_stopTimelapse;
-(void)_dismissCTMDescriptionOverlayViewWithDuration:(double)arg1 ;
-(void)_handleIntensitySliderDidChangeValue:(id)arg1 ;
-(long long)_portraitModeLightingEffectType;
-(void)remoteShutter:(id)arg1 focusOn:(CGPoint)arg2 ;
-(void)_updateVideoDurationAGGDForCaptureRequest:(id)arg1 videoCaptureResponse:(id)arg2 ;
-(UISwipeGestureRecognizer *)_previousFilterGestureRecognizer;
-(BOOL)automaticallyAdjustsAutorotationStyle;
-(double)_portraitModeApertureValue;
-(long long)_portraitModeEffectFilterType;
-(void)_indicateCaptureTimerProgressUsingTorch;
-(long long)_effectFilterTypeForMode:(long long)arg1 ;
-(BOOL)_shouldReportUserInitiationTimeForCurrentSettings;
-(void)_updateResolvedLowLightModeAnimated:(BOOL)arg1 ;
-(void)_embedGridViewWithLayoutStyle:(long long)arg1 ;
-(void)_setShallowDepthOfFieldStatus:(long long)arg1 ;
-(double)_zoomSliderValueForZoomFactor:(double)arg1 ;
-(void)_setAccessibilityHUDManagers:(id)arg1 ;
-(long long)_squareModeEffectFilterType;
-(void)changeToMode:(long long)arg1 device:(long long)arg2 ;
-(void)dynamicShutterControlDidStop:(id)arg1 ;
-(BCSAVParsingSession *)_barcodeParsingSession;
-(BOOL)shouldHideQRCodeInstructionLabel;
-(void)cameraRollControllerPrefersPresentingStatusbarHiddenDidChange:(id)arg1 ;
-(id<CAMViewfinderTransitionable>)_viewfinderTransitionable;
-(void)didSelectMode:(long long)arg1 ;
-(BOOL)_shouldDeferMediaLoadingForGraphConfiguration:(id)arg1 ;
-(void)_updateFilterScrubberForGraphConfiguration:(id)arg1 ;
-(void)_embedModeDialWithLayoutStyle:(long long)arg1 ;
-(void)_createCTMDescriptionOverlayViewIfNecessary;
-(void)setCustomOverlayView:(UIView *)arg1 ;
-(BOOL)_canUseFilteringForLayoutStyle:(long long)arg1 ;
-(void)_initiateCTMCaptureWithCurrentSettingsAtSystemTime:(unsigned long long)arg1 ;
-(id<CAMViewfinderReviewButtonSource>)reviewButtonSource;
-(void)_commitCTMCaptureWithType:(long long)arg1 ;
-(BOOL)_isBurstEndSoundPlaying;
-(void)_setLastShutterButtonTouchDownTime:(unsigned long long)arg1 ;
-(void)_embedFlipButtonWithLayoutStyle:(long long)arg1 ;
-(void)_createHDRButtonIfNecessary;
-(void)pressShutterForRemoteShutter;
-(void)_updatePortraitModeInstructionLabelForCurrentState;
-(void)_handleApplicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)_createLevelViewIfNecessary;
-(void)_setLowLightDurationMapping:(CGSize)arg1 ;
-(void)_embedLivePhotoButtonWithLayoutStyle:(long long)arg1 ;
-(CAMDisabledModeOverlayView *)_disabledModeOverlayView;
-(BOOL)_wantsCaptureAnimationForRequest:(id)arg1 ;
-(void)_setLowLightCaptureUIVisible:(BOOL)arg1 ;
-(long long)_slomoConfigurationOverride;
-(void)descriptionOverlayViewDidAcknowledge:(id)arg1 ;
-(void)_createOrDestroyLevelViewIfNecessary;
-(CAMBottomBar *)_bottomBar;
-(BOOL)_shouldAllowControlDrawerForGraphConfiguration:(id)arg1 ;
-(void)_handleUserChangedToVideoConfiguration:(long long)arg1 ;
-(void)_createElapsedTimeViewIfNecessary;
-(void)_handleSwipeUpGestureRecognizer:(id)arg1 ;
-(void)_setResolvedLivePhotoMode:(long long)arg1 ;
-(void)_setCurrentBurstTimer:(id)arg1 ;
-(double)_defaultZoomFactorForGraphConfiguration:(id)arg1 ;
-(BOOL)shouldHidePortraitModeInstructionLabel;
-(void)_setResolvedFlashMode:(long long)arg1 ;
-(long long)_shallowDepthOfFieldStatus;
-(void)_setLastConfigurationRequestID:(int)arg1 ;
-(void)_presentImageWellImage:(id)arg1 uuid:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)zoomControlCanPlayHaptics:(id)arg1 ;
-(void)_embedCreativeCameraButtonWithLayoutStyle:(long long)arg1 ;
-(void)_handleSwipeDownGestureRecognizer:(id)arg1 ;
-(BOOL)_isActiveZooming;
-(id)cameraRollControllerPresentingViewController:(id)arg1 ;
-(CAMCaptureGraphConfiguration *)_configuredGraphConfiguration;
-(BOOL)_shouldAnimateViewfinderCloseForReason:(long long)arg1 ;
-(void)controlDrawerDidCreateFilterScrubber:(id)arg1 ;
-(BOOL)_isOutOfDiskSpace;
-(CAMCaptureGraphConfiguration *)_currentGraphConfiguration;
-(id)modesForModeSelector:(id)arg1 ;
-(CAMFilterNameBadge *)_filterNameBadge;
-(void)set_timelapseAnalyticsEvent:(CAMAnalyticsCaptureEvent *)arg1 ;
-(void)_handleLivePhotoButtonChangedLivePhotoMode;
-(void)_updateControlDrawerContentsVisibilityForGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)_embedPanoramaViewWithLayoutStyle:(long long)arg1 ;
-(long long)_videoConfigurationForImagePickerQualityType:(long long)arg1 ;
-(UISwipeGestureRecognizer *)_nextFilterGestureRecognizer;
-(long long)_resolvedHDRMode;
-(long long)_currentDevice;
-(void)_setFlashAndHDRConflictingControl:(long long)arg1 ;
-(void)controlDrawer:(id)arg1 wantsFilterScrubberVisible:(BOOL)arg2 ;
-(void)setPersistenceBehavior:(unsigned long long)arg1 ;
-(long long)_desiredHDRMode;
-(void)_setClosingViewfinder:(BOOL)arg1 ;
-(void)_stopFlashingLivePhotoBadge;
-(void)_startCapturingBurstWithRequest:(id)arg1 ;
-(long long)cameraRollControllerPreferredPresentationOrientation:(id)arg1 ;
-(void)_updateControlDrawerContentsVisibilityAnimated:(BOOL)arg1 ;
-(void)_beginCapturingBurst;
-(void)_snapshotImageWellAndPersist;
-(void)set_slomoConfigurationOverride:(long long)arg1 ;
-(BOOL)_resetTimerDurationAfterDelayedCapture;
-(void)captureController:(id)arg1 didOutputConfigurationAvailability:(BOOL)arg2 ;
-(long long)_resolvedTorchModeForDesiredTorchMode;
-(void)_setPreventingAdditionalCaptures:(BOOL)arg1 ;
-(void)_handleImageWellPressed:(id)arg1 ;
-(BOOL)_isApplicationFullscreen;
-(CEKSlider *)_portraitIntensitySlider;
-(BOOL)_shouldIgnoreZoomFactorKVOForRamping;
-(void)_updateLivePhotoButtonAnimated:(BOOL)arg1 ;
-(void)setAvailableCaptureModes:(NSSet *)arg1 ;
-(void)_updateBadgeVisibilityAnimated:(BOOL)arg1 ;
-(void)captureControllerDidStopCapturingBurst:(id)arg1 ;
-(void)_createUtilityBarIfNecessary;
-(void)_handleTimerButtonChangedTimerDuration;
-(void)_restoreZoomRangeAfterRecordingIfNecessary;
-(BOOL)canToggleBetweenZoomFactorsForZoomControl:(id)arg1 ;
-(void)_embedFilterNameBadgeWithLayoutStyle:(long long)arg1 ;
-(void)_updateExposureSliderForCurrentState;
-(BOOL)_shouldAllowControlDrawerToggleForGraphConfiguration:(id)arg1 orientation:(long long)arg2 ;
-(BOOL)isPerformingTileTransition;
-(void)_setPhotoModeEffectFilterType:(long long)arg1 ;
-(void)_handleGeneralCaptureControllerSuspension;
-(void)_setLightingType:(long long)arg1 forMode:(long long)arg2 ;
-(PUReviewScreenDoneButton *)_doneButton;
-(BOOL)_isPerformingTopBarOrientationChange;
-(void)_validateViewfinderLayoutIfNeeded;
-(void)setPhotoModeAspectRatioCrop:(long long)arg1 ;
-(BOOL)shouldHideFilterNameBadge;
-(UIView *)customOverlayView;
-(void)set_filterTypes:(NSArray *)arg1 ;
-(BOOL)stopRecording;
-(void)_handleApplicationWillAddDeactivationReason:(id)arg1 ;
-(void)_shutterButtonSetSpinning:(BOOL)arg1 ;
-(void)zoomControl:(id)arg1 didChangeZoomFactor:(double)arg2 interactionType:(long long)arg3 ;
-(BOOL)_shouldRotateTopBarForGraphConfiguration:(id)arg1 ;
-(long long)_temporaryPersistenceOptionsForBehavior:(unsigned long long)arg1 ;
-(double)_cachedVideoZoomFactor;
-(void)_synchronizedCaptureTimerDelegateFired:(id)arg1 ;
-(BOOL)_captureStillImageWithCurrentSettings;
-(double)_shadowClippingValue;
-(BOOL)_wantsFilterScrubberVisible;
-(BOOL)previewViewController:(id)arg1 gestureRecognizer:(id)arg2 shouldRequireFailureOfGestureRecognizer:(id)arg3 ;
-(BOOL)_isZoomAllowedCurrently;
-(void)_updateLowLightControlsAnimated:(BOOL)arg1 ;
-(void)setHDRMode:(long long)arg1 ;
-(CUShutterButton *)_shutterButton;
-(BOOL)_lastMRCResultsCount;
-(void)_setReconfiguring:(BOOL)arg1 ;
-(void)_setDesiredHDRMode:(long long)arg1 ;
-(void)_createLivePhotoBadgeIfNecessary;
-(void)cameraRollController:(id)arg1 didChangeImageWellImage:(id)arg2 withUUID:(id)arg3 animated:(BOOL)arg4 ;
-(int)_lastConfigurationRequestID;
-(void)setConfigurationDelegate:(id<CAMCameraConfigurationDelegate>)arg1 ;
-(BOOL)_isTransitioningToReview;
-(void)_showBurstIndicatorView;
-(BOOL)shouldHideLightingNameBadgeForOrientation:(long long)arg1 ;
-(void)_setHomeIndicatorAutoHideOrientation:(long long)arg1 ;
-(BOOL)_isLowLightCaptureUIVisible;
-(BOOL)dynamicShutterControlCanStartOnTouchDown:(id)arg1 ;
-(void)setPerformingReviewUsingOverlay:(BOOL)arg1 ;
-(BOOL)_shouldEnableHDRButton;
-(void)_updateControlStatusBarContentsVisibilityAnimated:(BOOL)arg1 ;
-(long long)_resolvedLivePhotoMode;
-(void)_captureOrientationChanged:(id)arg1 ;
-(void)_startGeneratingDominantPhysicalButtonNotificationsIfSupported;
-(double)_portraitModeIntensityValue;
-(void)_handleApertureButtonTapped:(id)arg1 ;
-(void)captureController:(id)arg1 didOutputFlashActive:(BOOL)arg2 ;
-(BOOL)_shouldHideTopBarForGraphConfiguration:(id)arg1 ;
-(void)_showControlsForGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(CAMLivePhotoButton *)_livePhotoButton;
-(BOOL)_shouldEnableSwipeToModeSwitch;
-(long long)_resolvedTimerDuration;
-(void)_setPerformingTopBarOrientationChange:(BOOL)arg1 ;
-(BOOL)_shouldEnableExposureControlButton;
-(BOOL)_shouldHideUtilityBarForGraphConfiguration:(id)arg1 ;
-(void)_setShowingFilterScrubber:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateZoomUIWithZoomFactor:(double)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isPinchingForZoom;
-(BOOL)isEmulatingImagePicker;
-(double)_minimumExecutionTimeForChangeToGraphConfiguration:(id)arg1 fromGraphConfiguration:(id)arg2 ;
-(BOOL)shouldHideLivePhotoButton;
-(BOOL)_shouldEnableZoomControl;
-(BOOL)startRecording;
-(void)setReviewButtonSource:(id<CAMViewfinderReviewButtonSource>)arg1 ;
-(BOOL)_isCTMCaptureForType:(long long)arg1 ;
-(BOOL)_shouldDisableModeForMultitaskingAndGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldHidePanoramaViewForGraphConfiguration:(id)arg1 ;
-(CAMClosedViewfinderController *)_closedViewfinderController;
-(BOOL)isPerformingReviewUsingOverlay;
-(CGRect)cameraRollControllerSourceAssetRect:(id)arg1 ;
-(void)_zoomUIDidChangeToFactor:(double)arg1 ;
-(void)_handleHDRButtonChangedHDRMode;
-(void)dismissAccessibilityHUDViewForAccessibilityHUDManager:(id)arg1 ;
-(void)_handlePhysicalButtonPressed:(long long)arg1 ;
-(void)_embedFlashButtonWithLayoutStyle:(long long)arg1 ;
-(void)setAutorotationStyle:(long long)arg1 ;
-(void)_updateLightingUIForGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setOverCapturePreviewStatus:(long long)arg1 ;
-(void)_embedDoneButtonWithLayoutStyle:(long long)arg1 ;
-(void)zoomSliderDidEndZooming:(id)arg1 ;
-(void)captureControllerDidStopRunning:(id)arg1 ;
-(void)_updateHDRButtonAnimated:(BOOL)arg1 ;
-(void)closedViewfinderController:(id)arg1 wantsViewfinderClosedForReason:(long long)arg2 ;
-(BOOL)_isFlashingLivePhotoBadge;
-(void)_handleUserChangedToLivePhotoMode:(long long)arg1 ;
-(void)_updateAGGDForPanoramaCaptureRequest:(id)arg1 ;
-(void)lightingControlDidChangeSelectedLightingType:(id)arg1 ;
-(void)setCustomPreviewViewTransform:(CGAffineTransform)arg1 ;
-(CAMLocationController *)_locationController;
-(CAMLevelIndicatorView *)_levelView;
-(void)_handlePhysicalButtonReleased:(long long)arg1 ;
-(void)_embedShallowDepthOfFieldBadgeWithLayoutStyle:(long long)arg1 ;
-(void)_willChangeToGraphConfiguration:(id)arg1 zoomFactor:(double)arg2 fromGraphConfiguration:(id)arg3 animated:(BOOL)arg4 ;
-(long long)_displayedFlashModeForMode:(long long)arg1 flashActive:(out BOOL*)arg2 ;
-(void)_embedFocusAndExposureLockBadgeWithLayoutStyle:(long long)arg1 ;
-(void)_collapseExpandedButtonsAnimated:(BOOL)arg1 ;
-(void)_updateFilterAggregateDictionariesForRequest:(id)arg1 ;
-(CUCaptureController *)_captureController;
-(void)_changeToGraphConfiguration:(id)arg1 zoomFactor:(double)arg2 fromGraphConfiguration:(id)arg3 ;
-(long long)messagesTransitionState;
-(BOOL)_isCapturingFromTimer;
-(void)_embedZoomControlWithLayoutStyle:(long long)arg1 ;
-(void)dynamicShutterControlLogDragCounter:(id)arg1 ;
-(void)_updateDoneButtonIfNeeded;
-(void)_updateCaptureControllerForLowLightMode;
-(void)controlDrawer:(id)arg1 didChangeLivePhotoMode:(long long)arg2 ;
-(NSArray *)_filterTypes;
-(BOOL)isUserInteractionLoggingEnabled;
-(BOOL)isDisablingMultipleCaptureFeatures;
-(id)modesForModeDial:(id)arg1 ;
-(void)_updateUserPreferencesForFilterUsage;
-(NSMutableArray *)_accessibilityHUDManagers;
-(void)_setResolvedLowLightControlMode:(unsigned long long)arg1 ;
-(void)setDisablingMultipleCaptureFeatures:(BOOL)arg1 ;
-(BOOL)_isTransitioningBackFromReview;
-(void)wheelScrubberViewDidChangeSelectedIndex:(id)arg1 ;
-(long long)photoModeAspectRatioCrop;
-(void)_setDesiredLowLightControlMode:(unsigned long long)arg1 ;
-(BOOL)_shouldHideHDRButtonForGraphConfiguration:(id)arg1 ;
-(CAMRemoteShutterController *)_remoteShutterController;
-(BOOL)_shouldEnableZoomSlider;
-(id<CAMCreativeCameraDelegate>)creativeCameraDelegate;
-(void)_embedUtilityBarWithLayoutStyle:(long long)arg1 ;
-(void)_setBarcodeParsingSession:(id)arg1 ;
-(void)_updateTopBarStyleForGraphConfiguration:(id)arg1 capturing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(CAMIdleController *)_idleController;
-(BOOL)_shouldUseZoomButtonForCameraToggleForCurrentModeAndDevice;
-(void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)_setExposureBias:(double)arg1 forMode:(long long)arg2 ;
-(void)_handleImageWellReleased:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(BOOL)_shouldHidePhotosButtonForGraphConfiguration:(id)arg1 ;
-(void)_suppressProactiveSuggestionAnimated:(BOOL)arg1 ;
-(BOOL)_shouldHideZoomSliderForGraphConfiguration:(id)arg1 ;
-(void)_embedFlashBadgeWithLayoutStyle:(long long)arg1 ;
-(void)_swipedToPreviousCameraMode;
-(void)captureController:(id)arg1 didOutputHDRSuggestion:(BOOL)arg2 ;
-(CAMCallStatusMonitor *)_callStatusMonitor;
-(void)setImagePickerVideoConfiguration:(long long)arg1 ;
-(BOOL)_shouldHideCreativeCameraButtonForGraphConfiguration:(id)arg1 ;
-(void)setAutomaticallyAdjustsAutorotationStyle:(BOOL)arg1 ;
-(CEKApertureButton *)_apertureButton;
-(id)_captureFiltersForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)isRecording;
-(CAMCTMDescriptionOverlayView *)_ctmDescriptionOverlayView;
-(void)videoRequestDidStartCapturing:(id)arg1 ;
-(void)_captureRequest:(id)arg1 didCompleteVideoCaptureWithResponse:(id)arg2 error:(id)arg3 ;
-(void)_createLightingControlIfNecessary;
-(void)_createShutterButtonIfNecessary;
-(void)_handleFlipButtonReleased:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)_panoramaCaptureRequestWithCurrentSettings;
-(void)_snapshotAndFadeDisappearingView:(id)arg1 parentViewOverride:(id)arg2 shouldHideView:(BOOL)arg3 ;
-(void)captureControllerDidReachMaximumBurstLength:(id)arg1 ;
-(BOOL)_shouldHideFocusAndExposureLockBadgeForGraphConfiguration:(id)arg1 ;
-(id)_mutableSupportedCaptureModes;
-(void)setCreativeCameraDelegate:(id<CAMCreativeCameraDelegate>)arg1 ;
-(BOOL)shouldHideFlipButton;
-(void)videoRequestDidStopCapturing:(id)arg1 ;
-(BOOL)_shouldHidePortraitModeInstructionLabelForGraphConfiguration:(id)arg1 ;
-(void)cameraRollControllerDidDismissFullyPresentedCameraRoll:(id)arg1 ;
-(void)stillImageRequestsWillRequestCTMVideoCaptureEnd;
-(void)panoramaRequestDidStartCapturing:(id)arg1 ;
-(void)_destroyHDRBadgeIfNecessary;
-(BOOL)_shouldHideIntensityButtonForGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldHideTimerIndicatorViewForGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldHideZoomSliderForGraphConfiguration:(id)arg1 ignoreExpiredVisibilityTimer:(BOOL)arg2 ;
-(void)stillImageRequestsDidStopCapturingCTMVideo;
-(void)timelapseControllerStopped:(id)arg1 ;
-(void)_closeViewfinderForChangeFromMode:(long long)arg1 toMode:(long long)arg2 fromDevice:(long long)arg3 toDevice:(long long)arg4 ;
-(unsigned long long)preferredScreenEdgesDeferringSystemGestures;
-(void)_embedLevelViewWithLayoutStyle:(long long)arg1 ;
-(BOOL)_isClosingViewfinder;
-(void)_setupAndStartSynchronizedCaptureTimerDelegate;
-(BOOL)_shouldEnableSwipeToChangeFilters;
-(BOOL)_shouldHideStillDuringVideoButtonForGraphConfiguration:(id)arg1 ;
-(void)_clearFilterScrubberLayerContentsIfNotNeededFromCallsite:(id)arg1 ;
-(void)closedViewfinderController:(id)arg1 wantsViewfinderOpenForReason:(long long)arg2 ;
-(long long)hdrMode;
-(void)pressStillDuringVideoForRemoteShutter;
-(BOOL)shouldHideElapsedTimeView;
-(BOOL)zoomControlShouldSnapDialToSwitchOverZoomFactors:(id)arg1 ;
-(CAMDisabledPreviewController *)_disabledPreviewController;
-(BOOL)_isOpeningViewfinder;
-(void)_updateFilterButtonOnState;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id)_generateAnalyticsCaptureEventWithRequest:(id)arg1 burst:(BOOL)arg2 ;
-(BOOL)_shouldEnableControlStatusIndicator:(unsigned long long)arg1 ;
-(void)_updateForShallowDepthOfFieldStatusChangedAnimated:(BOOL)arg1 ;
-(void)_createCameraRollSwipeUpGestureRecognizerIfNecessary;
-(void)captureController:(id)arg1 didOutputHistogramResult:(id)arg2 ;
-(CGRect)reviewUsingOverlayFrame;
-(void)stillImageRequestDidCompleteStillImageRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(BOOL)_shouldHideLightingNameBadgeForGraphConfiguration:(id)arg1 orientation:(long long)arg2 ;
-(void)_forceHideBadgesAnimated:(BOOL)arg1 ;
-(void)_setLastZoomInteractionType:(long long)arg1 ;
-(BOOL)_shouldHideFilterButtonForGraphConfiguration:(id)arg1 ;
-(void)_updateApertureAggregateDictionariesForRequest:(id)arg1 ;
-(void)cameraRollControllerDidFullyPresentCameraRoll:(id)arg1 ;
-(unsigned long long)_reasonsToDisableShutterButton;
-(void)_changeToZoomFactor:(double)arg1 rampDuration:(double)arg2 shouldAnimate:(BOOL)arg3 ;
-(long long)_aspectRatioCropForMode:(long long)arg1 ;
-(void)_embedLivePhotoBadgeWithLayoutStyle:(long long)arg1 ;
-(CAMPortraitModeInstructionLabel *)_portraitModeInstructionLabel;
-(void)_setBurstEndSoundPlaying:(BOOL)arg1 ;
-(BOOL)_shouldMonitorDeviceMotionForGraphConfiguration:(id)arg1 ;
-(unsigned long long)_supportedInterfaceOrientationsForLayoutStyle:(long long)arg1 ;
-(void)_updateOriginForRequest:(id)arg1 ;
-(void)controlDrawerFlashButtonUnavailable:(id)arg1 ;
-(BOOL)remoteShutterEndBurstCapture:(id)arg1 ;
-(void)setAutomaticallyAdjustsAvailableCaptureModes:(BOOL)arg1 ;
-(void)wheelScrubberView:(id)arg1 updateCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_handleFlipButtonTouchDown:(id)arg1 ;
-(void)_updateZoomAggregateDictionaryForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 ctmCaptureType:(long long)arg4 zoomFactor:(double)arg5 zoomInteractionType:(long long)arg6 ;
-(void)dynamicShutterControlLogShortPress:(id)arg1 ;
-(BOOL)shouldHideFlashButton;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)_desiredLowLightControlMode;
-(long long)_layoutStyle;
-(void)_createApertureButtonIfNecessary;
-(void)_setProactiveFlashSuggestionSuppressed:(BOOL)arg1 ;
-(void)_setSquareModeEffectFilterType:(long long)arg1 ;
-(BOOL)_shouldPauseCapturingStillImagePairedVideoForGraphConfiguration:(id)arg1 isShowingCameraRoll:(BOOL)arg2 ;
-(long long)_shutterButtonModeForCameraMode:(long long)arg1 isCapturing:(BOOL)arg2 ;
-(void)_updateFullscreenViewfinderControlsVisibilityForGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateLightingAggregateDictionariesForRequest:(id)arg1 ;
-(void)_updateLightingControlFadesForGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)_createStillImageControlsIfNecessary;
-(void)_handleUserChangedToMode:(long long)arg1 device:(long long)arg2 zoomFactor:(double)arg3 ;
-(CAMPanoramaViewController *)_panoramaViewController;
-(unsigned long long)_previousModeSwipeDirectionForLayoutStyle:(long long)arg1 ;
-(void)_updatePortraitIntensityEffectAggregateDictionariesForRequest:(id)arg1 ;
-(void)captureController:(id)arg1 didOutputShallowDepthOfFieldStatus:(long long)arg2 stagePreviewStatus:(long long)arg3 ;
-(void)_resetPortraitModeApertureValueIfNeededForGraphConfiguration:(id)arg1 ;
-(void)_setReconfiguringForTripleCameraEmulation:(BOOL)arg1 ;
-(BOOL)_shouldEnableModeDial;
-(long long)torchMode;
-(void)_embedFilterButtonWithLayoutStyle:(long long)arg1 ;
-(void)_prepareTopBarForOrientationChangeDuringConfiguration;
-(BOOL)_shouldHideDoneButtonForGraphConfiguration:(id)arg1 ;
-(void)_setInternalAutorotationStyle:(long long)arg1 ;
-(long long)_lowLightModeForCaptureMode:(long long)arg1 device:(long long)arg2 ctmCaptureType:(long long)arg3 isBurst:(BOOL)arg4 ;
-(BOOL)_filterScrubberSwipeMatchesExposureBiasPanDirection;
-(void)_handleStillDuringVideoButtonReleased:(id)arg1 ;
-(BOOL)_modeChangeSwipeMatchesExposureBiasPanDirection;
-(void)_setResolvedTorchMode:(long long)arg1 ;
-(void)_setShowingFilterScrubber:(BOOL)arg1 ;
-(long long)_homeIndicatorAutoHideOrientation;
-(void)_updateAGGDForVideoCaptureResponse:(id)arg1 request:(id)arg2 ;
-(void)_updatePortraitApertureButtonForGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)set_videoConfigurationOverride:(long long)arg1 ;
-(long long)_autorotationStyleForLayoutStyle:(long long)arg1 ;
-(BOOL)_isFlashOrTorchSupportedForGraphConfiguration:(id)arg1 ;
-(CAMModeDial *)_modeDial;
-(BOOL)_isCapturingTimelapse;
-(void)_createFilterNameBadgeIfNecessary;
-(void)_attemptShutterReleaseWithBlock:(/*^block*/id)arg1 ;
-(void)_createFilterScrubberGestureRecognizersIfNecessary;
-(NSSet *)availableCaptureModes;
-(BOOL)_shouldUseFiltersForGraphConfiguration:(id)arg1 ;
-(void)lightingControl:(id)arg1 willChangeExpanded:(BOOL)arg2 ;
-(void)_handleApplicationDidBecomeActive:(id)arg1 ;
-(void)_createReviewButtonIfNecessary;
-(void)_dominantPhysicalButtonChanged:(id)arg1 ;
-(id)_filterScrubberLayerContents;
-(BOOL)_isCTMVideoSupportedForGraphConfiguration:(id)arg1 ;
-(CAMMessagesPhotosButton *)_photosButton;
-(void)_setCachedVideoZoomFactor:(double)arg1 ;
-(void)captureController:(id)arg1 willRecoverFromRuntimeError:(id)arg2 ;
-(void)controlDrawer:(id)arg1 didChangeHDRMode:(long long)arg2 ;
-(void)dynamicShutterControlLogLongPress:(id)arg1 ;
-(void)_createPanoramaControlsIfNecessary;
-(void)_createVideoControlsIfNecessary;
-(void)_handlePhotosButtonReleased:(id)arg1 ;
-(void)_resetAggregateInfoForPhotoFilters;
-(long long)_resolvedLowLightMode;
-(void)captureController:(id)arg1 didOutputLowLightModeDurationMapping:(CGSize)arg2 ;
-(void)captureController:(id)arg1 didOutputMinAvailableVideoZoomFactor:(double)arg2 ;
-(CAMFullscreenViewfinder *)_fullscreenViewfinder;
-(void)_handleFilterButtonTapped:(id)arg1 ;
-(void)_openViewfinderForAllModeAndDeviceChangeReasons;
-(void)_updateQRCodeInstructionLabelForCurrentState;
-(long long)_itemIndexForFilterType:(long long)arg1 ;
-(void)controlDrawer:(id)arg1 didChangeTimerDuration:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_embedCTMDescriptionOverlayView;
-(id)_previewFiltersForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)_shouldResetZoomForChangeFromMode:(long long)arg1 toMode:(long long)arg2 ;
-(void)captureController:(id)arg1 didChangeRampingVideoZoom:(BOOL)arg2 ;
-(void)controlDrawer:(id)arg1 didChangeAspectRatio:(long long)arg2 ;
-(void)changeToMode:(long long)arg1 device:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_startCountdownForCaptureTimer;
-(void)videoThumbnailOutputWillEndRenderingThumbnails;
-(void)_handleShutterButtonReleased:(id)arg1 ;
-(BOOL)_isControlDrawerShowingSlider;
-(void)_setCTMDescriptionOverlayView:(id)arg1 ;
-(id)_stillImageCaptureRequestWithCurrentSettingsAsBurst:(BOOL)arg1 withMomentSettings:(id)arg2 withCTMCaptureType:(long long)arg3 maximumLength:(long long)arg4 ;
-(void)availableDiskSpaceChanged;
-(void)_embedStillDuringVideoButtonWithLayoutStyle:(long long)arg1 ;
-(void)_handleDisabledShutterTap;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(BOOL)_isShowingBurstIndicatorView;
-(void)_setPortraitModeDescriptionOverlayView:(id)arg1 ;
-(BOOL)_shouldHideLightingControlBadgeForGraphConfiguration:(id)arg1 orientation:(long long)arg2 ;
-(CAMAnimationDelegate *)_synchronizedCaptureTimerDelegate;
-(CAMAnalyticsCaptureEvent *)_timelapseAnalyticsEvent;
-(void)_updatePropertiesForCaptureConfiguration:(id)arg1 conflictingControlConfiguration:(id)arg2 ;
-(void)_setWantsFilterScrubberVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldApplyTopBarRotationForGraphConfiguration:(id)arg1 ;
-(void)_updateCaptureTimerIndicatorWithFaceResult:(id)arg1 ;
-(void)_setResolvedTimerDuration:(long long)arg1 ;
-(BOOL)_shouldHidePortraitModeDescriptionOverlayViewForGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldHideFlipButtonForGraphConfiguration:(id)arg1 ;
-(void)_updateInterfaceModulationForGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateHDRSuggestionMonitoringForGraphConfiguration:(id)arg1 ;
-(BOOL)_isPinchToZoomAllowed;
-(UIPinchGestureRecognizer *)_zoomPinchGestureRecognizer;
-(CAMZoomSlider *)_zoomSlider;
-(void)applyCaptureConfiguration:(id)arg1 conflictingControlConfiguration:(id)arg2 ;
-(BOOL)automaticallyAdjustsApplicationIdleTimer;
-(BOOL)_startCapturingPanoramaWithRequest:(id)arg1 ;
-(void)controlStatusBar:(id)arg1 didReceiveTapInIndicatorForType:(unsigned long long)arg2 ;
-(void)fullscreenViewfinder:(id)arg1 didChangeControlDrawerVisibility:(BOOL)arg2 ;
-(void)handleVolumeButtonReleased;
-(id)_primaryControlStatusIndicatorTypes;
-(long long)_nextFramerateVideoConfigurationForVideoConfiguration:(long long)arg1 ;
-(void)_embedHDRButtonWithLayoutStyle:(long long)arg1 ;
-(BOOL)_isCurrentLowLightCaptureCancelable;
-(BOOL)_shouldEnableControlDrawerToggle;
-(void)_handleCameraRollSwipeUpGestureRecognizer:(id)arg1 ;
-(BOOL)_shouldSwitchToVideoConfiguration:(long long)arg1 ;
-(void)_startSynchronizedCaptureTimerDelegate;
-(void)_updateTorchModeOnControllerForMode:(long long)arg1 ;
-(void)disabledPreviewController:(id)arg1 wantsPreviewEnabledForReason:(long long)arg2 ;
-(void)dynamicShutterControlDidStart:(id)arg1 withGesture:(long long)arg2 ;
-(void)zoomSliderDidEndAutozooming:(id)arg1 ;
-(void)_cancelCaptureAnimation;
-(BOOL)_shouldHideShallowDepthOfFieldBadgeForGraphConfiguration:(id)arg1 ;
-(void)captureController:(id)arg1 didOutputCaptureAvailability:(BOOL)arg2 ;
-(void)previewViewControllerDidChangeVideoFillAspectRatio:(id)arg1 ;
-(void)timelapseController:(id)arg1 startedWithCaptureOrientation:(long long)arg2 ;
-(BOOL)shouldAutorotate;
-(id)currentContentSize;
-(void)_presentCameraRollViewControllerAnimated:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(void)_setTimerDurationAndUpdateUI:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldCreateAndEmbedControls;
-(BOOL)_shouldEnableIntensityButton;
-(BOOL)_startCapturingVideoWithRequest:(id)arg1 ;
-(void)_updateControlsForVisibleFilterScrubberAnimated:(BOOL)arg1 ;
-(void)videoRequestDidCompleteCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(BOOL)_isFlashUnavailableForMode:(long long)arg1 ;
-(void)_updateSwipeToModeSwitchGestureRecognizersWithDirectionsForLayoutStyle:(long long)arg1 ;
-(void)fullscreenViewfinder:(id)arg1 didChangeExpanded:(BOOL)arg2 forDrawerControlOfType:(long long)arg3 animated:(BOOL)arg4 ;
-(void)fullscreenViewfinderDidCreatePortraitControls:(id)arg1 ;
-(void)remoteShutter:(id)arg1 setZoomAmount:(double)arg2 ;
-(BOOL)remoteShutterStartCapture:(id)arg1 ;
-(id<CAMCameraConfigurationDelegate>)configurationDelegate;
-(void)_createShallowDepthOfFieldBadgeIfNecessary;
-(unsigned long long)_lastPerformedShutterButtonFeedbackType;
-(CAMMachineReadableCodeLoggingController *)_machineReadableCodeLoggingController;
-(void)_setResetTimerDurationAfterDelayedCapture:(BOOL)arg1 ;
-(void)_setupBurstTimerWithDelay:(double)arg1 ;
-(unsigned long long)_shutterButtonFeedbackForCurrentConfiguration;
-(BOOL)_wantsZoomControlForGraphConfiguration:(id)arg1 ;
-(void)captureController:(id)arg1 didOutputFlashAvailability:(BOOL)arg2 ;
-(void)setDisablingAdditionalCaptures:(BOOL)arg1 ;
-(void)_createFocusAndExposureLockBadgeIfNecessary;
-(BOOL)_canShowWhileLocked;
-(double)_currentMaximumZoomFactor;
-(void)_embedLightingNameBadgeWithLayoutStyle:(long long)arg1 ;
-(void)_embedPortraitApertureSliderWithLayoutStyle:(long long)arg1 ;
-(void)_setLayoutStyle:(long long)arg1 ;
-(BOOL)_shouldHideElapsedTimeViewForGraphConfiguration:(id)arg1 orientation:(long long)arg2 ;
-(void)captureController:(id)arg1 didOutputOverCapturePreviewStatus:(long long)arg2 ;
-(void)_updatePortraitApertureSliderForGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldEnableLowLightControl;
-(CGAffineTransform)customPreviewViewTransform;
-(void)_setOutOfDiskSpace:(BOOL)arg1 ;
-(void)setAutomaticallyAdjustsApplicationIdleTimer:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_shouldHideTimerButtonForGraphConfiguration:(id)arg1 ;
-(void)_updateFilterNameBadgeAnimated:(BOOL)arg1 ;
-(void)_updateFlashModeOnControllerForMode:(long long)arg1 ;
-(void)_updateOverCaptureReticleMaskingStyleAnimated:(BOOL)arg1 ;
-(void)_createTimelapseControlsIfNecessary;
-(void)_dismissFlashOrTorchUnavailableAlertViewAnimated:(BOOL)arg1 ;
-(id)_graphConfigurationForChangeToMode:(long long)arg1 device:(long long)arg2 fromGraphConfiguration:(id)arg3 ;
-(BOOL)_shouldHideApertureButtonForGraphConfiguration:(id)arg1 ;
-(double)_videoZoomFactorAtPinchStart;
-(BOOL)_useCreativeCameraControls;
-(void)_updateShutterButtonForEndOfLowLightCapture;
-(void)dynamicShutterControlGesturesDidBegin:(id)arg1 ;
-(void)remoteShutter:(id)arg1 setCaptureDevice:(long long)arg2 ;
-(void)stillImageRequestsWillStartCapturingLivePhotoVideo;
-(void)videoThumbnailOutputWillBeginRenderingThumbnailsWithContents:(id)arg1 ;
-(long long)_maximumBurstLengthForTimer;
-(void)_setResolvedHDRMode:(long long)arg1 ;
-(BOOL)_shouldShowDrawerControlOfType:(long long)arg1 forGraphConfiguration:(id)arg2 ;
-(CAMViewfinderTransitionController *)_transitionController;
-(void)cameraRollControllerRequestsCaptureSessionStopped:(id)arg1 ;
-(void)captureControllerWasInterrupted:(id)arg1 ;
-(void)readUserPreferencesAndHandleChangesWithOverrides:(id)arg1 ;
-(unsigned long long)_nextModeSwitchDirectionForLayoutStyle:(long long)arg1 ;
-(id)_generateAnalyticsCaptureEventForTimelapse;
-(void)_handleCallStatusMonitorDidChangeCallActive:(id)arg1 ;
-(CEKApertureSlider *)_portraitApertureSlider;
-(UIControl *)_primaryShutterControl;
-(void)_setFlashingLivePhotoBadge:(BOOL)arg1 ;
-(void)_setLastPerformedShutterButtonFeedbackType:(unsigned long long)arg1 ;
-(void)_startCaptureSessionIfNecessaryIfVisibleAndInterrupted;
-(void)_updateControlsDisabledByLowLightAnimated:(BOOL)arg1 ;
-(void)_updateZoomControlLayoutForGraphConfiguration:(id)arg1 fromGraphConfiguration:(id)arg2 animated:(BOOL)arg3 ;
-(long long)_desiredTorchMode;
-(void)_snapshotAndFadeDisappearingOverlayViewsForChangeToGraphConfiguration:(id)arg1 ;
-(void)timelapseController:(id)arg1 persistedPlaceholderResult:(id)arg2 error:(id)arg3 ;
-(void)_resolveAndUpdatePotentiallyConflictingControls:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_shouldHideCTMDescriptionOverlayViewForGraphConfiguration:(id)arg1 ;
-(void)_updateDisabledModeUIAnimated:(BOOL)arg1 ;
-(void)setMessagesTransitionState:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isShowingPortraitApertureSlider;
-(void)_beginDisablingInterfaceAutorotation;
-(id)_debugEnabledDescriptionForControl:(id)arg1 withReason:(id)arg2 ;
-(void)_setLastTimerIndicatorFaceUpdateDate:(id)arg1 ;
-(void)_updateStillImageCaptureTypeAggregateDictionariesForRequest:(id)arg1 response:(id)arg2 ;
-(id)_secondaryControlStatusIndicatorTypes;
-(void)cameraRollController:(id)arg1 willShowPresentingViewControllerShouldStartCaptureSession:(BOOL)arg2 ;
-(void)fullscreenViewfinderDidCreateControlDrawer:(id)arg1 ;
-(void)_configureZoomControlForGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)_dismissDiskSpaceAlertViewAnimated:(BOOL)arg1 ;
-(long long)_elapsedTimeViewIdleBackgroundStyle;
-(unsigned long long)_previewConfigurationForMode:(long long)arg1 videoThumbnailOutputEnabled:(BOOL)arg2 ;
-(void)_setFlashOrTorchUnavailableAlertController:(id)arg1 ;
-(BOOL)_shouldHideImageWellForGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldUseZoomButtonForCameraToggleForGraphConfiguration:(id)arg1 ;
-(long long)_topBarBackgroundStyleForMode:(long long)arg1 capturing:(BOOL)arg2 ;
-(void)_updateAllControlsWithContentSize:(id)arg1 ;
-(void)_updateUIForCapturing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateZoomControlAccessoryStateAnimated:(BOOL)arg1 ;
-(void)dynamicShutterControlLogDragLock:(id)arg1 ;
-(void)panoramaRequestDidCompleteLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)_createHDRBadgeIfNecessary;
-(void)_ensureSensitiveContentHidden;
-(void)_performCaptureAnimationWithDuration:(double)arg1 ;
-(void)_handleShutterButtonDragExited:(id)arg1 ;
-(unsigned long long)_reasonsToDisableCreativeCameraButton;
-(void)_updateHomeIndicatorBehaviorsForCaptureOrientation;
-(void)_updateTorchAggregateDictionaryForRequest:(id)arg1 isTorchActive:(BOOL)arg2 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(UIView *)_captureAnimationPreviewOverlay;
-(void)_embedQRCodeInstructionLabelWithLayoutStyle:(long long)arg1 ;
-(id)_flashOrTorchDisabledMessageForCurrentPowerPressure;
-(void)_handleUserChangedToMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)_isPrimaryDisplayAssetForCoordinationInfo:(id)arg1 ;
-(void)_stopGeneratingDominantPhysicalButtonNotificationsIfSupported;
-(void)_updateBarBackgroundStyleForMode:(long long)arg1 capturing:(BOOL)arg2 animated:(BOOL)arg3 ;
-(BOOL)_shouldEnableLivePhotoButton;
-(void)controlStatusBar:(id)arg1 didCreateIndicatorForType:(unsigned long long)arg2 ;
-(void)handleVolumeButtonPressed;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_createPortraitModeInstructionLabelIfNecessary;
-(void)_embedZoomSliderWithLayoutStyle:(long long)arg1 ;
-(long long)_persistenceOptionsForBehavior:(unsigned long long)arg1 allowingOptionalLocalPersistence:(BOOL)arg2 ;
-(void)previewViewControllerDidChangeFocusOrExposureLocked:(id)arg1 shouldAnimate:(BOOL)arg2 ;
-(BOOL)remoteShutterShouldSuspendApp:(id)arg1 ;
-(void)_createFlashButtonIfNecessary;
-(BOOL)shouldLayoutLightingNameBadgeAtBottom;
-(void)_handleFlashButtonWhileFlashUnavailable;
-(BOOL)_hasInFlightConfiguration;
-(BOOL)_shouldHideZoomControlForGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldShowIndicatorOfType:(unsigned long long)arg1 forGraphConfiguration:(id)arg2 ;
-(void)_applyAutorotationCorrectingTransformForOrientation:(long long)arg1 ;
-(id)_debugStringForApplicationDeactivationReason:(int)arg1 ;
-(void)_dismissPortraitModeDescriptionOverlayViewWithDuration:(double)arg1 ;
-(void)_embedHDRBadgeWithLayoutStyle:(long long)arg1 ;
-(long long)_lastCapturedFilterTypeForMode:(long long)arg1 ;
-(void)captureControllerInterruptionEnded:(id)arg1 ;
-(void)panoramaRequestDidCompleteCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)timelapseController:(id)arg1 generatedPlaceholderResult:(id)arg2 withThumbnailImage:(id)arg3 forAssetUUID:(id)arg4 inCaptureSession:(unsigned short)arg5 ;
-(BOOL)_isLowLightActiveForCurrentSettings;
-(BOOL)_isLowLightCaptureCanceling;
-(CEKLightingControl *)_lightingControl;
-(long long)_topBarStyleForGraphConfiguration:(id)arg1 capturing:(BOOL)arg2 ;
-(void)accessibilityHUDManager:(id)arg1 wantsToShowHUDItem:(id)arg2 ;
-(void)_createFilterScrubberViewIfNecessary;
-(void)dynamicShutterControlDidDismissCounter:(id)arg1 ;
-(BOOL)_shouldRequestSpatialOverCaptureForGraphConfiguration:(id)arg1 ctmCaptureType:(long long)arg2 isCapturingVideo:(BOOL)arg3 isBurst:(BOOL)arg4 ;
-(void)_createBurstIndicatorViewIfNecessary;
-(void)_createIntensityButtonIfNecessary;
-(void)_createSwipeToModeSwitchGestureRecognizersIfNecessary;
-(void)_embedFilterScrubberViewWithLayoutStyle:(long long)arg1 ;
-(void)_embedPortraitModeInstructionLabelWithLayoutStyle:(long long)arg1 ;
-(BOOL)_isZoomAllowedForGraphConfiguration:(id)arg1 ;
-(CAMVideoConfigurationStatusIndicator *)_targetVideoConfigurationStatusIndicator;
-(void)_createCommonGestureRecognizersIfNecessary;
-(void)captureController:(id)arg1 didChangeToGraphConfiguration:(id)arg2 forDesiredConfiguration:(id)arg3 requestID:(int)arg4 ;
-(void)captureControllerDidStopPlayingBurstEndSound:(id)arg1 ;
-(void)_createFilterButtonIfNecessary;
-(BOOL)_isLivePhotoSupportedForGraphConfiguration:(id)arg1 ;
-(void)_setShallowDepthOfFieldStatus:(long long)arg1 stagePreviewStatus:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_setVideoZoomFactorAtPinchStart:(double)arg1 ;
-(BOOL)_shouldHideLivePhotoButtonForGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldEnableVideoConfigurationControl;
-(void)_updateControlStatusBarContentsVisibilityForGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isTransitioningToCreativeCamera;
-(void)_createPortraitApertureSliderIfNecessary;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)_allowsPhysicalCaptureInteraction;
-(CAMMomentCaptureSettings *)_currentStillImageCaptureMomentSettings;
-(long long)_currentVideoConfiguration;
-(CAMMetalContext *)_metalContext;
-(void)_performCaptureAnimationWithDuration:(double)arg1 curve:(id)arg2 color:(id)arg3 fadeOut:(BOOL)arg4 ;
-(void)_setCapturingFromPhysicalButton:(BOOL)arg1 ;
-(void)_setHighlightClippingValue:(double)arg1 ;
-(BOOL)_shouldHideQRCodeInstructionLabelForGraphConfiguration:(id)arg1 ;
-(void)_updatePairedVideoCaptureOnControllerForGraphConfiguration:(id)arg1 isShowingCameraRoll:(BOOL)arg2 ;
-(double)_zoomFactorForZoomSliderValue:(double)arg1 ;
-(BOOL)_capturingFromPhysicalButton;
-(void)captureControllerWillStartPlayingBurstEndSound:(id)arg1 ;
-(void)controlDrawerDidCreateApertureSlider:(id)arg1 ;
-(void)panoramaRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)set_physicalCaptureRecognizer:(CAMPhysicalCaptureRecognizer *)arg1 ;
-(void)shutterButtonTouchAttemptedWhileDisabled:(id)arg1 ;
-(id)_allControlDrawerTypes;
-(void)_createZoomControlIfNecessary;
-(unsigned long long)_resolvedLowLightControlModeForMode:(unsigned long long)arg1 ;
-(id)_targetLightingControl;
-(long long)_availableDefaultCaptureMode;
-(CGRect)cameraRollControllerPreviewSourceRect:(id)arg1 ;
-(void)loadView;
-(void)_embedAllControlsWithLayoutStyle:(long long)arg1 ;
-(void)_destroyGestureRecognizersRequiringStandardControls;
-(BOOL)_shouldUseZoomControlInsteadOfSlider;
-(id)_targetFilterScrubberView;
-(void)set_reviewButton:(UIButton *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)_bottomBarBackgroundStyleForMode:(long long)arg1 ;
-(void)_setDesiredLivePhotoMode:(long long)arg1 ;
-(void)_setModeDisabledForMultitasking:(BOOL)arg1 animateUIChanges:(BOOL)arg2 ;
-(void)_handleShutterButtonActionWithEventTriggerDescription:(id)arg1 ;
-(void)_updatePhysicalButtonCapturedEnabledResigningActiveOrDisappearing:(BOOL)arg1 ;
-(long long)_videoConfigurationResolutionForGraphConfiguration:(id)arg1 ;
-(BOOL)remoteShutterStopCapture:(id)arg1 ;
-(void)videoConfigurationStatusIndicatorDidTapFramerate:(id)arg1 ;
-(void)zoomSliderDidBeginAutozooming:(id)arg1 ;
-(void)_embedPortraitModeDescriptionOverlayViewWithLayoutStyle:(long long)arg1 ;
-(void)_embedVideoConfigurationStatusIndicatorWithLayoutStyle:(long long)arg1 ;
-(void)_handleShutterButtonReleased:(id)arg1 fromDragExit:(BOOL)arg2 ;
-(BOOL)_isReconfiguringForTripleCameraEmulation;
-(BOOL)_shouldEnableAspectRatioButton;
-(void)_updateImageWellWithStillImageResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3 ;
-(CAMZoomControl *)_zoomControl;
-(void)_zoomSliderValueDidChange:(id)arg1 forEvent:(id)arg2 ;
-(void)controlDrawer:(id)arg1 didChangeFlashMode:(long long)arg2 ;
-(void)_createPortraitModeDescriptionOverlayViewIfNecessary;
-(NSMutableDictionary *)_exposureBiasesByMode;
-(void)_handleIntensityButtonTapped:(id)arg1 ;
-(void)controlDrawerDidCreateIntensitySlider:(id)arg1 ;
-(long long)_resolvedFlashMode;
-(void)cameraRollController:(id)arg1 didDismissPreviewControllerShouldStartCaptureSession:(BOOL)arg2 ;
-(void)remoteShutterCancelCountdown:(id)arg1 ;
-(void)_handleUserChangedToDevice:(long long)arg1 ;
-(void)_stopCaptureTimerProgressUsingTorch;
-(BOOL)_shouldHideHDRBadgeForGraphConfiguration:(id)arg1 ;
-(void)_destroyLevelViewIfNecessary;
-(void)_handleFlashIndicator;
-(long long)_nextResolutionVideoConfigurationForVideoConfiguration:(long long)arg1 ;
-(BOOL)_supportsSpatialOverCaptureForGraphConfiguration:(id)arg1 ctmCaptureType:(long long)arg2 isCapturingVideo:(BOOL)arg3 isBurst:(BOOL)arg4 ;
-(void)_createVerticalSwipeGestureRecognizersIfNecessary;
-(void)_updateOverCaptureReticleMaskingStyleFromStatus:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateUserInitiationTimeForRequest:(id)arg1 ;
-(BOOL)_isShowingFilterScrubber;
-(void)cameraRollControllerRevealDidEnd:(id)arg1 ;
-(BOOL)isShowingStandardControls;
-(void)videoRequestDidCompleteLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)_attemptShutterPressWithBlock:(/*^block*/id)arg1 ;
-(void)_didChangeToGraphConfiguration:(id)arg1 forDesiredConfiguration:(id)arg2 requestID:(int)arg3 ;
-(long long)_filterTypeForItemIndex:(long long)arg1 ;
-(void)_setConfiguredGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldDisableUserInteractionForTransitioning;
-(void)_updateTopBarForLightingType:(long long)arg1 ;
-(void)_setCurrentGraphConfiguration:(id)arg1 ;
-(void)captureController:(id)arg1 didOutputTorchActive:(BOOL)arg2 ;
-(void)controlDrawer:(id)arg1 didCreateControlForType:(long long)arg2 ;
-(UISwipeGestureRecognizer *)_nextModeGestureRecognizer;
-(void)_createPanoramaViewControllerIfNecessary;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_enableProactiveSuggestionsAnimated:(BOOL)arg1 ;
-(long long)_numberOfTicksForTimerDuration:(long long)arg1 ;
-(id)_automaticallyAdjustedCaptureModes;
-(BOOL)_shouldHideVideoConfigurationStatusIndicatorForGraphConfiguration:(id)arg1 ;
-(UISwipeGestureRecognizer *)_swipeUpGestureRecognizer;
-(CAMPortraitModeInstructionLabel *)_targetPortraitModeInstructionLabel;
-(void)_updateLevelMotionTracking;
-(void)stillImageRequestsDidCompleteCapturingLivePhotoVideo;
-(void)videoRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)_endDisablingInterfaceAutorotation;
-(void)_setShowingPortraitIntensitySlider:(BOOL)arg1 ;
-(void)_teardownSynchronizedCaptureTimerDelegate;
-(void)_setDesiredTorchMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_destroyFilterScrubberViewIfNecessary;
-(void)_embedImageWellWithLayoutStyle:(long long)arg1 ;
-(void)_handleTouchDownForZoomControl:(id)arg1 ;
-(CAMPortraitModeDescriptionOverlayView *)_portraitModeDescriptionOverlayView;
-(void)_resolvePotentiallyConflictingControlsForMode:(long long)arg1 device:(long long)arg2 resolvedFlashMode:(long long*)arg3 resolvedHDRMode:(long long*)arg4 resolvedLivePhotoMode:(long long*)arg5 ;
-(void)cameraRollControllerRevealWillBegin:(id)arg1 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_setPortraitModeIntensityValue:(double)arg1 ;
-(BOOL)_shouldHideShutterButtonForGraphConfiguration:(id)arg1 ;
-(void)cameraRollControllerDidStartSession:(id)arg1 ;
-(void)_handleContentSizeCategoryDidChange:(id)arg1 ;
-(void)_createOrDestroyGridViewIfNecessary;
-(void)_createPhysicalCaptureRecognizerOrNotifierIfNecessary;
-(BOOL)_isHDRSupportedForGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldEnableFlashButton;
-(void)_showFlashOrTorchUnavailableAlertView;
-(CAMTorchPatternController *)_torchPatternController;
-(void)_createCommonControlsIfNecessary;
-(void)_createPortraitIntensitySliderIfNecessary;
-(void)_rotateTopBarAndControlsToOrientation:(long long)arg1 shouldAnimate:(BOOL)arg2 ;
-(void)_setShowingPortraitApertureSlider:(BOOL)arg1 ;
-(void)_updateFlashButtonAvailability;
-(BOOL)_stopCapturingVideo;
-(void)_updateIntensityButtonForCurrentState;
-(BOOL)_shouldEmulateTripleCameraZoomForGraphConfiguration:(id)arg1 ;
-(BOOL)_shouldHideGridViewForGraphConfiguration:(id)arg1 ;
-(void)dealloc;
-(void)_handleExposureSliderDidChangeValue:(id)arg1 ;
-(BOOL)_hasBeenPromptedForICPLToday;
-(void)_setCurrentStillImageCaptureMomentSettings:(id)arg1 ;
-(BOOL)_shouldHideModeDialForGraphConfiguration:(id)arg1 ;
-(void)badgeTray:(id)arg1 didCreateBadgeForType:(unsigned long long)arg2 ;
-(void)cameraRollControllerWillPresentPreviewController:(id)arg1 ;
-(void)captureController:(id)arg1 didOutputMachineReadableCodeResults:(id)arg2 ;
-(id)initWithCaptureController:(id)arg1 captureConfiguration:(id)arg2 conflictingControlConfiguration:(id)arg3 locationController:(id)arg4 motionController:(id)arg5 timelapseController:(id)arg6 keepAliveController:(id)arg7 remoteShutterController:(id)arg8 powerController:(id)arg9 cameraRollController:(id)arg10 callStatusMonitor:(id)arg11 storageController:(id)arg12 usingEmulationMode:(long long)arg13 initialLayoutStyle:(long long)arg14 options:(long long)arg15 ;
-(void)remoteShutter:(id)arg1 setFlashMode:(long long)arg2 ;
-(void)zoomControl:(id)arg1 didChangeSelectedButtonIndex:(unsigned long long)arg2 displayZoomFactor:(double)arg3 ;
-(void)_embedBurstIndicatorViewWithLayoutStyle:(long long)arg1 ;
-(void)_handleBurstTimerFired:(id)arg1 ;
-(void)_pausePairedVideoCaptureOnControllerIfNecessaryForGraphConfiguration:(id)arg1 isShowingCameraRoll:(BOOL)arg2 ;
-(void)_updateAGGDForStillImageCaptureResponse:(id)arg1 request:(id)arg2 ;
-(void)captureController:(id)arg1 didOutputTorchAvailability:(BOOL)arg2 ;
-(void)setPerformingTileTransition:(BOOL)arg1 ;
@end

