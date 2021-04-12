/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) unsigned long long _inputPrecision; 
@property (getter=_trackpadFingerDownCount,nonatomic,readonly) long long trackpadFingerDownCount;              //@synthesize trackpadFingerDownCount=_trackpadFingerDownCount - In the implementation block
@property (nonatomic,readonly) double _initialTouchTimestamp;                                                  //@synthesize _initialTouchTimestamp=__initialTouchTimestamp - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long subtype; 
@property (nonatomic,readonly) long long modifierFlags; 
@property (nonatomic,readonly) long long buttonMask; 
@property (nonatomic,readonly) NSSet * allTouches; 
+(unsigned long long)_inputPrecisionForTouches:(id)arg1 ;
-(long long)subtype;
-(long long)_modifierFlags;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(unsigned long long)_inputPrecision;
-(long long)_trackpadFingerDownCount;
-(BOOL)_isPhysicalKeyEvent;
-(id)_modifiedInput;
-(id)touchesForWindow:(id)arg1 ;
-(long long)modifierFlags;
-(BOOL)_isKeyDown;
-(double)timestamp;
-(IOHIDEventRef)_hidEvent;
-(id)_touchesForGestureRecognizer:(id)arg1 ;
-(double)_wheelVelocity;
-(CGPoint)_digitizerLocation;
-(GSEventRef)_gsEvent;
-(id)_screen;
-(id)_windows;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(long long)_buttonMask;
-(long long)buttonMask;
-(NSSet *)allTouches;
-(unsigned long long)_focusHeading;
-(void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1 ;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(id)predictedTouchesForTouch:(id)arg1 ;
-(long long)type;
-(void)_setTimestamp:(double)arg1 ;
-(void)_wasDeliveredToGestureRecognizers;
-(void)_sendEventToResponder:(id)arg1 ;
-(void)_setGSEvent:(GSEventRef)arg1 ;
-(id)touchesForView:(id)arg1 ;
-(id)_initWithEnvironment:(id)arg1 ;
-(BOOL)_isTouchRoutingPolicyBased;
-(long long)_keyModifierFlags;
-(unsigned long long)_clickCount;
-(id)_unmodifiedInput;
-(id)_cloneEvent;
-(id)_init;
-(void)_cleanupAfterDispatch;
-(id)_triggeringPhysicalButton;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(int)_shakeState;
-(id)coalescedTouchesForTouch:(id)arg1 ;
-(double)_initialTouchTimestamp;
-(void)dealloc;
-(long long)_moveDirection;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
@end

