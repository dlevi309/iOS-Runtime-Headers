/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_HD22 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeZone:(NSString *)arg1 ;
-(void)setYear:(long long)arg1 ;
-(void)setMonth:(long long)arg1 ;
-(void)setDay:(long long)arg1 ;
-(void)setHour:(long long)arg1 ;
-(void)setMinute:(long long)arg1 ;
-(void)setSecond:(long long)arg1 ;
-(NSString *)calendar;
-(void)setCalendar:(NSString *)arg1 ;
-(NSString *)timeZone;
-(long long)era;
-(void)setEra:(long long)arg1 ;
-(long long)year;
-(long long)quarter;
-(void)setQuarter:(long long)arg1 ;
-(long long)month;
-(long long)day;
-(long long)hour;
-(long long)minute;
-(long long)second;
-(long long)nanosecond;
-(void)setNanosecond:(long long)arg1 ;
-(long long)weekOfYear;
-(void)setWeekOfYear:(long long)arg1 ;
-(long long)weekOfMonth;
-(void)setWeekOfMonth:(long long)arg1 ;
-(long long)yearForWeekOfYear;
-(void)setYearForWeekOfYear:(long long)arg1 ;
-(long long)weekday;
-(void)setWeekday:(long long)arg1 ;
-(long long)weekdayOrdinal;
-(void)setWeekdayOrdinal:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSecond;
-(BOOL)hasMonth;
-(void)setHasMonth:(BOOL)arg1 ;
-(BOOL)hasYear;
-(void)setHasYear:(BOOL)arg1 ;
-(void)setHasDay:(BOOL)arg1 ;
-(BOOL)hasDay;
-(void)setHasHour:(BOOL)arg1 ;
-(BOOL)hasHour;
-(void)setHasEra:(BOOL)arg1 ;
-(BOOL)hasEra;
-(BOOL)hasCalendar;
-(BOOL)hasTimeZone;
-(void)setHasMinute:(BOOL)arg1 ;
-(BOOL)hasMinute;
-(void)setHasSecond:(BOOL)arg1 ;
-(void)setHasWeekday:(BOOL)arg1 ;
-(BOOL)hasWeekday;
-(void)setHasWeekdayOrdinal:(BOOL)arg1 ;
-(BOOL)hasWeekdayOrdinal;
-(void)setHasQuarter:(BOOL)arg1 ;
-(BOOL)hasQuarter;
-(void)setHasWeekOfMonth:(BOOL)arg1 ;
-(BOOL)hasWeekOfMonth;
-(void)setHasWeekOfYear:(BOOL)arg1 ;
-(BOOL)hasWeekOfYear;
-(void)setHasYearForWeekOfYear:(BOOL)arg1 ;
-(BOOL)hasYearForWeekOfYear;
-(void)setHasNanosecond:(BOOL)arg1 ;
-(BOOL)hasNanosecond;
@end

