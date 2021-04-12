/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScreen, NSMutableSet, UIEventEnvironment, NSSet;

@interface UIEvent : NSObject {

	GSEventRef _gsEvent;
	IOHIDEventRef _hidEvent;
	long long _mzModifierFlags;
	unsigned long long _mzClickCount;
	long long _buttonMask;
	UIScreen* _cachedScreen;
	NSMutableSet* _eventObservers;
	BOOL _hasValidModifiers;
	double _timestamp;
	UIEventEnvironment* _eventEnvironment;
	long long _trackpadFingerDownCount;
	double __initialTouchTimestamp;

}

@property (assign,setter=_setTimestamp:,nonatomic) double timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic,__weak) UIEventEnvironment * eventEnvironment;                                     //@synthesize eventEnvironment=_eventEnvironment - In the implementation block
@property (getter=_trackpadFingerDownCount,nonatomic,readonly) long long trackpadFingerDownCount;              //@synthesize trackpadFingerDownCount=_trackpadFingerDownCount - In the implementation block
@property (nonatomic,readonly) double _initialTouchTimestamp;                                                  //@synthesize _initialTouchTimestamp=__initialTouchTimestamp - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long subtype; 
@property (nonatomic,readonly) long long modifierFlags; 
@property (nonatomic,readonly) long long buttonMask; 
@property (nonatomic,readonly) NSSet * allTouches; 
-(void)dealloc;
-(long long)type;
-(id)_init;
-(double)timestamp;
-(long long)subtype;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(IOHIDEventRef)_hidEvent;
-(id)_windows;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(id)_screen;
-(long long)buttonMask;
-(unsigned long long)_focusHeading;
-(id)touchesForWindow:(id)arg1 ;
-(NSSet *)allTouches;
-(long long)_modifierFlags;
-(long long)modifierFlags;
-(long long)_buttonMask;
-(CGPoint)_digitizerLocation;
-(long long)_moveDirection;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(unsigned long long)_clickCount;
-(id)_cloneEvent;
-(void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1 ;
-(void)_wasDeliveredToGestureRecognizers;
-(id)_triggeringPhysicalButton;
-(double)_initialTouchTimestamp;
-(id)_unmodifiedInput;
-(BOOL)_isKeyDown;
-(id)touchesForView:(id)arg1 ;
-(id)coalescedTouchesForTouch:(id)arg1 ;
-(id)_modifiedInput;
-(GSEventRef)_gsEvent;
-(BOOL)_isPhysicalKeyEvent;
-(void)_setGSEvent:(GSEventRef)arg1 ;
-(void)_sendEventToResponder:(id)arg1 ;
-(void)_setTimestamp:(double)arg1 ;
-(void)_cleanupAfterDispatch;
-(UIEventEnvironment *)eventEnvironment;
-(id)_eventObservers;
-(id)_touchesForGestureRecognizer:(id)arg1 ;
-(id)predictedTouchesForTouch:(id)arg1 ;
-(double)_wheelVelocity;
-(int)_shakeState;
-(id)_initWithEnvironment:(id)arg1 ;
-(BOOL)_isTouchRoutingPolicyBased;
-(long long)_keyModifierFlags;
-(BOOL)isKeyDown;
-(void)_addEventObserver:(id)arg1 ;
-(void)_removeEventObserver:(id)arg1 ;
-(void)setEventEnvironment:(UIEventEnvironment *)arg1 ;
-(long long)_trackpadFingerDownCount;
@end

