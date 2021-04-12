/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(NSSet *)touches;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)locationInView:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)minimumNumberOfTouches;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(unsigned long long)maximumNumberOfTouches;
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setMinimumNumberOfTouches:(unsigned long long)arg1 ;
-(void)setRequiredPressDelay:(double)arg1 ;
-(id)touchAtIndex:(unsigned long long)arg1 ;
-(NSArray *)orderedTouches;
-(void)touchDelayTimerFired:(id)arg1 ;
-(double)requiredPressDelay;
-(CGRect)touchableBounds;
-(void)setTouchableBounds:(CGRect)arg1 ;
@end

