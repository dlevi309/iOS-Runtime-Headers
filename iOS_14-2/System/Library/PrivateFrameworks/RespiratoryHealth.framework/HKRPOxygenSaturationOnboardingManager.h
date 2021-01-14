/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/


@protocol HKRPOxygenSaturationOnboardingManagerDataSource;
@interface HKRPOxygenSaturationOnboardingManager : NSObject {

	id<HKRPOxygenSaturationOnboardingManagerDataSource> _dataSource;

}

@property (nonatomic,readonly) id<HKRPOxygenSaturationOnboardingManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) BOOL settingsShouldAppear; 
@property (nonatomic,readonly) BOOL onboardingShouldAppear; 
@property (nonatomic,readonly) BOOL onboardingDuringPairingShouldAppear; 
@property (nonatomic,readonly) BOOL onboardingComplete; 
@property (nonatomic,readonly) BOOL shouldAdvertise; 
@property (nonatomic,readonly) BOOL bloodOxygenFeatureEnabled; 
@property (nonatomic,readonly) BOOL pairedDeviceIsAppropriate; 
@property (nonatomic,readonly) BOOL ageIsAppropriate; 
-(id)initWithDevice:(id)arg1 ;
-(id)init;
-(id)initWithDataSource:(id)arg1 ;
-(BOOL)shouldAdvertise;
-(id<HKRPOxygenSaturationOnboardingManagerDataSource>)dataSource;
-(BOOL)bloodOxygenFeatureEnabled;
-(BOOL)pairedDeviceIsAppropriate;
-(BOOL)ageIsAppropriate;
-(BOOL)_isAlternateDevice;
-(BOOL)_currentDeviceHasCapability;
-(BOOL)settingsShouldAppear;
-(BOOL)onboardingComplete;
-(BOOL)onboardingShouldAppear;
-(void)cacheCompletedOnboardingStateIfNeeded;
-(BOOL)onboardingDuringPairingShouldAppear;
-(void)onboardWithCompletion:(/*^block*/id)arg1 ;
@end

