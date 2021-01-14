/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVMutableValueTiming.h>

@interface AVConcreteMutableValueTiming : AVMutableValueTiming {

	double _value;
	double _timeStamp;
	double _rate;

}
-(void)setRate:(double)arg1 ;
-(CGPoint)_timing;
-(double)anchorValue;
-(double)rate;
-(double)anchorTimeStamp;
-(id)initWithAnchorValue:(double)arg1 anchorTimeStamp:(double)arg2 rate:(double)arg3 ;
-(void)setAnchorValue:(double)arg1 ;
-(void)setAnchorTimeStamp:(double)arg1 ;
@end

