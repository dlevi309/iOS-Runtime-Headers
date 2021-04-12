/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIKeyboardKeyplaneTransitionDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class CADisplayLink, UIKBTree, UIView, NSMutableArray, UIKBKeyViewAnimator;

@interface UIKeyboardKeyplaneTransition : NSObject {

	double _currentProgress;
	double _liftOffProgress;
	double _finishProgress;
	double _finishDuration;
	double _finalTransitionStartTime;
	CADisplayLink* _displayLink;
	UIKBTree* _keyboard;
	UIKBTree* _start;
	UIKBTree* _end;
	UIView* _startView;
	UIView* _endView;
	/*^block*/id _completionBlock;
	id<UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
	BOOL _initiallyAtEnd;
	NSMutableArray* _transitionViews;
	UIKBKeyViewAnimator* _keyViewAnimator;

}

@property (nonatomic,retain) UIKBTree * keyboard;                                                      //@synthesize keyboard=_keyboard - In the implementation block
@property (copy) id completionBlock;                                                                   //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) id<UIKeyboardKeyplaneTransitionDelegate> transitionDelegate;              //@synthesize transitionDelegate=_transitionDelegate - In the implementation block
@property (assign,nonatomic) BOOL initiallyAtEnd;                                                      //@synthesize initiallyAtEnd=_initiallyAtEnd - In the implementation block
@property (nonatomic,readonly) double nonInteractiveDuration; 
@property (nonatomic,retain) UIKBKeyViewAnimator * keyViewAnimator;                                    //@synthesize keyViewAnimator=_keyViewAnimator - In the implementation block
@property (nonatomic,readonly) double startHeight; 
@property (nonatomic,readonly) double endHeight; 
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(UIKBTree *)keyboard;
-(void)removeAllAnimations;
-(void)setKeyboard:(UIKBTree *)arg1 ;
-(UIKBKeyViewAnimator *)keyViewAnimator;
-(void)setKeyViewAnimator:(UIKBKeyViewAnimator *)arg1 ;
-(void)cancelNonInteractiveAnimation;
-(void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4 ;
-(void)finishWithProgress:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updateWithProgress:(double)arg1 ;
-(void)commitTransitionRebuild;
-(void)setInitiallyAtEnd:(BOOL)arg1 ;
-(BOOL)initiallyAtEnd;
-(double)nonInteractiveDuration;
-(void)runNonInteractivelyWithCompletion:(/*^block*/id)arg1 ;
-(id<UIKeyboardKeyplaneTransitionDelegate>)transitionDelegate;
-(double)startHeight;
-(double)endHeight;
-(void)finalizeTransition;
-(void)transitionToFinalState:(id)arg1 ;
-(void)addTransitionView:(id)arg1 startFrame:(CGRect)arg2 endFrame:(CGRect)arg3 ;
-(BOOL)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2 ;
-(void)setTransitionDelegate:(id<UIKeyboardKeyplaneTransitionDelegate>)arg1 ;
@end

