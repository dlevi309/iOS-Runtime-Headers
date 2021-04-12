/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@interface CalChronometry : NSObject
+(void)initialize;
+(id)currentLanguageCode;
+(id)activeTimeZone;
+(id)activeCalendar;
+(void)_configureChronometry;
+(void)_updateActiveCalendar;
+(void)_currentLocaleDidChange:(id)arg1 ;
+(void)_currentTimeZoneDidChange:(id)arg1 ;
+(void)_updateForLocaleChange;
+(void)_updateEveything;
+(void)_updateActiveTimeZone;
+(void)setActiveTimeZone:(id)arg1 ;
+(id)currentLocationCode;
@end

