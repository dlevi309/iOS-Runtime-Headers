/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKFreeTransformGestureRecognizer.h>

@class NSTimer;

@interface PKRulerGestureRecognizer : PKFreeTransformGestureRecognizer {

	NSTimer* _startTimer;
	BOOL _initialSnap;
	double _startDelay;
	double _startSnapThreshold;

}

@property (assign,nonatomic) double startDelay;                      //@synthesize startDelay=_startDelay - In the implementation block
@property (assign,nonatomic) double startSnapThreshold;              //@synthesize startSnapThreshold=_startSnapThreshold - In the implementation block
-(void)start;
-(void)reset;
-(void)stopTimer;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGAffineTransform)freeTransform;
-(CGAffineTransform)unscaledFreeTransform;
-(void)resetAndAccumulateTransform;
-(CGAffineTransform)rulerTransform;
-(void)setStartDelay:(double)arg1 ;
-(void)setStartSnapThreshold:(double)arg1 ;
-(double)startDelay;
-(double)startSnapThreshold;
@end

