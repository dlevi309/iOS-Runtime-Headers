/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@interface TAInterVisitMetricPerDeviceSettings : NSObject {

	double _sampledObservationLocationsInterval;
	unsigned long long _sampledObservationLocationsBufferSize;

}

@property (assign,nonatomic) double sampledObservationLocationsInterval;                            //@synthesize sampledObservationLocationsInterval=_sampledObservationLocationsInterval - In the implementation block
@property (assign,nonatomic) unsigned long long sampledObservationLocationsBufferSize;              //@synthesize sampledObservationLocationsBufferSize=_sampledObservationLocationsBufferSize - In the implementation block
-(id)init;
-(id)initWithSampledObservationLocationsInterval:(double)arg1 sampledObservationLocationsBufferSize:(unsigned long long)arg2 ;
-(double)sampledObservationLocationsInterval;
-(void)setSampledObservationLocationsInterval:(double)arg1 ;
-(unsigned long long)sampledObservationLocationsBufferSize;
-(void)setSampledObservationLocationsBufferSize:(unsigned long long)arg1 ;
@end

