/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFPopoverSizingTableViewController.h>
#import <libobjc.A.dylib/_SFBookmarkInfoViewControllerDelegate.h>
#import <libobjc.A.dylib/_SFBookmarkTextEntryTableViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol _SFBookmarkInfoViewControllerDelegate;
@class WebBookmarkCollection, WebBookmark, NSArray, _SFBookmarkTextEntryTableViewCell, _SFSiteIconView, UITextField, NSString;

@interface _SFBookmarkInfoViewController : _SFPopoverSizingTableViewController <_SFBookmarkInfoViewControllerDelegate, _SFBookmarkTextEntryTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	WebBookmarkCollection* _collection;
	WebBookmark* _parentBookmark;
	NSArray* _childBookmarks;
	BOOL _addingBookmark;
	BOOL _saveWhenDismissed;
	_SFBookmarkTextEntryTableViewCell* _titleCell;
	_SFBookmarkTextEntryTableViewCell* _addressCell;
	_SFSiteIconView* _iconImageView;
	unsigned long long _editingField;
	BOOL _didSelectFolder;
	BOOL _folderPickerExpanded;
	BOOL _addingToFavorites;
	NSArray* _folders;
	long long _selectedFolderIndex;
	UITextField* _textFieldToRestoreFirstResponder;
	BOOL _enableAddFolder;
	id<_SFBookmarkInfoViewControllerDelegate> _delegate;
	WebBookmark* _bookmark;

}

@property (assign,nonatomic,__weak) id<_SFBookmarkInfoViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) WebBookmark * bookmark;                                                   //@synthesize bookmark=_bookmark - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setParent:(id)arg1 ;
-(id<_SFBookmarkInfoViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFBookmarkInfoViewControllerDelegate>)arg1 ;
-(void)cancel;
-(WebBookmark *)bookmark;
-(void)setBookmark:(WebBookmark *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)reloadData;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)keyCommands;
-(void)saveChanges;
-(id)_titleCell;
-(id)initWithBookmark:(id)arg1 childBookmarks:(id)arg2 inCollection:(id)arg3 addingBookmark:(BOOL)arg4 toFavorites:(BOOL)arg5 willBeDisplayedModally:(BOOL)arg6 ;
-(void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1 ;
-(BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1 ;
-(void)updateTranslucentAppearance;
-(BOOL)hasTranslucentAppearance;
-(id)backgroundColorUsingTranslucentAppearance:(BOOL)arg1 ;
-(void)cancelPopoverKeyPressed;
-(void)_saveButtonPressed;
-(void)_bookmarksDidReload:(id)arg1 ;
-(BOOL)_canEditFieldsInCurrentViewController;
-(void)_didBeginEditingTextField:(id)arg1 ;
-(void)_didChangeEditingTextField:(id)arg1 ;
-(void)_setFolderPickerExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_removeActionsForTextFields;
-(void)_addActionsForTextFields;
-(void)_createCellsIfNeeded;
-(void)updateBookmarkIcon;
-(void)_reloadFolderInfoForced:(BOOL)arg1 ;
-(void)_updateCellValues;
-(CGPoint)_centerForIconView;
-(UIEdgeInsets)_cellInset;
-(void)_updateSaveButton;
-(BOOL)canSaveChanges;
-(id)initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3 ;
-(BOOL)_isIndexPathForNewFolderRow:(id)arg1 ;
-(void)_createNewFolder;
-(void)_editField:(unsigned long long)arg1 ;
-(long long)_numberOfExpandedFolderPickerRows;
-(id)_cellForNewFolderRowWithTableView:(id)arg1 ;
-(id)_cellForExpandedFolderAtIndex:(long long)arg1 withTableView:(id)arg2 ;
-(id)_cellForParentBookmarkWithTableView:(id)arg1 ;
-(id)_dequeueFolderPickerCellFromTableView:(id)arg1 ;
-(id)_iconForViewCellGivenBookmark:(id)arg1 ;
-(BOOL)isEditingField;
-(void)_returnWasPressedInTextField:(id)arg1 ;
-(void)_valuesChanged;
-(void)_updateIconViewFrame;
-(void)_saveBookmarkKeyPressed;
-(void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2 ;
-(BOOL)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg1 ;
-(BOOL)titleCellHasText;
@end

