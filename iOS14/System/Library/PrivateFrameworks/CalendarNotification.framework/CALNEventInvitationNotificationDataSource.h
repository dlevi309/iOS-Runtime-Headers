/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNEventInvitationNotificationDataSource <NSObject>
@required
-(id)fetchEventInvitationNotificationWithSourceClientIdentifier:(id)arg1;
-(void)declineEventInvitationWithSourceClientIdentifier:(id)arg1;
-(void)reportEventInvitationAsJunkWithSourceClientIdentifier:(id)arg1;
-(id)fetchEventInvitationNotificationSourceClientIdentifiers:(id)arg1;
-(void)acceptEventInvitationWithSourceClientIdentifier:(id)arg1;
-(void)tentativeAcceptEventInvitationWithSourceClientIdentifier:(id)arg1;
-(void)clearEventInvitationWithSourceClientIdentifier:(id)arg1;
-(id)fetchEventInvitationNotifications;

@end

