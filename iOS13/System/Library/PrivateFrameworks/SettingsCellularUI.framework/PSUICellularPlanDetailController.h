/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSListController.h>

@class PSUISubscriptionContextMenusGroup;

@interface PSUICellularPlanDetailController : PSListController {

	PSUISubscriptionContextMenusGroup* _subscriptionContextMenus;

}

@property (nonatomic,retain) PSUISubscriptionContextMenusGroup * subscriptionContextMenus;              //@synthesize subscriptionContextMenus=_subscriptionContextMenus - In the implementation block
-(id)init;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willEnterForeground;
-(id)specifiers;
-(id)selectSpecifier:(id)arg1 ;
-(PSUISubscriptionContextMenusGroup *)subscriptionContextMenus;
-(void)setSubscriptionContextMenus:(PSUISubscriptionContextMenusGroup *)arg1 ;
@end

