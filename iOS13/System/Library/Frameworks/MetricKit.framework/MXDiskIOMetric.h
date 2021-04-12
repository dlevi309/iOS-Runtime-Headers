/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCumulativeLogicalWritesMeasurement:(id)arg1 ;
-(NSMeasurement *)cumulativeLogicalWrites;
@end

