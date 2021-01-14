/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CHSWidgetMetricsSpecification : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSDictionary* _metricsByFamily;

}

@property (nonatomic,copy,readonly) NSDictionary * metricsByFamily;              //@synthesize metricsByFamily=_metricsByFamily - In the implementation block
@property (nonatomic,readonly) unsigned long long families; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithMetricsByFamily:(id)arg1 ;
-(NSDictionary *)metricsByFamily;
-(id)_initWithMetricsByFamily:(id)arg1 ;
-(id)metricsForFamily:(long long)arg1 ;
-(id)initWithMetricsSpecification:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned long long)families;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

