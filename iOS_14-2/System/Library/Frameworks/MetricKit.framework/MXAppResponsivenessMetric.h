/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class MXHistogram;

@interface MXAppResponsivenessMetric : MXMetric {

	MXHistogram* _histogrammedApplicationHangTime;

}

@property (readonly) MXHistogram * histogrammedApplicationHangTime;              //@synthesize histogrammedApplicationHangTime=_histogrammedApplicationHangTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAppResponsivenessData:(id)arg1 ;
-(MXHistogram *)histogrammedApplicationHangTime;
@end

