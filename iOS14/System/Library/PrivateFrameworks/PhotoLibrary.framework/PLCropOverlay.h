/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PLCropOverlayDelegate;
@class PLCropOverlayCropView, UIImageView, UIView, UIToolbar, UILabel, PLProgressHUD, UIButton, PLContactPhotoOverlay, NSString, PLCropOverlayBottomBar, PLCropOverlayWallpaperBottomBar;

@interface PLCropOverlay : UIView {

	PLCropOverlayCropView* _cropView;
	UIImageView* _shadowView;
	UIView* _overlayContainerView;
	CGRect _cropRect;
	UIToolbar* _customToolbar;
	UILabel* _titleLabel;
	UIImageView* _topShineView;
	PLProgressHUD* _hud;
	float _statusBarHeight;
	int _mode;
	unsigned _previewMode : 1;
	unsigned _cropRectIsVisible : 1;
	unsigned _offsetStatusBar : 1;
	unsigned _tookPhoto : 1;
	unsigned _showsCropRegion : 1;
	unsigned _controlsAreVisible : 1;
	UIImageView* _bottomShineView;
	UIButton* _okButton;
	UIView* _wildcatPickerTopView;
	UIView* _wildcatPickerBottomView;
	BOOL _motionToggleIsOn;
	BOOL _isEditingHomeScreen;
	BOOL _isEditingLockScreen;
	BOOL _displayedInPopover;
	PLContactPhotoOverlay* _contactPhotoOverlay;
	NSString* _defaultOKButtonTitle;
	NSString* _defaultCancelButtonTitle;
	id<PLCropOverlayDelegate> _delegate;
	PLCropOverlayBottomBar* __bottomBar;
	UIButton* __cameraCancelButton;

}

