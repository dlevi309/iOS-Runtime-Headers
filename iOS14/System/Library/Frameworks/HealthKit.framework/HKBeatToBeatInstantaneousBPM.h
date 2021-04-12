/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@interface HKBeatToBeatInstantaneousBPM : NSObject {

	double _bpm;
	double _time;

}

@property (nonatomic,readonly) double bpm;               //@synthesize bpm=_bpm - In the implementation block
@property (nonatomic,readonly) double time;              //@synthesize time=_time - In the implementation block
-(double)bpm;
-(double)time;
-(id)initWithBPM:(double)arg1 time:(double)arg2 ;
@end

