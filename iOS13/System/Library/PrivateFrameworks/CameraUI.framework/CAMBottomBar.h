/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAMExpandableMenuButtonDelegate.h>
#import <libobjc.A.dylib/CEKApertureButtonDelegate.h>

@protocol CAMControlVisibilityUpdateDelegate;
@class UIView, CUShutterButton, CAMModeDial, CAMImageWell, UIButton, CAMCreativeCameraButton, PUReviewScreenDoneButton, CAMFlipButton, CAMFlashButton, CAMHDRButton, CAMTimerButton, CAMLivePhotoButton, CEKApertureButton, CAMUtilityBar, CAMExpandableMenuButton;

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate, CEKApertureButtonDelegate> {

	long long _layoutStyle;
	long long _backgroundStyle;
	UIView* _backgroundView;
	id<CAMControlVisibilityUpdateDelegate> _visibilityUpdateDelegate;
	CUShutterButton* _shutterButton;
	CUShutterButton* _stillDuringVideoButton;
	CAMModeDial* _modeDial;
	CAMImageWell* _imageWell;
	UIButton* _reviewButton;
	CAMCreativeCameraButton* _creativeCameraButton;
	PUReviewScreenDoneButton* _doneButton;
	CAMFlipButton* _flipButton;
	CAMFlashButton* _flashButton;
	CAMHDRButton* _HDRButton;
	CAMTimerButton* _timerButton;
	CAMLivePhotoButton* _livePhotoButton;
	CEKApertureButton* _apertureButton;
	CAMUtilityBar* _utilityBar;
	double _utilityBarExtensionDistance;
	CAMExpandableMenuButton* __expandedMenuButton;

}

