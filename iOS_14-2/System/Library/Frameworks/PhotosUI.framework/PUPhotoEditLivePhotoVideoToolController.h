/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoEditToolController.h>
#import <libobjc.A.dylib/PUTrimToolControllerDelegate.h>

@class _UIBackdropView, UIView, NSLayoutConstraint, NSMutableArray, PUTrimToolController, PXUIButton, UILabel, UIButton, PLRoundProgressView, NSString;

@interface PUPhotoEditLivePhotoVideoToolController : PUPhotoEditToolController <PUTrimToolControllerDelegate> {

	_UIBackdropView* _backdropBackgroundView;
	UIView* _solidBackgroundView;
	UIView* _containerView;
	NSLayoutConstraint* _viewHeightConstraint;
	NSLayoutConstraint* _leadingWidthConstraint;
	NSLayoutConstraint* _trailingWidthConstraint;
	NSMutableArray* _constraints;
	PUTrimToolController* _trimController;
	PXUIButton* _muteLivePhotoButton;
	PXUIButton* _livePhotoButton;
	UILabel* _videoLabelView;
	UIButton* _stabilizeButton;
	PLRoundProgressView* _stabilizeProgressView;
	BOOL _trimControllerVisible;
	BOOL _viewHasAppeared;
	BOOL _trimControllerScrubberNeedsVisualUpdate;
	BOOL _stabilizationInProgress;
	SCD_Struct_PH4 _originalStillImageTime;
	BOOL _useTranslucentBackground;
	long long _layoutType;
	UIView* _primaryView;
	double _horizontalControlPadding;
	double _horizontalPrimaryViewPaddingOffset;
	double _verticalButtonOffset;

}

@property (assign,nonatomic) long long layoutType;                                     //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,retain) UIView * primaryView;                                     //@synthesize primaryView=_primaryView - In the implementation block
@property (assign,nonatomic) double horizontalControlPadding;                          //@synthesize horizontalControlPadding=_horizontalControlPadding - In the implementation block
@property (nonatomic,readonly) double horizontalPrimaryViewPaddingOffset;              //@synthesize horizontalPrimaryViewPaddingOffset=_horizontalPrimaryViewPaddingOffset - In the implementation block
@property (assign,nonatomic) double verticalButtonOffset;                              //@synthesize verticalButtonOffset=_verticalButtonOffset - In the implementation block
@property (assign,nonatomic) BOOL useTranslucentBackground;                            //@synthesize useTranslucentBackground=_useTranslucentBackground - In the implementation block
@property (nonatomic,readonly) UIButton * livePhotoButton; 
@property (nonatomic,readonly) PUTrimToolController * trimController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(void)_updateLivePhotoButtonAnimated:(BOOL)arg1 ;
-(id)localizedName;
-(long long)layoutType;
-(BOOL)wantsSecondaryToolbarVisible;
-(void)_invalidateConstraints;
-(id)init;
-(void)baseLivePhotoInvalidated;
-(id)leadingToolbarViews;
-(id)toolbarIcon;
-(void)_updateBackgroundAnimated:(BOOL)arg1 ;
-(void)setUseGradientBackground:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)centerToolbarView;
-(BOOL)canResetToDefaultValue;
-(void)willBecomeActiveTool;
-(BOOL)wantsZoomAndPanEnabled;
-(long long)toolControllerTag;
-(void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)compositionControllerDidChangeForAdjustments:(id)arg1 ;
-(id)accessibilityHUDItemForButton:(id)arg1 ;
-(void)setUseTranslucentBackground:(BOOL)arg1 ;
-(BOOL)useTranslucentBackground;
-(void)trimToolControllerDidChange:(id)arg1 state:(unsigned long long)arg2 ;
-(void)setOriginalStillImageTime:(SCD_Struct_PH4)arg1 ;
-(void)updateForIncomingAnimation;
-(void)photoEditLivePhotoModelUpdated;
-(void)setHorizontalControlPadding:(double)arg1 ;
-(void)setVerticalButtonOffset:(double)arg1 ;
-(BOOL)_isTrimAllowed;
-(BOOL)_wantsTrimControl;
-(void)_updateTrimControl;
-(PUTrimToolController *)trimController;
-(void)setPrimaryView:(UIView *)arg1 ;
-(id)makeTrimToolController;
-(void)_invalidateTrimControlScrubberThumbnails;
-(void)videoRenderingChanged;
-(void)_handleMuteLivePhotoButton:(id)arg1 ;
-(void)reloadToolbarButtons:(BOOL)arg1 ;
-(void)updateToolbarButtonsAnimated:(BOOL)arg1 ;
-(void)_updateMuteButtonAnimated:(BOOL)arg1 ;
-(void)_updateStabilizeButtonAnimated:(BOOL)arg1 ;
-(void)_updateStabilizeProgressViewAnimated:(BOOL)arg1 ;
-(void)_reportStabilizeProgress:(double)arg1 ;
-(void)_updateStabilizationInProgress:(BOOL)arg1 ;
-(void)_handleStabilizeButton:(id)arg1 ;
-(void)_handleLivePhotoButton:(id)arg1 ;
-(void)_updateLivePhotoButton:(id)arg1 ;
-(double)horizontalControlPadding;
-(double)horizontalPrimaryViewPaddingOffset;
-(double)verticalButtonOffset;
-(void)setLayoutType:(long long)arg1 ;
-(void)setBackdropViewGroupName:(id)arg1 ;
-(void)setPlaceholderImage:(id)arg1 ;
-(UIButton *)livePhotoButton;
-(void)loadView;
-(UIView *)primaryView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

