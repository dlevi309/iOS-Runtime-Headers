/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/EKCalendarItemEditItemDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol EKCalendarItemEditorDelegate;
@class NSArray, EKUIRecurrenceAlertController, EKCalendarItemEditItem, NSMutableSet, UIBarButtonItem, EKEventStore, EKCalendarItem, UIResponder, _UIAccessDeniedView, EKChangeSet, NSString;

@interface EKCalendarItemEditor : UITableViewController <EKCalendarItemEditItemDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {

	NSArray* _editItems;
	NSArray* _orderedEditItems;
	id _revertState;
	BOOL _showsTimeZone;
	NSArray* _currentItems;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	EKCalendarItemEditItem* _currentEditItem;
	BOOL _giveTitleCellKeyboardFocus;
	BOOL _needsFirstResponderSet;
	int _editItemVisibility;
	BOOL _isIgnoringCellHeightChange;
	BOOL _needsCellHeightChange;
	NSMutableSet* _editItemsDisablingDoneButton;
	long long _lastAuthorizationStatus;
	BOOL _hasAppeared;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _leftButtonSpacer;
	UIBarButtonItem* _rightButtonSpacer;
	double _leftButtonSpace;
	double _rightButtonSpace;
	BOOL _scrollToNotes;
	BOOL _canHideDoneAndCancelButtons;
	BOOL _timeImplicitlySet;
	BOOL _isTextEditing;
	id<EKCalendarItemEditorDelegate> _editorDelegate;
	EKEventStore* _store;
	EKCalendarItem* _calendarItem;
	UIResponder* _responderToRestoreOnAppearence;
	unsigned long long _visibleSectionToRestoreOnAppearence;
	_UIAccessDeniedView* _accessDeniedView;
	EKChangeSet* _originalChangeSet;

}

