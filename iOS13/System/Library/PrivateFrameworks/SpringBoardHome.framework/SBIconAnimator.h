/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBIconAnimatorDelegate, SBIconAnimationContaining;
@class NSMutableArray, SBFolderControllerAnimationContext, SBHIconAnimationSettings, SBValueConvergenceAnimator, UIView;

@interface SBIconAnimator : NSObject {

	double _fraction;
	double _hintFraction;
	BOOL _startAnimationAfterRotationEnds;
	BOOL _windowIsRotating;
	BOOL _cleanedUp;
	BOOL _animating;
	NSMutableArray* _pendedAnimationContexts;
	SBFolderControllerAnimationContext* _animationContext;
	BOOL _invalidated;
	id<SBIconAnimatorDelegate> _delegate;
	SBHIconAnimationSettings* _settings;
	SBValueConvergenceAnimator* _hintAnimator;
	UIView* _backgroundDarkeningView;
	id<SBIconAnimationContaining> _animationContainer;

}

@property (nonatomic,readonly) id<SBIconAnimationContaining> animationContainer;                   //@synthesize animationContainer=_animationContainer - In the implementation block
@property (nonatomic,readonly) UIView * referenceView; 
@property (assign,nonatomic) BOOL invalidated;                                                     //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconAnimatorDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBHIconAnimationSettings * settings;                                  //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) double fraction; 
@property (assign,nonatomic) double hintFraction;                                                  //@synthesize hintFraction=_hintFraction - In the implementation block
@property (nonatomic,retain) SBValueConvergenceAnimator * hintAnimator;                            //@synthesize hintAnimator=_hintAnimator - In the implementation block
@property (nonatomic,retain) UIView * backgroundDarkeningView;                                     //@synthesize backgroundDarkeningView=_backgroundDarkeningView - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
@property (getter=isPastPointOfNoReturn,nonatomic,readonly) BOOL pastPointOfNoReturn; 
-(void)dealloc;
-(id<SBIconAnimatorDelegate>)delegate;
-(void)setDelegate:(id<SBIconAnimatorDelegate>)arg1 ;
-(void)cleanup;
-(SBHIconAnimationSettings *)settings;
-(void)setSettings:(SBHIconAnimationSettings *)arg1 ;
-(BOOL)isAnimating;
-(void)prepare;
-(double)fraction;
-(void)setFraction:(double)arg1 ;
-(id<SBIconAnimationContaining>)animationContainer;
-(UIView *)referenceView;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(BOOL)_isDelayedForRotation;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(double)arg1 ;
-(void)_cleanupAnimation;
-(unsigned long long)_numberOfSignificantAnimations;
-(UIView *)backgroundDarkeningView;
-(id)initWithAnimationContainer:(id)arg1 ;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(id)centralAnimationFactory;
-(BOOL)isPastPointOfNoReturn;
-(void)animateToFraction:(double)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)hintToFraction:(double)arg1 ;
-(void)_windowFinishedRotating;
-(void)_invalidateCompletions;
-(void)_animateToFractionFromContext:(id)arg1 ;
-(void)_animateToFractionFromPendingContexts;
-(double)hintFraction;
-(void)setHintFraction:(double)arg1 ;
-(SBValueConvergenceAnimator *)hintAnimator;
-(void)setHintAnimator:(SBValueConvergenceAnimator *)arg1 ;
-(void)setBackgroundDarkeningView:(UIView *)arg1 ;
@end

