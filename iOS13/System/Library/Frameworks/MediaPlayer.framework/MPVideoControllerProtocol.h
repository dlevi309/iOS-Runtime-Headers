/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class UIView, UIColor, _UIHostedWindow, UIImage, MPVideoView;


@protocol MPVideoControllerProtocol <MPControllerProtocol>
@property (assign,nonatomic) BOOL allowsDetailScrubbing; 
@property (assign,nonatomic) BOOL allowsWirelessPlayback; 
@property (assign,nonatomic) BOOL alwaysAllowHidingControlsOverlay; 
@property (assign,nonatomic) long long artworkImageStyle; 
@property (assign,nonatomic) BOOL attemptAutoPlayWhenControlsHidden; 
@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,retain) UIColor * backstopColor; 
@property (assign,nonatomic) BOOL canAnimateControlsOverlay; 
@property (nonatomic,readonly) BOOL canChangeScaleMode; 
@property (assign,nonatomic) BOOL canShowControlsOverlay; 
@property (assign,nonatomic) BOOL controlsOverlayVisible; 
@property (assign,nonatomic) unsigned long long desiredParts; 
@property (assign,nonatomic) BOOL disableAutoRotation; 
@property (assign,nonatomic) BOOL disableControlsAutohide; 
@property (assign,nonatomic) unsigned long long disabledParts; 
@property (assign,nonatomic) BOOL displayPlaybackErrorAlerts; 
@property (nonatomic,readonly) _UIHostedWindow * hostedWindow; 
@property (nonatomic,readonly) unsigned hostedWindowContextID; 
@property (assign,nonatomic) BOOL inlinePlaybackUsesTVOut; 
@property (assign,nonatomic) long long itemTypeOverride; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (nonatomic,retain) UIImage * posterImage; 
@property (assign,nonatomic) long long scaleMode; 
@property (assign,nonatomic) BOOL TVOutEnabled; 
@property (nonatomic,readonly) BOOL viewControllerWillRequestExit; 
@property (nonatomic,retain,readonly) UIView*<MPVideoOverlay> videoOverlayView; 
@property (nonatomic,retain,readonly) MPVideoView * videoView; 
@property (assign,nonatomic) unsigned long long visibleParts; 
@property (assign,nonatomic) BOOL autoPlayWhenLikelyToKeepUp; 
@required
-(UIView *)backgroundView;
-(BOOL)isFullscreen;
-(MPVideoView *)videoView;
-(void)exitFullscreen;
-(UIImage *)posterImage;
-(void)setFullscreen:(BOOL)arg1;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
-(BOOL)inlinePlaybackUsesTVOut;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(BOOL)canHideOverlay:(BOOL)arg1;
-(void)displayVideoView;
-(void)prepareToDisplayVideo;
-(void)setControlsNeedLayout;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
-(void)setScaleModeOverride:(long long)arg1 animated:(BOOL)arg2;
-(void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
-(void)setOwnsStatusBar:(BOOL)arg1;
-(BOOL)allowsDetailScrubbing;
-(void)setAllowsDetailScrubbing:(BOOL)arg1;
-(BOOL)allowsWirelessPlayback;
-(void)setAllowsWirelessPlayback:(BOOL)arg1;
-(BOOL)alwaysAllowHidingControlsOverlay;
-(void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
-(long long)artworkImageStyle;
-(void)setArtworkImageStyle:(long long)arg1;
-(BOOL)attemptAutoPlayWhenControlsHidden;
-(void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
-(UIColor *)backstopColor;
-(void)setBackstopColor:(id)arg1;
-(BOOL)canAnimateControlsOverlay;
-(void)setCanAnimateControlsOverlay:(BOOL)arg1;
-(BOOL)canChangeScaleMode;
-(BOOL)canShowControlsOverlay;
-(void)setCanShowControlsOverlay:(BOOL)arg1;
-(BOOL)controlsOverlayVisible;
-(void)setControlsOverlayVisible:(BOOL)arg1;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1;
-(BOOL)disableAutoRotation;
-(void)setDisableAutoRotation:(BOOL)arg1;
-(BOOL)disableControlsAutohide;
-(void)setDisableControlsAutohide:(BOOL)arg1;
-(unsigned long long)disabledParts;
-(void)setDisabledParts:(unsigned long long)arg1;
-(BOOL)displayPlaybackErrorAlerts;
-(void)setDisplayPlaybackErrorAlerts:(BOOL)arg1;
-(_UIHostedWindow *)hostedWindow;
-(unsigned)hostedWindowContextID;
-(long long)itemTypeOverride;
-(void)setItemTypeOverride:(long long)arg1;
-(void)setPosterImage:(id)arg1;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1;
-(BOOL)TVOutEnabled;
-(void)setTVOutEnabled:(BOOL)arg1;
-(BOOL)viewControllerWillRequestExit;
-(UIView*<MPVideoOverlay>)videoOverlayView;
-(unsigned long long)visibleParts;
-(void)setVisibleParts:(unsigned long long)arg1;

@end

