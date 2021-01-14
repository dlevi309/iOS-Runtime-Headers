/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNSourceEventRepresentationProvider <NSObject>
@required
-(id)updateEventRepresentationDictionary:(id)arg1 withHypothesisMessage:(id)arg2;
-(id)eventRepresentationDictionaryForSharedCalendarInvitationNotificationWithTitle:(id)arg1 message:(id)arg2;
-(id)eventRepresentationDictionaryForResourceChangeNotification:(id)arg1 message:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5;
-(id)eventRepresentationDictionaryForResponseNotificationWithTitle:(id)arg1 message:(id)arg2;

@end

