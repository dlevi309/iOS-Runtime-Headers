/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXAppRunTimeMetric : MXMetric {

	NSMeasurement* _cumulativeForegroundTime;
	NSMeasurement* _cumulativeBackgroundTime;
	NSMeasurement* _cumulativeBackgroundAudioTime;
	NSMeasurement* _cumulativeBackgroundLocationTime;

}

@property (readonly) NSMeasurement * cumulativeForegroundTime;                      //@synthesize cumulativeForegroundTime=_cumulativeForegroundTime - In the implementation block
@property (readonly) NSMeasurement * cumulativeBackgroundTime;                      //@synthesize cumulativeBackgroundTime=_cumulativeBackgroundTime - In the implementation block
@property (readonly) NSMeasurement * cumulativeBackgroundAudioTime;                 //@synthesize cumulativeBackgroundAudioTime=_cumulativeBackgroundAudioTime - In the implementation block
@property (readonly) NSMeasurement * cumulativeBackgroundLocationTime;              //@synthesize cumulativeBackgroundLocationTime=_cumulativeBackgroundLocationTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCumulativeForegroundTimeMeasurement:(id)arg1 cumulativeBackgroundTimeMeasurement:(id)arg2 cumulativeBackgroundAudioTimeMeasurement:(id)arg3 cumulativeBackgroundLocationTimeMeasurement:(id)arg4 ;
-(NSMeasurement *)cumulativeForegroundTime;
-(NSMeasurement *)cumulativeBackgroundTime;
-(NSMeasurement *)cumulativeBackgroundAudioTime;
-(NSMeasurement *)cumulativeBackgroundLocationTime;
@end

