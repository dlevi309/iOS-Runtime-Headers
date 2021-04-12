/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HMHome *)home;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)initWithHome:(id)arg1 ;
-(id)itemModuleControllers;
-(void)accessControlEditorModuleController:(id)arg1 didUpdateAccessControl:(id)arg2 ;
-(HUMediaAccessControlEditorModuleController *)accessControlEditorModuleController;
-(void)_updateFooterView:(id)arg1 forSection:(long long)arg2 ;
@end

