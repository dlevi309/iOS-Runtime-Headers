/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class MXHistogram;

@interface MXCellularConditionMetric : MXMetric {

	MXHistogram* _histogrammedCellularConditionTime;

}

@property (readonly) MXHistogram * histogrammedCellularConditionTime;              //@synthesize histogrammedCellularConditionTime=_histogrammedCellularConditionTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCellularConditionTime:(id)arg1 ;
-(MXHistogram *)histogrammedCellularConditionTime;
@end

