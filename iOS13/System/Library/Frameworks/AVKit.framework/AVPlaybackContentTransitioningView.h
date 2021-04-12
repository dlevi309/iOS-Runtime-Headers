/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <AVKit/AVPlaybackContentContainer.h>

@protocol AVPlaybackContentTransitioningViewDelegate;
@class AVPlaybackContentContainerView, NSValue, NSString;

@interface AVPlaybackContentTransitioningView : UIScrollView <UIScrollViewDelegate, AVPlaybackContentContainer> {

	BOOL _playingOnSecondScreen;
	BOOL _transitionInteractive;
	AVPlaybackContentContainerView* _activeContentView;
	long long _transitionState;
	long long _transitionDirection;
	double _transitionProgress;
	id<AVPlaybackContentTransitioningViewDelegate> _contentTransitioningDelegate;
	AVPlaybackContentContainerView* _incomingContentView;
	NSValue* _targetContentOffset;
	NSString* _stateDescription;
	long long _boundsOrContentSizeAdjustmentCount;
	CGRect _frameForActiveContentView;
	CGRect _frameForTransitioningContentView;

}

@property (nonatomic,retain) NSValue * targetContentOffset;                                                                   //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (nonatomic,copy) NSString * stateDescription;                                                                       //@synthesize stateDescription=_stateDescription - In the implementation block
@property (assign,nonatomic) CGRect frameForActiveContentView;                                                                //@synthesize frameForActiveContentView=_frameForActiveContentView - In the implementation block
@property (assign,nonatomic) CGRect frameForTransitioningContentView;                                                         //@synthesize frameForTransitioningContentView=_frameForTransitioningContentView - In the implementation block
@property (assign,nonatomic) long long boundsOrContentSizeAdjustmentCount;                                                    //@synthesize boundsOrContentSizeAdjustmentCount=_boundsOrContentSizeAdjustmentCount - In the implementation block
@property (assign,getter=isTransitionInteractive,nonatomic) BOOL transitionInteractive;                                       //@synthesize transitionInteractive=_transitionInteractive - In the implementation block
@property (assign,nonatomic,__weak) id<AVPlaybackContentTransitioningViewDelegate> contentTransitioningDelegate;              //@synthesize contentTransitioningDelegate=_contentTransitioningDelegate - In the implementation block
@property (nonatomic,readonly) AVPlaybackContentContainerView * incomingContentView;                                          //@synthesize incomingContentView=_incomingContentView - In the implementation block
@property (nonatomic,readonly) long long transitionState;                                                                     //@synthesize transitionState=_transitionState - In the implementation block
@property (nonatomic,readonly) long long transitionDirection;                                                                 //@synthesize transitionDirection=_transitionDirection - In the implementation block
@property (nonatomic,readonly) double transitionProgress;                                                                     //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) AVPlaybackContentContainerView * activeContentView;                                            //@synthesize activeContentView=_activeContentView - In the implementation block
@property (assign,nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible; 
@property (assign,nonatomic) CGRect videoContentFrame; 
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen;                                       //@synthesize playingOnSecondScreen=_playingOnSecondScreen - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(double)transitionProgress;
-(long long)transitionDirection;
-(BOOL)_canTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(NSValue *)targetContentOffset;
-(void)setTargetContentOffset:(NSValue *)arg1 ;
-(NSString *)stateDescription;
-(void)setStateDescription:(NSString *)arg1 ;
-(BOOL)isPlayingOnSecondScreen;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 activeContentView:(id)arg2 ;
-(void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(BOOL)arg2 ;
-(AVPlaybackContentContainerView *)activeContentView;
-(BOOL)canShowStatusBarBackgroundGradientWhenStatusBarVisible;
-(void)setCanShowStatusBarBackgroundGradientWhenStatusBarVisible:(BOOL)arg1 ;
-(CGRect)videoContentFrame;
-(void)setVideoContentFrame:(CGRect)arg1 ;
-(void)_setTransitionState:(id)arg1 transitionDirection:(id)arg2 transitionProgress:(id)arg3 ;
-(void)performTransition:(long long)arg1 ;
-(void)_updateTransitionStateIfPossible;
-(void)_performBoundsOrContentSizeAdjustment:(/*^block*/id)arg1 ;
-(BOOL)_isAdjustingBoundsOrContentSize;
-(void)_updateSizeAndContentFrame;
-(void)_ensureContentViews;
-(CGRect)_frameExcludingActiveContent;
-(CGRect)_frameExcludingTransitioningContent;
-(id)_descriptionForState:(long long)arg1 ;
-(id)_makeStateDescription;
-(long long)transitionState;
-(id<AVPlaybackContentTransitioningViewDelegate>)contentTransitioningDelegate;
-(void)setContentTransitioningDelegate:(id<AVPlaybackContentTransitioningViewDelegate>)arg1 ;
-(AVPlaybackContentContainerView *)incomingContentView;
-(BOOL)isTransitionInteractive;
-(void)setTransitionInteractive:(BOOL)arg1 ;
-(CGRect)frameForActiveContentView;
-(void)setFrameForActiveContentView:(CGRect)arg1 ;
-(CGRect)frameForTransitioningContentView;
-(void)setFrameForTransitioningContentView:(CGRect)arg1 ;
-(long long)boundsOrContentSizeAdjustmentCount;
-(void)setBoundsOrContentSizeAdjustmentCount:(long long)arg1 ;
@end

