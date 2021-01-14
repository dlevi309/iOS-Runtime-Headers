/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKEventTitleDetailItemDelegate.h>
#import <libobjc.A.dylib/EKUIEventStatusButtonsViewDelegate.h>
#import <libobjc.A.dylib/EKEventDetailNotesCellDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/EKUIManagedViewController.h>

@protocol EKEventViewDelegate;
@class NSArray, EKEvent, _UIAccessDeniedView, EKEventDetailItem, EKEventEditViewController, EKUIRecurrenceAlertController, EKUIEventStatusButtonsView, SingleToolbarItemContainerView, EKEventTitleDetailItem, EKCustomTitleView, UITableView, UIView, UIViewController, NSMutableDictionary, EKUIInviteesViewMessageSendingManager, NSDictionary, UIScrollView, NSString;

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEventDetailNotesCellDelegate, UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, EKUIManagedViewController> {

	NSArray* _items;
	EKEvent* _event;
	BOOL _ignoreDBChanges;
	long long _lastAuthorizationStatus;
	_UIAccessDeniedView* _accessDeniedView;
	EKEventDetailItem* _selectedEditItem;
	long long _disclosedTableSection;
	NSRange _disclosedTableRange;
	long long _pendingStatus;
	EKEventEditViewController* _activeEventEditor;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	EKUIEventStatusButtonsView* _statusButtonsView;
	SingleToolbarItemContainerView* _statusButtonsContainerView;
	double _statusButtonsViewCachedFontSize;
	long long _lastOrientation;
	EKEventTitleDetailItem* _titleItem;
	EKCustomTitleView* _customTitle;
	EKEventDetailItem* _currentEditItem;
	UITableView* _tableView;
	BOOL _didAppear;
	BOOL _countedAppearance;
	BOOL _autoPop;
	BOOL _showsPreview;
	BOOL _hidePreview;
	BOOL _calendarPreviewIsInlineDayView;
	BOOL _inlineDayViewRespectsSelectedCalendarsFilter;
	BOOL _trustsStatus;
	BOOL _needsReload;
	BOOL _itemsNeedReload;
	BOOL _dead;
	BOOL _tableIsBeingEdited;
	BOOL _minimalMode;
	NSArray* _currentSections;
	int _scrollToSection;
	UIView* _headerView;
	NSArray* _headerConstraints;
	NSArray* _tableViewTopConstraints;
	UIView* _blankFooterView;
	BOOL _showingBlankFooterView;
	UIViewController* _presentationSourceViewController;
	NSMutableDictionary* _cellHeights;
	BOOL _allowsEditing;
	BOOL _viewIsVisible;
	BOOL _ICSPreview;
	BOOL _allowsInviteResponses;
	BOOL _showsAddToCalendarForICSPreview;
	BOOL _showsUpdateCalendarForICSPreview;
	BOOL _showsDeleteForICSPreview;
	BOOL _allowsSubitems;
	BOOL _showsDoneButton;
	BOOL _showsOutOfDateMessage;
	BOOL _showsDelegatorMessage;
	BOOL _showsDelegateMessage;
	BOOL _showsConferenceItem;
	BOOL _noninteractivePlatterMode;
	BOOL _isLargeDayView;
	int _editorShowTransition;
	int _editorHideTransition;
	id<EKEventViewDelegate> _delegate;
	EKUIInviteesViewMessageSendingManager* _messageSendingManager;
	NSDictionary* _context;
	UIEdgeInsets _layoutMargins;

}

