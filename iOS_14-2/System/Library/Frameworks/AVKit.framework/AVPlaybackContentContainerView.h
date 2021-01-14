/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <AVKit/AVPlaybackContentContainer.h>

@class __AVPlayerLayerView, UIView, AVStatusBarBackgroundGradientView, NSString;

@interface AVPlaybackContentContainerView : UIView <AVPlaybackContentContainer> {

	BOOL _playingOnSecondScreen;
	BOOL _canShowStatusBarBackgroundGradientWhenStatusBarVisible;
	BOOL _observingStatusBarHidden;
	__AVPlayerLayerView* _playerLayerView;
	UIView* _contentOverlayView;
	UIView* _contentOverlayViewSubview;
	AVStatusBarBackgroundGradientView* _statusBarBackgroundGradientView;
	CGRect _videoContentFrame;

}

@property (nonatomic,readonly) AVStatusBarBackgroundGradientView * statusBarBackgroundGradientView;              //@synthesize statusBarBackgroundGradientView=_statusBarBackgroundGradientView - In the implementation block
@property (assign,getter=isObservingStatusBarHidden,nonatomic) BOOL observingStatusBarHidden;                    //@synthesize observingStatusBarHidden=_observingStatusBarHidden - In the implementation block
@property (nonatomic,retain) __AVPlayerLayerView * playerLayerView;                                              //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (nonatomic,readonly) UIView * contentOverlayView;                                                      //@synthesize contentOverlayView=_contentOverlayView - In the implementation block
@property (nonatomic,retain) UIView * contentOverlayViewSubview;                                                 //@synthesize contentOverlayViewSubview=_contentOverlayViewSubview - In the implementation block
@property (assign,nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible;                        //@synthesize canShowStatusBarBackgroundGradientWhenStatusBarVisible=_canShowStatusBarBackgroundGradientWhenStatusBarVisible - In the implementation block
@property (nonatomic,readonly) AVPlaybackContentContainerView * activeContentView; 
@property (assign,nonatomic) CGRect videoContentFrame;                                                           //@synthesize videoContentFrame=_videoContentFrame - In the implementation block
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen;                          //@synthesize playingOnSecondScreen=_playingOnSecondScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlayingOnSecondScreen;
-(void)didMoveToSuperview;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentOverlayView;
-(void)didMoveToWindow;
-(__AVPlayerLayerView *)playerLayerView;
-(id)initWithFrame:(CGRect)arg1 activeContentView:(id)arg2 ;
-(void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(BOOL)arg2 ;
-(AVPlaybackContentContainerView *)activeContentView;
-(BOOL)canShowStatusBarBackgroundGradientWhenStatusBarVisible;
-(void)setCanShowStatusBarBackgroundGradientWhenStatusBarVisible:(BOOL)arg1 ;
-(void)setPlayerLayerView:(__AVPlayerLayerView *)arg1 ;
-(CGRect)videoContentFrame;
-(void)setVideoContentFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 playerLayerView:(id)arg2 contentOverlayView:(id)arg3 ;
-(void)setContentOverlayViewSubview:(UIView *)arg1 ;
-(void)removeAllSublayerTransformAnimations;
-(void)_updateStatusBarBackgroundGradientViewAlpha;
-(CGRect)_frameForStatusBarBackgroundGradientView;
-(CGRect)_resolvedContentFrame;
-(UIView *)contentOverlayViewSubview;
-(AVStatusBarBackgroundGradientView *)statusBarBackgroundGradientView;
-(BOOL)isObservingStatusBarHidden;
-(void)setObservingStatusBarHidden:(BOOL)arg1 ;
-(void)dealloc;
@end

