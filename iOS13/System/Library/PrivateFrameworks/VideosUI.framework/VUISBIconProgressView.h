/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol VUISBIconProgressViewDelegate;
@class _VUISBInstallProgressStateTransition, _VUISBIconProgressPausedTransition, _VUISBIconProgressFractionTransition, CADisplayLink, UIImage;

@interface VUISBIconProgressView : UIView {

	_VUISBInstallProgressStateTransition* _activeStateTransition;
	_VUISBIconProgressPausedTransition* _activePausedTransition;
	_VUISBIconProgressFractionTransition* _activeFractionTransition;
	long long _modelState;
	BOOL _modelPaused;
	double _modelFraction;
	CADisplayLink* _displayLink;
	double _lastUpdate;
	UIImage* _maskImage;
	BOOL _canAnimate;
	BOOL _displayingPaused;
	id<VUISBIconProgressViewDelegate> _delegate;
	UIImage* _overlayImage;
	double _backgroundAlpha;
	double _foregroundAlpha;
	double _circleRadiusFraction;
	double _pauseRadiusFraction;
	long long _displayedState;
	double _displayedFraction;

}

@property (assign,nonatomic) double backgroundAlpha;                                  //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (assign,nonatomic) double foregroundAlpha;                                  //@synthesize foregroundAlpha=_foregroundAlpha - In the implementation block
@property (assign,nonatomic) double circleRadiusFraction;                             //@synthesize circleRadiusFraction=_circleRadiusFraction - In the implementation block
@property (assign,nonatomic) double pauseRadiusFraction;                              //@synthesize pauseRadiusFraction=_pauseRadiusFraction - In the implementation block
@property (nonatomic,readonly) CGRect circleBoundingRect; 
@property (assign,nonatomic) long long displayedState;                                //@synthesize displayedState=_displayedState - In the implementation block
@property (assign,nonatomic) BOOL displayingPaused;                                   //@synthesize displayingPaused=_displayingPaused - In the implementation block
@property (assign,nonatomic) double displayedFraction;                                //@synthesize displayedFraction=_displayedFraction - In the implementation block
@property (assign,nonatomic) id<VUISBIconProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                  //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) BOOL canAnimate;                                         //@synthesize canAnimate=_canAnimate - In the implementation block
+(id)_pieImagesMemoryPool;
+(id)_pieImageAtFraction:(double)arg1 ;
-(void)dealloc;
-(id<VUISBIconProgressViewDelegate>)delegate;
-(void)setDelegate:(id<VUISBIconProgressViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_maskImage;
-(void)drawRect:(CGRect)arg1 ;
-(double)backgroundAlpha;
-(void)setBackgroundAlpha:(double)arg1 ;
-(double)foregroundAlpha;
-(void)setForegroundAlpha:(double)arg1 ;
-(UIImage *)overlayImage;
-(void)setOverlayImage:(UIImage *)arg1 ;
-(void)_onDisplayLink:(id)arg1 ;
-(void)_ensureDisplayLink;
-(void)_updateTransitionsAnimated:(BOOL)arg1 ;
-(void)_clearDisplayLink;
-(void)_updatePausedTransitionAnimated:(BOOL)arg1 ;
-(void)_updateStateTransitionAnimated:(BOOL)arg1 ;
-(void)_updateFractionTransitionAnimated:(BOOL)arg1 ;
-(BOOL)_hasActiveTransitions;
-(void)_drawPieWithCenter:(CGPoint)arg1 ;
-(void)_drawOutgoingCircleWithCenter:(CGPoint)arg1 ;
-(void)_drawIncomingCircleWithCenter:(CGPoint)arg1 ;
-(void)_drawPauseUIWithCenter:(CGPoint)arg1 ;
-(BOOL)canAnimate;
-(void)setState:(long long)arg1 paused:(BOOL)arg2 fractionLoaded:(double)arg3 animated:(BOOL)arg4 ;
-(void)setCanAnimate:(BOOL)arg1 ;
-(CGRect)circleBoundingRect;
-(double)circleRadiusFraction;
-(void)setCircleRadiusFraction:(double)arg1 ;
-(double)pauseRadiusFraction;
-(void)setPauseRadiusFraction:(double)arg1 ;
-(long long)displayedState;
-(void)setDisplayedState:(long long)arg1 ;
-(BOOL)displayingPaused;
-(void)setDisplayingPaused:(BOOL)arg1 ;
-(double)displayedFraction;
-(void)setDisplayedFraction:(double)arg1 ;
-(void)_clearTransitionIfComplete:(id*)arg1 ;
@end

