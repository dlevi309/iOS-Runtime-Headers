/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEndValue:(id)arg1 ;
-(void)update:(double)arg1 ;
-(id)endValue;
-(void)setStartValue:(id)arg1 ;
-(id)currentValue;
-(id)startValue;
-(void)setCurrentValue:(id)arg1 ;
-(BOOL)isFinishedAnimating;
-(id)initWithGetter:(/*^block*/id)arg1 setter:(/*^block*/id)arg2 ;
-(void)removeAllPropertyAnimations;
-(void)setValueImmediate:(id)arg1 ;
-(void)addPropertyAnimation:(id)arg1 ;
@end

