/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@class HFUserItem, HURemoteAccessItemManager, NSString;

@interface HURemoteAccessTableViewController : HUItemTableViewController <HUSwitchCellDelegate> {

	HFUserItem* _userItem;
	HURemoteAccessItemManager* _remoteAccessItemManager;

}

@property (nonatomic,copy,readonly) HFUserItem * userItem;                                            //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,copy,readonly) HURemoteAccessItemManager * remoteAccessItemManager;              //@synthesize remoteAccessItemManager=_remoteAccessItemManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(id)userHandle;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(HFUserItem *)userItem;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItem:(id)arg1 home:(id)arg2 ;
-(HURemoteAccessItemManager *)remoteAccessItemManager;
@end

