/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@class NSMapTable, BKSHIDEventPointerAttributes;

@interface UIScrollEvent : UIEvent {

	NSMapTable* _gestureRecognizersByWindow;
	CGPoint _sceneReferenceLocation;
	unsigned long long _lastDeliveredPhase;
	unsigned long long _lastReceivedPhase;
	BKSHIDEventPointerAttributes* _pointerAttributes;
	unsigned long long _phase;

}

@property (getter=_scrollType,nonatomic,readonly) unsigned long long scrollType; 
@property (getter=_isHighResolution,nonatomic,readonly) BOOL highResolution; 
@property (getter=_scrollDeviceCategory,nonatomic,readonly) unsigned long long scrollDeviceCategory; 
@property (getter=_beganScrollTimestamp,nonatomic,readonly) double beganScrollTimestamp; 
@property (readonly) CGVector acceleratedDelta; 
@property (readonly) CGVector nonAcceleratedDelta; 
@property (readonly) BOOL directionInvertedFromDevice; 
@property (readonly) unsigned long long phase;                                                                    //@synthesize phase=_phase - In the implementation block
-(long long)subtype;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(void)_removeGestureRecognizersFromWindows;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(void)_sendCancelToGestureRecognizer:(id)arg1 ;
-(CGVector)nonAcceleratedDelta;
-(unsigned long long)_scrollDeviceCategory;
-(CGPoint)locationInView:(id)arg1 ;
-(CGVector)acceleratedDelta;
-(id)_windows;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(BOOL)directionInvertedFromDevice;
-(BOOL)_hasDeliveredTerminalPhase;
-(long long)type;
-(void)_wasDeliveredToGestureRecognizers;
-(id)_init;
-(double)_beganScrollTimestamp;
-(unsigned long long)phase;
-(id)_windowServerHitTestWindow;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(BOOL)_isHighResolution;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(unsigned long long)_scrollType;
@end

