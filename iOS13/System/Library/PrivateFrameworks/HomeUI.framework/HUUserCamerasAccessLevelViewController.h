/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>

@class HFUserItem, HUUserCamerasAccessLevelItemManager;

@interface HUUserCamerasAccessLevelViewController : HUItemTableViewController {

	HFUserItem* _userItem;
	HUUserCamerasAccessLevelItemManager* _camerasAccessLevelItemManager;

}

@property (nonatomic,copy,readonly) HFUserItem * userItem;                                                            //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,copy,readonly) HUUserCamerasAccessLevelItemManager * camerasAccessLevelItemManager;              //@synthesize camerasAccessLevelItemManager=_camerasAccessLevelItemManager - In the implementation block
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(HFUserItem *)userItem;
-(id)initWithUserItem:(id)arg1 home:(id)arg2 ;
-(HUUserCamerasAccessLevelItemManager *)camerasAccessLevelItemManager;
@end

