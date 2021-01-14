/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKRemoteFeatureAvailabilityBaseRule.h>
#import <libobjc.A.dylib/HKRemoteFeatureAvailabilityRule.h>

@class NSString;

@interface HKRemoteFeatureAvailabilityAtrialFibrillationOnboardingCountryCodeRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {

	NSString* _onboardingCountryCode;

}

@property (nonatomic,retain) NSString * onboardingCountryCode;              //@synthesize onboardingCountryCode=_onboardingCountryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleIdentifier;
-(BOOL)evaluate;
-(void)processUserInfo:(id)arg1 ;
-(void)setOnboardingCountryCode:(NSString *)arg1 ;
-(NSString *)onboardingCountryCode;
@end

