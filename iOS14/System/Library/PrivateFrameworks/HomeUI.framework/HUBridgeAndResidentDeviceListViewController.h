/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>

@class HUBridgeAndResidentDeviceListItemManager, NSString;

@interface HUBridgeAndResidentDeviceListViewController : HUItemTableViewController <HUPresentationDelegate>

@property (nonatomic,readonly) HUBridgeAndResidentDeviceListItemManager * itemManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)finishPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithHome:(id)arg1 ;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)_presentBridgeSettingsForItem:(id)arg1 animated:(BOOL)arg2 ;
-(Class)_bridgeDetailsViewControllerClass;
-(id)presentBridgeSettingsForAccessory:(id)arg1 animated:(BOOL)arg2 ;
@end

