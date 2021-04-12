/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class NSTimer, NSMutableSet, NSSet, NSArray;

@interface HKMultiTouchPressGestureRecognizer : UIGestureRecognizer {

	NSTimer* _touchDelayTimer;
	NSMutableSet* _touches;
	CGPoint _startingPosition;
	double _requiredPressDelay;
	unsigned long long _minimumNumberOfTouches;
	unsigned long long _maximumNumberOfTouches;
	CGRect _touchableBounds;

}

@property (nonatomic,readonly) NSSet * touches;                                                           //@synthesize touches=_touches - In the implementation block
@property (assign,nonatomic) double requiredPressDelay;                                                   //@synthesize requiredPressDelay=_requiredPressDelay - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfTouches;                                   //@synthesize minimumNumberOfTouches=_minimumNumberOfTouches - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfTouches;                                   //@synthesize maximumNumberOfTouches=_maximumNumberOfTouches - In the implementation block
@property (assign,nonatomic) CGRect touchableBounds;                                                      //@synthesize touchableBounds=_touchableBounds - In the implementation block
@property (assign,nonatomic,__weak) id<HKMultiTouchPressGestureRecognizerDelegate> delegate; 
@property (nonatomic,readonly) NSArray * orderedTouches; 
-(void)reset;
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(unsigned long long)minimumNumberOfTouches;
-(unsigned long long)maximumNumberOfTouches;
-(NSSet *)touches;
-(void)touchDelayTimerFired:(id)arg1 ;
-(double)requiredPressDelay;
-(void)setRequiredPressDelay:(double)arg1 ;
-(CGRect)touchableBounds;
-(void)setTouchableBounds:(CGRect)arg1 ;
-(NSArray *)orderedTouches;
-(id)touchAtIndex:(unsigned long long)arg1 ;
@end

