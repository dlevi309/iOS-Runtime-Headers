/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <Sleep/HKSPSleepEventRecord.h>
#import <libobjc.A.dylib/HKSPMutableObject.h>

@class HKSPChangeSet, NSDate, NSSet, NSString;

@interface HKSPMutableSleepEventRecord : HKSPSleepEventRecord <HKSPMutableObject> {

	HKSPChangeSet* _changeSet;

}

@property (nonatomic,copy) NSDate * bedtimeDelayedUntilDate; 
@property (nonatomic,copy) NSDate * bedtimeSkippedDate; 
@property (nonatomic,copy) NSDate * wakeUpEarlyNotificationConfirmedDate; 
@property (nonatomic,copy) NSDate * wakeUpConfirmedUntilDate; 
@property (nonatomic,copy) NSDate * wakeUpAlarmDismissedDate; 
@property (nonatomic,copy) NSDate * wakeUpAlarmSnoozedUntilDate; 
@property (nonatomic,copy) NSDate * windDownSkippedDate; 
@property (nonatomic,copy) NSDate * goodMorningDismissedDate; 
@property (assign,nonatomic) long long sleepCoachingOnboardingCompletedVersion; 
@property (nonatomic,copy) NSDate * sleepCoachingOnboardingFirstCompletedDate; 
@property (assign,nonatomic) long long sleepTrackingOnboardingCompletedVersion; 
@property (nonatomic,copy) NSDate * sleepTrackingOnboardingFirstCompletedDate; 
@property (assign,nonatomic) long long sleepWindDownShortcutsOnboardingCompletedVersion; 
@property (nonatomic,copy) NSDate * sleepWindDownShortcutsOnboardingFirstCompletedDate; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) HKSPChangeSet * changeSet;                                             //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,readonly) NSSet * significantChanges; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)freeze;
-(HKSPChangeSet *)changeSet;
-(NSDate *)wakeUpEarlyNotificationConfirmedDate;
-(long long)sleepWindDownShortcutsOnboardingCompletedVersion;
-(id)init;
-(id)mutableCopy;
-(NSDate *)lastModifiedDate;
-(void)setSleepTrackingOnboardingCompletedVersion:(long long)arg1 ;
-(long long)sleepCoachingOnboardingCompletedVersion;
-(void)setWakeUpConfirmedUntilDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSleepTrackingOnboardingFirstCompletedDate:(NSDate *)arg1 ;
-(NSDate *)goodMorningDismissedDate;
-(void)setBedtimeSkippedDate:(NSDate *)arg1 ;
-(void)setWakeUpAlarmDismissedDate:(NSDate *)arg1 ;
-(void)setWindDownSkippedDate:(NSDate *)arg1 ;
-(NSDate *)windDownSkippedDate;
-(void)setWakeUpEarlyNotificationConfirmedDate:(NSDate *)arg1 ;
-(void)updateSleepTrackingOnboardingCompletedVersion:(long long)arg1 completedDate:(id)arg2 ;
-(void)updateSleepCoachingOnboardingCompletedVersion:(long long)arg1 completedDate:(id)arg2 ;
-(NSDate *)bedtimeSkippedDate;
-(NSDate *)sleepTrackingOnboardingFirstCompletedDate;
-(void)setSleepCoachingOnboardingCompletedVersion:(long long)arg1 ;
-(NSDate *)wakeUpAlarmDismissedDate;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDate *)sleepWindDownShortcutsOnboardingFirstCompletedDate;
-(void)setSleepWindDownShortcutsOnboardingCompletedVersion:(long long)arg1 ;
-(void)setSleepWindDownShortcutsOnboardingFirstCompletedDate:(NSDate *)arg1 ;
-(NSDate *)wakeUpAlarmSnoozedUntilDate;
-(NSDate *)sleepCoachingOnboardingFirstCompletedDate;
-(NSDate *)bedtimeDelayedUntilDate;
-(void)setGoodMorningDismissedDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)sleepTrackingOnboardingCompletedVersion;
-(NSDate *)wakeUpConfirmedUntilDate;
-(void)updateSleepWindDownShortcutsOnboardingCompletedVersion:(long long)arg1 completedDate:(id)arg2 ;
-(void)setSleepCoachingOnboardingFirstCompletedDate:(NSDate *)arg1 ;
-(void)setWakeUpAlarmSnoozedUntilDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBedtimeDelayedUntilDate:(NSDate *)arg1 ;
@end

