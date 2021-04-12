/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


#import <EventKitUI/EventKitUI-Structs.h>
@interface EKStringFactory : NSObject {

	CFDateFormatterRef _standardTimeFormatter;
	CFDateFormatterRef _customFormatter;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_localeChanged:(id)arg1 ;
-(id)dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 ;
-(id)dateStringForSuggestedEventWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 showTimeZone:(BOOL)arg5 ;
-(id)dateStringForDate:(double)arg1 allDay:(BOOL)arg2 standalone:(BOOL)arg3 shortFormat:(BOOL)arg4 ;
-(void)_invalidateFormatters;
-(id)timeStringForDate:(double)arg1 inTimeZone:(id)arg2 ;
-(id)dateStringForDate:(double)arg1 allDay:(BOOL)arg2 shortFormat:(BOOL)arg3 ;
-(CFDateFormatterRef)_customFormatter;
-(CFDateFormatterRef)standardTimeFormatter;
-(id)_dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 withFormat:(unsigned long long)arg5 showTimeZone:(BOOL)arg6 ;
-(id)_stringForTime:(SCD_Struct_EK5)arg1 ;
-(id)_stringForDateTime:(SCD_Struct_EK5)arg1 timeZone:(CFTimeZoneRef)arg2 ;
-(id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2 ;
@end

