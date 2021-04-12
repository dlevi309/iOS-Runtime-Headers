/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CAMFocusDelegate.h>
#import <libobjc.A.dylib/CAMExposureDelegate.h>
#import <libobjc.A.dylib/CAMFocusIndicatorViewDelegate.h>
#import <libobjc.A.dylib/CAMFacesDelegate.h>

@protocol CAMPreviewViewControllerDelegate;
@class CAMMachineReadableCodeResult, NSArray, CUCaptureController, CAMTimelapseController, CAMCaptureGraphConfiguration, CAMBurstIndicatorView, CAMFocusIndicatorView, NSMutableDictionary, NSDate, CAMFocusResult, CAMExposureResult, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, CAMSubjectIndicatorView, CAMStageLightOverlayView, CAMMotionController, CAMPreviewView, NSString;

@interface CAMPreviewViewController : UIViewController <UIGestureRecognizerDelegate, CAMFocusDelegate, CAMExposureDelegate, CAMFocusIndicatorViewDelegate, CAMFacesDelegate> {

	BOOL __changingGraphConfiguration;
	BOOL __userLockedFocusAndExposure;
	BOOL __shouldSuppressExistingFaceIndicators;
	BOOL _showingStandardControls;
	float __cachedExposureTargetBias;
	float __exposureBiasPanStartValue;
	id<CAMPreviewViewControllerDelegate> _delegate;
	long long _layoutStyle;
	long long _shallowDepthOfFieldStatus;
	long long _stagePreviewStatus;
	CAMMachineReadableCodeResult* _cachedSignificantMRCResult;
	NSArray* _cachedMRCResults;
	long long _lightingType;
	CUCaptureController* __captureController;
	CAMTimelapseController* __timelapseController;
	CAMCaptureGraphConfiguration* __graphConfiguration;
	CAMBurstIndicatorView* __burstIndicator;
	CAMFocusIndicatorView* __continuousIndicator;
	CAMFocusIndicatorView* __pointIndicator;
	NSMutableDictionary* __indicatorViewsByType;
	NSDate* __lastFocusIndictorStartTime;
	CAMFocusResult* __lastFocusResult;
	CAMExposureResult* __lastExposureResult;
	NSDate* __lastTapToFocusTime;
	unsigned long long __currentFacesCount;
	UITapGestureRecognizer* __tapToFocusAndExposeGestureRecognizer;
	UILongPressGestureRecognizer* __longPressToLockGestureRecognizer;
	UIPanGestureRecognizer* __exposureBiasPanGestureRecognizer;
	UITapGestureRecognizer* __aspectRatioToggleDoubleTapGestureRecognizer;
	double __exposureBiasVirtualSliderExponent;
	double __exposureBiasVirtualSliderPointsForFirstStop;
	NSDate* __lastExposureBiasModificationTime;
	CAMSubjectIndicatorView* __portraitModeCenteredIndicatorView;
	CAMStageLightOverlayView* __stageLightOverlayView;
	CAMMotionController* __motionController;

}

