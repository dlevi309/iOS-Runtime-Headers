/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>

@class HUAccessorySceneListContentViewController, HUAccessorySceneListItemManager;

@interface HUAccessorySceneListViewController : HUItemTableViewController {

	HUAccessorySceneListContentViewController* _existingSceneListContentViewController;
	HUAccessorySceneListContentViewController* _suggestedSceneListContentViewController;

}

@property (nonatomic,retain) HUAccessorySceneListContentViewController * existingSceneListContentViewController;               //@synthesize existingSceneListContentViewController=_existingSceneListContentViewController - In the implementation block
@property (nonatomic,retain) HUAccessorySceneListContentViewController * suggestedSceneListContentViewController;              //@synthesize suggestedSceneListContentViewController=_suggestedSceneListContentViewController - In the implementation block
@property (nonatomic,readonly) HUAccessorySceneListItemManager * itemManager; 
-(id)childViewControllersToPreload;
-(id)initWithServiceLikeItem:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(HUAccessorySceneListContentViewController *)existingSceneListContentViewController;
-(HUAccessorySceneListContentViewController *)suggestedSceneListContentViewController;
-(void)setExistingSceneListContentViewController:(HUAccessorySceneListContentViewController *)arg1 ;
-(void)setSuggestedSceneListContentViewController:(HUAccessorySceneListContentViewController *)arg1 ;
@end

