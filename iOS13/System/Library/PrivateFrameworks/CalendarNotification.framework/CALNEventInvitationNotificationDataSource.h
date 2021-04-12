/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNEventInvitationNotificationDataSource <NSObject>
@required
-(id)fetchEventInvitationNotificationWithSourceClientIdentifier:(id)arg1;
-(id)fetchEventInvitationNotificationSourceClientIdentifiers:(id)arg1;
-(void)clearEventInvitationWithSourceClientIdentifier:(id)arg1;
-(void)acceptEventInvitationWithSourceClientIdentifier:(id)arg1;
-(void)declineEventInvitationWithSourceClientIdentifier:(id)arg1;
-(void)tentativeAcceptEventInvitationWithSourceClientIdentifier:(id)arg1;
-(void)reportEventInvitationAsJunkWithSourceClientIdentifier:(id)arg1;
-(id)fetchEventInvitationNotifications;

@end

