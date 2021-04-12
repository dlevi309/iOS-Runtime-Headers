/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STPINListViewController.h>

@class STContentPrivacyListController;

@interface STContentPrivacyStoreDetailController : STPINListViewController {

	STContentPrivacyListController* _contentPrivacyController;

}

@property (__weak) STContentPrivacyListController * contentPrivacyController;              //@synthesize contentPrivacyController=_contentPrivacyController - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)setCoordinator:(id)arg1 ;
-(void)dealloc;
-(STContentPrivacyListController *)contentPrivacyController;
-(void)_isLoadedDidChange:(BOOL)arg1 ;
-(void)setContentPrivacyController:(STContentPrivacyListController *)arg1 ;
@end

