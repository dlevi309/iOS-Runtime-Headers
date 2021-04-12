/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNSourceEventRepresentationProvider <NSObject>
@required
-(id)eventRepresentationDictionaryForResponseNotificationWithTitle:(id)arg1 message:(id)arg2;
-(id)eventRepresentationDictionaryForSharedCalendarInvitationNotificationWithTitle:(id)arg1 message:(id)arg2;
-(id)eventRepresentationDictionaryForResourceChangeNotification:(id)arg1 message:(id)arg2 date:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5;
-(id)updateEventRepresentationDictionary:(id)arg1 withHypothesisMessage:(id)arg2;

@end

