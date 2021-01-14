/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUEditRoomViewControllerPresentationDelegate.h>
#import <libobjc.A.dylib/HUEditRoomViewControllerAddRoomDelegate.h>

@protocol HURoomListViewControllerDelegate;
@class HUGridLayoutOptions, HURoomListItemManager, NSString;

@interface HURoomListViewController : HUItemTableViewController <HUEditRoomViewControllerPresentationDelegate, HUEditRoomViewControllerAddRoomDelegate> {

	id<HURoomListViewControllerDelegate> _delegate;
	HUGridLayoutOptions* _layoutOptions;

}

@property (nonatomic,readonly) HURoomListItemManager * itemManager; 
@property (assign,nonatomic,__weak) id<HURoomListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                               //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(id<HURoomListViewControllerDelegate>)delegate;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)setDelegate:(id<HURoomListViewControllerDelegate>)arg1 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(HUGridLayoutOptions *)layoutOptions;
-(void)_editButtonPressed:(id)arg1 ;
-(void)_addButtonPressed:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithHome:(id)arg1 delegate:(id)arg2 layoutOptions:(id)arg3 ;
-(id)_reorderableRoomItems;
-(void)_saveItemOrder:(id)arg1 forSection:(long long)arg2 resort:(BOOL)arg3 ;
-(id)_reorderableHomeKitItemListForSection:(long long)arg1 ;
-(void)_setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2 ;
-(void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2 ;
-(void)presentAddRoomViewControllerForEditRoomViewController:(id)arg1 ;
-(BOOL)automaticallyUpdatesViewControllerTitle;
@end

