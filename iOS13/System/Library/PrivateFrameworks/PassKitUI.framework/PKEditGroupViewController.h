/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKEditTableViewController.h>
#import <libobjc.A.dylib/PKGroupDelegate.h>
#import <libobjc.A.dylib/_UIContextMenuInteractionDelegate.h>
#import <libobjc.A.dylib/PKEditPassesDetailsResponder.h>

@protocol PKGroupDelegate, PKEditGroupViewControllerDelegate;
@class PKGroup, UIBarButtonItem, PKPass, UITableView, NSString;

@interface PKEditGroupViewController : PKEditTableViewController <PKGroupDelegate, _UIContextMenuInteractionDelegate, PKEditPassesDetailsResponder> {

	PKGroup* _group;
	id<PKGroupDelegate> _savedDelegate;
	UIBarButtonItem* _deleteToolbarItem;
	UIBarButtonItem* _flexibleSpace;
	PKPass* _viewingPass;
	UITableView* _tableView;
	CGSize _imageSizeNeeded;
	id<PKEditGroupViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)group;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_deleteButtonPressed;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3 ;
-(id)pass;
-(void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_deleteAllPassesInGroup;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withPass:(id)arg3 ;
-(id)viewControllerForRowAtIndexPath:(id)arg1 ;
-(id)initWithGroup:(id)arg1 existingGroupsController:(id)arg2 placeholders:(id)arg3 delegate:(id)arg4 ;
-(id)passAtIndexPath:(id)arg1 ;
-(void)prefetchItemsAtIndexPaths:(id)arg1 ;
-(BOOL)passExistsWithUniqueIdentifier:(id)arg1 ;
@end

