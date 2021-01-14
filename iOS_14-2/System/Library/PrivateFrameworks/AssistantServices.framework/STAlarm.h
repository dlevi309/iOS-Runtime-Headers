/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/STSiriModelObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface STAlarm : STSiriModelObject <NSCopying> {

	BOOL _enabled;
	long long _daysOfWeek;
	long long _hourOfDay;
	long long _minuteOfHour;
	NSString* _label;
	BOOL _sleepAlarm;
	BOOL _overrideAlarm;
	long long _bedtimeHour;
	long long _bedtimeMinute;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long daysOfWeek;                                   //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (assign,nonatomic) long long hourOfDay;                                    //@synthesize hourOfDay=_hourOfDay - In the implementation block
@property (assign,nonatomic) long long minuteOfHour;                                 //@synthesize minuteOfHour=_minuteOfHour - In the implementation block
@property (nonatomic,copy) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (assign,getter=isSleepAlarm,nonatomic) BOOL sleepAlarm;                    //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (assign,getter=isOverrideAlarm,nonatomic) BOOL overrideAlarm;              //@synthesize overrideAlarm=_overrideAlarm - In the implementation block
@property (assign,nonatomic) long long bedtimeHour;                                  //@synthesize bedtimeHour=_bedtimeHour - In the implementation block
@property (assign,nonatomic) long long bedtimeMinute;                                //@synthesize bedtimeMinute=_bedtimeMinute - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSleepAlarm:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)minuteOfHour;
-(void)setMinuteOfHour:(long long)arg1 ;
-(long long)bedtimeHour;
-(void)setBedtimeMinute:(long long)arg1 ;
-(long long)daysOfWeek;
-(id)initWithCoder:(id)arg1 ;
-(long long)hourOfDay;
-(void)setBedtimeHour:(long long)arg1 ;
-(void)setDaysOfWeek:(long long)arg1 ;
-(BOOL)isOverrideAlarm;
-(void)setOverrideAlarm:(BOOL)arg1 ;
-(void)setHourOfDay:(long long)arg1 ;
-(BOOL)isSleepAlarm;
-(long long)bedtimeMinute;
-(BOOL)isEnabled;
-(void)setLabel:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
@end

