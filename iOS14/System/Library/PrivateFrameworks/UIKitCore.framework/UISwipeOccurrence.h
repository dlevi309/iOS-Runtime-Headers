/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UISwipeActionPullViewDelegate.h>

@protocol _UISwipeViewManipulator, _UISwipedView;
@class UISwipeActionController, UISwipeActionPullView, NSIndexPath, UIView, UIContextualAction, NSString;

@interface UISwipeOccurrence : NSObject <UISwipeActionPullViewDelegate> {

	struct {
		unsigned isTransitioning : 1;
		unsigned didNotifyWillFinish : 1;
		unsigned didNotifyDidFinish : 1;
		unsigned shouldReenableUserInteraction : 1;
		unsigned isRTL : 1;
		unsigned hasAmbiguousIndexPath : 1;
		unsigned didReloadData : 1;
	}  _flags;
	unsigned long long _actionExecutionCounter;
	UISwipeActionController* _controller;
	unsigned long long _style;
	unsigned long long _defaultStyle;
	UISwipeActionPullView* _leadingPullView;
	UISwipeActionPullView* _trailingPullView;
	id<_UISwipeViewManipulator> _manipulator;
	BOOL _swipedViewMaskWasRemoved;
	BOOL _active;
	NSIndexPath* _indexPath;
	long long _direction;
	double _offset;
	long long _state;
	unsigned long long _configuredDirection;
	UIView*<_UISwipedView> _swipedView;
	UIContextualAction* _currentAction;
	UIEdgeInsets _extraInsets;
	SCD_Struct_UI126 _currentSwipeInfo;

}

@property (nonatomic,copy) NSIndexPath * indexPath;                               //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) unsigned long long configuredDirection;              //@synthesize configuredDirection=_configuredDirection - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI126 currentSwipeInfo;                   //@synthesize currentSwipeInfo=_currentSwipeInfo - In the implementation block
@property (assign,nonatomic) UIEdgeInsets extraInsets;                            //@synthesize extraInsets=_extraInsets - In the implementation block
@property (nonatomic,retain) UIView*<_UISwipedView> swipedView;                   //@synthesize swipedView=_swipedView - In the implementation block
@property (assign,nonatomic) BOOL swipedViewMaskWasRemoved;                       //@synthesize swipedViewMaskWasRemoved=_swipedViewMaskWasRemoved - In the implementation block
@property (nonatomic,retain) UIContextualAction * currentAction;                  //@synthesize currentAction=_currentAction - In the implementation block
@property (assign,nonatomic) BOOL active;                                         //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) long long direction;                               //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double offset;                                       //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) long long state;                                   //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)direction;
-(void)updateLayout;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(double)velocity;
-(NSIndexPath *)indexPath;
-(void)endSwipe;
-(id)actionView;
-(double)offset;
-(NSString *)description;
-(void)setOffset:(double)arg1 ;
-(long long)state;
-(UIView*<_UISwipedView>)swipedView;
-(BOOL)_didReloadData;
-(UIEdgeInsets)extraInsets;
-(BOOL)_hasAmbiguousIndexPath;
-(void)setSwipedViewMaskWasRemoved:(BOOL)arg1 ;
-(id)lockActionViewForAnimation;
-(void)unlockActionViewForAnimation:(id)arg1 ;
-(void)resetAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)swipedViewMaskWasRemoved;
-(UIContextualAction *)currentAction;
-(void)_forceTeardown;
-(void)beginSwipeTracking:(BOOL)arg1 ;
-(void)updateOffsetWithSwipeInfo:(SCD_Struct_UI126)arg1 isTracking:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setDidReloadData;
-(void)_setHasAmbiguousIndexPath;
-(void)updateSwipedView;
-(id)initWithController:(id)arg1 indexPath:(id)arg2 defaultStyle:(unsigned long long)arg3 ;
-(SCD_Struct_UI125)prepareWithSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2 ;
-(BOOL)shouldDismissWithTouchLocation:(CGPoint)arg1 ;
-(void)performPrimaryActionWithSwipeInfo:(SCD_Struct_UI126)arg1 ;
-(CGRect)swipedViewRestingFrame;
-(id)_actionView;
-(void)setupManipulatorWithController:(id)arg1 ;
-(unsigned long long)_styleForConfiguration:(id)arg1 ;
-(id)_pullViewForSwipeDirection:(unsigned long long)arg1 ;
-(void)_updatePullView:(id)arg1 ;
-(void)_removeAndResetPullViewImmediately:(id)arg1 ;
-(void)_updateSwipedStateOnSwipedView:(BOOL)arg1 ;
-(void)_freezeSwipedViewInsets;
-(void)setSwipedView:(UIView*<_UISwipedView>)arg1 ;
-(void)_unfreezeSwipedViewInsets;
-(double)_extraOffsetForOffset:(double)arg1 withDirection:(unsigned long long)arg2 ;
-(void)_resetItemWithSwipeInfo:(SCD_Struct_UI126)arg1 animated:(BOOL)arg2 deletion:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(SCD_Struct_UI126)currentSwipeInfo;
-(void)_moveItemWithSwipeInfo:(SCD_Struct_UI126)arg1 alongsideAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateLayoutUsingCurrentSwipeInfo:(BOOL)arg1 ;
-(void)_performSwipeAction:(id)arg1 inPullView:(id)arg2 swipeInfo:(SCD_Struct_UI126)arg3 ;
-(unsigned long long)_swipeDirectionForPullView:(id)arg1 ;
-(void)_executeLifecycleForPerformedAction:(id)arg1 sourceView:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_isSwipeDirectionExposingLeadingEdgePullView:(unsigned long long)arg1 ;
-(id)_pullViewForLeadingEdge:(BOOL)arg1 ;
-(CGRect)_frameForPullView:(id)arg1 inSwipedItem:(id)arg2 withContainer:(id)arg3 ;
-(unsigned long long)configuredDirection;
-(void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2 ;
-(double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1 ;
-(void)setConfiguredDirection:(unsigned long long)arg1 ;
-(void)setCurrentSwipeInfo:(SCD_Struct_UI126)arg1 ;
-(void)setCurrentAction:(UIContextualAction *)arg1 ;
-(void)setExtraInsets:(UIEdgeInsets)arg1 ;
-(void)_transitionToState:(long long)arg1 ;
@end