@property (nonatomic,retain) _UIAccessDeniedView * accessDeniedView;                              //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (nonatomic,retain) EKChangeSet * originalChangeSet;                                     //@synthesize originalChangeSet=_originalChangeSet - In the implementation block
@property (assign,nonatomic,__weak) id<EKCalendarItemEditorDelegate> editorDelegate;              //@synthesize editorDelegate=_editorDelegate - In the implementation block
@property (nonatomic,retain) EKEventStore * store;                                                //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) EKCalendarItem * calendarItem;                                       //@synthesize calendarItem=_calendarItem - In the implementation block
@property (assign,nonatomic) BOOL scrollToNotes;                                                  //@synthesize scrollToNotes=_scrollToNotes - In the implementation block
@property (nonatomic,retain) UIResponder * responderToRestoreOnAppearence;                        //@synthesize responderToRestoreOnAppearence=_responderToRestoreOnAppearence - In the implementation block
@property (assign,nonatomic) unsigned long long visibleSectionToRestoreOnAppearence;              //@synthesize visibleSectionToRestoreOnAppearence=_visibleSectionToRestoreOnAppearence - In the implementation block
@property (assign,nonatomic) BOOL showsTimeZone;                                                  //@synthesize showsTimeZone=_showsTimeZone - In the implementation block
@property (assign,nonatomic) BOOL canHideDoneAndCancelButtons;                                    //@synthesize canHideDoneAndCancelButtons=_canHideDoneAndCancelButtons - In the implementation block
@property (readonly) EKCalendarItemEditItem * currentEditItem;                                    //@synthesize currentEditItem=_currentEditItem - In the implementation block
@property (assign,nonatomic) double navBarLeftContentInset; 
@property (assign,nonatomic) double navBarRightContentInset; 
@property (assign,nonatomic) BOOL timeImplicitlySet;                                              //@synthesize timeImplicitlySet=_timeImplicitlySet - In the implementation block
@property (assign,nonatomic) BOOL isTextEditing;                                                  //@synthesize isTextEditing=_isTextEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultTitleForCalendarItem;
+(id)_addLocalizedString;
+(id)_doneLocalizedString;
-(id)init;
-(void)dealloc;
-(EKEventStore *)store;
-(void)setStore:(EKEventStore *)arg1 ;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)applicationDidResume;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(BOOL)hasUnsavedChanges;
-(void)done:(id)arg1 ;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(_UIAccessDeniedView *)accessDeniedView;
-(unsigned long long)entityType;
-(EKCalendarItem *)calendarItem;
-(void)editItem:(id)arg1 textViewShouldReturn:(id)arg2 ;
-(void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned long long)arg2 actions:(/*^block*/id)arg3 ;
-(void)editItemVisibilityChanged:(id)arg1 ;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4 ;
-(id)cellWithReuseIdentifier:(id)arg1 forEditItem:(id)arg2 ;
-(void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 ;
-(void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2 ;
-(id)viewControllerForEditItem:(id)arg1 ;
-(void)editItem:(id)arg1 wantsDoneButtonDisabled:(BOOL)arg2 ;
-(void)setCalendarItem:(EKCalendarItem *)arg1 ;
-(id)defaultAlertTitleForEditItem:(id)arg1 ;
-(void)editItemDidStartEditing:(id)arg1 ;
-(void)editItem:(id)arg1 didSaveFromDetailViewController:(BOOL)arg2 ;
-(void)editItemDidEndEditing:(id)arg1 ;
-(void)editItemTextChanged:(id)arg1 ;
-(void)editItemWantsInjectableViewControllerToBeShown:(id)arg1 ;
-(void)editItem:(id)arg1 wantsKeyboardPinned:(BOOL)arg2 ;
-(void)editItem:(id)arg1 wantsRowReload:(id)arg2 ;
-(long long)rowNumberForEditItem:(id)arg1 ;
-(void)editItemRequiresHeightChange:(id)arg1 ;
-(void)editItemRequiresPopoverSizeUpdate:(id)arg1 ;
-(void)editItemWantsFooterTitlesToReload:(id)arg1 ;
-(void)_localeChanged;
-(void)setEditorDelegate:(id<EKCalendarItemEditorDelegate>)arg1 ;
-(void)refreshStartAndEndDates;
-(BOOL)saveWithSpan:(long long)arg1 animated:(BOOL)arg2 ;
-(void)cancelEditingWithDelegateNotification:(BOOL)arg1 forceCancel:(BOOL)arg2 ;
-(void)completeWithAction:(long long)arg1 animated:(BOOL)arg2 ;
-(BOOL)scrollToNotes;
-(void)setScrollToNotes:(BOOL)arg1 ;
-(BOOL)canHideDoneAndCancelButtons;
-(void)setCanHideDoneAndCancelButtons:(BOOL)arg1 ;
-(void)handleTapOutside;
-(void)completeAndSave;
-(void)completeAndSaveWithContinueBlock:(/*^block*/id)arg1 ;
-(BOOL)willPresentDialogOnSave;
-(BOOL)isTextEditing;
-(void)focus:(unsigned long long)arg1 select:(BOOL)arg2 ;
-(void)setNavBarLeftContentInset:(double)arg1 ;
-(double)navBarLeftContentInset;
-(void)setNavBarRightContentInset:(double)arg1 ;
-(double)navBarRightContentInset;
-(BOOL)timeImplicitlySet;
-(void)setTimeImplicitlySet:(BOOL)arg1 ;
-(void)resignCurrentEditItemFirstResponder;
-(id)_editItems;
-(id)preferredTitle;
-(void)refreshInvitees;
-(void)refreshLocation;
-(unsigned long long)tableSectionForEditItem:(id)arg1 ;
-(void)deleteClicked:(id)arg1 ;
-(void)prepareEditItems;
-(EKCalendarItemEditItem *)currentEditItem;
-(id)_orderedEditItems;
-(BOOL)hasAttachmentChanges;
-(BOOL)attachmentsModifiedOnRecurrence;
-(id)attachmentsModifiedEvent;
-(BOOL)saveCalendarItemWithSpan:(long long)arg1 error:(id*)arg2 ;
-(id)_nameForDeleteButton;
-(void)setupDeleteButton;
-(id)defaultAlertTitle;
-(id)notificationNamesForLocaleChange;
-(void)_copyEventForPossibleRevert;
-(void)_revertEvent;
-(id)_viewForSheet;
-(void)tableViewDidStartReload:(id)arg1 ;
-(void)_setUpKeyCommands;
-(void)storeChanged:(id)arg1 ;
-(void)setupForEvent;
-(BOOL)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2 ;
-(void)_tableViewWillUpdateHeights;
-(void)_tableViewDidUpdateHeights;
-(void)_configureVisibleItems;
-(void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(BOOL)arg3 ;
-(void)setResponderToRestoreOnAppearence:(UIResponder *)arg1 ;
-(unsigned long long)visibleSectionToRestoreOnAppearence;
-(void)setVisibleSectionToRestoreOnAppearence:(unsigned long long)arg1 ;
-(void)_updateDoneButtonState;
-(void)_setupFirstResponder;
-(void)_pinKeyboard:(BOOL)arg1 ;
-(UIResponder *)responderToRestoreOnAppearence;
-(void)updateNavButtonsWithSpacing;
-(void)_setShowingAccessDeniedView:(BOOL)arg1 showSettingsInstructions:(BOOL)arg2 ;
-(void)_keyboardWillHide;
-(void)_completeWithAction:(long long)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3 ;
-(void)done:(id)arg1 withContinueBlock:(/*^block*/id)arg2 ;
-(BOOL)_performSave:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_presentAttachmentRecurrenceSheetForEvent:(id)arg1 withContinueBlock:(/*^block*/id)arg2 ;
-(void)_presentDetachSheetForEvent:(id)arg1 saveAttachments:(BOOL)arg2 withContinueBlock:(/*^block*/id)arg3 ;
-(void)_setCalendarItemOnEditItems;
-(BOOL)_canEnableDoneButton;
-(void)_setDoneAndCancelButtonVisible:(BOOL)arg1 ;
-(void)_setWantsToEnableDoneButton:(BOOL)arg1 ;
-(void)setIsTextEditing:(BOOL)arg1 ;
-(void)_reallyHandleCellHeightChange;
-(long long)firstTableRowForEditItem:(id)arg1 ;
-(id)_editItemAtIndexPath:(id)arg1 firstRowIndex:(long long*)arg2 ;
-(void)_performDelete:(long long)arg1 ;
-(void)_performCloseKeyCommand;
-(void)setEditItemVisibility:(int)arg1 animated:(BOOL)arg2 ;
-(int)editItemVisibility;
-(id)_viewHierarchy;
-(id<EKCalendarItemEditorDelegate>)editorDelegate;
-(BOOL)showsTimeZone;
-(void)setShowsTimeZone:(BOOL)arg1 ;
-(void)setAccessDeniedView:(_UIAccessDeniedView *)arg1 ;
-(EKChangeSet *)originalChangeSet;
-(void)setOriginalChangeSet:(EKChangeSet *)arg1 ;
@end

