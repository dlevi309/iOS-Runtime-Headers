/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/


@interface HRUIAnalyticsManager : NSObject {

	long long _currentAtrialFibrillationOnboardingStep;
	long long _currentElectrocardiogramOnboardingStep;

}
+(id)sharedManager;
-(id)init;
-(void)trackElectrocardiogramPDFViewed;
-(void)trackElectrocardiogramDataTypeViewed;
-(void)trackElectrocardiogramPDFShared;
-(void)trackAtrialFibrillationDetectionOnboardingStep:(long long)arg1 forVersion:(long long)arg2 productType:(id)arg3 countryCode:(id)arg4 provenance:(long long)arg5 ;
-(id)_stringFromHRUIAtrialFibrillationDetectionOnboardingStep:(long long)arg1 ;
-(id)_stringFromHRUIElectrocardiogramOnboardingStep:(long long)arg1 ;
-(void)trackElectrocardiogramOnboardingStep:(long long)arg1 forVersion:(long long)arg2 productType:(id)arg3 countryCode:(id)arg4 provenance:(long long)arg5 ;
@end