@property (setter=_setExpandedMenuButton:,nonatomic,retain) CAMExpandableMenuButton * _expandedMenuButton;              //@synthesize _expandedMenuButton=__expandedMenuButton - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                                     //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long backgroundStyle;                                                                 //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) UIView * backgroundView;                                                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<CAMControlVisibilityUpdateDelegate> visibilityUpdateDelegate;                    //@synthesize visibilityUpdateDelegate=_visibilityUpdateDelegate - In the implementation block
@property (nonatomic,retain) CUShutterButton * shutterButton;                                                           //@synthesize shutterButton=_shutterButton - In the implementation block
@property (nonatomic,retain) CUShutterButton * stillDuringVideoButton;                                                  //@synthesize stillDuringVideoButton=_stillDuringVideoButton - In the implementation block
@property (nonatomic,retain) CAMModeDial * modeDial;                                                                    //@synthesize modeDial=_modeDial - In the implementation block
@property (nonatomic,retain) CAMImageWell * imageWell;                                                                  //@synthesize imageWell=_imageWell - In the implementation block
@property (nonatomic,retain) UIButton * reviewButton;                                                                   //@synthesize reviewButton=_reviewButton - In the implementation block
@property (nonatomic,retain) CAMCreativeCameraButton * creativeCameraButton;                                            //@synthesize creativeCameraButton=_creativeCameraButton - In the implementation block
@property (nonatomic,retain) PUReviewScreenDoneButton * doneButton;                                                     //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) CAMFlipButton * flipButton;                                                                //@synthesize flipButton=_flipButton - In the implementation block
@property (nonatomic,retain) CAMFlashButton * flashButton;                                                              //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,retain) CAMHDRButton * HDRButton;                                                                  //@synthesize HDRButton=_HDRButton - In the implementation block
@property (nonatomic,retain) CAMTimerButton * timerButton;                                                              //@synthesize timerButton=_timerButton - In the implementation block
@property (nonatomic,retain) CAMLivePhotoButton * livePhotoButton;                                                      //@synthesize livePhotoButton=_livePhotoButton - In the implementation block
@property (nonatomic,retain) CEKApertureButton * apertureButton;                                                        //@synthesize apertureButton=_apertureButton - In the implementation block
@property (nonatomic,retain) CAMUtilityBar * utilityBar;                                                                //@synthesize utilityBar=_utilityBar - In the implementation block
@property (assign,nonatomic) double utilityBarExtensionDistance;                                                        //@synthesize utilityBarExtensionDistance=_utilityBarExtensionDistance - In the implementation block
+(BOOL)wantsVerticalBarForLayoutStyle:(long long)arg1 ;
+(CGRect)shutterButtonAlignmentRectInBounds:(CGRect)arg1 forLayoutStyle:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(long long)backgroundStyle;
-(void)setDoneButton:(PUReviewScreenDoneButton *)arg1 ;
-(PUReviewScreenDoneButton *)doneButton;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(CUShutterButton *)shutterButton;
-(void)setShutterButton:(CUShutterButton *)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(UIButton *)reviewButton;
-(void)setReviewButton:(UIButton *)arg1 ;
-(void)apertureButtonNeedsLayout:(id)arg1 animated:(BOOL)arg2 ;
-(CAMLivePhotoButton *)livePhotoButton;
-(CAMFlipButton *)flipButton;
-(CAMImageWell *)imageWell;
-(CAMCreativeCameraButton *)creativeCameraButton;
-(CAMModeDial *)modeDial;
-(id)touchingRecognizersToCancel;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(void)_commonCAMBottomBarInitializationInitWithLayoutStyle:(long long)arg1 ;
-(void)_updateImageWellTappableEdgeInsets;
-(void)_updateFlipButtonTappableEdgeInsets;
-(void)_updateCreativeCameraButtonTappableEdgeInsets;
-(void)_ensureSubviewOrdering;
-(id<CAMControlVisibilityUpdateDelegate>)visibilityUpdateDelegate;
-(CAMUtilityBar *)utilityBar;
-(CUShutterButton *)stillDuringVideoButton;
-(double)utilityBarExtensionDistance;
-(double)_opacityForBackgroundStyle:(long long)arg1 ;
-(void)_layoutShutterButtonForLayoutStyle:(long long)arg1 ;
-(void)_layoutStillDuringVideoButtonForLayoutStyle:(long long)arg1 ;
-(void)_layoutImageWellForLayoutStyle:(long long)arg1 ;
-(void)_layoutReviewButtonForLayoutStyle:(long long)arg1 ;
-(void)_layoutCreativeCameraButtonForLayoutStyle:(long long)arg1 ;
-(void)_layoutModeDialForLayoutStyle:(long long)arg1 ;
-(void)_layoutFlipButtonForLayoutStyle:(long long)arg1 ;
-(void)_layoutUtilityBarForLayoutStyle:(long long)arg1 ;
-(void)_layoutDoneButtonForLayoutStyle:(long long)arg1 ;
-(id)_currentMenuButtons;
-(CAMExpandableMenuButton *)_expandedMenuButton;
-(void)_layoutMenuButtons:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(CGRect*)arg5 ;
-(CGRect)expandedFrameForMenuButton:(id)arg1 ;
-(CEKApertureButton *)apertureButton;
-(CGRect)collapsedFrameForMenuButton:(id)arg1 ;
-(void)_setExpandedMenuButton:(id)arg1 ;
-(void)_updateControlVisibilityAnimated:(BOOL)arg1 ;
-(void)_iterateViewsInHUDManager:(id)arg1 forHUDItem:(/*^block*/id)arg2 ;
-(void)collapseMenuButton:(id)arg1 animated:(BOOL)arg2 ;
-(void)expandMenuButton:(id)arg1 animated:(BOOL)arg2 ;
-(void)setStillDuringVideoButton:(CUShutterButton *)arg1 ;
-(void)setModeDial:(CAMModeDial *)arg1 ;
-(void)setImageWell:(CAMImageWell *)arg1 ;
-(void)setCreativeCameraButton:(CAMCreativeCameraButton *)arg1 ;
-(void)setFlipButton:(CAMFlipButton *)arg1 ;
-(void)setFlashButton:(CAMFlashButton *)arg1 ;
-(void)setHDRButton:(CAMHDRButton *)arg1 ;
-(void)setTimerButton:(CAMTimerButton *)arg1 ;
-(void)setLivePhotoButton:(CAMLivePhotoButton *)arg1 ;
-(void)setApertureButton:(CEKApertureButton *)arg1 ;
-(void)setUtilityBar:(CAMUtilityBar *)arg1 ;
-(void)setUtilityBarExtensionDistance:(double)arg1 ;
-(void)setVisibilityUpdateDelegate:(id<CAMControlVisibilityUpdateDelegate>)arg1 ;
-(CAMFlashButton *)flashButton;
-(CAMHDRButton *)HDRButton;
-(CAMTimerButton *)timerButton;
@end

