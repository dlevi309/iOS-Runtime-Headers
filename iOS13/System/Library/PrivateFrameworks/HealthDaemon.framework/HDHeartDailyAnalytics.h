/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableDictionary;

@interface HDHeartDailyAnalytics : NSObject {

	NSMutableDictionary* _payload;

}
-(id)init;
-(void)submit;
-(void)updateIrregularRhythmNotificationClassificationCount:(long long)arg1 ;
-(void)updateIsImproveHealthAndActivityAllowed:(BOOL)arg1 ;
-(void)updateElectrocardiogramClassificationCount:(long long)arg1 ;
-(void)updateIsEcgOnboarded:(BOOL)arg1 ;
-(void)updateWeeksSinceElectrocardiogramOnboardedWithFirstOnboardingCompletedDate:(id)arg1 ;
-(void)updateWithElectrocardiogramClassifications:(id)arg1 ;
-(id)_weeksBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_ecgClassificationWithin24HoursPostIRNKeyFromClassification:(unsigned long long)arg1 ;
@end

