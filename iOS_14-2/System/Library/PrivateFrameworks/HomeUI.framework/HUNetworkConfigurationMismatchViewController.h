/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>

@class HUNetworkConfigurationMismatchItemManager;

@interface HUNetworkConfigurationMismatchViewController : HUItemTableViewController

@property (nonatomic,readonly) HUNetworkConfigurationMismatchItemManager * itemManager; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithProfiles:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
@end

