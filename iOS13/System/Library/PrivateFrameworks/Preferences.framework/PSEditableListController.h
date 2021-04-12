/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>

@interface PSEditableListController : PSListController {

	BOOL _editable;
	BOOL _editingDisabled;

}
-(id)init;
-(void)suspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)editable;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)didLock;
-(void)editDoneTapped;
-(id)_editButtonBarItem;
-(void)_updateNavigationBar;
-(void)_setEditable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)performDeletionActionForSpecifier:(id)arg1 ;
-(void)setEditingButtonHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditButtonEnabled:(BOOL)arg1 ;
@end

