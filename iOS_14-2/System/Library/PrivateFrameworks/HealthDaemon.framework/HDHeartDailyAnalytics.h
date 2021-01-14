/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableDictionary;

@interface HDHeartDailyAnalytics : NSObject {

	NSMutableDictionary* _payload;

}
-(id)init;
-(void)submit;
-(void)updateIrregularRhythmNotificationClassificationCount:(long long)arg1 ;
-(void)updateIsIrnOnboarded:(BOOL)arg1 ;
-(void)updateIsEcgOnboarded:(BOOL)arg1 ;
-(void)updateECGActiveAlgorithmVersion:(id)arg1 ;
-(void)updateECGUpdateVersionPhone:(id)arg1 ;
-(void)updateECGUpdateVersionWatch:(id)arg1 ;
-(void)updateCountMobileAssetsDownloadedPast24Hours:(long long)arg1 ;
-(void)updateMobileAssetNamesDownloadedPast24Hours:(id)arg1 ;
-(void)updateIsImproveHealthAndActivityAllowed:(BOOL)arg1 ;
-(void)updateIsTachycardiaDetectionEnabled:(BOOL)arg1 ;
-(void)updateIsBradycardiaDetectionEnabled:(BOOL)arg1 ;
-(void)updateActiveWatchProductType:(id)arg1 ;
-(void)updateElectrocardiogramClassificationCount:(long long)arg1 ;
-(void)updateCountRecordedTachogramsPast24Hours:(long long)arg1 ;
-(void)updateCountAnalyzedTachogramsPast24Hours:(long long)arg1 ;
-(void)updateECGOnboardingCountryCode:(id)arg1 ;
-(void)updateIRNOnboardingCountryCode:(id)arg1 ;
-(void)updateWasWatchWornPast24Hours:(BOOL)arg1 ;
-(void)updateWeeksSinceElectrocardiogramOnboardedWithFirstOnboardingCompletedDate:(id)arg1 ;
-(void)updateWithElectrocardiogramClassifications:(id)arg1 ;
-(id)_weeksBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_ecgClassificationWithin24HoursPostIRNKeyFromClassification:(unsigned long long)arg1 ;
@end

