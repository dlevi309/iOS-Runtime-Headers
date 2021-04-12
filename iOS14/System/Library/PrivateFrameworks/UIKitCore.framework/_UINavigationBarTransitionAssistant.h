/*
* Generated on Thursday, January 14, 2021 at 2:20:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIViewControllerTransitionCoordinator, _UINavigationBarDelegatePrivate;
@class NSMutableArray, UINavigationBar, NSArray;

@interface _UINavigationBarTransitionAssistant : NSObject {

	long long _animationCount;
	NSMutableArray* _animationIDs;
	BOOL _interruptable;
	BOOL _interactive;
	BOOL _needsLifetimeExtended;
	BOOL _cancelledTransition;
	BOOL _shouldHideBackButtonDuringTransition;
	BOOL _shouldUpdatePromptAfterTransition;
	int _transition;
	id<UIViewControllerTransitionCoordinator> _transitionCoordinator;
	UINavigationBar* _navigationBar;
	id<_UINavigationBarDelegatePrivate> _delegate;
	double _duration;

}

@property (nonatomic,__weak,readonly) id<UIViewControllerTransitionCoordinator> transitionCoordinator;              //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) UINavigationBar * navigationBar;                                              //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,__weak,readonly) id<_UINavigationBarDelegatePrivate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int transition;                                                                      //@synthesize transition=_transition - In the implementation block
@property (nonatomic,readonly) double duration;                                                                     //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL interruptable;                                                                  //@synthesize interruptable=_interruptable - In the implementation block
@property (nonatomic,readonly) BOOL interactive;                                                                    //@synthesize interactive=_interactive - In the implementation block
@property (assign,nonatomic) BOOL needsLifetimeExtended;                                                            //@synthesize needsLifetimeExtended=_needsLifetimeExtended - In the implementation block
@property (nonatomic,readonly) BOOL shouldAnimateAlongside; 
@property (nonatomic,readonly) BOOL shouldCrossfade; 
@property (nonatomic,readonly) BOOL cancelledTransition;                                                            //@synthesize cancelledTransition=_cancelledTransition - In the implementation block
@property (nonatomic,readonly) BOOL cancelledCleanUp; 
@property (assign,nonatomic) BOOL shouldHideBackButtonDuringTransition;                                             //@synthesize shouldHideBackButtonDuringTransition=_shouldHideBackButtonDuringTransition - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdatePromptAfterTransition;                                                //@synthesize shouldUpdatePromptAfterTransition=_shouldUpdatePromptAfterTransition - In the implementation block
@property (nonatomic,readonly) NSArray * animationIDs;                                                              //@synthesize animationIDs=_animationIDs - In the implementation block
+(id)pushTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(BOOL)arg3 ;
+(id)popTransitionAssistantForNavigationBar:(id)arg1 delegate:(id)arg2 crossfade:(BOOL)arg3 ;
-(void)incrementAnimationCount;
-(BOOL)shouldCrossfade;
-(BOOL)needsLifetimeExtended;
-(id<_UINavigationBarDelegatePrivate>)delegate;
-(BOOL)shouldAnimateAlongside;
-(BOOL)shouldUpdatePromptAfterTransition;
-(BOOL)cancelledCleanUp;
-(BOOL)interruptable;
-(void)_getInteractive;
-(BOOL)interactive;
-(void)setShouldHideBackButtonDuringTransition:(BOOL)arg1 ;
-(UINavigationBar *)navigationBar;
-(BOOL)cancelledTransition;
-(void)_getPopDurationAndTransitionAlwaysCrossfade:(BOOL)arg1 ;
-(id)initWithNavigationBar:(id)arg1 delegate:(id)arg2 ;
-(void)_clearAnimationsWithDuration:(double)arg1 curve:(long long)arg2 reverse:(BOOL)arg3 ;
-(void)setShouldUpdatePromptAfterTransition:(BOOL)arg1 ;
-(void)decrementAnimationCount;
-(void)startInteractiveTransition;
-(void)_getPushDurationAndTransitionAlwaysCrossfade:(BOOL)arg1 ;
-(void)setNeedsLifetimeExtended:(BOOL)arg1 ;
-(void)finishInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)updateInteractiveTransitionPercent:(double)arg1 ;
-(id<UIViewControllerTransitionCoordinator>)transitionCoordinator;
-(void)cancelInteractiveTransitionPercent:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)finishTrackingInteractiveTransition;
-(void)_startTrackingAnimations;
-(void)_getTransitionCoordinator;
-(void)_finishTrackingAnimations;
-(double)duration;
-(BOOL)shouldHideBackButtonDuringTransition;
-(NSArray *)animationIDs;
-(int)transition;
@end

