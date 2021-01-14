/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_beginLongForcePressTimerForGesture:(id)arg1 ;
-(void)_logTapCounts:(id)arg1 ;
-(void)gestureRecognizerShouldBeginResponse:(id)arg1 ;
-(void)panningGesture:(id)arg1 ;
-(void)_configureLongPressRecognizer:(id)arg1 ;
-(void)detach;
-(void)_didEndIndirectSelectionGesture:(id)arg1 ;
-(void)beginCursorManipulationFromRect:(CGRect)arg1 ;
-(void)indirectBlockPanGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 ;
-(id)owner;
-(void)_clearHiding;
-(void)_tidyUpGesture;
-(id)gestures;
-(void)removeTemporaryGesture;
-(void)disableEnclosingScrollViewScrolling;
-(id)initWithView:(id)arg1 owner:(id)arg2 forTypes:(long long)arg3 ;
-(void)panningGestureAddedTouch:(id)arg1 ;
-(void)handleTwoFingerFlickInDirection:(long long)arg1 executionContext:(id)arg2 ;
-(void)indirectPanGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 withFlickDirection:(unsigned long long)arg3 ;
-(void)endTwoFingerPanWithExecutionContext:(id)arg1 ;
-(void)beginTwoFingerPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(BOOL)forceTouchGestureRecognizerShouldBegin:(id)arg1 ;
-(double)additionalPressDurationForTypingCadence:(id)arg1 ;
-(void)beginIndirectBlockPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(long long)layoutDirectionFromFlickDirection:(unsigned long long)arg1 ;
-(void)oneFingerForcePan:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)cancelTwoFingerPanWithExecutionContext:(id)arg1 ;
-(id)selectionController;
-(void)updateLongPressWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)_configureTwoFingerTapGestureRecognizer:(id)arg1 ;
-(void)beginLongPressWithTranslation:(CGPoint)arg1 touchCount:(unsigned long long)arg2 executionContext:(id)arg3 ;
-(void)_longForcePressDetected:(id)arg1 ;
-(void)indirectCursorPanGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 withFlickDirection:(unsigned long long)arg3 ;
-(void)_prepareForGesture;
-(void)registerOwner:(id)arg1 ;
-(void)beginTwoFingerCursorPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)_granularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(BOOL)arg3 ;
-(void)updateIndirectBlockPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)twoFingerTap:(id)arg1 ;
-(void)endIndirectBlockPanWithExecutionContext:(id)arg1 ;
-(void)hideInsideRecogniser:(id)arg1 ;
-(void)_configureTwoFingerPanGestureRecognizer:(id)arg1 ;
-(void)_startTouchPadTimerWithCompletion:(/*^block*/id)arg1 ;
-(void)longPressGestureWithState:(long long)arg1 withTranslation:(CGPoint)arg2 touchCount:(unsigned long long)arg3 ;
-(void)_clearTouchPadCallback;
-(void)cancelLongPressWithExecutionContext:(id)arg1 ;
-(void)endLongPressWithExecutionContext:(id)arg1 ;
-(void)updateTwoFingerPanWithTranslation:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)finishLongPressWithExecutionContext:(id)arg1 ;
-(CGPoint)acceleratedTranslation:(CGPoint)arg1 velocity:(CGPoint)arg2 isActive:(BOOL)arg3 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isPlacedCarefully;
-(void)_cancelTouchPadTimer;
-(void)clearKeyboardTouchesForGesture:(id)arg1 ;
-(CGPoint)cursorLocationForTranslation:(CGPoint)arg1 ;
-(void)_configureLongPressAddedTouchRecognizer:(id)arg1 ;
-(void)_willBeginIndirectSelectionGesture:(id)arg1 ;
-(void)_configureOneFingerForcePressRecognizer:(id)arg1 ;
-(void)hideRecogniser:(id)arg1 forKey:(id)arg2 ;
-(void)_cancelLongForcePressTimer;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(CGPoint)boundedTranslation:(CGPoint)arg1 ;
-(void)oneFingerForcePress:(id)arg1 ;
-(void)dealloc;
@end

