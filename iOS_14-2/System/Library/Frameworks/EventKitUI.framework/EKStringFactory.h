/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


#import <EventKitUI/EventKitUI-Structs.h>
@interface EKStringFactory : NSObject {

	CFDateFormatterRef _standardTimeFormatter;
	CFDateFormatterRef _customFormatter;

}
+(id)sharedInstance;
-(id)init;
-(id)dateStringForDate:(double)arg1 allDay:(BOOL)arg2 shortFormat:(BOOL)arg3 ;
-(id)dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 ;
-(id)dateStringForSuggestedEventWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 showTimeZone:(BOOL)arg5 ;
-(void)_invalidateFormatters;
-(void)_localeChanged:(id)arg1 ;
-(id)timeStringForDate:(double)arg1 inTimeZone:(id)arg2 ;
-(id)_stringForTime:(SCD_Struct_EK5)arg1 ;
-(CFDateFormatterRef)_customFormatter;
-(id)_stringForDateTime:(SCD_Struct_EK5)arg1 timeZone:(CFTimeZoneRef)arg2 ;
-(CFDateFormatterRef)standardTimeFormatter;
-(id)dateStringForDate:(double)arg1 allDay:(BOOL)arg2 standalone:(BOOL)arg3 shortFormat:(BOOL)arg4 ;
-(id)_dateStringForEventInvitationWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 allDay:(BOOL)arg4 withFormat:(unsigned long long)arg5 showTimeZone:(BOOL)arg6 ;
-(id)dateStringForEventInvitation:(id)arg1 timeZone:(id)arg2 ;
-(void)dealloc;
@end

