/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXDiskIOMetric : MXMetric {

	NSMeasurement* _cumulativeLogicalWrites;

}

@property (readonly) NSMeasurement * cumulativeLogicalWrites;              //@synthesize cumulativeLogicalWrites=_cumulativeLogicalWrites - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(NSMeasurement *)cumulativeLogicalWrites;
-(id)initWithCumulativeLogicalWritesMeasurement:(id)arg1 ;
@end

