/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCalendar, NSTimeZone, NSString, NSDictionary;

@interface FMFSchedule : NSObject <NSSecureCoding, NSCopying> {

	NSCalendar* _gregorian;
	unsigned long long _startHour;
	unsigned long long _startMin;
	long long _daysOfWeek;
	unsigned long long _endHour;
	unsigned long long _endMin;
	unsigned long long _spanDays;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSString * localizedDaysOfWeekString; 
@property (nonatomic,readonly) NSString * localizedStartTimeString; 
@property (nonatomic,readonly) NSString * localizedEndTimeString; 
@property (nonatomic,readonly) NSCalendar * _gregorian;                           //@synthesize gregorian=_gregorian - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (readonly) NSString * validityError; 
@property (assign,nonatomic) unsigned long long startHour;                        //@synthesize startHour=_startHour - In the implementation block
@property (assign,nonatomic) unsigned long long startMin;                         //@synthesize startMin=_startMin - In the implementation block
@property (assign,nonatomic) long long daysOfWeek;                                //@synthesize daysOfWeek=_daysOfWeek - In the implementation block
@property (assign,nonatomic) unsigned long long endHour;                          //@synthesize endHour=_endHour - In the implementation block
@property (assign,nonatomic) unsigned long long endMin;                           //@synthesize endMin=_endMin - In the implementation block
@property (assign,nonatomic) unsigned long long spanDays;                         //@synthesize spanDays=_spanDays - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                               //@synthesize timeZone=_timeZone - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedTimeStringForHour:(unsigned long long)arg1 andMinute:(unsigned long long)arg2 ;
+(id)_dayStringForDayOfWeek:(long long)arg1 ;
+(id)localizedDaysOfWeekStringFor:(long long)arg1 ;
+(id)firstDateFromDates:(id)arg1 order:(long long)arg2 ;
+(void)_enumerateDaysOfWeekInFMFDaysOfWeek:(long long)arg1 callback:(/*^block*/id)arg2 ;
+(id)_dateFromHour:(unsigned long long)arg1 andMinute:(unsigned long long)arg2 ;
+(id)localizedTimeStringForHour:(unsigned long long)arg1 andMinute:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3 ;
+(id)_stringForDaysOfWeek:(long long)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)endMin;
-(NSDictionary *)dictionary;
-(long long)daysOfWeek;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setDaysOfWeek:(long long)arg1 ;
-(id)_daysOfWeek;
-(unsigned long long)endHour;
-(NSCalendar *)_gregorian;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStartHour:(unsigned long long)arg1 ;
-(void)setEndHour:(unsigned long long)arg1 ;
-(void)setStartMin:(unsigned long long)arg1 ;
-(void)setEndMin:(unsigned long long)arg1 ;
-(void)setSpanDays:(unsigned long long)arg1 ;
-(NSString *)validityError;
-(unsigned long long)startHour;
-(unsigned long long)startMin;
-(unsigned long long)spanDays;
-(id)nextStartDateFrom:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_endDateForStartDate:(id)arg1 ;
-(id)_nextStartDateOnDayOfWeek:(long long)arg1 from:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)isCurrentAt:(id)arg1 ;
-(id)nextStartOrEndDateFrom:(id)arg1 ;
-(id)previousStartDateFrom:(id)arg1 ;
-(NSString *)localizedDaysOfWeekString;
-(NSString *)localizedStartTimeString;
-(NSString *)localizedEndTimeString;
@end

