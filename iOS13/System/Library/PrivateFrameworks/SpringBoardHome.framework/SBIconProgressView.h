/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SBIconProgressViewDelegate;
@class _SBIconProgressStateTransition, _SBIconProgressPausedTransition, _SBIconProgressFractionTransition, CADisplayLink, UIImage;

@interface SBIconProgressView : UIView {

	_SBIconProgressStateTransition* _activeStateTransition;
	_SBIconProgressPausedTransition* _activePausedTransition;
	_SBIconProgressFractionTransition* _activeFractionTransition;
	long long _modelState;
	BOOL _modelPaused;
	double _modelFraction;
	CADisplayLink* _displayLink;
	double _lastUpdate;
	UIImage* _maskImage;
	BOOL _canAnimate;
	BOOL _displayingPaused;
	id<SBIconProgressViewDelegate> _delegate;
	UIImage* _overlayImage;
	double _backgroundAlpha;
	double _foregroundAlpha;
	double _circleRadiusFraction;
	double _pauseRadiusFraction;
	long long _displayedState;
	double _displayedFraction;
	SBIconImageInfo _iconImageInfo;

}

@property (assign,nonatomic) double backgroundAlpha;                                                    //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (assign,nonatomic) double foregroundAlpha;                                                    //@synthesize foregroundAlpha=_foregroundAlpha - In the implementation block
@property (assign,nonatomic) double circleRadiusFraction;                                               //@synthesize circleRadiusFraction=_circleRadiusFraction - In the implementation block
@property (assign,nonatomic) double pauseRadiusFraction;                                                //@synthesize pauseRadiusFraction=_pauseRadiusFraction - In the implementation block
@property (nonatomic,readonly) CGRect circleBoundingRect; 
@property (assign,nonatomic) long long displayedState;                                                  //@synthesize displayedState=_displayedState - In the implementation block
@property (assign,nonatomic) BOOL displayingPaused;                                                     //@synthesize displayingPaused=_displayingPaused - In the implementation block
@property (assign,nonatomic) double displayedFraction;                                                  //@synthesize displayedFraction=_displayedFraction - In the implementation block
@property (nonatomic,retain) _SBIconProgressStateTransition * activeStateTransition;                    //@synthesize activeStateTransition=_activeStateTransition - In the implementation block
@property (nonatomic,retain) _SBIconProgressPausedTransition * activePausedTransition;                  //@synthesize activePausedTransition=_activePausedTransition - In the implementation block
@property (nonatomic,retain) _SBIconProgressFractionTransition * activeFractionTransition;              //@synthesize activeFractionTransition=_activeFractionTransition - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconProgressViewDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImage * overlayImage;                                                    //@synthesize overlayImage=_overlayImage - In the implementation block
@property (assign,nonatomic) BOOL canAnimate;                                                           //@synthesize canAnimate=_canAnimate - In the implementation block
@property (assign,nonatomic) SBIconImageInfo iconImageInfo;                                             //@synthesize iconImageInfo=_iconImageInfo - In the implementation block
+(id)_pieImagesMemoryPool;
+(id)_pieImageAtFraction:(double)arg1 ;
-(void)dealloc;
-(id)description;
-(id<SBIconProgressViewDelegate>)delegate;
-(void)setDelegate:(id<SBIconProgressViewDelegate>)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
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
-(SBIconImageInfo)iconImageInfo;
-(void)_ensureDisplayLink;
-(void)setIconImageInfo:(SBIconImageInfo)arg1 ;
-(void)_updateTransitionsAnimated:(BOOL)arg1 ;
-(void)_clearDisplayLink;
-(void)setActivePausedTransition:(_SBIconProgressPausedTransition *)arg1 ;
-(void)setActiveStateTransition:(_SBIconProgressStateTransition *)arg1 ;
-(void)_updatePausedTransitionAnimated:(BOOL)arg1 ;
-(void)_updateStateTransitionAnimated:(BOOL)arg1 ;
-(void)setActiveFractionTransition:(_SBIconProgressFractionTransition *)arg1 ;
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
-(_SBIconProgressStateTransition *)activeStateTransition;
-(_SBIconProgressPausedTransition *)activePausedTransition;
-(_SBIconProgressFractionTransition *)activeFractionTransition;
@end

