/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <iCalendar/ICSComponent.h>

@class NSString;

@interface ICSTimeZone : ICSComponent {

	id _systemTimeZone;

}

@property (nonatomic,retain) NSString * tzid; 
+(id)name;
+(id)timeZoneWithSystemTimeZoneName:(id)arg1 ;
+(BOOL)_isTimeZone:(id)arg1 pseudoDSTForDate:(id)arg2 ;
+(id)blocksAfterDate:(id)arg1 untilDate:(id)arg2 forTimeZone:(id)arg3 ;
+(long long)matchTypeForSubarray:(id)arg1 inTZChangeArray:(id)arg2 ;
+(id)quickTimeZoneNames;
+(id)slowTimeZoneNames;
+(BOOL)perfectMatchForSubarray:(id)arg1 inTZChangeArray:(id)arg2 ;
-(NSString *)tzid;
-(id)systemTimeZoneForDate:(id)arg1 ;
-(void)setTzid:(NSString *)arg1 ;
-(id)initWithTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3 ;
-(id)getNSTimeZone:(id)arg1 ;
-(id)initWithSystemTimeZone:(id)arg1 fromDate:(id)arg2 options:(int)arg3 ;
-(id)_previousDSTTransitionForDate:(id)arg1 timezone:(id)arg2 ;
-(id)initWithSystemTimeZone:(id)arg1 ;
-(id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)getNSTimeZoneFromDate:(id)arg1 toDate:(id)arg2 ;
-(BOOL)isEqualToNSTimeZone:(id)arg1 forDate:(id)arg2 ;
@end

