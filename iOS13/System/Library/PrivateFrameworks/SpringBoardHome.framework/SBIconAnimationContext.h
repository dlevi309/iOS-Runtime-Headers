/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@interface SBIconAnimationContext : NSObject {

	double _delay;
	double _fraction;
	/*^block*/id _completion;

}

@property (assign,nonatomic) double delay;                 //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double fraction;              //@synthesize fraction=_fraction - In the implementation block
@property (nonatomic,copy) id completion;                  //@synthesize completion=_completion - In the implementation block
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(double)fraction;
-(void)setFraction:(double)arg1 ;
@end

