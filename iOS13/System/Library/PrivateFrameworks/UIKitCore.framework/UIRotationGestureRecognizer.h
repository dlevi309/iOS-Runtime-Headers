/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer {

	double _initialTouchDistance;
	double _initialTouchAngle;
	double _currentTouchAngle;
	long long _currentRotationCount;
	double _lastTouchTime;
	double _velocity;
	double _previousVelocity;
	CGPoint _anchorSceneReferencePoint;
	id _transformAnalyzer;
	UITouch* _touches[2];
	float _preRecognitionWeight;
	float _postRecognitionWeight;

}

@property (assign,nonatomic) double rotation; 
@property (nonatomic,readonly) double velocity; 
+(BOOL)supportsSecureCoding;
+(BOOL)_shouldDefaultToTouches;
-(id)initWithCoder:(id)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(double)velocity;
-(CGPoint)anchorPoint;
-(BOOL)_shouldReceiveTransformEvent:(id)arg1 ;
-(void)_transformChangedWithEvent:(id)arg1 ;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(void)_cancelOrFail;
-(void)_updateTransformAnalyzerWeights;
-(void)_endOrFail;
-(void)_setPreRecognitionWeight:(double)arg1 ;
-(double)_preRecognitionWeight;
-(void)_setPostRecognitionWeight:(double)arg1 ;
-(double)_postRecognitionWeight;
@end

