/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <AVKit/AVPlaybackContentContainer.h>

@class AVPlaybackContentContainerView, UIWindow, NSString;

@interface AVPlaybackContentZoomingView : UIScrollView <UIScrollViewDelegate, AVPlaybackContentContainer> {

	BOOL _playingOnSecondScreen;
	BOOL _zoomingEnabled;
	BOOL _fullScreen;
	AVPlaybackContentContainerView* _activeContentView;
	UIWindow* _lastKnownWindow;
	CGSize _contentAspectRatio;
	CGRect _videoContentFrame;
	CGRect _previousBounds;

}

@property (assign,nonatomic) CGRect previousBounds;                                                    //@synthesize previousBounds=_previousBounds - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * lastKnownWindow;                                        //@synthesize lastKnownWindow=_lastKnownWindow - In the implementation block
@property (assign,getter=isZoomingEnabled,nonatomic) BOOL zoomingEnabled;                              //@synthesize zoomingEnabled=_zoomingEnabled - In the implementation block
@property (assign,nonatomic) CGSize contentAspectRatio;                                                //@synthesize contentAspectRatio=_contentAspectRatio - In the implementation block
@property (assign,getter=isFullScreen,nonatomic) BOOL fullScreen;                                      //@synthesize fullScreen=_fullScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AVPlaybackContentContainerView * activeContentView;                     //@synthesize activeContentView=_activeContentView - In the implementation block
@property (assign,nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible; 
@property (assign,nonatomic) CGRect videoContentFrame;                                                 //@synthesize videoContentFrame=_videoContentFrame - In the implementation block
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen;                //@synthesize playingOnSecondScreen=_playingOnSecondScreen - In the implementation block
-(void)setFullScreen:(BOOL)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(BOOL)isFullScreen;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(CGSize)arg3 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(BOOL)isPlayingOnSecondScreen;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)zoomToPoint:(CGPoint)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(UIEdgeInsets)_contentInsets;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setZoomingEnabled:(BOOL)arg1 ;
-(BOOL)isZoomingEnabled;
-(CGRect)previousBounds;
-(id)initWithFrame:(CGRect)arg1 activeContentView:(id)arg2 ;
-(void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(BOOL)arg2 ;
-(AVPlaybackContentContainerView *)activeContentView;
-(BOOL)canShowStatusBarBackgroundGradientWhenStatusBarVisible;
-(void)setCanShowStatusBarBackgroundGradientWhenStatusBarVisible:(BOOL)arg1 ;
-(CGRect)videoContentFrame;
-(void)setVideoContentFrame:(CGRect)arg1 ;
-(void)setLastKnownWindow:(UIWindow *)arg1 ;
-(void)setContentAspectRatio:(CGSize)arg1 ;
-(CGSize)_contentSizeForScale:(double)arg1 ;
-(CGRect)_contentRectForScale:(double)arg1 ;
-(void)_updateMinMaxZoomScales;
-(void)_updateMinMaxZoomScales:(BOOL)arg1 ;
-(CGSize)contentAspectRatio;
-(void)setPreviousBounds:(CGRect)arg1 ;
-(UIWindow *)lastKnownWindow;
@end

