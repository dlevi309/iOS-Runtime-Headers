/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIEvent.h>

@class NSMapTable;

@interface UITransformEvent : UIEvent {

	NSMapTable* _gestureRecognizersByWindow;
	CGPoint _sceneReferenceLocation;
	CGAffineTransform _transform;
	double _scaleDelta;
	double _rotationDelta;
	double _translationMagDelta;
	unsigned long long _scalePhase;
	unsigned long long _rotationPhase;
	unsigned long long _translationPhase;
	double _scale;
	double _rotation;
	CGPoint _translation;

}

@property (readonly) unsigned long long phase; 
@property (nonatomic,readonly) double scale;                             //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) double rotation;                          //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,readonly) CGPoint translation;                      //@synthesize translation=_translation - In the implementation block
@property (nonatomic,readonly) CGAffineTransform transform; 
-(long long)subtype;
-(long long)weightedDominantComponentForScaleWeight:(double)arg1 rotationWeight:(double)arg2 translationWeight:(double)arg3 ;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(void)_removeGestureRecognizersFromWindows;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(double)rotation;
-(double)scale;
-(CGPoint)locationInView:(id)arg1 ;
-(id)_windows;
-(CGAffineTransform)transform;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(CGPoint)translation;
-(long long)type;
-(void)_reset;
-(id)_init;
-(unsigned long long)phase;
-(id)_windowServerHitTestWindow;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
@end

