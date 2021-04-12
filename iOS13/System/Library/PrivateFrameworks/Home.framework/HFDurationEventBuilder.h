/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFEventBuilder.h>

@interface HFDurationEventBuilder : HFEventBuilder {

	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(id)description;
-(double)duration;
-(id)initWithEvent:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)buildNewEventFromCurrentState;
@end

