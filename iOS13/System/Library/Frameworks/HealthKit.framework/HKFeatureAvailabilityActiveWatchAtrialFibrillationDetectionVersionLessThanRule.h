/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityRule.h>

@class NSString;

@interface HKFeatureAvailabilityActiveWatchAtrialFibrillationDetectionVersionLessThanRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule> {

	SCD_Struct_HK3 _targetVersion;

}

@property (assign,nonatomic) SCD_Struct_HK3 targetVersion;              //@synthesize targetVersion=_targetVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(SCD_Struct_HK3)targetVersion;
-(void)setTargetVersion:(SCD_Struct_HK3)arg1 ;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg1 ;
@end

