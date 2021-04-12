/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIKeyboardHandBiasTransitionCoordinatorDelegate;
@class UIPanGestureRecognizer, UIKeyboardSquishTransition, UIKeyboardHandBiasTransitionContext, NSString;

@interface UIKeyboardHandBiasTransitionCoordinator : NSObject <UIGestureRecognizerDelegate> {

	BOOL _edgeSwipeDetected;
	BOOL _transitionDidBegin;
	unsigned long long _transitionStartEdge;
	long long _initialBias;
	long long _transitionTargetBias;
	double _initialEdgeTranslation;
	double _edgeSwipeProgress;
	double _edgeSwipeVelocity;
	BOOL _interactive;
	id<UIKeyboardHandBiasTransitionCoordinatorDelegate> _delegate;
	UIPanGestureRecognizer* _gestureRecognizer;
	UIKeyboardSquishTransition* _currentTransition;
	double _swipeWidthRatio;
	UIKeyboardHandBiasTransitionContext* _currentContext;

}

@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;                                       //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UIKeyboardSquishTransition * currentTransition;                                   //@synthesize currentTransition=_currentTransition - In the implementation block
@property (nonatomic,retain) UIKeyboardHandBiasTransitionContext * currentContext;                             //@synthesize currentContext=_currentContext - In the implementation block
@property (assign,nonatomic,__weak) id<UIKeyboardHandBiasTransitionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double swipeWidthRatio;                                                           //@synthesize swipeWidthRatio=_swipeWidthRatio - In the implementation block
@property (assign,getter=isInteractive,nonatomic) BOOL interactive;                                            //@synthesize interactive=_interactive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)uninstallGestureRecognizers;
-(void)beginHandBiasTransitionWithContext:(id)arg1 ;
-(id<UIKeyboardHandBiasTransitionCoordinatorDelegate>)delegate;
-(void)setSwipeWidthRatio:(double)arg1 ;
-(BOOL)isInteractive;
-(void)setDelegate:(id<UIKeyboardHandBiasTransitionCoordinatorDelegate>)arg1 ;
-(void)setInteractive:(BOOL)arg1 ;
-(void)_handBiasPanGestureRecognizerStateDidChange:(id)arg1 ;
-(void)setCurrentTransition:(UIKeyboardSquishTransition *)arg1 ;
-(UIKeyboardHandBiasTransitionContext *)currentContext;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setCurrentContext:(UIKeyboardHandBiasTransitionContext *)arg1 ;
-(UIKeyboardSquishTransition *)currentTransition;
-(void)installGestureRecognizers;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_didRecognizeSpacebarGestureOnStartEdge:(unsigned long long)arg1 withDistance:(double)arg2 ;
-(void)finishHandBiasTransition;
-(double)swipeWidthRatio;
@end

