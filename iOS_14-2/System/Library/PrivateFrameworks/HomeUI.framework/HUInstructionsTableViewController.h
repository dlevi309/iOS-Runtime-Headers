/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>

@class HUInstructionsItem, UIViewController;

@interface HUInstructionsTableViewController : HUItemTableViewController {

	HUInstructionsItem* _instructionsItem;
	UIViewController* _contentViewController;

}

@property (nonatomic,readonly) HUInstructionsItem * instructionsItem;               //@synthesize instructionsItem=_instructionsItem - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
-(id)childViewControllersToPreload;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(id)initWithItemManager:(id)arg1 ;
-(HUInstructionsItem *)instructionsItem;
-(id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 instructionsItem:(id)arg2 contentViewController:(id)arg3 ;
@end

