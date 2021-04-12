/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSDate : ICSProperty

@property (nonatomic,retain) NSString * tzid; 
-(id)copyDateWithNewComponents:(id)arg1 ;
-(id)gregorianCalendarDateByAddingDuration:(id)arg1 ;
-(id)gmtOffsetTimeZoneWithCalendar:(id)arg1 withEvent:(id)arg2 ;
-(id)validatedCompleteDateTime;
-(id)endDateWithDuration:(id)arg1 ;
-(id)systemTimeZoneWithCalendar:(id)arg1 withEvent:(id)arg2 withCorrectnessFlag:(BOOL*)arg3 ;
-(id)rem_dateWithICSCalendar:(id)arg1 ;
-(id)rem_dateAsUTC;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7 ;
-(NSString *)tzid;
-(id)initWithValue:(id)arg1 ;
-(id)components;
-(id)description;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 ;
-(BOOL)hasFloatingTimeZone;
-(BOOL)hasTimeComponent;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
-(void)setTzid:(NSString *)arg1 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
@end

