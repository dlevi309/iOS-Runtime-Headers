/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class UIBarButtonItem;

@interface SafariQuickWebsiteSearchSettingsController : SafariSettingsListController {

	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;

}
-(void)willBecomeActive;
-(id)specifiers;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)_cancelEditing:(id)arg1 ;
-(id)_deleteBarButtonItem;
-(void)_updateDeleteButton;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_cancelBarButtonItem;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)_updateEditButton;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_quickWebsiteSearchControllerDidFinishLoading:(id)arg1 ;
-(void)_setUseSiteSpecificSearch:(id)arg1 specifier:(id)arg2 ;
-(BOOL)_hasSearchProviders;
-(void)_deleteItemsForSpecifiers:(id)arg1 ;
-(void)_deleteSelectedItems:(id)arg1 ;
@end

