/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@interface CALNNotificationDataSourceUtils : NSObject
+(void)respondToSharedCalendarInvitationWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 withDataAccessExpressConnection:(id)arg3 accept:(BOOL)arg4 ;
+(id)eventWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 ;
+(void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 ;
+(id)objectIDWithSourceClientIdentifier:(id)arg1 ;
+(void)reportSharedCalendarInvitationAsJunkWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 ;
+(void)hideCalendarFromNotificationCenter:(id)arg1 inEventStore:(id)arg2 ;
+(id)sourceClientIdentifierForNotification:(id)arg1 ;
+(id)calendarWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 ;
+(id)notificationReferenceOfType:(int)arg1 withSourceClientIdentifier:(id)arg2 inEventStore:(id)arg3 withNotificationReferenceProvider:(id)arg4 ;
@end

