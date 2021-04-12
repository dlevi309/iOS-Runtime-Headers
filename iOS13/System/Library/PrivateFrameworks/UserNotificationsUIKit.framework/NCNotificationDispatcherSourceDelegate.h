/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationDispatcherSourceDelegate <NSObject>
@required
-(void)dispatcher:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
-(void)dispatcher:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
-(void)dispatcher:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
-(void)dispatcher:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
-(void)dispatcher:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3;
-(void)dispatcher:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3;
-(void)dispatcher:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3;

@end

