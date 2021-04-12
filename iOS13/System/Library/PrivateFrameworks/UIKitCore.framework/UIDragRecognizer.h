/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UITouch, UIDelayedAction;

@interface UIDragRecognizer : UIGestureRecognizer {

	double _maximumDeviation;
	double _minimumDistance;
	CGPoint _startPosition;
	BOOL _restrictsToAngle;
	double _angle;
	UITouch* _touch;
	UIDelayedAction* _tooSlow;
	double _startAngle;
	double _quietPeriod;
	BOOL _canBeginDrag;
	SEL _checkCanBeginDrag;
	UIDelayedAction* ignoreTouch;

}

@property (assign,nonatomic) CGPoint startPosition;                      //@synthesize startPosition=_startPosition - In the implementation block
@property (assign,nonatomic) double startAngle;                          //@synthesize startAngle=_startAngle - In the implementation block
@property (nonatomic,retain) UITouch * touch;                            //@synthesize touch=_touch - In the implementation block
@property (nonatomic,retain) UIDelayedAction * ignoreTouch; 
@property (assign,nonatomic) BOOL restrictsToAngle;                      //@synthesize restrictsToAngle=_restrictsToAngle - In the implementation block
@property (assign,nonatomic) double angle;                               //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) double maximumDeviation;                    //@synthesize maximumDeviation=_maximumDeviation - In the implementation block
@property (assign,nonatomic) double minimumDistance;                     //@synthesize minimumDistance=_minimumDistance - In the implementation block
@property (assign,nonatomic) double quietPeriod;                         //@synthesize quietPeriod=_quietPeriod - In the implementation block
@property (assign,nonatomic) BOOL canBeginDrag;                          //@synthesize canBeginDrag=_canBeginDrag - In the implementation block
@property (assign,nonatomic) SEL checkCanBeginDrag;                      //@synthesize checkCanBeginDrag=_checkCanBeginDrag - In the implementation block
+(BOOL)_shouldDefaultToTouches;
-(void)dealloc;
-(double)angle;
-(void)setAngle:(double)arg1 ;
-(UITouch *)touch;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)setTouch:(UITouch *)arg1 ;
-(void)tooSlow:(id)arg1 ;
-(void)setIgnoreTouch:(UIDelayedAction *)arg1 ;
-(UIDelayedAction *)ignoreTouch;
-(CGPoint)startPosition;
-(void)setStartPosition:(CGPoint)arg1 ;
-(void)setRestrictsToAngle:(BOOL)arg1 ;
-(void)setMinimumDistance:(double)arg1 ;
-(void)setMaximumDeviation:(double)arg1 ;
-(void)clearIgnoreTouch;
-(double)quietPeriod;
-(double)minimumDistance;
-(BOOL)restrictsToAngle;
-(double)maximumDeviation;
-(void)setCanBeginDrag:(BOOL)arg1 ;
-(SEL)checkCanBeginDrag;
-(BOOL)canBeginDrag;
-(void)setStartAngle:(double)arg1 ;
-(double)startAngle;
-(void)setQuietPeriod:(double)arg1 ;
-(void)setCheckCanBeginDrag:(SEL)arg1 ;
@end
