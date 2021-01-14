/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@interface KeyPitch : NSObject {

	double _frequency;
	double _timeOffsetMS;

}

@property (assign,nonatomic) double frequency;                 //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) double timeOffsetMS;              //@synthesize timeOffsetMS=_timeOffsetMS - In the implementation block
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(void)setTimeOffsetMS:(double)arg1 ;
-(id)description;
-(id)initWithFrequency:(double)arg1 timeOffset:(double)arg2 ;
-(double)timeOffsetMS;
@end

