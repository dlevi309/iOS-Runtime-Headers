/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFilterDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)filterDictionary;
@end

