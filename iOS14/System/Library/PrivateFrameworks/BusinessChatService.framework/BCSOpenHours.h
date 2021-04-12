/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSTimeZone *)localTimeZone;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)timeRanges;
-(id)copyWithZone:(NSZone*)arg1 ;
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
-(id)initWithHoursMessages:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithHoursPeriodMessage:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithOpenHours:(id)arg1 timeZone:(id)arg2 ;
-(id)initWithJSONObj:(id)arg1 timeZone:(id)arg2 ;
@end

