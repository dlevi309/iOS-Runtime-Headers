/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@class NSMapTable;

@interface UIScrollEvent : UIEvent {

	NSMapTable* _gestureRecognizersByWindow;
	CGPoint _sceneReferenceLocation;
	unsigned long long _lastDeliveredPhase;
	unsigned long long _phase;

}

@property (getter=_scrollType,nonatomic,readonly) unsigned long long scrollType; 
@property (getter=_isHighResolution,nonatomic,readonly) BOOL highResolution; 
@property (getter=_scrollDeviceCategory,nonatomic,readonly) unsigned long long scrollDeviceCategory; 
@property (readonly) unsigned long long phase;                                                                    //@synthesize phase=_phase - In the implementation block
@property (readonly) CGVector acceleratedDelta; 
@property (readonly) CGVector nonAcceleratedDelta; 
@property (readonly) BOOL directionInvertedFromDevice; 
-(long long)type;
-(id)_init;
-(long long)subtype;
-(unsigned long long)phase;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_windows;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(void)_removeGestureRecognizersFromWindows;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(unsigned long long)_scrollDeviceCategory;
-(unsigned long long)_scrollType;
-(void)_wasDeliveredToGestureRecognizers;
-(CGVector)nonAcceleratedDelta;
-(CGVector)acceleratedDelta;
-(BOOL)directionInvertedFromDevice;
-(BOOL)_isHighResolution;
-(BOOL)_hasDeliveredTerminalPhase;
-(void)_sendCancelToGestureRecognizer:(id)arg1 ;
@end

