/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUMediaServiceDefaultAccountsItemModuleControllerDelegate.h>

@class HFUserItem, HUMediaServiceDefaultAccountsItemManager, HUMediaServiceDefaultAccountsItemModuleController, NSString;

@interface HUMediaServiceDefaultAccountsTableViewController : HUItemTableViewController <HUMediaServiceDefaultAccountsItemModuleControllerDelegate> {

	HFUserItem* _userItem;
	HUMediaServiceDefaultAccountsItemManager* _mediaServiceDefaultAccountsItemManager;
	HUMediaServiceDefaultAccountsItemModuleController* _mediaServiceDefaultAccountsItemModuleController;

}

@property (nonatomic,copy,readonly) HFUserItem * userItem;                                                                                     //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,copy,readonly) HUMediaServiceDefaultAccountsItemManager * mediaServiceDefaultAccountsItemManager;                         //@synthesize mediaServiceDefaultAccountsItemManager=_mediaServiceDefaultAccountsItemManager - In the implementation block
@property (nonatomic,retain) HUMediaServiceDefaultAccountsItemModuleController * mediaServiceDefaultAccountsItemModuleController;              //@synthesize mediaServiceDefaultAccountsItemModuleController=_mediaServiceDefaultAccountsItemModuleController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(HFUserItem *)userItem;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(id)itemModuleControllers;
-(void)mediaServiceDefaultAccountsItemModuleController:(id)arg1 didUpdateDefaultAccount:(id)arg2 ;
-(id)initWithItem:(id)arg1 home:(id)arg2 ;
-(HUMediaServiceDefaultAccountsItemManager *)mediaServiceDefaultAccountsItemManager;
-(HUMediaServiceDefaultAccountsItemModuleController *)mediaServiceDefaultAccountsItemModuleController;
-(void)setMediaServiceDefaultAccountsItemModuleController:(HUMediaServiceDefaultAccountsItemModuleController *)arg1 ;
@end

