/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isFullscreen;
-(void)setFullscreen:(BOOL)arg1;
-(UIView *)backgroundView;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
-(long long)scaleMode;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
-(BOOL)autoPlayWhenLikelyToKeepUp;
-(void)displayVideoView;
-(BOOL)canHideOverlay:(BOOL)arg1;
-(void)exitFullscreen;
-(void)prepareToDisplayVideo;
-(void)setOwnsStatusBar:(BOOL)arg1;
-(void)setControlsNeedLayout;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
-(void)setScaleModeOverride:(long long)arg1 animated:(BOOL)arg2;
-(void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
-(BOOL)allowsDetailScrubbing;
-(void)setAllowsDetailScrubbing:(BOOL)arg1;
-(BOOL)allowsWirelessPlayback;
-(void)setAllowsWirelessPlayback:(BOOL)arg1;
-(BOOL)alwaysAllowHidingControlsOverlay;
-(void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
-(long long)artworkImageStyle;
-(void)setArtworkImageStyle:(long long)arg1;
-(BOOL)attemptAutoPlayWhenControlsHidden;
-(UIColor *)backstopColor;
-(void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
-(void)setBackstopColor:(id)arg1;
-(BOOL)canAnimateControlsOverlay;
-(unsigned long long)desiredParts;
-(void)setCanAnimateControlsOverlay:(BOOL)arg1;
-(BOOL)canChangeScaleMode;
-(BOOL)canShowControlsOverlay;
-(BOOL)controlsOverlayVisible;
-(void)setCanShowControlsOverlay:(BOOL)arg1;
-(void)setControlsOverlayVisible:(BOOL)arg1;
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
-(MPVideoView *)videoView;
-(unsigned)hostedWindowContextID;
-(BOOL)inlinePlaybackUsesTVOut;
-(void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
-(long long)itemTypeOverride;
-(void)setItemTypeOverride:(long long)arg1;
-(void)setPosterImage:(id)arg1;
-(void)setScaleMode:(long long)arg1;
-(BOOL)TVOutEnabled;
-(void)setTVOutEnabled:(BOOL)arg1;
-(UIView*<MPVideoOverlay>)videoOverlayView;
-(BOOL)viewControllerWillRequestExit;
-(unsigned long long)visibleParts;
-(void)setVisibleParts:(unsigned long long)arg1;
-(UIImage *)posterImage;

@end

