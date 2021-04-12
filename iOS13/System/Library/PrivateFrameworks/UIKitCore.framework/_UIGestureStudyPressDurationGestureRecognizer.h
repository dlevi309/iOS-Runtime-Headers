/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@interface _UIGestureStudyPressDurationGestureRecognizer : UIGestureRecognizer {

	double _allowableMovement;
	double _startTimestamp;
	double _maxObservedTouchForce;
	CGPoint _originalLocation;

}

@property (assign,nonatomic) double startTimestamp;                     //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint originalLocation;                  //@synthesize originalLocation=_originalLocation - In the implementation block
@property (assign,nonatomic) double maxObservedTouchForce;              //@synthesize maxObservedTouchForce=_maxObservedTouchForce - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double movement; 
@property (nonatomic,readonly) BOOL hasForce; 
@property (assign,nonatomic) double allowableMovement;                  //@synthesize allowableMovement=_allowableMovement - In the implementation block
-(void)reset;
-(double)duration;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setAllowableMovement:(double)arg1 ;
-(double)allowableMovement;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(void)setStartTimestamp:(double)arg1 ;
-(void)setOriginalLocation:(CGPoint)arg1 ;
-(void)setMaxObservedTouchForce:(double)arg1 ;
-(double)maxObservedTouchForce;
-(BOOL)movementExceededLimit:(double)arg1 ;
-(CGPoint)originalLocation;
-(double)startTimestamp;
-(BOOL)hasForce;
-(double)movement;
@end

