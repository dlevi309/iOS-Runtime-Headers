/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HDCodableDateComponents : PBCodable <NSCopying> {

	long long _day;
	long long _era;
	long long _hour;
	long long _minute;
	long long _month;
	long long _nanosecond;
	long long _quarter;
	long long _second;
	long long _weekOfMonth;
	long long _weekOfYear;
	long long _weekday;
	long long _weekdayOrdinal;
	long long _year;
	long long _yearForWeekOfYear;
	NSString* _calendar;
	NSString* _timeZone;
	SCD_Struct_HD79 _has;

}

@property (assign,nonatomic) BOOL hasEra; 
@property (assign,nonatomic) long long era;                            //@synthesize era=_era - In the implementation block
@property (assign,nonatomic) BOOL hasYear; 
@property (assign,nonatomic) long long year;                           //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) BOOL hasMonth; 
@property (assign,nonatomic) long long month;                          //@synthesize month=_month - In the implementation block
@property (assign,nonatomic) BOOL hasDay; 
@property (assign,nonatomic) long long day;                            //@synthesize day=_day - In the implementation block
@property (assign,nonatomic) BOOL hasHour; 
@property (assign,nonatomic) long long hour;                           //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) BOOL hasMinute; 
@property (assign,nonatomic) long long minute;                         //@synthesize minute=_minute - In the implementation block
@property (assign,nonatomic) BOOL hasSecond; 
@property (assign,nonatomic) long long second;                         //@synthesize second=_second - In the implementation block
@property (assign,nonatomic) BOOL hasWeekday; 
@property (assign,nonatomic) long long weekday;                        //@synthesize weekday=_weekday - In the implementation block
@property (assign,nonatomic) BOOL hasWeekdayOrdinal; 
@property (assign,nonatomic) long long weekdayOrdinal;                 //@synthesize weekdayOrdinal=_weekdayOrdinal - In the implementation block
@property (assign,nonatomic) BOOL hasQuarter; 
@property (assign,nonatomic) long long quarter;                        //@synthesize quarter=_quarter - In the implementation block
@property (assign,nonatomic) BOOL hasWeekOfMonth; 
@property (assign,nonatomic) long long weekOfMonth;                    //@synthesize weekOfMonth=_weekOfMonth - In the implementation block
@property (assign,nonatomic) BOOL hasWeekOfYear; 
@property (assign,nonatomic) long long weekOfYear;                     //@synthesize weekOfYear=_weekOfYear - In the implementation block
@property (assign,nonatomic) BOOL hasYearForWeekOfYear; 
@property (assign,nonatomic) long long yearForWeekOfYear;              //@synthesize yearForWeekOfYear=_yearForWeekOfYear - In the implementation block
@property (assign,nonatomic) BOOL hasNanosecond; 
@property (assign,nonatomic) long long nanosecond;                     //@synthesize nanosecond=_nanosecond - In the implementation block
@property (nonatomic,readonly) BOOL hasCalendar; 
@property (nonatomic,retain) NSString * calendar;                      //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) BOOL hasTimeZone; 
@property (nonatomic,retain) NSString * timeZone;                      //@synthesize timeZone=_timeZone - In the implementation block
-(long long)hour;
-(void)setEra:(long long)arg1 ;
-(long long)quarter;
-(long long)weekday;
-(long long)second;
-(long long)nanosecond;
-(void)setQuarter:(long long)arg1 ;
-(long long)weekOfMonth;
-(void)setWeekday:(long long)arg1 ;
-(void)setWeekOfMonth:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)setYear:(long long)arg1 ;
-(void)setNanosecond:(long long)arg1 ;
-(void)setWeekOfYear:(long long)arg1 ;
-(long long)weekdayOrdinal;
-(long long)day;
-(long long)yearForWeekOfYear;
-(void)setWeekdayOrdinal:(long long)arg1 ;
-(void)setYearForWeekOfYear:(long long)arg1 ;
-(long long)year;
-(NSString *)timeZone;
-(void)setMonth:(long long)arg1 ;
-(long long)month;
-(void)setDay:(long long)arg1 ;
-(long long)weekOfYear;
-(void)setHour:(long long)arg1 ;
-(void)setTimeZone:(NSString *)arg1 ;
-(BOOL)hasDay;
-(void)setCalendar:(NSString *)arg1 ;
-(long long)minute;
-(NSString *)calendar;
-(void)setHasMonth:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasEra;
-(void)setHasHour:(BOOL)arg1 ;
-(void)setHasMinute:(BOOL)arg1 ;
-(BOOL)hasMinute;
-(long long)era;
-(id)description;
-(void)setMinute:(long long)arg1 ;
-(BOOL)hasHour;
-(BOOL)hasSecond;
-(unsigned long long)hash;
-(BOOL)hasMonth;
-(BOOL)hasYear;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDay:(BOOL)arg1 ;
-(void)setHasYear:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecond:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasWeekday;
-(BOOL)hasWeekdayOrdinal;
-(BOOL)hasQuarter;
-(BOOL)hasWeekOfMonth;
-(BOOL)hasWeekOfYear;
-(BOOL)hasYearForWeekOfYear;
-(BOOL)hasNanosecond;
-(BOOL)hasCalendar;
-(BOOL)hasTimeZone;
-(void)setHasEra:(BOOL)arg1 ;
-(void)setHasSecond:(BOOL)arg1 ;
-(void)setHasWeekday:(BOOL)arg1 ;
-(void)setHasWeekdayOrdinal:(BOOL)arg1 ;
-(void)setHasQuarter:(BOOL)arg1 ;
-(void)setHasWeekOfMonth:(BOOL)arg1 ;
-(void)setHasWeekOfYear:(BOOL)arg1 ;
-(void)setHasYearForWeekOfYear:(BOOL)arg1 ;
-(void)setHasNanosecond:(BOOL)arg1 ;
@end

