/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@interface CNUIDate : NSObject
+(void)initialize;
+(void)localeDidChange:(id)arg1 ;
+(id)currentCalendarGMT;
+(id)gregorianCalendarGMT;
+(id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2 ;
+(id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3 ;
+(id)yearlessGregorianComponentsFromGMTDate:(id)arg1 ;
+(id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2 ;
+(id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2 ;
+(id)dateByNormalizingToGMT:(id)arg1 ;
+(BOOL)isYearlessComponents:(id)arg1 ;
@end

