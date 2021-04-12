/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@class NSMutableSet, NSSet, NSMapTable;

@interface UITouchesEvent : UIEvent {

	NSMutableSet* _allTouchesMutable;
	NSSet* _allTouchesImmutableCached;
	CFDictionaryRef _keyedTouches;
	CFDictionaryRef _keyedTouchesByWindow;
	CFDictionaryRef _gestureRecognizersByWindow;
	NSMapTable* _latentSystemGestureWindows;
	CFDictionaryRef _coalescedTouches;
	CFDictionaryRef _finalTouches;
	BOOL _isCallingEventObservers;
	NSMutableSet* _exclusiveTouchWindows;
	long long _singleAllowableExternalTouchPathIndex;

}

@property (nonatomic,readonly) double _initialTouchTimestamp; 
@property (assign,nonatomic) long long singleAllowableExternalTouchPathIndex;                             //@synthesize singleAllowableExternalTouchPathIndex=_singleAllowableExternalTouchPathIndex - In the implementation block
@property (getter=_containsHIDPointerEvent,nonatomic,readonly) BOOL containsHIDPointerEvent; 
-(id)_touchesForView:(id)arg1 withPhase:(long long)arg2 ;
-(id)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)arg1 ;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(unsigned long long)_inputPrecision;
-(id)touchesForWindow:(id)arg1 ;
-(id)_touchesForGesture:(id)arg1 withPhase:(long long)arg2 ;
-(void)_windowNoLongerAwaitingSystemGestureNotification:(id)arg1 ;
-(void)_moveCoalescedTouchesFromHidEvent:(IOHIDEventRef)arg1 toHidEvent:(IOHIDEventRef)arg2 ;
-(id)_touchesForKey:(id)arg1 ;
-(void)_touchesForGesture:(id)arg1 withPhase:(long long)arg2 intoSet:(id)arg3 ;
-(id)_allTouches;
-(id)_touchesForGestureRecognizer:(id)arg1 ;
-(id)_lastPendingCoalescedTouchForIndex:(long long)arg1 hidEvent:(IOHIDEventRef)arg2 ;
-(void)_moveTouchesFromView:(id)arg1 toView:(id)arg2 ;
-(void)_addGestureRecognizersForView:(id)arg1 toTouch:(id)arg2 forContinuation:(BOOL)arg3 ;
-(CGPoint)_digitizerLocation;
-(id)_touchesForWindow:(id)arg1 ;
-(void)_addTouch:(id)arg1 forDelayedDelivery:(BOOL)arg2 ;
-(id)_windows;
-(void)_invalidateGestureRecognizerForWindowCache;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(BOOL)_containsHIDPointerEvent;
-(id)description;
-(void)_removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2 ;
-(void)_collectGestureRecognizersForView:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)allTouches;
-(void)_clearTouches;
-(double)_initialTouchTimestampForWindow:(id)arg1 ;
-(BOOL)_anyInterestedGestureRecognizersForTouchInView:(id)arg1 ;
-(void)_removeTouchesForKey:(id)arg1 ;
-(void)_addWindowAwaitingLatentSystemGestureNotification:(id)arg1 deliveredToEventWindow:(id)arg2 ;
-(CFDictionaryRef)_coalescedTouchesForHidEvent:(IOHIDEventRef)arg1 ;
-(void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1 ;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(id)predictedTouchesForTouch:(id)arg1 ;
-(long long)type;
-(id)_viewsForWindow:(id)arg1 ;
-(id)touchesForView:(id)arg1 ;
-(void)_addCoalescedTouch:(id)arg1 forIndex:(long long)arg2 hidEvent:(IOHIDEventRef)arg3 ;
-(void)_clearViewForTouch:(id)arg1 ;
-(id)_cloneEvent;
-(id)_init;
-(void)setSingleAllowableExternalTouchPathIndex:(long long)arg1 ;
-(id)_rawCoalescedTouchesForTouch:(id)arg1 ;
-(long long)singleAllowableExternalTouchPathIndex;
-(void)_addGestureRecognizersForView:(id)arg1 toTouch:(id)arg2 ;
-(void)_addGestureRecognizersForTouchContinuationInView:(id)arg1 toTouch:(id)arg2 ;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(id)coalescedTouchesForTouch:(id)arg1 ;
-(id)_firstTouchForView:(id)arg1 ;
-(id)_exclusiveTouchWindows;
-(void)_removeTouchesForWindow:(id)arg1 ;
-(double)_initialTouchTimestamp;
-(void)_removeTouch:(id)arg1 ;
-(void)dealloc;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
@end

