/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@protocol NCNotificationListCellDelegate <NSObject>
@optional
-(void)notificationListCell:(id)arg1 didMoveToNewXPosition:(double)arg2;
-(BOOL)notificationListCellShouldPerformClipping:(id)arg1;

@required
-(void)willTearDownNotificationListCell:(id)arg1;
-(void)notificationListCellDidHideCellActions:(id)arg1 resetCellScrollPosition:(BOOL)arg2 animated:(BOOL)arg3;
-(void)notificationListCellRequestsPresentingLongLook:(id)arg1 completion:(/*^block*/id)arg2;
-(void)notificationListCellRequestsPresentingManagementView:(id)arg1 withPresentingView:(id)arg2 completion:(/*^block*/id)arg3;
-(void)notificationListCellRequestsDismissAction:(id)arg1 completion:(/*^block*/id)arg2;
-(void)notificationListCellRequestsDefaultAction:(id)arg1 completion:(/*^block*/id)arg2;
-(void)notificationListCellDidRevealCellActions:(id)arg1;
-(BOOL)notificationListCell:(id)arg1 shouldPanHorizontallyWithTouch:(id)arg2;
-(void)notificationListCellDidSignificantUserInteraction:(id)arg1;
-(id)notificationListCellRequestsSectionSettings:(id)arg1 sectionIdentifier:(id)arg2;

@end

