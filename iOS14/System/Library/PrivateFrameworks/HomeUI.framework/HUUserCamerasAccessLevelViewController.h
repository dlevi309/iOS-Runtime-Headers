/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>

@class HFUserItem, HUUserCamerasAccessLevelItemManager, NSIndexPath;

@interface HUUserCamerasAccessLevelViewController : HUItemTableViewController {

	HFUserItem* _userItem;
	HUUserCamerasAccessLevelItemManager* _camerasAccessLevelItemManager;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,copy,readonly) HFUserItem * userItem;                                                            //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,copy,readonly) HUUserCamerasAccessLevelItemManager * camerasAccessLevelItemManager;              //@synthesize camerasAccessLevelItemManager=_camerasAccessLevelItemManager - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                                         //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(HFUserItem *)userItem;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(id)initWithUserItem:(id)arg1 home:(id)arg2 ;
-(HUUserCamerasAccessLevelItemManager *)camerasAccessLevelItemManager;
@end

