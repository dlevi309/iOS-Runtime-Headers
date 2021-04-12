/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSTimeZone;

@interface BCSOpenHours : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _timeRanges;
	NSTimeZone* _localTimeZone;

}

@property (nonatomic,readonly) NSDictionary * timeRanges;               //@synthesize timeRanges=_timeRanges - In the implementation block
@property (nonatomic,readonly) NSTimeZone * localTimeZone;              //@synthesize localTimeZone=_localTimeZone - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimeZone *)localTimeZone;
-(NSDictionary *)timeRanges;
-(id)initWithTimeRanges:(id)arg1 timeZone:(id)arg2 ;
-(BOOL)isOpenAtDate:(id)arg1 timeZone:(id)arg2 ;
-(long long)_weekdayOrdinalFromDate:(id)arg1 timeZone:(id)arg2 ;
-(BOOL)_validTimeRange:(id)arg1 ;
-(long long)_totalSecondsInLocalTimeFromPreviousMidnightWithDate:(id)arg1 timeZone:(id)arg2 ;
-(id)_dateWhenOpenNextAfterDate:(id)arg1 timeZone:(id)arg2 ;
-(long long)_totalSecondsInLocalTimeFromPreviousMidnightWithDate:(id)arg1 ;
-(id)_convertDateToLocalTimeZoneWithDate:(id)arg1 timeZone:(id)arg2 ;
-(id)_weekdayStringFromWeekdayIndex:(int)arg1 ;
-(BOOL)isOpenAtDate:(id)arg1 ;
-(id)dateWhenOpenNextAfterDate:(id)arg1 ;
-(long long)_weekdayOrdinalFromDate:(id)arg1 ;
-(long long)_weekdayIndexFromWeekdayString:(id)arg1 ;
-(id)_convertDateToLocalTimeZoneWithDate:(id)arg1 ;
-(void)_printOpenHoursForTheWeek;
-(id)initWithHoursMessages:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithHoursPeriodMessage:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithOpenHours:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithJSONObj:(id)arg1 timeZone:(id)arg2 ;
@end

