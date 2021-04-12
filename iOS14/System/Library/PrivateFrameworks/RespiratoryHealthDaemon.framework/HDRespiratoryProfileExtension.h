/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealthDaemon.framework/RespiratoryHealthDaemon
*/

#import <libobjc.A.dylib/HDProfileExtension.h>
#import <libobjc.A.dylib/HDFeatureAvailabilityExtensionProvider.h>

@class HDRPFeatureAvailabilityManager, HKRPOxygenSaturationOnboardingCacher, HDProfile, HDRPRespiratoryDailyAnalytics, NSString;

@interface HDRespiratoryProfileExtension : NSObject <HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {

	HDRPFeatureAvailabilityManager* _featureAvailabilityManager;
	HKRPOxygenSaturationOnboardingCacher* _onboardingCacher;
	HDProfile* _profile;
	HDRPRespiratoryDailyAnalytics* _dailyAnalytics;
	/*^block*/id _unitTesting_healthLiteSessionWithDelegateHandler;

}

@property (nonatomic,copy) id unitTesting_healthLiteSessionWithDelegateHandler;                        //@synthesize unitTesting_healthLiteSessionWithDelegateHandler=_unitTesting_healthLiteSessionWithDelegateHandler - In the implementation block
@property (nonatomic,retain) HDRPFeatureAvailabilityManager * featureAvailabilityManager;              //@synthesize featureAvailabilityManager=_featureAvailabilityManager - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HDRPRespiratoryDailyAnalytics * dailyAnalytics;                         //@synthesize dailyAnalytics=_dailyAnalytics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)unitTesting_healthLiteSessionWithDelegateHandler;
-(id)oxygenSaturationSessionWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithProfile:(id)arg1 ;
-(HDRPFeatureAvailabilityManager *)featureAvailabilityManager;
-(HDRPRespiratoryDailyAnalytics *)dailyAnalytics;
-(id)initWithProfile:(id)arg1 forcingFeaturesEnabled:(BOOL)arg2 featureAvailabilityManager:(id)arg3 ;
-(HDProfile *)profile;
-(void)setFeatureAvailabilityManager:(HDRPFeatureAvailabilityManager *)arg1 ;
-(id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1 client:(id)arg2 ;
-(id)initWithProfile:(id)arg1 forcingFeaturesEnabled:(BOOL)arg2 ;
-(void)setUnitTesting_healthLiteSessionWithDelegateHandler:(id)arg1 ;
@end

