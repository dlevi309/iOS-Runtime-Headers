/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)identifier;
-(double)delay;
-(double)duration;
-(id)timingFunction;
-(BOOL)cancelable;
-(void)setPercent:(double)arg1 ;
-(double)percent;
-(void)applyToCountdownView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)countdownStep;
-(id)initWithPercent:(double)arg1 andStep:(unsigned long long)arg2 cancelable:(BOOL)arg3 ;
@end

