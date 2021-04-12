/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>
#import <UIKitCore/_UIPanOrFlickGestureRecognizerDelegate.h>

@class _UIKeyboardTextSelectionGestureController, NSMapTable, _UITouchesObservingGestureRecognizer, NSTimer, _UIPanOrFlickGestureRecognizer, NSString;

@interface _UIKeyboardTextSelectionInteraction : UITextInteraction <_UIPanOrFlickGestureRecognizerDelegate> {

	_UIKeyboardTextSelectionGestureController* _owner;
	NSMapTable* _weakMap;
	id _deallocToken;
	_UITouchesObservingGestureRecognizer* _addedTouchRecognizer;
	NSTimer* _touchPadTimer;
	/*^block*/id _touchPadTimerCompletion;
	_UIPanOrFlickGestureRecognizer* _activePress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)attachToExistingRecogniser:(id)arg1 owner:(id)arg2 forType:(long long)arg3 ;
-(void)dealloc;
-(id)owner;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(BOOL)isPlacedCarefully;
-(void)detach;
-(void)hideRecogniser:(id)arg1 forKey:(id)arg2 ;
-(void)_clearHiding;
-(void)removeTemporaryGesture;
-(void)registerOwner:(id)arg1 ;
-(void)_configureOneFingerForcePressRecognizer:(id)arg1 ;
-(void)_configureTwoFingerPanGestureRecognizer:(id)arg1 ;
-(void)_configureTwoFingerTapGestureRecognizer:(id)arg1 ;
-(void)hideInsideRecogniser:(id)arg1 ;
-(void)_configureLongPressRecognizer:(id)arg1 ;
-(void)oneFingerForcePan:(id)arg1 ;
-(void)oneFingerForcePress:(id)arg1 ;
-(void)panningGesture:(id)arg1 ;
-(void)twoFingerTap:(id)arg1 ;
-(void)panningGestureAddedTouch:(id)arg1 ;
-(id)selectionController;
-(void)_didEndIndirectSelectionGesture:(id)arg1 ;
-(void)beginTwoFingerCursorPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateTwoFingerPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(long long)layoutDirectionFromFlickDirection:(unsigned long long)arg1 ;
-(void)endTwoFingerPanWithExecutionContext:(id)arg1 ;
-(void)handleTwoFingerFlickInDirection:(long long)arg1 executionContext:(id)arg2 ;
-(void)cancelTwoFingerPanWithExecutionContext:(id)arg1 ;
-(void)beginIndirectBlockPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)updateIndirectBlockPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endIndirectBlockPanWithExecutionContext:(id)arg1 ;
-(void)beginCursorManipulationFromRect:(CGRect)arg1 ;
-(CGPoint)cursorLocationForTranslation:(CGPoint)arg1 ;
-(void)beginLongPressWithTranslation:(CGPoint)arg1 touchCount:(unsigned long long)arg2 executionContext:(id)arg3 ;
-(void)updateLongPressWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)endLongPressWithExecutionContext:(id)arg1 ;
-(void)cancelLongPressWithExecutionContext:(id)arg1 ;
-(void)finishLongPressWithExecutionContext:(id)arg1 ;
-(void)beginTwoFingerPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)_longForcePressDetected:(id)arg1 ;
-(void)_cancelLongForcePressTimer;
-(void)_prepareForGesture;
-(CGPoint)acceleratedTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 isActive:(BOOL)arg3 ;
-(CGPoint)boundedTranslation:(CGPoint)arg1 ;
-(void)indirectCursorPanGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 withFlickDirection:(unsigned long long)arg3 ;
-(void)indirectBlockPanGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 ;
-(void)_tidyUpGesture;
-(void)clearKeyboardTouchesForGesture:(id)arg1 ;
-(void)_granularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(BOOL)arg3 ;
-(void)_logTapCounts:(id)arg1 ;
-(void)_cancelTouchPadTimer;
-(void)_willBeginIndirectSelectionGesture:(id)arg1 ;
-(void)disableEnclosingScrollViewScrolling;
-(void)_configureLongPressAddedTouchRecognizer:(id)arg1 ;
-(void)_clearTouchPadCallback;
-(void)longPressGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 touchCount:(unsigned long long)arg3 ;
-(void)indirectPanGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 withFlickDirection:(unsigned long long)arg3 ;
-(void)_startTouchPadTimerWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)forceTouchGestureRecognizerShouldBegin:(id)arg1 ;
-(void)_beginLongForcePressTimerForGesture:(id)arg1 ;
-(void)gestureRecognizerShouldBeginResponse:(id)arg1 ;
-(double)additionalPressDurationForTypingCadence:(id)arg1 ;
-(id)gestures;
-(id)initWithView:(id)arg1 owner:(id)arg2 forTypes:(long long)arg3 ;
@end

