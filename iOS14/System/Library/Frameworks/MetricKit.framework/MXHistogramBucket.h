/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMeasurementFormatter, NSMeasurement;

@interface MXHistogramBucket : NSObject <NSSecureCoding> {

	NSMeasurementFormatter* _histogramBucketFormatter;
	NSMeasurement* _bucketStart;
	NSMeasurement* _bucketEnd;
	unsigned long long _bucketCount;

}

@property (readonly) NSMeasurement * bucketStart;                 //@synthesize bucketStart=_bucketStart - In the implementation block
@property (readonly) NSMeasurement * bucketEnd;                   //@synthesize bucketEnd=_bucketEnd - In the implementation block
@property (readonly) unsigned long long bucketCount;              //@synthesize bucketCount=_bucketCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)bucketCount;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBucketStart:(id)arg1 bucketEnd:(id)arg2 bucketCount:(unsigned long long)arg3 ;
-(NSMeasurement *)bucketStart;
-(NSMeasurement *)bucketEnd;
@end

