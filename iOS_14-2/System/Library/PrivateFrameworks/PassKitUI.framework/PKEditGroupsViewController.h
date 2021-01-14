/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKEditTableViewController.h>
#import <libobjc.A.dylib/PKGroupsControllerDelegate.h>
#import <libobjc.A.dylib/PKGroupDelegate.h>
#import <libobjc.A.dylib/PKEditTableViewControllerCachingDelegate.h>
#import <libobjc.A.dylib/PKEditGroupViewControllerDelegate.h>
#import <libobjc.A.dylib/_UIContextMenuInteractionDelegate.h>

@class PKGroupsController, PKPass, PKGroup, UITableView, NSMutableArray, NSString;

@interface PKEditGroupsViewController : PKEditTableViewController <PKGroupsControllerDelegate, PKGroupDelegate, PKEditTableViewControllerCachingDelegate, PKEditGroupViewControllerDelegate, _UIContextMenuInteractionDelegate> {

	BOOL _editingMode;
	PKGroupsController* _groupsController;
	PKPass* _viewingPass;
	PKGroup* _viewingGroup;
	PKGroup* _deletingGroup;
	UITableView* _tableView;
	NSMutableArray* _actions;
	CGSize _imageSizeNeeded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_showNoPassesViewIfNoGroupsToShow;
-(id)indexPathForGroup:(id)arg1 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withGroup:(id)arg3 ;
-(id)groupAtIndexPath:(id)arg1 ;
-(BOOL)shouldShowPreviewForRowAtIndexPath:(id)arg1 ;
-(void)groupsController:(id)arg1 didUpdateGroup:(id)arg2 ;
-(void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initInEditingMode:(BOOL)arg1 existingGroupsController:(id)arg2 ;
-(void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)groupViewController:(id)arg1 isDeletingGroup:(id)arg2 ;
-(id)viewControllerForRowAtIndexPath:(id)arg1 ;
-(id)passAtIndexPath:(id)arg1 ;
-(void)prefetchItemsAtIndexPaths:(id)arg1 ;
-(BOOL)passExistsWithUniqueIdentifier:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
@end

