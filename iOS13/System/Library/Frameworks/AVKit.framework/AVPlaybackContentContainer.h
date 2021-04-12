/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

@class AVPlaybackContentContainerView;


@protocol AVPlaybackContentContainer <NSObject>
@property (nonatomic,readonly) AVPlaybackContentContainerView * activeContentView; 
@property (assign,nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible; 
@property (assign,nonatomic) CGRect videoContentFrame; 
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen; 
@required
-(BOOL)isPlayingOnSecondScreen;
-(void)setPlayingOnSecondScreen:(BOOL)arg1;
-(id)initWithFrame:(CGRect)arg1 activeContentView:(id)arg2;
-(void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(BOOL)arg2;
-(AVPlaybackContentContainerView *)activeContentView;
-(BOOL)canShowStatusBarBackgroundGradientWhenStatusBarVisible;
-(void)setCanShowStatusBarBackgroundGradientWhenStatusBarVisible:(BOOL)arg1;
-(CGRect)videoContentFrame;
-(void)setVideoContentFrame:(CGRect)arg1;

@end

