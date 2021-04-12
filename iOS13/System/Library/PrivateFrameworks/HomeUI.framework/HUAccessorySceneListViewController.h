/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)viewDidLoad;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(id)initWithServiceLikeItem:(id)arg1 ;
-(id)childViewControllersToPreload;
-(HUAccessorySceneListContentViewController *)existingSceneListContentViewController;
-(HUAccessorySceneListContentViewController *)suggestedSceneListContentViewController;
-(void)setExistingSceneListContentViewController:(HUAccessorySceneListContentViewController *)arg1 ;
-(void)setSuggestedSceneListContentViewController:(HUAccessorySceneListContentViewController *)arg1 ;
@end

