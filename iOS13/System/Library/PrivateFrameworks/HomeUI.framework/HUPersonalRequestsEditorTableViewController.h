/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUAccessorySettingsDetailsViewControllerProtocol.h>

@class HUPersonalRequestsEditorItemManager, HUPersonalRequestsDevicesModuleController, NSString;

@interface HUPersonalRequestsEditorTableViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol> {

	BOOL _onlyShowDeviceSwitches;
	HUPersonalRequestsEditorItemManager* _prEditorItemManager;
	HUPersonalRequestsDevicesModuleController* _prDevicesModuleController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HUPersonalRequestsEditorItemManager * prEditorItemManager;                            //@synthesize prEditorItemManager=_prEditorItemManager - In the implementation block
@property (nonatomic,readonly) HUPersonalRequestsDevicesModuleController * prDevicesModuleController;              //@synthesize prDevicesModuleController=_prDevicesModuleController - In the implementation block
@property (assign,nonatomic) BOOL onlyShowDeviceSwitches;                                                          //@synthesize onlyShowDeviceSwitches=_onlyShowDeviceSwitches - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)initWithUserItem:(id)arg1 onlyShowDeviceSwitches:(BOOL)arg2 ;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(HUPersonalRequestsEditorItemManager *)prEditorItemManager;
-(void)setPrEditorItemManager:(HUPersonalRequestsEditorItemManager *)arg1 ;
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(id)itemModuleControllers;
-(HUPersonalRequestsDevicesModuleController *)prDevicesModuleController;
-(BOOL)onlyShowDeviceSwitches;
-(void)setOnlyShowDeviceSwitches:(BOOL)arg1 ;
-(id)initWithAccessoryGroupItem:(id)arg1 ;
-(id)initWithUserItem:(id)arg1 sourceMediaProfileContainer:(id)arg2 onlyShowDeviceSwitches:(BOOL)arg3 ;
@end