@property (nonatomic,readonly) CUCaptureController * _captureController;                                                                                //@synthesize _captureController=__captureController - In the implementation block
@property (nonatomic,__weak,readonly) CAMTimelapseController * _timelapseController;                                                                    //@synthesize _timelapseController=__timelapseController - In the implementation block
@property (setter=_setGraphConfiguration:,nonatomic,retain) CAMCaptureGraphConfiguration * _graphConfiguration;                                         //@synthesize _graphConfiguration=__graphConfiguration - In the implementation block
@property (nonatomic,readonly) long long _mode; 
@property (nonatomic,readonly) long long _device; 
@property (assign,setter=_setChangingGraphConfiguration:,getter=_isChangingGraphConfiguration,nonatomic) BOOL _changingGraphConfiguration;              //@synthesize _changingGraphConfiguration=__changingGraphConfiguration - In the implementation block
@property (nonatomic,readonly) CAMBurstIndicatorView * _burstIndicator;                                                                                 //@synthesize _burstIndicator=__burstIndicator - In the implementation block
@property (nonatomic,readonly) CAMFocusIndicatorView * _continuousIndicator;                                                                            //@synthesize _continuousIndicator=__continuousIndicator - In the implementation block
@property (nonatomic,readonly) CAMFocusIndicatorView * _pointIndicator;                                                                                 //@synthesize _pointIndicator=__pointIndicator - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _indicatorViewsByType;                                                                             //@synthesize _indicatorViewsByType=__indicatorViewsByType - In the implementation block
@property (setter=_setLastFocusIndictorStartTime:,nonatomic,retain) NSDate * _lastFocusIndictorStartTime;                                               //@synthesize _lastFocusIndictorStartTime=__lastFocusIndictorStartTime - In the implementation block
@property (assign,setter=_setUserLockedFocusAndExposure:,nonatomic) BOOL _userLockedFocusAndExposure;                                                   //@synthesize _userLockedFocusAndExposure=__userLockedFocusAndExposure - In the implementation block
@property (setter=_setLastFocusResult:,nonatomic,retain) CAMFocusResult * _lastFocusResult;                                                             //@synthesize _lastFocusResult=__lastFocusResult - In the implementation block
@property (setter=_setLastExposureResult:,nonatomic,retain) CAMExposureResult * _lastExposureResult;                                                    //@synthesize _lastExposureResult=__lastExposureResult - In the implementation block
@property (setter=_setLastTapToFocusTime:,nonatomic,retain) NSDate * _lastTapToFocusTime;                                                               //@synthesize _lastTapToFocusTime=__lastTapToFocusTime - In the implementation block
@property (assign,setter=_setCurrentFacesCount:,nonatomic) unsigned long long _currentFacesCount;                                                       //@synthesize _currentFacesCount=__currentFacesCount - In the implementation block
@property (assign,setter=_setShouldSuppressExistingFaceIndicators:,nonatomic) BOOL _shouldSuppressExistingFaceIndicators;                               //@synthesize _shouldSuppressExistingFaceIndicators=__shouldSuppressExistingFaceIndicators - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _tapToFocusAndExposeGestureRecognizer;                                                          //@synthesize _tapToFocusAndExposeGestureRecognizer=__tapToFocusAndExposeGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * _longPressToLockGestureRecognizer;                                                        //@synthesize _longPressToLockGestureRecognizer=__longPressToLockGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * _exposureBiasPanGestureRecognizer;                                                              //@synthesize _exposureBiasPanGestureRecognizer=__exposureBiasPanGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _aspectRatioToggleDoubleTapGestureRecognizer;                                                   //@synthesize _aspectRatioToggleDoubleTapGestureRecognizer=__aspectRatioToggleDoubleTapGestureRecognizer - In the implementation block
@property (assign,setter=_setCachedExposureTargetBias:,nonatomic) float _cachedExposureTargetBias;                                                      //@synthesize _cachedExposureTargetBias=__cachedExposureTargetBias - In the implementation block
@property (nonatomic,readonly) float _exposureBiasPanStartValue;                                                                                        //@synthesize _exposureBiasPanStartValue=__exposureBiasPanStartValue - In the implementation block
@property (assign,setter=_setExposureBiasVirtualSliderExponent:,nonatomic) double _exposureBiasVirtualSliderExponent;                                   //@synthesize _exposureBiasVirtualSliderExponent=__exposureBiasVirtualSliderExponent - In the implementation block
@property (assign,setter=_setExposureBiasVirtualSliderPointsForFirstStop:,nonatomic) double _exposureBiasVirtualSliderPointsForFirstStop;               //@synthesize _exposureBiasVirtualSliderPointsForFirstStop=__exposureBiasVirtualSliderPointsForFirstStop - In the implementation block
@property (setter=_setLastExposureBiasModifiedTime:,nonatomic,retain) NSDate * _lastExposureBiasModificationTime;                                       //@synthesize _lastExposureBiasModificationTime=__lastExposureBiasModificationTime - In the implementation block
@property (nonatomic,readonly) CAMSubjectIndicatorView * _portraitModeCenteredIndicatorView;                                                            //@synthesize _portraitModeCenteredIndicatorView=__portraitModeCenteredIndicatorView - In the implementation block
@property (nonatomic,readonly) CAMStageLightOverlayView * _stageLightOverlayView;                                                                       //@synthesize _stageLightOverlayView=__stageLightOverlayView - In the implementation block
@property (nonatomic,readonly) CAMMotionController * _motionController;                                                                                 //@synthesize _motionController=__motionController - In the implementation block
@property (assign,getter=isShowingStandardControls,nonatomic) BOOL showingStandardControls;                                                             //@synthesize showingStandardControls=_showingStandardControls - In the implementation block
@property (assign,nonatomic,__weak) id<CAMPreviewViewControllerDelegate> delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CAMPreviewView * previewView; 
@property (nonatomic,readonly) UIPanGestureRecognizer * activeExposureBiasPanGestureRecognizer; 
@property (getter=isFocusLockedByUser,nonatomic,readonly) BOOL focusLockedByUser; 
@property (getter=isExposureLockedByUser,nonatomic,readonly) BOOL exposureLockedByUser; 
@property (assign,nonatomic) long long layoutStyle;                                                                                                     //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long shallowDepthOfFieldStatus;                                                                                       //@synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus - In the implementation block
@property (assign,nonatomic) long long stagePreviewStatus;                                                                                              //@synthesize stagePreviewStatus=_stagePreviewStatus - In the implementation block
@property (nonatomic,retain) CAMMachineReadableCodeResult * cachedSignificantMRCResult;                                                                 //@synthesize cachedSignificantMRCResult=_cachedSignificantMRCResult - In the implementation block
@property (nonatomic,retain) NSArray * cachedMRCResults;                                                                                                //@synthesize cachedMRCResults=_cachedMRCResults - In the implementation block
@property (assign,nonatomic) long long lightingType;                                                                                                    //@synthesize lightingType=_lightingType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<CAMPreviewViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CAMPreviewViewControllerDelegate>)arg1 ;
-(long long)_device;
-(void)loadView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(long long)_interfaceOrientation;
-(void)_applicationDidEnterBackground;
-(long long)_mode;
-(void)_cancelDelayedActions;
-(CAMPreviewView *)previewView;
-(CUCaptureController *)_captureController;
-(long long)lightingType;
-(void)setLightingType:(long long)arg1 ;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 ;
-(long long)shallowDepthOfFieldStatus;
-(id)initWithCaptureController:(id)arg1 motionController:(id)arg2 timelapseController:(id)arg3 ;
-(void)_captureOrientationChanged:(id)arg1 ;
-(CAMMotionController *)_motionController;
-(void)willChangeToGraphConfiguration:(id)arg1 ;
-(void)didChangeToGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isShowingStandardControls;
-(void)_createCommonGestureRecognizersIfNecessary;
-(void)notifyWillStartCapturing;
-(void)notifyDidStopCapture;
-(CAMTimelapseController *)_timelapseController;
-(void)captureController:(id)arg1 didOutputFaceResults:(id)arg2 bodyResults:(id)arg3 ;
-(void)setCachedMRCResults:(NSArray *)arg1 ;
-(void)setCachedSignificantMRCResult:(CAMMachineReadableCodeResult *)arg1 ;
-(NSArray *)cachedMRCResults;
-(BOOL)isFocusLockedByUser;
-(BOOL)isExposureLockedByUser;
-(void)notifyShutterButtonPressed;
-(UIPanGestureRecognizer *)activeExposureBiasPanGestureRecognizer;
-(void)setLightingType:(long long)arg1 animated:(BOOL)arg2 ;
-(void)notifyCaptureSessionDidStopRunning;
-(void)focusOnNormalizedPoint:(CGPoint)arg1 ;
-(void)setShowingStandardControls:(BOOL)arg1 ;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 stagePreviewStatus:(long long)arg2 ;
-(id)focusIndicatorViewBoundingViewForClippingFocusIndicatorView:(id)arg1 ;
-(int)_exposureBiasSide;
-(BOOL)captureController:(id)arg1 shouldResetFocusAndExposureForReason:(long long)arg2 ;
-(BOOL)captureControllerUserHasAdjustedExposureTargetBias:(id)arg1 ;
-(void)captureControllerWillResetFocusAndExposure:(id)arg1 ;
-(double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(id)arg1 ;
-(void)captureController:(id)arg1 didOutputFocusResult:(id)arg2 ;
-(void)captureController:(id)arg1 didOutputExposureResult:(id)arg2 ;
-(CAMFocusResult *)_lastFocusResult;
-(CAMFocusIndicatorView *)_continuousIndicator;
-(CAMFocusIndicatorView *)_pointIndicator;
-(CAMStageLightOverlayView *)_stageLightOverlayView;
-(void)_initializeExposureBiasSliderParameters;
-(void)_resetFaceTracking;
-(void)_cancelDelayedFocusAndExposureLock;
-(void)_cancelDelayedFadeOutOfViewType:(id)arg1 ;
-(void)_cancelDelayedHideOrDeactivateForFocusIndicator:(id)arg1 ;
-(long long)_styleForPointIndicator;
-(void)_initializeExposureBiasParametersForFocusIndicatorView:(id)arg1 ;
-(CAMCaptureGraphConfiguration *)_graphConfiguration;
-(void)_setGraphConfiguration:(id)arg1 ;
-(void)_willChangeGraphConfiguration;
-(void)_didChangeGraphConfigurationAnimated:(BOOL)arg1 ;
-(void)_updatePreviewViewAspectMode;
-(void)_updatePreviewIndicatorClippingStyleForGraphConfiguration:(id)arg1 ;
-(void)_setChangingGraphConfiguration:(BOOL)arg1 ;
-(void)_resetCachedTimes;
-(void)_hideAllFocusIndicatorsAnimated:(BOOL)arg1 ;
-(void)_updatePortraitModeViewsAnimated:(BOOL)arg1 ;
-(BOOL)_shouldShowPortraitModeTrackedSubjectIndicatorsForLightingType:(long long)arg1 ;
-(void)_hidePortraitModeTrackedSubjectIndicatorsAnimated:(BOOL)arg1 ;
-(void)_setLastTapToFocusTime:(id)arg1 ;
-(void)_setLastExposureBiasModifiedTime:(id)arg1 ;
-(void)_setLastFocusIndictorStartTime:(id)arg1 ;
-(void)_createTapToFocusAndExposeGestureRecognizerIfNecessary;
-(void)_createLongPressToLockGestureRecognizersIfNecessary;
-(void)_createExposureBiasPanGestureRecognizerIfNecessary;
-(void)_createAspectRatioToggleDoubleTapGestureRecognizerIfNecessary;
-(void)_handleTapToFocusAndExpose:(id)arg1 ;
-(void)_handleLongPressToLock:(id)arg1 ;
-(void)_handleExposureBiasPan:(id)arg1 ;
-(void)_updateExposureBiasPanGestureRecognizerForOrientation;
-(void)_handleAspectRatioToggleDoubleTap:(id)arg1 ;
-(BOOL)_isShowingIndicatorsOfType:(id)arg1 ;
-(BOOL)_shouldDisableFocusUI;
-(void)_hideAllFocusIndicatorsExceptForIndicator:(id)arg1 ;
-(BOOL)_shouldShowContinuousIndicator;
-(BOOL)_shouldShowPortraitModeIndicatorViews;
-(void)_createContinuousIndicatorIfNecessary;
-(NSDate *)_lastFocusIndictorStartTime;
-(void)_hideFocusIndicator:(id)arg1 afterDelay:(double)arg2 ;
-(CAMSubjectIndicatorView *)_portraitModeCenteredIndicatorView;
-(NSMutableDictionary *)_indicatorViewsByType;
-(void)_hideFocusIndicator:(id)arg1 animated:(BOOL)arg2 ;
-(void)_hideFocusIndicator:(id)arg1 ;
-(void)_deactivateFocusIndicator:(id)arg1 ;
-(void)_hideIndicatorsOfViewType:(id)arg1 animated:(BOOL)arg2 ;
-(void)_createPointIndicatorIfNecessary;
-(BOOL)_showExposureBiasSliderForPointView;
-(BOOL)_shouldShowIndicatorsAsInactive;
-(long long)_largeStyleForPointIndicator;
-(void)_removeIndicatorViewForType:(id)arg1 identifier:(id)arg2 ;
-(void)_fadeOutView:(id)arg1 withDuration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fadeOutAndRemoveIndicatorView:(id)arg1 forType:(id)arg2 identifier:(id)arg3 withDuration:(double)arg4 ;
-(void)_addIndicatorView:(id)arg1 forType:(id)arg2 identifier:(id)arg3 ;
-(void)_fadeInView:(id)arg1 withDuration:(double)arg2 ;
-(BOOL)_shouldUpdateIndicatorSizeFrom:(CGSize)arg1 to:(CGSize)arg2 minimumAreaChangeThreshold:(double)arg3 minimumAreaFractionChangeThreshold:(double)arg4 ;
-(void)_animateView:(id)arg1 withCenter:(CGPoint)arg2 bounds:(CGRect)arg3 ;
-(void)_fadeOutIndicatorsOfViewType:(id)arg1 ;
-(void)_setShouldSuppressExistingFaceIndicators:(BOOL)arg1 ;
-(void)_fadeOutAndRemoveIndicatorViewsOfType:(id)arg1 withDuration:(double)arg2 ;
-(BOOL)_userLockedFocusAndExposure;
-(BOOL)_shouldAllowFaceIndicators;
-(void)_updateFaceIndicatorsForResults:(id)arg1 ;
-(void)_updatePortraitModeViewsForResults:(id)arg1 ;
-(unsigned long long)_currentFacesCount;
-(BOOL)_shouldSuppressNewFaces;
-(void)_setCurrentFacesCount:(unsigned long long)arg1 ;
-(void)_fadeOutIndicatorsOfViewType:(id)arg1 afterDelay:(double)arg2 ;
-(BOOL)_shouldSuppressExistingFaceIndicators;
-(void)_updateIndicatorsForMetadataObjectResults:(id)arg1 viewType:(id)arg2 viewClass:(Class)arg3 frameCallback:(/*^block*/id)arg4 minimumAreaChangeThreshold:(double)arg5 minimumAreaFractionChangeThreshold:(double)arg6 ;
-(BOOL)_shouldSuppressNewPortraitModeTrackedSubjectIndicators;
-(void)_updateMRCIndicatorsIfNecessary;
-(BOOL)_shouldAllowMRCIndicators;
-(void)_updateMRCIndicators;
-(CAMMachineReadableCodeResult *)cachedSignificantMRCResult;
-(BOOL)_canModifyExposureBias;
-(BOOL)_allowUserToChangeFocusAndExposure;
-(BOOL)_shouldDisableAspectRatioToggle;
-(void)_setUserLockedFocusAndExposure:(BOOL)arg1 ;
-(void)_showIndicatorAtPointOfInterest:(CGPoint)arg1 ;
-(void)_setCachedExposureTargetBias:(float)arg1 ;
-(void)_focusOnPoint:(CGPoint)arg1 ;
-(void)_showLockedAtPointOfInterest:(CGPoint)arg1 ;
-(void)_lockFocusAndExposureAfterDelay:(double)arg1 ;
-(void)_scaleDownLockedPointOfInterest;
-(void)_deactivateFocusIndicator:(id)arg1 afterDelay:(double)arg2 ;
-(void)_lockFocusAndExposure;
-(void)_finishFocusingLockedPointOfInterestIndicator;
-(UIPanGestureRecognizer *)_exposureBiasPanGestureRecognizer;
-(void)_updateExposureBiasViews;
-(BOOL)_allowExposureBiasForMode:(long long)arg1 ;
-(BOOL)_isFullyAutomaticFocusAndExposure;
-(float)_exposureTargetBiasMaximum;
-(void)_updateExposureBiasViews:(id)arg1 ;
-(id)_focusIndicatorViewsWithExposureBiasSliders;
-(float)_cachedExposureTargetBias;
-(float)_exposureTargetBiasMinimum;
-(double)_virtualSliderPositionForExposureBias:(double)arg1 ;
-(void)_activateFocusIndicator:(id)arg1 ;
-(double)_effectiveExposureBiasMovementForTranslation:(CGPoint)arg1 ;
-(double)_exposureBiasForVirtualSliderPosition:(double)arg1 ;
-(void)_setExposureBiasVirtualSliderExponent:(double)arg1 ;
-(void)_setExposureBiasVirtualSliderPointsForFirstStop:(double)arg1 ;
-(double)_exposureBiasVirtualSliderPointsForFirstStop;
-(double)_exposureBiasVirtualSliderExponent;
-(void)_showUIForResetFocusAndExposure;
-(void)_scalePortraitModeFocusIndicators;
-(BOOL)_shouldResetFocusAndExposureForSubjectAreaDidChange;
-(BOOL)_isPanningExposureBias;
-(UILongPressGestureRecognizer *)_longPressToLockGestureRecognizer;
-(NSDate *)_lastExposureBiasModificationTime;
-(NSDate *)_lastTapToFocusTime;
-(void)_setLastFocusResult:(id)arg1 ;
-(void)_setFocusIndicatorsPulsing:(BOOL)arg1 ;
-(void)_updateUIForCenteredContrastBasedFocusDidEnd;
-(void)_setLastExposureResult:(id)arg1 ;
-(void)_setUserLockedFocusAndExposure:(BOOL)arg1 shouldAnimate:(BOOL)arg2 ;
-(BOOL)_isChangingGraphConfiguration;
-(void)_validateInternalProperties;
-(CAMExposureResult *)_lastExposureResult;
-(void)_validateExposureTargetBiasFromExposureResult:(id)arg1 ;
-(void)_validateLastExposureBiasModificationTime;
-(void)_validateUserLockedFocusAndExposure;
-(BOOL)_isFullyAutomaticFocus:(id)arg1 andExposure:(id)arg2 ;
-(BOOL)_shouldAllowAspectRatioToggleForMode:(long long)arg1 ;
-(void)_updateForOrientationAnimated:(BOOL)arg1 ;
-(void)_updateExposureBiasSideAnimated:(BOOL)arg1 ;
-(BOOL)_isPortraitEffectActive;
-(long long)stagePreviewStatus;
-(BOOL)_shouldShowStageLightOverlayViewForMode:(long long)arg1 device:(long long)arg2 lightingType:(long long)arg3 shallowDepthOfFieldStatus:(long long)arg4 stagePreviewStatus:(long long)arg5 ;
-(void)_createStageLightOverlayViewIfNeededWillAnimate:(BOOL)arg1 ;
-(BOOL)_shouldShowStageLightOverlayActive;
-(void)_createPortraitModeCenteredIndicatorViewIfNecessary;
-(void)setStagePreviewStatus:(long long)arg1 ;
-(CAMBurstIndicatorView *)_burstIndicator;
-(UITapGestureRecognizer *)_tapToFocusAndExposeGestureRecognizer;
-(UITapGestureRecognizer *)_aspectRatioToggleDoubleTapGestureRecognizer;
-(float)_exposureBiasPanStartValue;
@end