@property (assign,nonatomic,__weak) UIViewController * presentationSourceViewController; 
@property (assign) BOOL viewIsVisible;                                                                   //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (nonatomic,retain) EKUIInviteesViewMessageSendingManager * messageSendingManager;              //@synthesize messageSendingManager=_messageSendingManager - In the implementation block
@property (assign,nonatomic) BOOL hideCalendarPreview; 
@property (assign,nonatomic) BOOL calendarPreviewIsInlineDayView; 
@property (assign,nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter; 
@property (assign,nonatomic) int scrollToSection; 
@property (assign,getter=isICSPreview,nonatomic) BOOL ICSPreview;                                        //@synthesize ICSPreview=_ICSPreview - In the implementation block
@property (assign,nonatomic) BOOL allowsInviteResponses;                                                 //@synthesize allowsInviteResponses=_allowsInviteResponses - In the implementation block
@property (assign,nonatomic) BOOL showsAddToCalendarForICSPreview;                                       //@synthesize showsAddToCalendarForICSPreview=_showsAddToCalendarForICSPreview - In the implementation block
@property (assign,nonatomic) BOOL showsUpdateCalendarForICSPreview;                                      //@synthesize showsUpdateCalendarForICSPreview=_showsUpdateCalendarForICSPreview - In the implementation block
@property (assign,nonatomic) BOOL showsDeleteForICSPreview;                                              //@synthesize showsDeleteForICSPreview=_showsDeleteForICSPreview - In the implementation block
@property (assign,nonatomic) BOOL allowsSubitems;                                                        //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                       //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic) BOOL showsOutOfDateMessage;                                                 //@synthesize showsOutOfDateMessage=_showsOutOfDateMessage - In the implementation block
@property (assign,nonatomic) BOOL showsDelegatorMessage;                                                 //@synthesize showsDelegatorMessage=_showsDelegatorMessage - In the implementation block
@property (assign,nonatomic) BOOL showsDelegateMessage;                                                  //@synthesize showsDelegateMessage=_showsDelegateMessage - In the implementation block
@property (assign,nonatomic) BOOL showsConferenceItem;                                                   //@synthesize showsConferenceItem=_showsConferenceItem - In the implementation block
@property (assign,nonatomic) BOOL minimalMode; 
@property (assign,nonatomic) BOOL noninteractivePlatterMode;                                             //@synthesize noninteractivePlatterMode=_noninteractivePlatterMode - In the implementation block
@property (assign,nonatomic) BOOL isLargeDayView;                                                        //@synthesize isLargeDayView=_isLargeDayView - In the implementation block
@property (assign,nonatomic) int editorShowTransition;                                                   //@synthesize editorShowTransition=_editorShowTransition - In the implementation block
@property (assign,nonatomic) int editorHideTransition;                                                   //@synthesize editorHideTransition=_editorHideTransition - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                                                 //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (nonatomic,readonly) UIScrollView * eventDetailsScrollView; 
@property (nonatomic,readonly) UIViewController * eventDetailsViewController; 
@property (nonatomic,retain) NSDictionary * context;                                                     //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<EKEventViewDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EKEvent * event; 
@property (assign,nonatomic) BOOL allowsEditing;                                                         //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCalendarPreview; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)popViewControllersAfterAndIncluding:(id)arg1 fromNavigationController:(id)arg2 animated:(BOOL)arg3 ;
+(void)setDefaultDatesForEvent:(id)arg1 ;
+(void)adjustLayoutForCell:(id)arg1 tableViewWidth:(double)arg2 numRowsInSection:(unsigned long long)arg3 cellRow:(unsigned long long)arg4 forceLayout:(BOOL)arg5 ;
+(id)_orderedActionsForMask:(long long)arg1 ;
-(id)_statusButtons;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setPresentationSourceViewController:(UIViewController *)arg1 ;
-(BOOL)_isDisplayingSuggestion;
-(id)_indexPathForAttendeesDetailItem;
-(void)_updateNavBarAnimated:(BOOL)arg1 ;
-(id)_statusButtonsForOrb:(BOOL)arg1 ;
-(BOOL)allowsCalendarPreview;
-(void)_didToggleMinimalMode;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)showsDelegateMessage;
-(void)_updateTableContentForSizeCategoryChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_reloadIfNeeded;
-(void)_teardownTableView;
-(void)_storeChanged:(id)arg1 ;
-(/*^block*/id)_detachSheetHandler;
-(void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(/*^block*/id)arg3 ;
-(void)_keyboardWasHidden:(id)arg1 ;
-(BOOL)isLargeDayView;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)eventItemDidEndEditing:(id)arg1 ;
-(void)_saveStatus:(long long)arg1 span:(long long)arg2 ;
-(void)editButtonPressed;
-(BOOL)_shouldPopSelf;
-(BOOL)allowsInviteResponses;
-(void)_rejectProposedTime;
-(BOOL)showsDoneButton;
-(id)viewControllerForEventItem:(id)arg1 ;
-(id)activeEventEditor;
-(BOOL)_isDisplayingDeletableEvent;
-(BOOL)_isDisplayingInvitation;
-(BOOL)showsDeleteForICSPreview;
-(int)editorHideTransition;
-(void)doneButtonPressed;
-(void)_performEditKeyCommand;
-(BOOL)calendarPreviewIsInlineDayView;
-(void)_cancelProposedTime;
-(BOOL)showsAddToCalendarForICSPreview;
-(void)_addToCalendarClicked:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)eventDetailItemWantsRefeshForHeightChange;
-(void)_acceptProposedTimeWithSourceViewForPopover:(id)arg1 ;
-(BOOL)showsUpdateCalendarForICSPreview;
-(double)topInset;
-(void)invokeAction:(long long)arg1 eventStatusButtonsView:(id)arg2 ;
-(void)setMessageSendingManager:(EKUIInviteesViewMessageSendingManager *)arg1 ;
-(void)eventDetailItemWantsRefresh:(id)arg1 ;
-(void)_setObservesKeyboardNotifications:(BOOL)arg1 ;
-(BOOL)allowsSubitems;
-(void)eventItemDidStartEditing:(id)arg1 ;
-(void)updateTitleWithScrollView:(id)arg1 animation:(BOOL)arg2 ;
-(BOOL)viewIsVisible;
-(void)_presentValidationAlert:(id)arg1 ;
-(EKUIInviteesViewMessageSendingManager *)messageSendingManager;
-(void)_localeChanged;
-(id<EKEventViewDelegate>)delegate;
-(BOOL)allowsEditing;
-(id)_indexPathForSection:(int)arg1 ;
-(id)tableView;
-(void)_dismissEditor:(BOOL)arg1 deleted:(BOOL)arg2 ;
-(BOOL)_isDisplayingSelfOrganizedInvitation;
-(void)setEditorHideTransition:(int)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_presentDetachSheetFromView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)_shouldDisplayDoneButton;
-(id)initWithContext:(id)arg1 ;
-(void)setNeedsReload;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setShowsUpdateCalendarForICSPreview:(BOOL)arg1 ;
-(double)eventStatusButtonsViewButtonFontSize:(id)arg1 ;
-(void)_updateHeaderAndFooterIfNeeded;
-(void)setShowsAddToCalendarForICSPreview:(BOOL)arg1 ;
-(void)_updateStatusButtonsActions;
-(id)_proposedDate;
-(void)setICSPreview:(BOOL)arg1 ;
-(BOOL)minimalMode;
-(long long)_actionsMaskForOrb:(BOOL)arg1 ;
-(void)_doneButtonPressed:(id)arg1 ;
-(void)_emailOrganizer;
-(UIScrollView *)eventDetailsScrollView;
-(void)_refreshEventAndReload;
-(void)_updateResponseVisibility;
-(void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ifCancelled:(/*^block*/id)arg3 ;
-(BOOL)_shouldDisplayDelegateOrOutOfDateMessage;
-(void)setCalendarPreviewIsInlineDayView:(BOOL)arg1 ;
-(BOOL)shouldShowEditButtonInline;
-(void)setAllowsCalendarPreview:(BOOL)arg1 ;
-(void)_saveStatus:(long long)arg1 sourceViewForPopover:(id)arg2 ;
-(BOOL)noninteractivePlatterMode;
-(void)_setUpForEvent;
-(BOOL)_backingEventAllowsEditing;
-(BOOL)showsOutOfDateMessage;
-(void)openAttendeesDetailItem;
-(void)editEvent;
-(void)setScrollToSection:(int)arg1 ;
-(void)_updateTableContentInsetForKeyboard:(id)arg1 ;
-(void)eventItemDidSave:(id)arg1 ;
-(void)detailItem:(id)arg1 wantsRowReload:(id)arg2 ;
-(BOOL)_shouldDisplayStatusButtons;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)_statusButtonsView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_setNeedsReloadIncludingItems:(BOOL)arg1 ;
-(BOOL)showsConferenceItem;
-(void)_clearCustomTitle;
-(id)_viewControllerForEditorPresentation;
-(void)setShowsDelegatorMessage:(BOOL)arg1 ;
-(void)_deleteClicked:(id)arg1 ;
-(NSDictionary *)context;
-(void)setEditorShowTransition:(int)arg1 ;
-(void)setIsLargeDayView:(BOOL)arg1 ;
-(void)_keyboardWasShown:(id)arg1 ;
-(UIViewController *)presentationSourceViewController;
-(UIEdgeInsets)layoutMargins;
-(id)_organizerContact;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_openInMaps;
-(void)setShowsOutOfDateMessage:(BOOL)arg1 ;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(UIViewController *)eventDetailsViewController;
-(void)setTopInset:(double)arg1 ;
-(id)_footerLabelContainingText:(id)arg1 ;
-(id)items;
-(BOOL)wantsManagement;
-(void)setShowsDeleteForICSPreview:(BOOL)arg1 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(BOOL)hideCalendarPreview;
-(BOOL)_shouldShowEditButton;
-(id)getCurrentContext;
-(void)setMinimalMode:(BOOL)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2 ;
-(void)setViewIsVisible:(BOOL)arg1 ;
-(BOOL)canManagePresentationStyle;
-(void)_contactOrganizer;
-(void)setActiveEventEditor:(id)arg1 ;
-(BOOL)showsDelegatorMessage;
-(id)_statusButtonsContainerView;
-(BOOL)canBecomeFirstResponder;
-(void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2 ;
-(void)setDelegate:(id<EKEventViewDelegate>)arg1 ;
-(id)viewTitle;
-(void)setAllowsSubitems:(BOOL)arg1 ;
-(void)setAllowsInviteResponses:(BOOL)arg1 ;
-(BOOL)_canEmailOrganizer;
-(id)previewActionsWithPresentationController:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)setHideCalendarPreview:(BOOL)arg1 ;
-(void)setNoninteractivePlatterMode:(BOOL)arg1 ;
-(void)_deleteSuggestionTapped:(id)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)_performDelete:(long long)arg1 ;
-(id)accessDeniedView;
-(void)_joinMeeting;
-(void)setInlineDayViewRespectsSelectedCalendarsFilter:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)_notifyDetailItemsOfVisibilityOnScreen;
-(void)completeWithAction:(long long)arg1 ;
-(BOOL)_shouldShowInlineButtonFromDelegate;
-(void)viewLayoutMarginsDidChange;
-(void)_presentDetachSheetFromBarButtonItem:(id)arg1 ;
-(BOOL)_navigationBarShouldBeHidden;
-(void)presentEditorAnimated:(BOOL)arg1 ;
-(CGSize)_idealSize;
-(BOOL)_performSave:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_pop;
-(void)_setUpkeyCommands;
-(void)setShowsConferenceItem:(BOOL)arg1 ;
-(id)_sectionsForTableView:(id)arg1 ;
-(BOOL)isICSPreview;
-(BOOL)inlineDayViewRespectsSelectedCalendarsFilter;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(unsigned long long)_sectionForDetailItem:(id)arg1 ;
-(int)scrollToSection;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)setShowsDelegateMessage:(BOOL)arg1 ;
-(void)_updateResponse;
-(int)editorShowTransition;
-(void)_prepareEventForEdit;
-(void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4 ;
-(void)viewDidLoad;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setContext:(NSDictionary *)arg1 ;
@end

