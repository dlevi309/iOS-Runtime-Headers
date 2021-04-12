/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNVideoProcessorCadence.h>

@interface VNVideoProcessorTimeIntervalCadence : VNVideoProcessorCadence {

	double _timeInterval;

}

@property (readonly) double timeInterval;              //@synthesize timeInterval=_timeInterval - In the implementation block
-(void)populateVCPVideoProcessorRequestConfiguration:(id)arg1 ;
-(double)timeInterval;
-(unsigned long long)hash;
-(id)initWithTimeInterval:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

