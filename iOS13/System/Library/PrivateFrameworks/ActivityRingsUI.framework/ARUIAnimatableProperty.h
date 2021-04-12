/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@class NSMutableArray;

@interface ARUIAnimatableProperty : NSObject {

	/*^block*/id _getter;
	/*^block*/id _setter;
	NSMutableArray* _animations;
	id _currentValue;
	id _startValue;
	id _endValue;

}

@property (nonatomic,retain) id startValue;                //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,retain) id endValue;                  //@synthesize endValue=_endValue - In the implementation block
@property (nonatomic,retain) id currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
-(void)setStartValue:(id)arg1 ;
-(void)setEndValue:(id)arg1 ;
-(void)update:(double)arg1 ;
-(id)currentValue;
-(void)setCurrentValue:(id)arg1 ;
-(id)startValue;
-(id)endValue;
-(id)initWithGetter:(/*^block*/id)arg1 setter:(/*^block*/id)arg2 ;
-(void)setValueImmediate:(id)arg1 ;
-(void)addPropertyAnimation:(id)arg1 ;
-(void)removeAllPropertyAnimations;
-(BOOL)isFinishedAnimating;
@end

