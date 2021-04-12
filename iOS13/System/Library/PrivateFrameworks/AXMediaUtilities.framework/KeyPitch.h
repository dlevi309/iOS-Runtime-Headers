/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@interface KeyPitch : NSObject {

	double _frequency;
	double _timeOffsetMS;

}

@property (assign,nonatomic) double frequency;                 //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) double timeOffsetMS;              //@synthesize timeOffsetMS=_timeOffsetMS - In the implementation block
-(id)description;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(id)initWithFrequency:(double)arg1 timeOffset:(double)arg2 ;
-(double)timeOffsetMS;
-(void)setTimeOffsetMS:(double)arg1 ;
@end

