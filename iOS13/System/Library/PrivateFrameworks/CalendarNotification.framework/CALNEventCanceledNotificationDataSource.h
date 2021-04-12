/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
*/


@protocol CALNEventCanceledNotificationDataSource <NSObject>
@required
-(id)fetchEventCanceledNotificationSourceClientIdentifiers:(id)arg1;
-(id)fetchEventCanceledNotificationWithSourceClientIdentifier:(id)arg1;
-(id)fetchEventCanceledNotifications;
-(void)clearCanceledEventNotificationWithSourceClientIdentifier:(id)arg1;
-(void)deleteCanceledEventWithSourceClientIdentifier:(id)arg1;

@end
