/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)start;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)stopTimer;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)startDelay;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(CGAffineTransform)freeTransform;
-(CGAffineTransform)unscaledFreeTransform;
-(void)resetAndAccumulateTransform;
-(CGAffineTransform)rulerTransform;
-(void)setStartDelay:(double)arg1 ;
-(void)setStartSnapThreshold:(double)arg1 ;
-(double)startSnapThreshold;
@end

