/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@interface CNUIDate : NSObject
+(void)initialize;
+(id)currentCalendarGMT;
+(id)gregorianCalendarGMT;
+(id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2 ;
+(id)yearlessGregorianComponentsFromGMTDate:(id)arg1 ;
+(id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3 ;
+(id)dateByNormalizingToGMT:(id)arg1 ;
+(id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2 ;
+(id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2 ;
+(BOOL)isYearlessComponents:(id)arg1 ;
+(void)localeDidChange:(id)arg1 ;
@end

