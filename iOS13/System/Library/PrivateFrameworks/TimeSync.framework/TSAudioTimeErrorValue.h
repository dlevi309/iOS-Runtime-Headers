/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
*/


@interface TSAudioTimeErrorValue : NSObject {

	double _sampleTimestamp;
	double _timeError;

}

@property (nonatomic,readonly) double sampleTimestamp;              //@synthesize sampleTimestamp=_sampleTimestamp - In the implementation block
@property (nonatomic,readonly) double timeError;                    //@synthesize timeError=_timeError - In the implementation block
-(id)description;
-(id)initWithSampleTimestamp:(double)arg1 andTimeError:(double)arg2 ;
-(double)sampleTimestamp;
-(double)timeError;
@end

