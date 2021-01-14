/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUMediaAccessControlEditorModuleControllerDelegate.h>

@class HMHome, HUMediaAccessControlEditorModuleController, NSString;

@interface HUMediaAccessControlEditorTableViewController : HUItemTableViewController <HUMediaAccessControlEditorModuleControllerDelegate> {

	HMHome* _home;
	HUMediaAccessControlEditorModuleController* _accessControlEditorModuleController;

}

@property (nonatomic,readonly) HUMediaAccessControlEditorModuleController * accessControlEditorModuleController;              //@synthesize accessControlEditorModuleController=_accessControlEditorModuleController - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                                                 //@synthesize home=_home - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(id)initWithHome:(id)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(HMHome *)home;
-(id)itemModuleControllers;
-(void)accessControlEditorModuleController:(id)arg1 didUpdateAccessControl:(id)arg2 ;
-(HUMediaAccessControlEditorModuleController *)accessControlEditorModuleController;
-(void)_updateFooterView:(id)arg1 forSection:(long long)arg2 ;
@end

