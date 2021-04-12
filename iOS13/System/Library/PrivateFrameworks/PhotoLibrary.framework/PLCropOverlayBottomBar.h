/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, PLCropOverlayPreviewBottomBar, PLCropOverlayWallpaperBottomBar;

@interface PLCropOverlayBottomBar : UIView {

	BOOL _playingVideo;
	BOOL _inPopover;
	long long _style;
	UIView* _cameraBottomBar;
	PLCropOverlayPreviewBottomBar* _previewBottomBar;
	PLCropOverlayWallpaperBottomBar* _wallpaperBottomBar;

}

@property (assign,nonatomic) long long style;                                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIView * cameraBottomBar;                                          //@synthesize cameraBottomBar=_cameraBottomBar - In the implementation block
@property (nonatomic,retain) PLCropOverlayPreviewBottomBar * previewBottomBar;                  //@synthesize previewBottomBar=_previewBottomBar - In the implementation block
@property (nonatomic,retain) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar;              //@synthesize wallpaperBottomBar=_wallpaperBottomBar - In the implementation block
@property (assign,getter=isPlayingVideo,nonatomic) BOOL playingVideo;                           //@synthesize playingVideo=_playingVideo - In the implementation block
@property (assign,getter=isInPopover,nonatomic) BOOL inPopover;                                 //@synthesize inPopover=_inPopover - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_updateStyle;
-(void)setInPopover:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(UIView *)cameraBottomBar;
-(void)setCameraBottomBar:(UIView *)arg1 ;
-(PLCropOverlayWallpaperBottomBar *)wallpaperBottomBar;
-(void)_commonPLCropOverlayBottomBarInitialization;
-(void)setPreviewBottomBar:(PLCropOverlayPreviewBottomBar *)arg1 ;
-(void)setWallpaperBottomBar:(PLCropOverlayWallpaperBottomBar *)arg1 ;
-(void)setPlayingVideo:(BOOL)arg1 ;
-(void)togglePlaybackState;
-(void)_updateBottomBars;
-(void)_updatePreviewBottomBarForPlaybackState;
-(BOOL)_isEditingStyle:(long long)arg1 ;
-(PLCropOverlayPreviewBottomBar *)previewBottomBar;
-(BOOL)isPlayingVideo;
-(BOOL)isInPopover;
@end

