/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKRemoteFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKRemoteFeatureAvailabilityRule.h>

@class NSString;

@interface HKRemoteFeatureAvailabilityActiveWatchElectrocardiogramVersionGreaterThanRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {

	SCD_Struct_HK3 _targetVersion;

}

@property (assign,nonatomic) SCD_Struct_HK3 targetVersion;              //@synthesize targetVersion=_targetVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg1 ;
-(SCD_Struct_HK3)targetVersion;
-(void)setTargetVersion:(SCD_Struct_HK3)arg1 ;
@end

