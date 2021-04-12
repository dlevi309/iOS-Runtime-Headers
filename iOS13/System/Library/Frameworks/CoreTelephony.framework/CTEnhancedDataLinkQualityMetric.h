/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <CoreTelephony/CTEnhancedLinkQualityMetric.h>

@interface CTEnhancedDataLinkQualityMetric : CTEnhancedLinkQualityMetric {

	long long _metricType;

}

@property (assign,nonatomic) long long metricType;              //@synthesize metricType=_metricType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)metricType;
-(void)setMetricType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 enhancedLinkQuality:(id)arg2 ;
@end

