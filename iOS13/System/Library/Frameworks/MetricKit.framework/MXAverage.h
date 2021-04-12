/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(long long)sampleCount;
-(id)toDictionary;
-(double)standardDeviation;
-(NSMeasurement *)averageMeasurement;
-(id)initWithDoubleValue:(double)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3 unit:(id)arg4 ;
-(id)initWithMeasurement:(id)arg1 sampleCount:(long long)arg2 standardDeviation:(double)arg3 ;
@end

