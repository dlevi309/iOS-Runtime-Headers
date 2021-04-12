/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <CoreTelephony/CTEnhancedLinkQualityMetric.h>

@interface CTEnhancedDataLinkQualityMetric : CTEnhancedLinkQualityMetric {

	long long _metricType;

}

@property (assign,nonatomic) long long metricType;              //@synthesize metricType=_metricType - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)metricType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setMetricType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 enhancedLinkQuality:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

