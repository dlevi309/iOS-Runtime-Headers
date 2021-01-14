/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/

#import <libobjc.A.dylib/NCNotificationManagementControllerSettingsDelegate.h>

@protocol NCNotificationManagementViewPresenterDelegate;
@class UIAlertController, NSString;

@interface NCNotificationManagementViewPresenter : NSObject <NCNotificationManagementControllerSettingsDelegate> {

	id<NCNotificationManagementViewPresenterDelegate> _delegate;
	UIAlertController* _notificationManagementAlertViewController;

}

@property (nonatomic,retain) UIAlertController * notificationManagementAlertViewController;                  //@synthesize notificationManagementAlertViewController=_notificationManagementAlertViewController - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationManagementViewPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NCNotificationManagementViewPresenterDelegate>)delegate;
-(void)notificationManagementController:(id)arg1 setDeliverQuietly:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)notificationManagementController:(id)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(BOOL)dismissManagementViewIfPresentedAnimated:(BOOL)arg1 ;
-(void)notificationManagementControllerDidDismissManagementView:(id)arg1 ;
-(void)notificationManagementController:(id)arg1 setAllowsNotifications:(BOOL)arg2 forNotificationRequest:(id)arg3 withSectionIdentifier:(id)arg4 ;
-(void)setDelegate:(id<NCNotificationManagementViewPresenterDelegate>)arg1 ;
-(void)presentNotificationManagementViewType:(unsigned long long)arg1 forNotificationRequest:(id)arg2 withPresentingViewController:(id)arg3 withPresentingView:(id)arg4 ;
-(id)notificationManagementController:(id)arg1 sectionSettingsForSectionIdentifier:(id)arg2 ;
-(void)setNotificationManagementAlertViewController:(UIAlertController *)arg1 ;
-(UIAlertController *)notificationManagementAlertViewController;
@end

