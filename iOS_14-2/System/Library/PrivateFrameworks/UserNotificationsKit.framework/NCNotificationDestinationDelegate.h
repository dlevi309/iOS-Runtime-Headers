/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
*/


@protocol NCNotificationDestinationDelegate <NCNotificationSectionSettingsProvider>
@optional
-(void)destination:(id)arg1 setDeliverQuietly:(BOOL)arg2 forSectionIdentifier:(id)arg3;
-(void)destination:(id)arg1 setAllowsNotifications:(BOOL)arg2 forSectionIdentifier:(id)arg3;
-(void)destination:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forSectionIdentifier:(id)arg3;

@required
-(void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(/*^block*/id)arg5;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
-(void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
-(void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(BOOL)arg4 withParameters:(id)arg5 completion:(/*^block*/id)arg6;
-(void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;

@end

