/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNSharedCalendarInvitationNotificationDataSource <NSObject>
@required
-(id)fetchSharedCalendarInvitationNotificationSourceClientIdentifiers:(id)arg1;
-(id)fetchSharedCalendarInvitationNotificationWithSourceClientIdentifier:(id)arg1;
-(void)clearSharedCalendarInvitationWithSourceClientIdentifier:(id)arg1;
-(void)declineSharedCalendarWithSourceClientIdentifier:(id)arg1;
-(id)fetchSharedCalendarInvitationNotifications;
-(void)joinSharedCalendarWithSourceClientIdentifier:(id)arg1;
-(void)reportSharedCalendarAsJunkWithSourceClientIdentifier:(id)arg1;

@end

