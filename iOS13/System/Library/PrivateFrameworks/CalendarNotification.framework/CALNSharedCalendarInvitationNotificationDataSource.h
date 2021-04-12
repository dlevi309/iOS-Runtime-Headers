/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNSharedCalendarInvitationNotificationDataSource <NSObject>
@required
-(id)fetchSharedCalendarInvitationNotificationSourceClientIdentifiers:(id)arg1;
-(id)fetchSharedCalendarInvitationNotificationWithSourceClientIdentifier:(id)arg1;
-(void)clearSharedCalendarInvitationWithSourceClientIdentifier:(id)arg1;
-(void)joinSharedCalendarWithSourceClientIdentifier:(id)arg1;
-(void)declineSharedCalendarWithSourceClientIdentifier:(id)arg1;
-(void)reportSharedCalendarAsJunkWithSourceClientIdentifier:(id)arg1;
-(id)fetchSharedCalendarInvitationNotifications;

@end

