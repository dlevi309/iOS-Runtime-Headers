/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDictionary;

@interface _HKCorrelationQueryServerConfiguration : HKQueryServerConfiguration {

	NSDictionary* _filterDictionary;

}

@property (nonatomic,copy) NSDictionary * filterDictionary;              //@synthesize filterDictionary=_filterDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFilterDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)filterDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

