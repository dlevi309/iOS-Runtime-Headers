/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/

#import <ActivityRingsUI/ARUICountdownDefaultAnimation.h>
#import <libobjc.A.dylib/ARUICountdownAnimation.h>

@interface ARUICountdownCountdown : ARUICountdownDefaultAnimation <ARUICountdownAnimation> {

	unsigned long long _step;
	BOOL _cancelable;
	double _percent;

}

@property (assign,nonatomic) double percent;              //@synthesize percent=_percent - In the implementation block
+(id)identifier;
-(id)timingFunction;
-(BOOL)cancelable;
-(id)description;
-(double)delay;
-(id)identifier;
-(double)percent;
-(double)duration;
-(void)applyToCountdownView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)countdownStep;
-(id)initWithPercent:(double)arg1 andStep:(unsigned long long)arg2 cancelable:(BOOL)arg3 ;
-(void)setPercent:(double)arg1 ;
@end

