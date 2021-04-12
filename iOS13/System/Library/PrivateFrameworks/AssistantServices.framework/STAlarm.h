/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long daysOfWeek;                       //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (assign,nonatomic) long long hourOfDay;                        //@synthesize hourOfDay=_hourOfDay - In the implementation block
@property (assign,nonatomic) long long minuteOfHour;                     //@synthesize minuteOfHour=_minuteOfHour - In the implementation block
@property (nonatomic,copy) NSString * label;                             //@synthesize label=_label - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)hourOfDay;
-(long long)minuteOfHour;
-(BOOL)isEnabled;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setHourOfDay:(long long)arg1 ;
-(void)setMinuteOfHour:(long long)arg1 ;
-(long long)daysOfWeek;
-(void)setDaysOfWeek:(long long)arg1 ;
@end

