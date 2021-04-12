/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class MXHistogram;

@interface MXAppLaunchMetric : MXMetric {

	MXHistogram* _histogrammedTimeToFirstDraw;
	MXHistogram* _histogrammedApplicationResumeTime;

}

@property (readonly) MXHistogram * histogrammedTimeToFirstDraw;                    //@synthesize histogrammedTimeToFirstDraw=_histogrammedTimeToFirstDraw - In the implementation block
@property (readonly) MXHistogram * histogrammedApplicationResumeTime;              //@synthesize histogrammedApplicationResumeTime=_histogrammedApplicationResumeTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithLaunchTimeData:(id)arg1 withResumeTimeData:(id)arg2 ;
-(MXHistogram *)histogrammedTimeToFirstDraw;
-(MXHistogram *)histogrammedApplicationResumeTime;
@end

