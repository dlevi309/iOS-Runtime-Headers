/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol AlarmDelegate;
@class NSDate, NSMutableDictionary, NSArray, NSString, NSURL, NSDictionary, NSNumber;

@interface Alarm : NSObject {

	unsigned _hour;
	unsigned _minute;
	unsigned _daySetting;
	BOOL _allowsSnooze;
	NSDate* _lastModified;
	unsigned _revision;
	Alarm* _editingProxy;
	BOOL _pretendActiveIfProxy;
	NSMutableDictionary* _settings;
	NSArray* _repeatDays;
	NSString* _vibrationID;
	BOOL _snoozed;
	BOOL _isSleepAlarm;
	BOOL _forceActiveForMigration;
	long long _soundType;
	NSString* _sound;
	NSString* _title;
	id<AlarmDelegate> _delegate;
	NSString* _alarmID;
	NSURL* _alarmIDURL;

}

@property (nonatomic,retain) NSString * alarmID;                             //@synthesize alarmID=_alarmID - In the implementation block
@property (nonatomic,retain) NSURL * alarmIDURL;                             //@synthesize alarmIDURL=_alarmIDURL - In the implementation block
@property (nonatomic,readonly) Alarm * editingProxy;                         //@synthesize editingProxy=_editingProxy - In the implementation block
@property (nonatomic,readonly) NSDictionary * settings; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isSnoozed,nonatomic,readonly) BOOL snoozed;                //@synthesize snoozed=_snoozed - In the implementation block
@property (assign,nonatomic) BOOL isSleepAlarm;                              //@synthesize isSleepAlarm=_isSleepAlarm - In the implementation block
@property (nonatomic,copy) NSNumber * bedtimeReminderMinutes; 
@property (assign,nonatomic) unsigned hour;                                  //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) unsigned minute;                                //@synthesize minute=_minute - In the implementation block
@property (assign,nonatomic) long long bedtimeHour; 
@property (assign,nonatomic) long long bedtimeMinute; 
@property (nonatomic,readonly) BOOL repeats; 
@property (nonatomic,readonly) NSArray * repeatDays; 
@property (assign,nonatomic) unsigned daySetting;                            //@synthesize daySetting=_daySetting - In the implementation block
@property (assign,nonatomic) BOOL allowsSnooze;                              //@synthesize allowsSnooze=_allowsSnooze - In the implementation block
@property (nonatomic,readonly) long long soundType;                          //@synthesize soundType=_soundType - In the implementation block
@property (nonatomic,readonly) NSString * sound;                             //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy) NSNumber * soundVolume; 
@property (nonatomic,readonly) NSString * uiTitle; 
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * vibrationID; 
@property (nonatomic,readonly) NSDate * lastModified;                        //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,readonly) unsigned revision;                            //@synthesize revision=_revision - In the implementation block
@property (assign,nonatomic,__weak) id<AlarmDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL forceActiveForMigration;                   //@synthesize forceActiveForMigration=_forceActiveForMigration - In the implementation block
+(BOOL)verifyIdSetting:(id)arg1 withMessageList:(id)arg2 ;
+(BOOL)verifyHourSetting:(id)arg1 withMessageList:(id)arg2 ;
+(BOOL)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2 ;
+(BOOL)verifyDaySetting:(id)arg1 withMessageList:(id)arg2 ;
+(/*^block*/id)timeComparator;
+(BOOL)verifySettings:(id)arg1 ;
-(unsigned)hour;
-(NSString *)sound;
-(void)setHour:(unsigned)arg1 ;
-(void)applyChangesFromEditingProxy;
-(id)nowDateForOffsetCalculation;
-(id)timeZoneForOffsetCalculation;
-(id)_newBaseDateComponentsForDay:(long long)arg1 ;
-(void)markModified;
-(long long)compareTime:(id)arg1 ;
-(NSURL *)alarmIDURL;
-(NSArray *)repeatDays;
-(id)alarmSoundIdentifier;
-(long long)alarmSoundType;
-(void)setAlarmSoundIdentifier:(id)arg1 ofType:(long long)arg2 ;
-(id)alarmSoundVolume;
-(void)setAlarmSoundVolume:(id)arg1 ;
-(Alarm *)editingProxy;
-(BOOL)forceActiveForMigration;
-(void)setForceActiveForMigration:(BOOL)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)setBedtimeReminderMinutes:(NSNumber *)arg1 ;
-(NSNumber *)soundVolume;
-(id)init;
-(unsigned)minute;
-(id<AlarmDelegate>)delegate;
-(BOOL)isActive;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)repeats;
-(id)debugDescription;
-(NSDate *)lastModified;
-(long long)soundType;
-(long long)bedtimeHour;
-(void)setDelegate:(id<AlarmDelegate>)arg1 ;
-(BOOL)isSnoozed;
-(id)description;
-(void)setMinute:(unsigned)arg1 ;
-(NSString *)alarmID;
-(NSString *)uiTitle;
-(NSDictionary *)settings;
-(void)setBedtimeMinute:(long long)arg1 ;
-(void)setAlarmID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)applySettings:(id)arg1 ;
-(void)setBedtimeHour:(long long)arg1 ;
-(BOOL)isSleepAlarm;
-(long long)bedtimeMinute;
-(void)setAllowsSnooze:(BOOL)arg1 ;
-(void)setSoundVolume:(NSNumber *)arg1 ;
-(void)setSound:(id)arg1 ofType:(long long)arg2 ;
-(void)setVibrationID:(NSString *)arg1 ;
-(void)setDaySetting:(unsigned)arg1 ;
-(void)setIsSleepAlarm:(BOOL)arg1 ;
-(void)dropEditingProxy;
-(void)setAlarmIDURL:(NSURL *)arg1 ;
-(unsigned)daySetting;
-(NSString *)vibrationID;
-(void)prepareEditingProxy;
-(void)refreshActiveState;
-(BOOL)allowsSnooze;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)bedtimeReminderMinutes;
-(unsigned)revision;
@end

