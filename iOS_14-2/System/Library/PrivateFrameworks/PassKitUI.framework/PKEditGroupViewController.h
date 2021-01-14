/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _editStyle;
	CGSize _imageSizeNeeded;
	id<PKEditGroupViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)group;
-(id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(CGPoint)arg2 withSuggestedActions:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2 ;
-(void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id)initWithGroup:(id)arg1 existingGroupsController:(id)arg2 style:(long long)arg3 placeholders:(id)arg4 delegate:(id)arg5 ;
-(void)viewDidLoad;
-(id)pass;
-(void)_deleteButtonPressed;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)_deleteAllPassesInGroup;
-(void)_presentAlertForUpdatedExpressPass:(id)arg1 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withPass:(id)arg3 ;
-(id)viewControllerForRowAtIndexPath:(id)arg1 ;
-(id)passAtIndexPath:(id)arg1 ;
-(void)prefetchItemsAtIndexPaths:(id)arg1 ;
-(BOOL)passExistsWithUniqueIdentifier:(id)arg1 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)contextMenuInteractionShouldBegin:(id)arg1 ;
-(void)dealloc;
@end

