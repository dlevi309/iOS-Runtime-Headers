/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKitCore/_UIGestureStudyParticipating.h>

@class UITouch, NSString;

@interface _UIGestureStudyMetricsGestureRecognizer : UIGestureRecognizer <_UIGestureStudyParticipating> {

	long long _observedTouchCount;
	double _startTimestamp;
	double _allowableMovement;
	UITouch* _primaryTouch;
	CGPoint _originalPosition;

}

@property (assign,nonatomic) double startTimestamp;                       //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) CGPoint originalPosition;                    //@synthesize originalPosition=_originalPosition - In the implementation block
@property (assign,nonatomic) double allowableMovement;                    //@synthesize allowableMovement=_allowableMovement - In the implementation block
@property (nonatomic,retain) UITouch * primaryTouch;                      //@synthesize primaryTouch=_primaryTouch - In the implementation block
@property (nonatomic,readonly) long long observedTouchCount;              //@synthesize observedTouchCount=_observedTouchCount - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double movement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllowableMovement:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(double)movement;
-(BOOL)_affectedByGesture:(id)arg1 ;
-(NSString *)eventName;
-(double)startTimestamp;
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(double)allowableMovement;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setStartTimestamp:(double)arg1 ;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(double)duration;
-(UITouch *)primaryTouch;
-(void)setPrimaryTouch:(UITouch *)arg1 ;
-(void)setOriginalPosition:(CGPoint)arg1 ;
-(CGPoint)originalPosition;
-(long long)observedTouchCount;
@end

