/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <ChronoServices/CHSWidgetMetricsSpecification.h>

@class NSMutableDictionary;

@interface CHSMutableWidgetMetricsSpecification : CHSWidgetMetricsSpecification

@property (nonatomic,copy,readonly) NSMutableDictionary * metricsByFamily; 
-(id)initWithMetricsByFamily:(id)arg1 ;
-(NSMutableDictionary *)metricsByFamily;
-(void)setMetrics:(id)arg1 forFamily:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

