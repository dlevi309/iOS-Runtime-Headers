/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSListController.h>

@interface PSEditableListController : PSListController {

	BOOL _editable;
	BOOL _editingDisabled;

}
-(void)suspend;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)didLock;
-(void)editDoneTapped;
-(id)_editButtonBarItem;
-(void)_setEditable:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)performDeletionActionForSpecifier:(id)arg1 ;
-(void)setEditButtonEnabled:(BOOL)arg1 ;
-(void)setEditingButtonHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)editable;
-(void)setEditable:(BOOL)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)_updateNavigationBar;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
@end

