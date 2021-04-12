/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)type;
-(id)_init;
-(CGAffineTransform)transform;
-(double)scale;
-(void)_reset;
-(double)rotation;
-(long long)subtype;
-(unsigned long long)phase;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_windows;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(void)_removeGestureRecognizersFromWindows;
-(BOOL)_sendEventToGestureRecognizer:(id)arg1 ;
-(long long)weightedDominantComponentForScaleWeight:(double)arg1 rotationWeight:(double)arg2 translationWeight:(double)arg3 ;
-(CGPoint)locationInView:(id)arg1 ;
-(CGPoint)translation;
@end

