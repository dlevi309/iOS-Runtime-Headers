/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@interface TURepeatingAction : NSObject {

	/*^block*/id _action;
	/*^block*/id _completion;
	unsigned long long _remainingIterations;
	double _pauseDuration;

}

@property (nonatomic,copy) id action;                                             //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) id completion;                                         //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) unsigned long long remainingIterations;              //@synthesize remainingIterations=_remainingIterations - In the implementation block
@property (assign,nonatomic) double pauseDuration;                                //@synthesize pauseDuration=_pauseDuration - In the implementation block
-(id)action;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(id)initWithAction:(/*^block*/id)arg1 ;
-(void)setAction:(id)arg1 ;
-(void)setRemainingIterations:(unsigned long long)arg1 ;
-(void)setPauseDuration:(double)arg1 ;
-(unsigned long long)remainingIterations;
-(double)pauseDuration;
@end

