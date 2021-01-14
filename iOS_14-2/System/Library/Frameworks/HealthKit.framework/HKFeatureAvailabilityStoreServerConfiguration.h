/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class NSString;

@interface HKFeatureAvailabilityStoreServerConfiguration : HKTaskConfiguration {

	NSString* _featureIdentifier;

}

@property (nonatomic,copy,readonly) NSString * featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFeatureIdentifier:(id)arg1 ;
-(NSString *)featureIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