@property (nonatomic,readonly) PLCropOverlayBottomBar * _bottomBar;                               //@synthesize _bottomBar=__bottomBar - In the implementation block
@property (nonatomic,readonly) UIButton * _cameraCancelButton;                                    //@synthesize _cameraCancelButton=__cameraCancelButton - In the implementation block
@property (nonatomic,readonly) PLContactPhotoOverlay * contactPhotoOverlay;                       //@synthesize contactPhotoOverlay=_contactPhotoOverlay - In the implementation block
@property (nonatomic,retain) UIView * cameraBottomBar; 
@property (nonatomic,readonly) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar; 
@property (assign,nonatomic) BOOL motionToggleIsOn;                                               //@synthesize motionToggleIsOn=_motionToggleIsOn - In the implementation block
@property (assign,nonatomic) BOOL isEditingHomeScreen;                                            //@synthesize isEditingHomeScreen=_isEditingHomeScreen - In the implementation block
@property (assign,nonatomic) BOOL isEditingLockScreen;                                            //@synthesize isEditingLockScreen=_isEditingLockScreen - In the implementation block
@property (assign,nonatomic) BOOL motionToggleHidden; 
@property (assign,getter=isDisplayedInPopover,nonatomic) BOOL displayedInPopover;                 //@synthesize displayedInPopover=_displayedInPopover - In the implementation block
@property (nonatomic,copy) NSString * defaultOKButtonTitle;                                       //@synthesize defaultOKButtonTitle=_defaultOKButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * defaultCancelButtonTitle;                                   //@synthesize defaultCancelButtonTitle=_defaultCancelButtonTitle - In the implementation block
@property (assign,nonatomic,__weak) id<PLCropOverlayDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL previewMode; 
-(void)_updateTitle;
-(PLCropOverlayBottomBar *)_bottomBar;
-(CGRect)cropRect;
-(int)mode;
-(id)overlayContainerView;
-(void)_setMode:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PLCropOverlayDelegate>)delegate;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(CGRect)titleRect;
-(BOOL)previewMode;
-(void)_playButtonPressed:(id)arg1 ;
-(void)setDelegate:(id<PLCropOverlayDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)bottomBar;
-(void)setFileResizingTitle:(id)arg1 ;
-(void)setFileResizingHidden:(BOOL)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)setPreviewMode:(BOOL)arg1 ;
-(void)setCancelButtonTitle:(id)arg1 ;
-(void)setOverlayContainerView:(id)arg1 ;
-(void)setShowsCropRegion:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 offsettingStatusBar:(BOOL)arg3 ;
-(void)setDisplayedInPopover:(BOOL)arg1 ;
-(void)setControlsAreVisible:(BOOL)arg1 ;
-(void)setDefaultOKButtonTitle:(NSString *)arg1 ;
-(void)setOKButtonShowsCamera:(BOOL)arg1 ;
-(void)_tappedBottomBarCancelButton:(id)arg1 ;
-(void)didCapturePhoto;
-(void)didCaptureVideo;
-(void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(int)arg4 ;
-(void)didPlayVideo;
-(void)didPauseVideo;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 ;
-(UIView *)cameraBottomBar;
-(void)setCameraBottomBar:(UIView *)arg1 ;
-(PLCropOverlayWallpaperBottomBar *)wallpaperBottomBar;
-(BOOL)controlsAreVisible;
-(void)_createCropView;
-(void)insertIrisView:(id)arg1 ;
-(CGRect)bottomBarFrame;
-(void)setCropRectVisible:(BOOL)arg1 duration:(float)arg2 ;
-(void)statusBarHeightDidChange:(id)arg1 ;
-(void)_fadeOutCompleted:(id)arg1 ;
-(void)_tappedBottomBarDoneButton:(id)arg1 ;
-(void)_tappedBottomBarSetHomeButton;
-(void)_tappedBottomBarSetLockButton;
-(void)_tappedBottomBarSetBothButton;
-(void)_tappedBottomBarMotionToggle;
-(id)_bottomBarFileSizeMenu;
-(id)_bottomBarFileSizeMenuActions;
-(void)setMotionToggleIsOn:(BOOL)arg1 ;
-(void)_updateMotionToggle;
-(void)setIsEditingHomeScreen:(BOOL)arg1 ;
-(void)setIsEditingLockScreen:(BOOL)arg1 ;
-(void)_updateWallpaperBottomBarSettingButtons;
-(void)setMotionToggleHidden:(BOOL)arg1 ;
-(BOOL)motionToggleHidden;
-(void)_tappedBottomBarPlaybackButton:(id)arg1 ;
-(void)cropOverlayBottomBarPlayButtonClicked:(id)arg1 ;
-(void)cropOverlayBottomBarPauseButtonClicked:(id)arg1 ;
-(void)_pauseButtonPressed:(id)arg1 ;
-(void)setTitle:(id)arg1 okButtonTitle:(id)arg2 ;
-(void)setOKButtonTitle:(id)arg1 ;
-(void)setDefaultCancelButtonTitle:(NSString *)arg1 ;
-(void)setShowProgress:(BOOL)arg1 title:(id)arg2 ;
-(void)removeProgress;
-(void)setProgressDone;
-(void)setTitleHidden:(BOOL)arg1 animationDuration:(double)arg2 ;
-(id)_fileResizingButton;
-(void)_updateEditImageDoneButtonTitle;
-(void)_updateEditImageCancelButtonTitle;
-(void)_updateToolbarItems:(BOOL)arg1 ;
-(void)_updateCropRectInRect:(CGRect)arg1 ;
-(id)_newOverlayViewWithFrame:(CGRect)arg1 lighterEdgeOnTop:(BOOL)arg2 ;
-(BOOL)isTelephonyUIMode:(int)arg1 ;
-(BOOL)isWallpaperUIMode:(int)arg1 ;
-(PLContactPhotoOverlay *)contactPhotoOverlay;
-(BOOL)motionToggleIsOn;
-(BOOL)isEditingHomeScreen;
-(BOOL)isEditingLockScreen;
-(BOOL)isDisplayedInPopover;
-(NSString *)defaultOKButtonTitle;
-(NSString *)defaultCancelButtonTitle;
-(UIButton *)_cameraCancelButton;
-(void)_backgroundSavePhoto:(id)arg1 cropRect:(CGRect)arg2 minimalCropDimension:(double)arg3 ;
-(void)_savePhotoFinished:(id)arg1 ;
@end
