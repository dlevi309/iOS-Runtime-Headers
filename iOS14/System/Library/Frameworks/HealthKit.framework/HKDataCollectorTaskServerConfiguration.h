/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKQuantityType, NSString;

@interface HKDataCollectorTaskServerConfiguration : HKTaskConfiguration {

	BOOL _canResumeFromLastDatum;
	HKQuantityType* _quantityType;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) HKQuantityType * quantityType;                //@synthesize quantityType=_quantityType - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL canResumeFromLastDatum;              //@synthesize canResumeFromLastDatum=_canResumeFromLastDatum - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)canResumeFromLastDatum;
-(HKQuantityType *)quantityType;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithQuantityType:(id)arg1 bundleIdentifier:(id)arg2 canResumeFromLastDatum:(BOOL)arg3 ;
-(void)setQuantityType:(HKQuantityType *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

