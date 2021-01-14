/*
* Generated on Thursday, January 14, 2021 at 2:26:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CEKBadgeViewDelegate.h>
#import <libobjc.A.dylib/CAMInstructionLabelDelegate.h>
#import <libobjc.A.dylib/CAMControlStatusIndicatorDelegate.h>
#import <libobjc.A.dylib/CAMViewfinderTransitionable.h>

@protocol CAMControlVisibilityDelegate;
@class CAMPreviewView, CAMTopBar, CAMBottomBar, CUShutterButton, CAMFlipButton, NSArray, CAMFlashBadge, CAMHDRBadge, CAMFocusLockBadge, CAMLivePhotoBadge, CAMShallowDepthOfFieldBadge, CAMPortraitModeInstructionLabel, CAMPortraitModeDescriptionOverlayView, CAMQRCodeInstructionLabel, CAMFilterNameBadge, CAMShutterIndicatorView, CAMElapsedTimeView, CAMVideoConfigurationStatusIndicator, CAMBurstIndicatorView, CAMTimerIndicatorView, CAMPanoramaView, CAMZoomSlider, CAMZoomControl, CEKLightingControl, CEKLightingNameBadge, CAMDisabledModeOverlayView, CAMPreviewContainerMaskingView, UIView, CAMViewfinderOpenAndCloseTransition, CAMViewfinderFlipTransition, CAMFullscreenViewfinderLayout, NSString;

@interface CAMViewfinderView : UIView <CEKBadgeViewDelegate, CAMInstructionLabelDelegate, CAMControlStatusIndicatorDelegate, CAMViewfinderTransitionable> {

	BOOL _useCreativeControls;
	BOOL _automaticallyAdjustsTopBarOrientation;
	long long _layoutStyle;
	id<CAMControlVisibilityDelegate> _visibilityDelegate;
	CAMPreviewView* _previewView;
	CAMTopBar* _topBar;
	CAMBottomBar* _bottomBar;
	CUShutterButton* _shutterButton;
	CAMFlipButton* _flipButton;
	NSArray* _visibleTopBadges;
	CAMFlashBadge* _flashBadge;
	CAMHDRBadge* _HDRBadge;
	CAMFocusLockBadge* _focusAndExposureLockBadge;
	CAMLivePhotoBadge* _livePhotoBadge;
	CAMShallowDepthOfFieldBadge* _shallowDepthOfFieldBadge;
	CAMPortraitModeInstructionLabel* _portraitModeInstructionLabel;
	CAMPortraitModeDescriptionOverlayView* _portraitModeDescriptionOverlayView;
	CAMQRCodeInstructionLabel* _qrCodeInstructionLabel;
	CAMFilterNameBadge* _filterNameBadge;
	CAMShutterIndicatorView* _shutterIndicatorView;
	CAMElapsedTimeView* _elapsedTimeView;
	CAMVideoConfigurationStatusIndicator* _videoConfigurationStatusIndicator;
	CAMBurstIndicatorView* _burstIndicatorView;
	CAMTimerIndicatorView* _timerIndicatorView;
	CAMPanoramaView* _panoramaView;
	long long _previewViewOrientation;
	CAMZoomSlider* _zoomSlider;
	CAMZoomControl* _zoomControl;
	CEKLightingControl* _lightingControl;
	CEKLightingNameBadge* _lightingNameBadge;
	CAMDisabledModeOverlayView* _disabledModeOverlayView;
	long long _desiredAspectRatio;
	long long _maskingAspectRatio;
	long long _orientation;
	CAMPreviewContainerMaskingView* __previewContainerMaskingView;
	UIView* __previewContainerView;
	CAMViewfinderOpenAndCloseTransition* __openAndCloseTransition;
	CAMViewfinderFlipTransition* __flipTransition;
	UIView* __topBarExtensionView;
	UIView* __bottomBarExtensionView;
	CAMFullscreenViewfinderLayout* __modernLayout;

}

@property (nonatomic,readonly) CAMPreviewContainerMaskingView * _previewContainerMaskingView;                                               //@synthesize _previewContainerMaskingView=__previewContainerMaskingView - In the implementation block
@property (nonatomic,readonly) UIView * _previewContainerView;                                                                              //@synthesize _previewContainerView=__previewContainerView - In the implementation block
@property (setter=_setOpenAndCloseTransition:,nonatomic,retain) CAMViewfinderOpenAndCloseTransition * _openAndCloseTransition;              //@synthesize _openAndCloseTransition=__openAndCloseTransition - In the implementation block
@property (setter=_setFlipTransition:,nonatomic,retain) CAMViewfinderFlipTransition * _flipTransition;                                      //@synthesize _flipTransition=__flipTransition - In the implementation block
@property (setter=_setTopBarExtensionView:,nonatomic,retain) UIView * _topBarExtensionView;                                                 //@synthesize _topBarExtensionView=__topBarExtensionView - In the implementation block
@property (setter=_setBottomBarExtensionView:,nonatomic,retain) UIView * _bottomBarExtensionView;                                           //@synthesize _bottomBarExtensionView=__bottomBarExtensionView - In the implementation block
@property (setter=_setModernLayout:,nonatomic,retain) CAMFullscreenViewfinderLayout * _modernLayout;                                        //@synthesize _modernLayout=__modernLayout - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                                                         //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) BOOL useCreativeControls;                                                                                      //@synthesize useCreativeControls=_useCreativeControls - In the implementation block
@property (assign,nonatomic,__weak) id<CAMControlVisibilityDelegate> visibilityDelegate;                                                    //@synthesize visibilityDelegate=_visibilityDelegate - In the implementation block
@property (nonatomic,retain) CAMPreviewView * previewView;                                                                                  //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) CAMTopBar * topBar;                                                                                            //@synthesize topBar=_topBar - In the implementation block
@property (nonatomic,retain) CAMBottomBar * bottomBar;                                                                                      //@synthesize bottomBar=_bottomBar - In the implementation block
@property (nonatomic,retain) CUShutterButton * shutterButton;                                                                               //@synthesize shutterButton=_shutterButton - In the implementation block
@property (nonatomic,retain) CAMFlipButton * flipButton;                                                                                    //@synthesize flipButton=_flipButton - In the implementation block
@property (nonatomic,retain) NSArray * visibleTopBadges;                                                                                    //@synthesize visibleTopBadges=_visibleTopBadges - In the implementation block
@property (nonatomic,retain) CAMFlashBadge * flashBadge;                                                                                    //@synthesize flashBadge=_flashBadge - In the implementation block
@property (nonatomic,retain) CAMHDRBadge * HDRBadge;                                                                                        //@synthesize HDRBadge=_HDRBadge - In the implementation block
@property (nonatomic,retain) CAMFocusLockBadge * focusAndExposureLockBadge;                                                                 //@synthesize focusAndExposureLockBadge=_focusAndExposureLockBadge - In the implementation block
@property (nonatomic,retain) CAMLivePhotoBadge * livePhotoBadge;                                                                            //@synthesize livePhotoBadge=_livePhotoBadge - In the implementation block
@property (nonatomic,retain) CAMShallowDepthOfFieldBadge * shallowDepthOfFieldBadge;                                                        //@synthesize shallowDepthOfFieldBadge=_shallowDepthOfFieldBadge - In the implementation block
@property (nonatomic,retain) CAMPortraitModeInstructionLabel * portraitModeInstructionLabel;                                                //@synthesize portraitModeInstructionLabel=_portraitModeInstructionLabel - In the implementation block
@property (nonatomic,retain) CAMPortraitModeDescriptionOverlayView * portraitModeDescriptionOverlayView;                                    //@synthesize portraitModeDescriptionOverlayView=_portraitModeDescriptionOverlayView - In the implementation block
@property (nonatomic,retain) CAMQRCodeInstructionLabel * qrCodeInstructionLabel;                                                            //@synthesize qrCodeInstructionLabel=_qrCodeInstructionLabel - In the implementation block
@property (nonatomic,retain) CAMFilterNameBadge * filterNameBadge;                                                                          //@synthesize filterNameBadge=_filterNameBadge - In the implementation block
@property (nonatomic,retain) CAMShutterIndicatorView * shutterIndicatorView;                                                                //@synthesize shutterIndicatorView=_shutterIndicatorView - In the implementation block
@property (nonatomic,retain) CAMElapsedTimeView * elapsedTimeView;                                                                          //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) CAMVideoConfigurationStatusIndicator * videoConfigurationStatusIndicator;                                      //@synthesize videoConfigurationStatusIndicator=_videoConfigurationStatusIndicator - In the implementation block
@property (nonatomic,retain) CAMBurstIndicatorView * burstIndicatorView;                                                                    //@synthesize burstIndicatorView=_burstIndicatorView - In the implementation block
@property (nonatomic,retain) CAMTimerIndicatorView * timerIndicatorView;                                                                    //@synthesize timerIndicatorView=_timerIndicatorView - In the implementation block
@property (nonatomic,retain) CAMPanoramaView * panoramaView;                                                                                //@synthesize panoramaView=_panoramaView - In the implementation block
@property (assign,nonatomic) long long previewViewOrientation;                                                                              //@synthesize previewViewOrientation=_previewViewOrientation - In the implementation block
@property (nonatomic,retain) CAMZoomSlider * zoomSlider;                                                                                    //@synthesize zoomSlider=_zoomSlider - In the implementation block
@property (nonatomic,retain) CAMZoomControl * zoomControl;                                                                                  //@synthesize zoomControl=_zoomControl - In the implementation block
@property (nonatomic,retain) CEKLightingControl * lightingControl;                                                                          //@synthesize lightingControl=_lightingControl - In the implementation block
@property (nonatomic,retain) CEKLightingNameBadge * lightingNameBadge;                                                                      //@synthesize lightingNameBadge=_lightingNameBadge - In the implementation block
@property (nonatomic,retain) CAMDisabledModeOverlayView * disabledModeOverlayView;                                                          //@synthesize disabledModeOverlayView=_disabledModeOverlayView - In the implementation block
@property (assign,nonatomic) long long desiredAspectRatio;                                                                                  //@synthesize desiredAspectRatio=_desiredAspectRatio - In the implementation block
@property (assign,nonatomic) long long maskingAspectRatio;                                                                                  //@synthesize maskingAspectRatio=_maskingAspectRatio - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                                         //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL automaticallyAdjustsTopBarOrientation;                                                                    //@synthesize automaticallyAdjustsTopBarOrientation=_automaticallyAdjustsTopBarOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(void)setFlipButton:(CAMFlipButton *)arg1 ;
-(void)setFocusAndExposureLockBadge:(CAMFocusLockBadge *)arg1 ;
-(CAMShutterIndicatorView *)shutterIndicatorView;
-(void)_layoutLightingControlForLayoutStyle:(long long)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(UIView *)_bottomBarExtensionView;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)_layoutBadgeTrayWithBadges:(id)arg1 layoutStyle:(long long)arg2 ;
-(long long)desiredAspectRatio;
-(void)setBurstIndicatorView:(CAMBurstIndicatorView *)arg1 ;
-(void)setPreviewViewOrientation:(long long)arg1 ;
-(CAMZoomControl *)zoomControl;
-(void)_setTopBarExtensionView:(id)arg1 ;
-(BOOL)_wantsFullScreenPreviewRegardlessOfLayoutForLayoutStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setVisibleTopBadges:(id)arg1 animated:(BOOL)arg2 ;
-(double)_interpolatedBottomBarWidthWithProposedWidth:(double)arg1 ;
-(void)badgeViewDidChangeIntrinsicContentSize:(id)arg1 ;
-(CAMTimerIndicatorView *)timerIndicatorView;
-(CEKLightingControl *)lightingControl;
-(double)_interpolatedBottomBarHeightWithProposedHeight:(double)arg1 ;
-(void)setMaskingAspectRatio:(long long)arg1 ;
-(void)setPortraitModeDescriptionOverlayView:(CAMPortraitModeDescriptionOverlayView *)arg1 ;
-(void)_layoutTopBadgesForLayoutStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(CGSize)_bottomBarSizeForLayoutStyle:(long long)arg1 withProposedSize:(CGSize)arg2 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(NSArray *)visibleTopBadges;
-(long long)previewViewOrientation;
-(void)_layoutBarExtensionViews;
-(CAMFlashBadge *)flashBadge;
-(void)_updateBarExtensionViewsIfNecessary;
-(UIView *)_previewContainerView;
-(void)_layoutZoomSliderForLayoutStyle:(long long)arg1 ;
-(id)_viewToLayoutBadgesBelowForLayoutStyle:(long long)arg1 orientation:(long long)arg2 ;
-(long long)layoutStyle;
-(void)setShutterButton:(CUShutterButton *)arg1 ;
-(double)_interpolatedTopBarHeight;
-(CAMVideoConfigurationStatusIndicator *)videoConfigurationStatusIndicator;
-(void)_layoutQRCodeInstructionLabelForLayoutStyle:(long long)arg1 ;
-(void)setFlashBadge:(CAMFlashBadge *)arg1 ;
-(void)_layoutTopBarForLayoutStyle:(long long)arg1 ;
-(void)_createPlaceholderSnapshotAndPerformDoubleSidedFadeForView:(id)arg1 fadeOutDuration:(double)arg2 fadeOutDelay:(double)arg3 fadeInDuration:(double)arg4 fadeInDelay:(double)arg5 ;
-(void)_layoutBadgeTrayForLayoutStyle:(long long)arg1 appearingBadges:(id)arg2 disappearingBadges:(id)arg3 animated:(BOOL)arg4 ;
-(CAMFullscreenViewfinderLayout *)_modernLayout;
-(CAMViewfinderOpenAndCloseTransition *)_openAndCloseTransition;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_commonCAMViewfinderViewInitializationWithLayoutStyle:(long long)arg1 ;
-(void)_layoutDescriptionOverlayView:(id)arg1 ;
-(CGRect)_cameraPreviewFrameForAspectRatio:(long long)arg1 topBarFrame:(CGRect)arg2 bottomBarFrame:(CGRect)arg3 shouldShiftPreviewForUtilityBar:(BOOL)arg4 ;
-(CAMPreviewView *)previewView;
-(CAMDisabledModeOverlayView *)disabledModeOverlayView;
-(CAMZoomSlider *)zoomSlider;
-(void)setMaskingAspectRatio:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_layoutInstructionLabelOnTop:(id)arg1 forLayoutStyle:(long long)arg2 ;
-(CUShutterButton *)shutterButton;
-(void)prepareForAutorotation;
-(CAMShallowDepthOfFieldBadge *)shallowDepthOfFieldBadge;
-(void)setShallowDepthOfFieldBadge:(CAMShallowDepthOfFieldBadge *)arg1 ;
-(void)setAutomaticallyAdjustsTopBarOrientation:(BOOL)arg1 ;
-(void)setPortraitModeInstructionLabel:(CAMPortraitModeInstructionLabel *)arg1 ;
-(void)_layoutElapsedTimeViewForLayoutStyle:(long long)arg1 ;
-(CAMFlipButton *)flipButton;
-(CAMPreviewContainerMaskingView *)_previewContainerMaskingView;
-(UIView *)_topBarExtensionView;
-(void)setDesiredAspectRatio:(long long)arg1 ;
-(CAMPanoramaView *)panoramaView;
-(void)_layoutBadgeForTinyLayoutStyle:(id)arg1 animated:(BOOL)arg2 ;
-(void)_layoutBottomCenteredView:(id)arg1 aboveView:(id)arg2 aboveViewSpacing:(double)arg3 forLayoutStyle:(long long)arg4 ;
-(BOOL)useCreativeControls;
-(double)_multiplierForAspectRatio:(long long)arg1 ;
-(void)setLightingNameBadge:(CEKLightingNameBadge *)arg1 ;
-(CAMBurstIndicatorView *)burstIndicatorView;
-(void)_layoutShutterIndicatorForLayoutStyle:(long long)arg1 ;
-(void)setBottomBar:(CAMBottomBar *)arg1 ;
-(void)removeInflightBlurAnimations;
-(void)_layoutSnapshotsOfPreviewView;
-(void)layoutSubviews;
-(void)setUseCreativeControls:(BOOL)arg1 ;
-(CAMFocusLockBadge *)focusAndExposureLockBadge;
-(void)_setModernLayout:(id)arg1 ;
-(void)_setBottomBarExtensionView:(id)arg1 ;
-(CGRect)_previewFrameForAspectRatio:(long long)arg1 topBarFrame:(CGRect)arg2 bottomBarFrame:(CGRect)arg3 shouldShiftPreviewForUtilityBar:(BOOL)arg4 ;
-(CGSize)_previewSizeForAspectRatio:(long long)arg1 ;
-(id<CAMControlVisibilityDelegate>)visibilityDelegate;
-(CAMLivePhotoBadge *)livePhotoBadge;
-(void)setTimerIndicatorView:(CAMTimerIndicatorView *)arg1 ;
-(CAMElapsedTimeView *)elapsedTimeView;
-(void)setTopBar:(CAMTopBar *)arg1 ;
-(void)setVisibilityDelegate:(id<CAMControlVisibilityDelegate>)arg1 ;
-(CGSize)_topBarSizeForLayoutStyle:(long long)arg1 ;
-(CAMBottomBar *)bottomBar;
-(void)_layoutBottomBadgesForLayoutStyle:(long long)arg1 ;
-(void)setShutterIndicatorView:(CAMShutterIndicatorView *)arg1 ;
-(UIOffset)_previewOffset;
-(void)_setFlipTransition:(id)arg1 ;
-(double)_utilityBarExtensionDistanceForLayoutStyle:(long long)arg1 ;
-(void)_setOpenAndCloseTransition:(id)arg1 ;
-(long long)orientation;
-(void)_topBarForLayoutForLayoutStyle:(long long)arg1 shouldAdjustTopBarOrientation:(BOOL)arg2 bounds:(CGRect*)arg3 center:(CGPoint*)arg4 transform:(CGAffineTransform*)arg5 ;
-(void)instructionLabelDidChangeIntrinsicContentSize:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_createPlaceholderSnapshotAndPerformSingleSidedFadeForView:(id)arg1 fadeOutDuration:(double)arg2 fadeOutDelay:(double)arg3 ;
-(CAMPortraitModeInstructionLabel *)portraitModeInstructionLabel;
-(CAMPortraitModeDescriptionOverlayView *)portraitModeDescriptionOverlayView;
-(BOOL)automaticallyAdjustsTopBarOrientation;
-(void)setDisabledModeOverlayView:(CAMDisabledModeOverlayView *)arg1 ;
-(CAMFilterNameBadge *)filterNameBadge;
-(void)setZoomSlider:(CAMZoomSlider *)arg1 ;
-(void)_layoutBurstIndicatorForLayoutStyle:(long long)arg1 ;
-(void)setQrCodeInstructionLabel:(CAMQRCodeInstructionLabel *)arg1 ;
-(void)_enforceBadgeSubviewOrderingWithAppearingBadges:(id)arg1 ;
-(CAMQRCodeInstructionLabel *)qrCodeInstructionLabel;
-(void)setHDRBadge:(CAMHDRBadge *)arg1 ;
-(CEKLightingNameBadge *)lightingNameBadge;
-(void)_previewLayoutForAspectRatio:(long long)arg1 shouldShiftPreviewForUtilityBar:(BOOL)arg2 outPreviewBounds:(CGRect*)arg3 outPreviewCenter:(CGPoint*)arg4 outFourThreeTopBarFrame:(CGRect*)arg5 outBottomBarFrame:(CGRect*)arg6 ;
-(void)_layoutPanoramaViewForLayoutStyle:(long long)arg1 ;
-(double)_interpolatedVerticalOffsetForShutterIndicator;
-(void)_cameraTopBarForLayoutForLayoutStyle:(long long)arg1 shouldAdjustTopBarOrientation:(BOOL)arg2 bounds:(CGRect*)arg3 center:(CGPoint*)arg4 transform:(CGAffineTransform*)arg5 ;
-(BOOL)_shouldLayoutPortraitInstructionsAtTop;
-(void)_layoutTopBadgesForLayoutStyle:(long long)arg1 appearingBadges:(id)arg2 disappearingBadges:(id)arg3 animated:(BOOL)arg4 ;
-(CAMTopBar *)topBar;
-(UIEdgeInsets)_layoutMarginInsetsForLayoutStyle:(long long)arg1 ;
-(void)_cameraAppPreviewLayoutForAspectRatio:(long long)arg1 shouldShiftPreviewForUtilityBar:(BOOL)arg2 outPreviewBounds:(CGRect*)arg3 outPreviewCenter:(CGPoint*)arg4 outFourThreeTopBarFrame:(CGRect*)arg5 outBottomBarFrame:(CGRect*)arg6 ;
-(CAMViewfinderFlipTransition *)_flipTransition;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 forAspectRatio:(long long)arg2 ;
-(void)_updateModernLayout;
-(void)_layoutTimerIndicatorViewForLayoutStyle:(long long)arg1 ;
-(void)prepareForResumingUsingCrossfade;
-(void)setLightingControl:(CEKLightingControl *)arg1 ;
-(void)setFilterNameBadge:(CAMFilterNameBadge *)arg1 ;
-(void)setPanoramaView:(CAMPanoramaView *)arg1 ;
-(long long)maskingAspectRatio;
-(void)controlStatusIndicatorDidChangeIntrinsicContentSize:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_wantsInterfaceOrientedPreviewForLayoutStyle:(long long)arg1 ;
-(double)_badgeTrayHeightForLayoutStyle:(long long)arg1 ;
-(void)setElapsedTimeView:(CAMElapsedTimeView *)arg1 ;
-(void)_layoutVideoConfigurationStatusIndicatorForLayoutStyle:(long long)arg1 ;
-(void)setLivePhotoBadge:(CAMLivePhotoBadge *)arg1 ;
-(void)setZoomControl:(CAMZoomControl *)arg1 ;
-(CGRect)_frameForBadgeTrayForLayoutStyle:(long long)arg1 orientation:(long long)arg2 ;
-(void)_layoutFlipButtonForLayoutStyle:(long long)arg1 ;
-(void)setPreviewView:(CAMPreviewView *)arg1 ;
-(void)setVisibleTopBadges:(NSArray *)arg1 ;
-(void)_layoutZoomControlForLayoutStyle:(long long)arg1 ;
-(void)_layoutPortraitModeInstructionLabelForLayoutStyle:(long long)arg1 ;
-(CAMHDRBadge *)HDRBadge;
-(void)setVideoConfigurationStatusIndicator:(CAMVideoConfigurationStatusIndicator *)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(BOOL)_isAdjustingTopBarOrientationForLayoutStyle:(long long)arg1 ;
-(void)_layoutShutterButtonForLayoutStyle:(long long)arg1 ;
@end

