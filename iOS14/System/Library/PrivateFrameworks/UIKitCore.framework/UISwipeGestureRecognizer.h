/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableArray;

@interface UISwipeGestureRecognizer : UIGestureRecognizer {

	double _maximumDuration;
	double _minimumPrimaryMovement;
	double _maximumPrimaryMovement;
	double _minimumSecondaryMovement;
	double _maximumSecondaryMovement;
	double _rateOfMinimumMovementDecay;
	double _rateOfMaximumMovementDecay;
	unsigned long long _numberOfTouchesRequired;
	NSMutableArray* _touches;
	unsigned long long _direction;
	CGPoint _startLocation;
	CGPoint* _startLocations;
	double _startTime;
	BOOL _failed;

}

@property (assign,nonatomic) double maximumDuration;                                  //@synthesize maximumDuration=_maximumDuration - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTouchesRequired;              //@synthesize numberOfTouchesRequired=_numberOfTouchesRequired - In the implementation block
@property (assign,nonatomic) unsigned long long direction;                            //@synthesize direction=_direction - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_shouldDefaultToTouches;
-(void)setNumberOfTouchesRequired:(unsigned long long)arg1 ;
-(unsigned long long)direction;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_resetGestureRecognizer;
-(void)setDirection:(unsigned long long)arg1 ;
-(double)maximumDuration;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouches;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_appendSubclassDescription:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setMaximumDuration:(double)arg1 ;
-(BOOL)_isGestureType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)numberOfTouchesRequired;
-(CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2 ;
-(void)dealloc;
@end

