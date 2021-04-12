/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTScheduleable.h>
#import <libobjc.A.dylib/MTDictionarySerializable.h>
#import <libobjc.A.dylib/MTSerializable.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSUUID, NSNumber, NSDate, NSString, MTSound, MTIntentAlarm, NSURL;

@interface MTAlarm : NSObject <MTScheduleable, MTDictionarySerializable, MTSerializable, NAEquatable, NSSecureCoding, NSCopying, NSMutableCopying> {

	BOOL _sleepSchedule;
	BOOL _bedtimeDoNotDisturb;
	BOOL _timeInBedTracking;
	BOOL _enabled;
	BOOL _sleepAlarm;
	BOOL _allowsSnooze;
	NSUUID* _alarmID;
	unsigned long long _hour;
	unsigned long long _minute;
	unsigned long long _bedtimeHour;
	unsigned long long _bedtimeMinute;
	NSNumber* _bedtimeReminder;
	unsigned long long _bedtimeDoNotDisturbOptions;
	unsigned long long _repeatSchedule;
	unsigned long long _playOptions;
	NSDate* _lastModifiedDate;
	NSString* _title;
	MTSound* _sound;
	NSDate* _snoozeFireDate;
	NSDate* _bedtimeSnoozeFireDate;
	NSDate* _firedDate;
	NSDate* _dismissedDate;
	unsigned long long _dismissedAction;
	NSDate* _bedtimeFiredDate;
	NSDate* _bedtimeDismissedDate;
	unsigned long long _bedtimeDismissedAction;
	NSDate* _keepOffUntilDate;
	unsigned long long _onboardingVersion;
	/*^block*/id _currentDateProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MTIntentAlarm * intentAlarm; 
@property (assign,nonatomic) unsigned long long hour;                                    //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) unsigned long long minute;                                  //@synthesize minute=_minute - In the implementation block
@property (assign,nonatomic) unsigned long long bedtimeHour;                             //@synthesize bedtimeHour=_bedtimeHour - In the implementation block
@property (assign,nonatomic) unsigned long long bedtimeMinute;                           //@synthesize bedtimeMinute=_bedtimeMinute - In the implementation block
@property (assign,nonatomic) unsigned long long bedtimeReminderMinutes; 
@property (nonatomic,copy) NSNumber * bedtimeReminder;                                   //@synthesize bedtimeReminder=_bedtimeReminder - In the implementation block
@property (assign,nonatomic) BOOL bedtimeDoNotDisturb;                                   //@synthesize bedtimeDoNotDisturb=_bedtimeDoNotDisturb - In the implementation block
@property (assign,nonatomic) unsigned long long bedtimeDoNotDisturbOptions;              //@synthesize bedtimeDoNotDisturbOptions=_bedtimeDoNotDisturbOptions - In the implementation block
@property (assign,nonatomic) BOOL timeInBedTracking;                                     //@synthesize timeInBedTracking=_timeInBedTracking - In the implementation block
@property (assign,nonatomic) BOOL sleepSchedule;                                         //@synthesize sleepSchedule=_sleepSchedule - In the implementation block
@property (assign,nonatomic) unsigned long long repeatSchedule;                          //@synthesize repeatSchedule=_repeatSchedule - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) unsigned long long playOptions;                             //@synthesize playOptions=_playOptions - In the implementation block
@property (assign,getter=isSleepAlarm,nonatomic) BOOL sleepAlarm;                        //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (assign,nonatomic) BOOL allowsSnooze;                                          //@synthesize allowsSnooze=_allowsSnooze - In the implementation block
@property (nonatomic,copy) NSDate * snoozeFireDate;                                      //@synthesize snoozeFireDate=_snoozeFireDate - In the implementation block
@property (nonatomic,copy) NSDate * bedtimeSnoozeFireDate;                               //@synthesize bedtimeSnoozeFireDate=_bedtimeSnoozeFireDate - In the implementation block
@property (nonatomic,copy) NSDate * firedDate;                                           //@synthesize firedDate=_firedDate - In the implementation block
@property (nonatomic,copy) NSDate * dismissedDate;                                       //@synthesize dismissedDate=_dismissedDate - In the implementation block
@property (assign,nonatomic) unsigned long long dismissedAction;                         //@synthesize dismissedAction=_dismissedAction - In the implementation block
@property (nonatomic,copy) NSDate * lastModifiedDate;                                    //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy) NSDate * bedtimeFiredDate;                                    //@synthesize bedtimeFiredDate=_bedtimeFiredDate - In the implementation block
@property (nonatomic,copy) NSDate * bedtimeDismissedDate;                                //@synthesize bedtimeDismissedDate=_bedtimeDismissedDate - In the implementation block
@property (assign,nonatomic) unsigned long long bedtimeDismissedAction;                  //@synthesize bedtimeDismissedAction=_bedtimeDismissedAction - In the implementation block
@property (nonatomic,copy) NSDate * keepOffUntilDate;                                    //@synthesize keepOffUntilDate=_keepOffUntilDate - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) MTSound * sound;                                              //@synthesize sound=_sound - In the implementation block
@property (assign,nonatomic) unsigned long long onboardingVersion;                       //@synthesize onboardingVersion=_onboardingVersion - In the implementation block
@property (nonatomic,copy) id currentDateProvider;                                       //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,readonly) NSUUID * alarmID;                                         //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,readonly) NSURL * alarmURL; 
@property (nonatomic,readonly) BOOL repeats; 
@property (nonatomic,readonly) BOOL playsOnThisDevice; 
@property (getter=isFiring,nonatomic,readonly) BOOL firing; 
@property (getter=isSnoozed,nonatomic,readonly) BOOL snoozed; 
@property (nonatomic,readonly) NSString * displayTitle; 
@property (nonatomic,readonly) unsigned long long sleepDuration; 
@property (nonatomic,readonly) NSDate * nextFireDate; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isInternalBuild;
+(id)alarm;
+(id)sleepAlarm;
+(id)alarmWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
+(id)propertiesAffectingNotification;
+(id)propertiesAffectingSnooze;
+(unsigned long long)defaultPlayOptionsIsSleepAlarm:(BOOL)arg1 ;
+(unsigned long long)defaultBedtimeDoNotDisturbOptions;
+(id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2 ;
+(unsigned long long)defaultPlayOptions;
+(BOOL)_date:(id)arg1 isOnDay:(long long)arg2 calendar:(id)arg3 ;
+(id)descriptionForPlayOptions:(unsigned long long)arg1 ;
+(id)sleepAlarmWithHour:(long long)arg1 minute:(long long)arg2 bedtimeHour:(long long)arg3 bedtimeMinute:(long long)arg4 ;
+(id)mostRecentlyUpdatedAlarmForAlarms:(id)arg1 ;
+(id)propertiesAffectingWaketime;
+(id)propertiesAffectingBedtime;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHour:(unsigned long long)arg1 ;
-(void)setMinute:(unsigned long long)arg1 ;
-(unsigned long long)hour;
-(unsigned long long)minute;
-(id)identifier;
-(BOOL)repeats;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSUUID *)alarmID;
-(void)setSound:(MTSound *)arg1 ;
-(MTSound *)sound;
-(id)dateComponents;
-(NSDate *)lastModifiedDate;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSString *)displayTitle;
-(NSDate *)firedDate;
-(BOOL)isFiring;
-(NSDate *)dismissedDate;
-(void)setFiredDate:(NSDate *)arg1 ;
-(void)setDismissedDate:(NSDate *)arg1 ;
-(NSURL *)alarmURL;
-(unsigned long long)repeatSchedule;
-(BOOL)isSnoozed;
-(id)nextTriggerAfterDate:(id)arg1 includeBedtimeNotification:(BOOL)arg2 ;
-(BOOL)isSleepAlarm;
-(NSDate *)nextFireDate;
-(id)_initCommon;
-(void)setAllowsSnooze:(BOOL)arg1 ;
-(void)setBedtimeReminderMinutes:(unsigned long long)arg1 ;
-(void)setBedtimeHour:(unsigned long long)arg1 ;
-(void)setBedtimeMinute:(unsigned long long)arg1 ;
-(BOOL)allowsSnooze;
-(unsigned long long)bedtimeReminderMinutes;
-(unsigned long long)bedtimeHour;
-(unsigned long long)bedtimeMinute;
-(id)alarmIDString;
-(MTIntentAlarm *)intentAlarm;
-(BOOL)sleepSchedule;
-(void)setSleepSchedule:(BOOL)arg1 ;
-(BOOL)shouldBeScheduled;
-(id)upcomingTriggersAfterDate:(id)arg1 ;
-(id)currentDateProvider;
-(id)nextTriggersAfterDate:(id)arg1 includeBedtime:(BOOL)arg2 ;
-(BOOL)confirmedLastBedtimeReminder;
-(NSDate *)bedtimeDismissedDate;
-(NSDate *)keepOffUntilDate;
-(void)setKeepOffUntilDate:(NSDate *)arg1 ;
-(void)setCurrentDateProvider:(id)arg1 ;
-(void)setRepeatSchedule:(unsigned long long)arg1 ;
-(NSDate *)snoozeFireDate;
-(void)setSnoozeFireDate:(NSDate *)arg1 ;
-(BOOL)isBedtimeSnoozed;
-(void)setDismissedAction:(unsigned long long)arg1 ;
-(void)setBedtimeSnoozeFireDate:(NSDate *)arg1 ;
-(void)setBedtimeDismissedDate:(NSDate *)arg1 ;
-(void)setBedtimeDismissedAction:(unsigned long long)arg1 ;
-(BOOL)isEqualToAlarm:(id)arg1 ;
-(NSDate *)bedtimeSnoozeFireDate;
-(NSDate *)bedtimeFiredDate;
-(void)setBedtimeFiredDate:(NSDate *)arg1 ;
-(void)setSleepAlarm:(BOOL)arg1 ;
-(id)nextTriggerAfterDate:(id)arg1 ;
-(id)intentLabel;
-(id)alarmIDIntentObject;
-(id)alarmIntentDisplayString;
-(id)timeObject;
-(BOOL)timeInBedTracking;
-(unsigned long long)bedtimeDismissedAction;
-(id)bedtimeComponents;
-(id)nextTriggersAfterDate:(id)arg1 inclusionOptions:(unsigned long long)arg2 ;
-(id)nextExpectedWakeUpDateAfterDate:(id)arg1 ;
-(id)nextExpectedBedtimeDateAfterDate:(id)arg1 ;
-(id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 ;
-(void)setPlayOptions:(unsigned long long)arg1 ;
-(void)setBedtimeDoNotDisturbOptions:(unsigned long long)arg1 ;
-(id)initWithCurrentTimeFromCurrentDateProvider:(/*^block*/id)arg1 ;
-(id)initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 currentDateProvider:(/*^block*/id)arg3 ;
-(double)sleepDurationSeconds;
-(id)nextTrigger;
-(id)nextFireDateAfterDate:(id)arg1 includeBedtimeNotification:(BOOL)arg2 ;
-(id)nextTriggerAfterDate:(id)arg1 includeSnooze:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(id)nextTriggersAfterDate:(id)arg1 includeSnooze:(BOOL)arg2 includeBedtimeNotification:(BOOL)arg3 ;
-(id)_earliestTriggerDateForDate:(id)arg1 ;
-(id)_nextDateHelperWithDate:(id)arg1 calendar:(id)arg2 ;
-(id)_nextBedtimeTriggersHelperWithDate:(id)arg1 wakeUpDate:(id)arg2 inclusionOptions:(unsigned long long)arg3 calendar:(id)arg4 ;
-(NSNumber *)bedtimeReminder;
-(BOOL)_isEqualToAlarm:(id)arg1 checkLastModified:(BOOL)arg2 ;
-(BOOL)bedtimeDoNotDisturb;
-(unsigned long long)bedtimeDoNotDisturbOptions;
-(unsigned long long)playOptions;
-(unsigned long long)onboardingVersion;
-(unsigned long long)dismissedAction;
-(void)_copyStateOntoAlarm:(id)arg1 ;
-(void)setBedtimeReminder:(NSNumber *)arg1 ;
-(void)setBedtimeDoNotDisturb:(BOOL)arg1 ;
-(void)setTimeInBedTracking:(BOOL)arg1 ;
-(void)setOnboardingVersion:(unsigned long long)arg1 ;
-(id)initFromDeserializer:(id)arg1 ;
-(void)_updatePropertiesFromDeserializer:(id)arg1 ;
-(void)serializeWithSerializer:(id)arg1 ;
-(BOOL)playsOnThisDevice;
-(void)setFiring:(BOOL)arg1 ;
-(unsigned long long)sleepDuration;
-(id)nextFireDateAfterDate:(id)arg1 ;
-(id)nextTriggerAfterDate:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)nextTriggersAfterDate:(id)arg1 ;
-(BOOL)isEqualIgnoringLastModifiedDate:(id)arg1 ;
@end

