/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol NCNotificationManagementViewPresenterDelegate <NSObject>
@optional
-(void)notificationManagementViewPresenterWillPresentManagementView:(id)arg1;
-(void)notificationManagementViewPresenterDidDismissManagementView:(id)arg1;

@required
-(id)notificationManagementViewPresenter:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2;
-(void)notificationManagementViewPresenter:(id)arg1 setAllowsNotifications:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
-(void)notificationManagementViewPresenter:(id)arg1 setDeliverQuietly:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;
-(void)notificationManagementViewPresenter:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4;

@end

