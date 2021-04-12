/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class UIBarButtonItem, NSArray;

@interface SafariAutoFillListController : SafariSettingsListController {

	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;
	NSArray* _specifiersForAddItem;

}
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)_cancelBarButtonItem;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateEditButton;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)_canAddItems;
-(BOOL)canBeShownFromSuspendedState;
-(void)toggleEditing;
-(void)cancelEditing;
-(id)_addBarButtonItem;
-(id)_editBarButtonItem;
-(id)_deleteBarButtonItem;
-(void)deleteButtonTapped;
-(BOOL)isSpecifierForAutoFillItem:(id)arg1 ;
-(void)updateDeleteButton;
-(BOOL)keychainSyncIsEnabled;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
-(void)_showEditAndAddBarButtonItemsAnimated:(BOOL)arg1 ;
-(unsigned long long)_autoFillItemCount;
-(void)_deleteSelectedItems;
@end

