/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@interface CALNNotificationDataSourceUtils : NSObject
+(id)sourceClientIdentifierForNotification:(id)arg1 ;
+(id)notificationReferenceOfType:(int)arg1 withSourceClientIdentifier:(id)arg2 inEventStore:(id)arg3 withNotificationReferenceProvider:(id)arg4 ;
+(id)eventWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 ;
+(id)calendarWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 ;
+(id)objectIDWithSourceClientIdentifier:(id)arg1 ;
+(void)hideCalendarFromNotificationCenter:(id)arg1 inEventStore:(id)arg2 ;
+(void)respondToSharedCalendarInvitationWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 withDataAccessExpressConnection:(id)arg3 accept:(BOOL)arg4 ;
+(void)reportSharedCalendarInvitationAsJunkWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 ;
+(void)clearSharedCalendarInvitationResponseWithSourceClientIdentifier:(id)arg1 inEventStore:(id)arg2 ;
@end

