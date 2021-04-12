/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class MXAverage;

@interface MXFramerateMetric : MXMetric {

	MXAverage* _averageFramerate;

}

@property (readonly) MXAverage * averageFramerate;              //@synthesize averageFramerate=_averageFramerate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithAverageFramerate:(id)arg1 ;
-(MXAverage *)averageFramerate;
@end

