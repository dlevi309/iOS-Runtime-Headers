/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableDictionary, NSMutableSet, NSPointerArray, FBKVOController;

@interface WFDragGestureRecognizer : UIGestureRecognizer {

	NSMutableDictionary* _dragDirections;
	NSMutableSet* _allowedClassHeirarchies;
	NSMutableSet* _ignoredClassHeirarchies;
	CGPoint _start;
	NSPointerArray* _touches;
	FBKVOController* _scrollController;
	double _lastTouchTimestamp;
	WFDragVelocitySample _previousVelocitySample;
	WFDragVelocitySample _currentVelocitySample;
	double _minimumPressDuration;
	double _allowableMovement;

}

@property (assign,nonatomic) double minimumPressDuration;              //@synthesize minimumPressDuration=_minimumPressDuration - In the implementation block
@property (assign,nonatomic) double allowableMovement;                 //@synthesize allowableMovement=_allowableMovement - In the implementation block
-(void)reset;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setMinimumPressDuration:(double)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(CGPoint)velocityInView:(id)arg1 ;
-(double)allowableMovement;
-(double)minimumPressDuration;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(unsigned long long)numberOfTouches;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(void)setPermittedDragDirections:(unsigned long long)arg1 forHorizontalSizeClass:(long long)arg2 ;
-(void)ignoreViewsWithClassHeirarchy:(Class)arg1 ;
-(void)acceptViewsWithClassHeirarchy:(Class)arg1 ;
-(void)startObservingScrollView:(id)arg1 ;
-(void)addTouches:(id)arg1 ;
-(void)removeTouches:(id)arg1 ;
-(void)longPressTimeoutTriggered;
@end

