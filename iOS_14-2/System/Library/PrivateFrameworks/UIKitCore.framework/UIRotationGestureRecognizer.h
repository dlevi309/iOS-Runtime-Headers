/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class _UIGestureRecognizerTransformAnalyzer, UITouch;

@interface UIRotationGestureRecognizer : UIGestureRecognizer {

	double _initialTouchDistance;
	double _initialTouchAngle;
	double _currentTouchAngle;
	long long _currentRotationCount;
	double _lastTouchTime;
	double _velocity;
	double _previousVelocity;
	CGPoint _anchorSceneReferencePoint;
	_UIGestureRecognizerTransformAnalyzer* _transformAnalyzer;
	UITouch* _touches[2];
	float _preRecognitionWeight;
	float _postRecognitionWeight;

}

@property (assign,nonatomic) double rotation; 
@property (nonatomic,readonly) double velocity; 
+(BOOL)supportsSecureCoding;
+(BOOL)_shouldDefaultToTouches;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_resetGestureRecognizer;
-(void)setRotation:(double)arg1 ;
-(double)velocity;
-(void)_transformChangedWithEvent:(id)arg1 ;
-(void)_updateTransformAnalyzerWeights;
-(void)_endOrFail;
-(double)rotation;
-(void)_cancelOrFail;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)anchorPoint;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(double)_postRecognitionWeight;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_setPostRecognitionWeight:(double)arg1 ;
-(double)_preRecognitionWeight;
-(void)_setPreRecognitionWeight:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

