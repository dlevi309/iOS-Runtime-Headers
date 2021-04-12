/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STPINListViewController.h>

@class STContentPrivacyListController;

@interface STContentPrivacyStoreDetailController : STPINListViewController {

	STContentPrivacyListController* _contentPrivacyController;

}

@property (__weak) STContentPrivacyListController * contentPrivacyController;              //@synthesize contentPrivacyController=_contentPrivacyController - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setCoordinator:(id)arg1 ;
-(id)specifiers;
-(STContentPrivacyListController *)contentPrivacyController;
-(void)_isLoadedDidChange:(BOOL)arg1 ;
-(void)setContentPrivacyController:(STContentPrivacyListController *)arg1 ;
@end

