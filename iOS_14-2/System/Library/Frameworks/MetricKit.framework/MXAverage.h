/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMeasurementFormatter, NSMeasurement;

@interface MXAverage : NSObject <NSSecureCoding> {

	NSMeasurementFormatter* _averageMeasurementFormatter;
	NSMeasurement* _averageMeasurement;
	long long _sampleCount;
	double _standardDeviation;

}

@property (readonly) NSMeasurement * averageMeasurement;              //@synthesize averageMeasurement=_averageMeasurement - In the implementation block
@property (readonly) long long sampleCount;                           //@synthesize sampleCount=_sampleCount - In the implementation block
@property (readonly) double standardDeviation;                        //@synthesize standardDeviation=_standardDeviation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(long long)sampleCount;
-(id)initWithCoder:(id)arg1 ;
-(double)standardDeviation;
-(id)initWithMeasurement:(id)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3 ;
-(NSMeasurement *)averageMeasurement;
-(id)initWithDoubleValue:(double)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3 unit:(id)arg4 ;
@end

