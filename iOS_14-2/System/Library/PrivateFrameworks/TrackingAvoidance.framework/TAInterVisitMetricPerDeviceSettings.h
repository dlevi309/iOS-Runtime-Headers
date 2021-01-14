/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TAInterVisitMetricPerDeviceSettings : NSObject <NSSecureCoding> {

	double _sampledObservationLocationsInterval;
	unsigned long long _sampledObservationLocationsBufferSize;

}

@property (assign,nonatomic) double sampledObservationLocationsInterval;                            //@synthesize sampledObservationLocationsInterval=_sampledObservationLocationsInterval - In the implementation block
@property (assign,nonatomic) unsigned long long sampledObservationLocationsBufferSize;              //@synthesize sampledObservationLocationsBufferSize=_sampledObservationLocationsBufferSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSampledObservationLocationsInterval:(double)arg1 sampledObservationLocationsBufferSize:(unsigned long long)arg2 ;
-(double)sampledObservationLocationsInterval;
-(unsigned long long)sampledObservationLocationsBufferSize;
-(void)setSampledObservationLocationsInterval:(double)arg1 ;
-(void)setSampledObservationLocationsBufferSize:(unsigned long long)arg1 ;
@end

