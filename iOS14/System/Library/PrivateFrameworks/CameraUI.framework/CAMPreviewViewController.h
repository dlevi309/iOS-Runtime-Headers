/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	float _baselineExposureBias;
	float _cachedExposureTargetBias;
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
@property (assign,setter=setCachedExposureTargetBias:,nonatomic) float cachedExposureTargetBias;                                                        //@synthesize cachedExposureTargetBias=_cachedExposureTargetBias - In the implementation block
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
@property (assign,nonatomic) float baselineExposureBias;                                                                                                //@synthesize baselineExposureBias=_baselineExposureBias - In the implementation block
@property (nonatomic,readonly) float totalExposureBias; 
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
-(void)captureController:(id)arg1 didOutputFaceResults:(id)arg2 bodyResults:(id)arg3 ;
-(CAMTimelapseController *)_timelapseController;
-(void)setShowingStandardControls:(BOOL)arg1 ;
-(CAMMotionController *)_motionController;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 ;
-(void)_setFocusIndicatorsPulsing:(BOOL)arg1 ;
-(long long)_mode;
-(void)_cancelDelayedActions;
-(void)_captureOrientationChanged:(id)arg1 ;
-(long long)shallowDepthOfFieldStatus;
-(CUCaptureController *)_captureController;
-(int)_exposureBiasSide;
-(void)_validateInternalProperties;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)_updateExposureBiasViews;
-(void)_createLongPressToLockGestureRecognizersIfNecessary;
-(long long)_interfaceOrientation;
-(void)_updateIndicatorsForMetadataObjectResults:(id)arg1 viewType:(id)arg2 viewClass:(Class)arg3 frameCallback:(/*^block*/id)arg4 minimumAreaChangeThreshold:(double)arg5 minimumAreaFractionChangeThreshold:(double)arg6 ;
-(BOOL)captureControllerUserHasAdjustedExposureTargetBiasFromBaseline:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(BOOL)_isFullyAutomaticFocusAndExposure;
-(NSMutableDictionary *)_indicatorViewsByType;
-(void)_removeIndicatorViewForType:(id)arg1 identifier:(id)arg2 ;
-(void)_setLastExposureBiasModifiedTime:(id)arg1 ;
-(void)notifyShutterButtonPressed;
-(void)_createPortraitModeCenteredIndicatorViewIfNecessary;
-(void)_addIndicatorView:(id)arg1 forType:(id)arg2 identifier:(id)arg3 ;
-(BOOL)_shouldResetFocusAndExposureForSubjectAreaDidChange;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)_updateUIForCenteredContrastBasedFocusDidEnd;
-(float)baselineExposureValueForCaptureController:(id)arg1 ;
-(void)_setShouldSuppressExistingFaceIndicators:(BOOL)arg1 ;
-(NSDate *)_lastFocusIndictorStartTime;
-(BOOL)_isExposureTargetBiasAtBaseline:(float)arg1 ;
-(BOOL)_isFullyAutomaticFocus:(id)arg1 andExposure:(id)arg2 ;
-(NSDate *)_lastExposureBiasModificationTime;
-(id<CAMPreviewViewControllerDelegate>)delegate;
-(BOOL)_isPortraitEffectActive;
-(BOOL)_allowUserToChangeFocusAndExposure;
-(void)_updatePreviewIndicatorClippingStyleForGraphConfiguration:(id)arg1 ;
-(void)_updateExposureBiasPanGestureRecognizerForOrientation;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)captureController:(id)arg1 didOutputFocusResult:(id)arg2 ;
-(void)_createStageLightOverlayViewIfNeededWillAnimate:(BOOL)arg1 ;
-(CAMBurstIndicatorView *)_burstIndicator;
-(void)_activateFocusIndicator:(id)arg1 ;
-(void)_hideFocusIndicator:(id)arg1 ;
-(void)_animateView:(id)arg1 withCenter:(CGPoint)arg2 bounds:(CGRect)arg3 ;
-(double)_exposureBiasVirtualSliderPointsForFirstStop;
-(void)_updateExposureBiasSideAnimated:(BOOL)arg1 ;
-(UITapGestureRecognizer *)_aspectRatioToggleDoubleTapGestureRecognizer;
-(long long)layoutStyle;
-(void)_fadeOutView:(id)arg1 withDuration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(double)_exposureBiasVirtualSliderExponent;
-(void)_setLastFocusResult:(id)arg1 ;
-(void)_hideAllFocusIndicatorsExceptForIndicator:(id)arg1 ;
-(void)_scalePortraitModeFocusIndicators;
-(void)_cancelDelayedHideOrDeactivateForFocusIndicator:(id)arg1 ;
-(BOOL)_shouldUpdateIndicatorSizeFrom:(CGSize)arg1 to:(CGSize)arg2 minimumAreaChangeThreshold:(double)arg3 minimumAreaFractionChangeThreshold:(double)arg4 ;
-(long long)_device;
-(void)notifyWillStartCapturing;
-(BOOL)_shouldSuppressExistingFaceIndicators;
-(BOOL)_shouldAllowFaceIndicators;
-(void)notifyCaptureSessionDidStopRunning;
-(void)_fadeOutIndicatorsOfViewType:(id)arg1 afterDelay:(double)arg2 ;
-(void)_setChangingGraphConfiguration:(BOOL)arg1 ;
-(void)_deactivateFocusIndicator:(id)arg1 afterDelay:(double)arg2 ;
-(CAMPreviewView *)previewView;
-(void)_initializeExposureBiasParametersForFocusIndicatorView:(id)arg1 ;
-(void)_setExposureBiasVirtualSliderPointsForFirstStop:(double)arg1 ;
-(void)_handleExposureBiasPan:(id)arg1 ;
-(BOOL)_showExposureBiasSliderForPointView;
-(double)_effectiveExposureBiasMovementForTranslation:(CGPoint)arg1 ;
-(void)_hideAllFocusIndicatorsAnimated:(BOOL)arg1 ;
-(float)_exposureTargetBiasMinimum;
-(void)_setCurrentFacesCount:(unsigned long long)arg1 ;
-(void)_focusOnPoint:(CGPoint)arg1 ;
-(void)_deactivateFocusIndicator:(id)arg1 ;
-(unsigned long long)_currentFacesCount;
-(void)_showIndicatorAtPointOfInterest:(CGPoint)arg1 ;
-(void)_createExposureBiasPanGestureRecognizerIfNecessary;
-(void)captureController:(id)arg1 didOutputExposureResult:(id)arg2 ;
-(UIPanGestureRecognizer *)_exposureBiasPanGestureRecognizer;
-(void)setLightingType:(long long)arg1 animated:(BOOL)arg2 ;
-(NSArray *)cachedMRCResults;
-(BOOL)_shouldSuppressNewPortraitModeTrackedSubjectIndicators;
-(long long)_styleForPointIndicator;
-(BOOL)_shouldSuppressNewFaces;
-(void)setDelegate:(id<CAMPreviewViewControllerDelegate>)arg1 ;
-(CAMCaptureGraphConfiguration *)_graphConfiguration;
-(UIPanGestureRecognizer *)activeExposureBiasPanGestureRecognizer;
-(void)_handleTapToFocusAndExpose:(id)arg1 ;
-(void)_createPointIndicatorIfNecessary;
-(void)_hidePortraitModeTrackedSubjectIndicatorsAnimated:(BOOL)arg1 ;
-(BOOL)_userLockedFocusAndExposure;
-(BOOL)_shouldAllowMRCIndicators;
-(double)_virtualSliderPositionForExposureBias:(double)arg1 ;
-(void)_updatePortraitModeViewsAnimated:(BOOL)arg1 ;
-(void)_updateCaptureControllerExposureTargetBias;
-(void)_fadeOutIndicatorsOfViewType:(id)arg1 ;
-(double)_exposureBiasForVirtualSliderPosition:(double)arg1 ;
-(void)setCachedSignificantMRCResult:(CAMMachineReadableCodeResult *)arg1 ;
-(BOOL)_shouldDisableAspectRatioToggle;
-(BOOL)_canShowWhileLocked;
-(void)_updateForOrientationAnimated:(BOOL)arg1 ;
-(void)setCachedMRCResults:(NSArray *)arg1 ;
-(void)captureControllerWillResetFocusAndExposure:(id)arg1 ;
-(void)viewDidLoad;
-(void)_setGraphConfiguration:(id)arg1 ;
-(void)_createAspectRatioToggleDoubleTapGestureRecognizerIfNecessary;
-(void)focusOnNormalizedPoint:(CGPoint)arg1 ;
-(BOOL)_isChangingGraphConfiguration;
-(BOOL)captureController:(id)arg1 shouldResetFocusAndExposureForReason:(long long)arg2 ;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 stagePreviewStatus:(long long)arg2 ;
-(float)baselineExposureBias;
-(void)_hideIndicatorsOfViewType:(id)arg1 animated:(BOOL)arg2 ;
-(double)captureControllerDelayBeforeResettingFocusAndExposureAfterCapture:(id)arg1 ;
-(NSDate *)_lastTapToFocusTime;
-(CAMFocusResult *)_lastFocusResult;
-(void)_hideFocusIndicator:(id)arg1 animated:(BOOL)arg2 ;
-(void)setStagePreviewStatus:(long long)arg1 ;
-(BOOL)_isPanningExposureBias;
-(float)_exposureBiasPanStartValue;
-(void)_setUserLockedFocusAndExposure:(BOOL)arg1 ;
-(float)totalExposureBias;
-(void)_setExposureBiasVirtualSliderExponent:(double)arg1 ;
-(void)willChangeToGraphConfiguration:(id)arg1 ;
-(void)_setUserLockedFocusAndExposure:(BOOL)arg1 shouldAnimate:(BOOL)arg2 ;
-(void)_updateFaceIndicatorsForResults:(id)arg1 ;
-(id)focusIndicatorViewBoundingViewForClippingFocusIndicatorView:(id)arg1 ;
-(long long)lightingType;
-(void)_fadeInView:(id)arg1 withDuration:(double)arg2 ;
-(void)_didChangeGraphConfigurationAnimated:(BOOL)arg1 ;
-(void)_setLastFocusIndictorStartTime:(id)arg1 ;
-(void)_cancelDelayedFadeOutOfViewType:(id)arg1 ;
-(BOOL)_isShowingIndicatorsOfType:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_shouldShowPortraitModeIndicatorViews;
-(CAMExposureResult *)_lastExposureResult;
-(void)didChangeToGraphConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)_finishFocusingLockedPointOfInterestIndicator;
-(void)_updateMRCIndicatorsIfNecessary;
-(CAMMachineReadableCodeResult *)cachedSignificantMRCResult;
-(BOOL)isExposureLockedByUser;
-(void)_createCommonGestureRecognizersIfNecessary;
-(BOOL)_shouldDisableFocusUI;
-(BOOL)_shouldShowStageLightOverlayViewForMode:(long long)arg1 device:(long long)arg2 lightingType:(long long)arg3 shallowDepthOfFieldStatus:(long long)arg4 stagePreviewStatus:(long long)arg5 ;
-(UITapGestureRecognizer *)_tapToFocusAndExposeGestureRecognizer;
-(float)_exposureTargetBiasMaximum;
-(void)_validateUserLockedFocusAndExposure;
-(UILongPressGestureRecognizer *)_longPressToLockGestureRecognizer;
-(BOOL)_canModifyExposureBias;
-(void)_handleAspectRatioToggleDoubleTap:(id)arg1 ;
-(void)_updatePreviewViewAspectMode;
-(BOOL)_shouldShowIndicatorsAsInactive;
-(void)loadView;
-(void)_setLastTapToFocusTime:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setCachedExposureTargetBias:(float)arg1 ;
-(void)_lockFocusAndExposure;
-(CAMStageLightOverlayView *)_stageLightOverlayView;
-(void)_setLastExposureResult:(id)arg1 ;
-(CAMSubjectIndicatorView *)_portraitModeCenteredIndicatorView;
-(void)_createTapToFocusAndExposeGestureRecognizerIfNecessary;
-(BOOL)_shouldShowPortraitModeTrackedSubjectIndicatorsForLightingType:(long long)arg1 ;
-(void)_fadeOutAndRemoveIndicatorViewsOfType:(id)arg1 withDuration:(double)arg2 ;
-(void)_initializeExposureBiasSliderParameters;
-(BOOL)isFocusLockedByUser;
-(void)_fadeOutAndRemoveIndicatorView:(id)arg1 forType:(id)arg2 identifier:(id)arg3 withDuration:(double)arg4 ;
-(id)initWithCaptureController:(id)arg1 motionController:(id)arg2 timelapseController:(id)arg3 ;
-(void)setBaselineExposureBias:(float)arg1 ;
-(CAMFocusIndicatorView *)_pointIndicator;
-(void)setLightingType:(long long)arg1 ;
-(float)cachedExposureTargetBias;
-(void)_updateExposureBiasViews:(id)arg1 ;
-(void)_showLockedAtPointOfInterest:(CGPoint)arg1 ;
-(void)_updatePortraitModeViewsForResults:(id)arg1 ;
-(CAMFocusIndicatorView *)_continuousIndicator;
-(void)_resetCachedTimes;
-(long long)stagePreviewStatus;
-(void)_willChangeGraphConfiguration;
-(BOOL)isShowingStandardControls;
-(void)notifyDidStopCapture;
-(void)_scaleDownLockedPointOfInterest;
-(void)_updateMRCIndicators;
-(void)_validateExposureTargetBiasFromExposureResult:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_shouldShowStageLightOverlayActive;
-(void)_validateLastExposureBiasModificationTime;
-(void)_cancelDelayedFocusAndExposureLock;
-(BOOL)_shouldShowContinuousIndicator;
-(long long)_largeStyleForPointIndicator;
-(void)_createContinuousIndicatorIfNecessary;
-(void)_lockFocusAndExposureAfterDelay:(double)arg1 ;
-(void)_handleLongPressToLock:(id)arg1 ;
-(void)_resetFaceTracking;
-(id)_focusIndicatorViewsWithExposureBiasSliders;
-(void)_hideFocusIndicator:(id)arg1 afterDelay:(double)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_showUIForResetFocusAndExposure;
-(BOOL)_shouldAllowAspectRatioToggleForMode:(long long)arg1 ;
@end

