/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class MXAverage;

@interface MXDisplayMetric : MXMetric {

	MXAverage* _averagePixelLuminance;

}

@property (readonly) MXAverage * averagePixelLuminance;              //@synthesize averagePixelLuminance=_averagePixelLuminance - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAveragePictureLevel:(id)arg1 ;
-(MXAverage *)averagePixelLuminance;
@end

