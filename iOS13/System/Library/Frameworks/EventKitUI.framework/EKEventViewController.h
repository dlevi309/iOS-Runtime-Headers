/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@protocol EKEventViewDelegate;
@class NSArray, EKEvent, _UIAccessDeniedView, EKEventDetailItem, EKEventEditViewController, EKUIRecurrenceAlertController, EKUIEventStatusButtonsView, SingleToolbarItemContainerView, EKEventTitleDetailItem, EKCustomTitleView, UITableView, UIView, UIViewController, NSMutableDictionary, NSDictionary, UIScrollView, NSString;

@interface EKEventViewController : UIViewController <EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEventDetailNotesCellDelegate, UIAlertViewDelegate, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate> {

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
	NSDictionary* _context;
	UIEdgeInsets _layoutMargins;

}

@property (assign,nonatomic,__weak) UIViewController * presentationSourceViewController; 
@property (assign) BOOL viewIsVisible;                                                                //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (assign,nonatomic) BOOL hideCalendarPreview; 
@property (assign,nonatomic) BOOL calendarPreviewIsInlineDayView; 
@property (assign,nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter; 
@property (assign,nonatomic) int scrollToSection; 
@property (assign,getter=isICSPreview,nonatomic) BOOL ICSPreview;                                     //@synthesize ICSPreview=_ICSPreview - In the implementation block
@property (assign,nonatomic) BOOL allowsInviteResponses;                                              //@synthesize allowsInviteResponses=_allowsInviteResponses - In the implementation block
@property (assign,nonatomic) BOOL showsAddToCalendarForICSPreview;                                    //@synthesize showsAddToCalendarForICSPreview=_showsAddToCalendarForICSPreview - In the implementation block
@property (assign,nonatomic) BOOL showsUpdateCalendarForICSPreview;                                   //@synthesize showsUpdateCalendarForICSPreview=_showsUpdateCalendarForICSPreview - In the implementation block
@property (assign,nonatomic) BOOL showsDeleteForICSPreview;                                           //@synthesize showsDeleteForICSPreview=_showsDeleteForICSPreview - In the implementation block
@property (assign,nonatomic) BOOL allowsSubitems;                                                     //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                    //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (assign,nonatomic) BOOL showsOutOfDateMessage;                                              //@synthesize showsOutOfDateMessage=_showsOutOfDateMessage - In the implementation block
@property (assign,nonatomic) BOOL showsDelegatorMessage;                                              //@synthesize showsDelegatorMessage=_showsDelegatorMessage - In the implementation block
@property (assign,nonatomic) BOOL showsDelegateMessage;                                               //@synthesize showsDelegateMessage=_showsDelegateMessage - In the implementation block
@property (assign,nonatomic) BOOL showsConferenceItem;                                                //@synthesize showsConferenceItem=_showsConferenceItem - In the implementation block
@property (assign,nonatomic) BOOL minimalMode; 
@property (assign,nonatomic) BOOL noninteractivePlatterMode;                                          //@synthesize noninteractivePlatterMode=_noninteractivePlatterMode - In the implementation block
@property (assign,nonatomic) BOOL isLargeDayView;                                                     //@synthesize isLargeDayView=_isLargeDayView - In the implementation block
@property (assign,nonatomic) int editorShowTransition;                                                //@synthesize editorShowTransition=_editorShowTransition - In the implementation block
@property (assign,nonatomic) int editorHideTransition;                                                //@synthesize editorHideTransition=_editorHideTransition - In the implementation block
@property (assign,nonatomic) UIEdgeInsets layoutMargins;                                              //@synthesize layoutMargins=_layoutMargins - In the implementation block
@property (nonatomic,readonly) UIScrollView * eventDetailsScrollView; 
@property (nonatomic,readonly) UIViewController * eventDetailsViewController; 
@property (nonatomic,retain) NSDictionary * context;                                                  //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<EKEventViewDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) EKEvent * event; 
@property (assign,nonatomic) BOOL allowsEditing;                                                      //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL allowsCalendarPreview; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setDefaultDatesForEvent:(id)arg1 ;
+(void)adjustLayoutForCell:(id)arg1 tableViewWidth:(double)arg2 numRowsInSection:(unsigned long long)arg3 cellRow:(unsigned long long)arg4 forceLayout:(BOOL)arg5 ;
+(id)_orderedActionsForMask:(long long)arg1 ;
-(void)dealloc;
-(id<EKEventViewDelegate>)delegate;
-(void)setDelegate:(id<EKEventViewDelegate>)arg1 ;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(id)items;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)layoutMargins;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(double)topInset;
-(void)setTopInset:(double)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(void)doneButtonPressed;
-(void)setNeedsReload;
-(void)editButtonPressed;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(id)accessDeniedView;
-(id)_statusButtons;
-(void)setViewIsVisible:(BOOL)arg1 ;
-(BOOL)viewIsVisible;
-(void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2 ifCancelled:(/*^block*/id)arg3 ;
-(double)eventStatusButtonsViewButtonFontSize:(id)arg1 ;
-(void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2 ;
-(id)_statusButtonsView;
-(id)_statusButtonsContainerView;
-(void)setAllowsCalendarPreview:(BOOL)arg1 ;
-(BOOL)isLargeDayView;
-(void)setIsLargeDayView:(BOOL)arg1 ;
-(void)_localeChanged;
-(BOOL)shouldShowEditButtonInline;
-(BOOL)minimalMode;
-(id)viewControllerForEventItem:(id)arg1 ;
-(BOOL)inlineDayViewRespectsSelectedCalendarsFilter;
-(void)eventDetailItemWantsRefeshForHeightChange;
-(void)setInlineDayViewRespectsSelectedCalendarsFilter:(BOOL)arg1 ;
-(BOOL)showsDoneButton;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)_storeChanged:(id)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)setAllowsSubitems:(BOOL)arg1 ;
-(BOOL)allowsSubitems;
-(void)_deleteClicked:(id)arg1 ;
-(void)_presentValidationAlert:(id)arg1 ;
-(void)_updateTableContentInsetForKeyboard:(id)arg1 ;
-(void)setNoninteractivePlatterMode:(BOOL)arg1 ;
-(BOOL)noninteractivePlatterMode;
-(void)setICSPreview:(BOOL)arg1 ;
-(void)setShowsAddToCalendarForICSPreview:(BOOL)arg1 ;
-(void)setShowsUpdateCalendarForICSPreview:(BOOL)arg1 ;
-(void)setShowsDeleteForICSPreview:(BOOL)arg1 ;
-(void)setShowsOutOfDateMessage:(BOOL)arg1 ;
-(void)setShowsDelegatorMessage:(BOOL)arg1 ;
-(void)setShowsDelegateMessage:(BOOL)arg1 ;
-(void)setAllowsInviteResponses:(BOOL)arg1 ;
-(void)setScrollToSection:(int)arg1 ;
-(UIScrollView *)eventDetailsScrollView;
-(UIViewController *)eventDetailsViewController;
-(BOOL)_performSave:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_performDelete:(long long)arg1 ;
-(void)_updateNavBarAnimated:(BOOL)arg1 ;
-(void)setHideCalendarPreview:(BOOL)arg1 ;
-(void)_setUpkeyCommands;
-(void)_teardownTableView;
-(void)_reloadIfNeeded;
-(id)viewTitle;
-(void)_updateStatusButtonsActions;
-(void)_updateResponse;
-(void)_updateHeaderAndFooterIfNeeded;
-(id)_indexPathForSection:(int)arg1 ;
-(void)_updateTableContentForSizeCategoryChange:(id)arg1 ;
-(void)_setObservesKeyboardNotifications:(BOOL)arg1 ;
-(void)_updateResponseVisibility;
-(BOOL)_shouldShowInlineButtonFromDelegate;
-(BOOL)_navigationBarShouldBeHidden;
-(BOOL)_shouldShowEditButton;
-(void)updateTitleWithScrollView:(id)arg1 animation:(BOOL)arg2 ;
-(void)setMinimalMode:(BOOL)arg1 ;
-(void)editEvent;
-(BOOL)_shouldDisplayDoneButton;
-(void)_doneButtonPressed:(id)arg1 ;
-(BOOL)_backingEventAllowsEditing;
-(id)_indexPathForAttendeesDetailItem;
-(id)_sectionsForTableView:(id)arg1 ;
-(void)_setNeedsReloadIncludingItems:(BOOL)arg1 ;
-(void)_setUpForEvent;
-(void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1 ;
-(void)_didToggleMinimalMode;
-(void)_dismissEditor:(BOOL)arg1 deleted:(BOOL)arg2 ;
-(BOOL)_shouldPopSelf;
-(void)_pop;
-(void)_keyboardWasShown:(id)arg1 ;
-(void)_keyboardWasHidden:(id)arg1 ;
-(void)completeWithAction:(long long)arg1 ;
-(void)_refreshEventAndReload;
-(BOOL)showsConferenceItem;
-(BOOL)allowsCalendarPreview;
-(BOOL)calendarPreviewIsInlineDayView;
-(BOOL)allowsInviteResponses;
-(BOOL)showsOutOfDateMessage;
-(BOOL)showsDelegatorMessage;
-(BOOL)showsDelegateMessage;
-(BOOL)_shouldDisplayDelegateOrOutOfDateMessage;
-(id)_footerLabelContainingText:(id)arg1 ;
-(void)_prepareEventForEdit;
-(BOOL)_isDisplayingInvitation;
-(void)_presentDetachSheetFromBarButtonItem:(id)arg1 ;
-(void)_presentDetachSheetFromView:(id)arg1 ;
-(void)setActiveEventEditor:(id)arg1 ;
-(void)presentEditorAnimated:(BOOL)arg1 ;
-(int)editorShowTransition;
-(id)_viewControllerForEditorPresentation;
-(CGSize)_idealSize;
-(/*^block*/id)_detachSheetHandler;
-(UIViewController *)presentationSourceViewController;
-(void)_saveStatus:(long long)arg1 span:(long long)arg2 ;
-(int)editorHideTransition;
-(void)_addToCalendarClicked:(id)arg1 ;
-(void)_deleteSuggestionTapped:(id)arg1 ;
-(void)_acceptProposedTimeWithSourceViewForPopover:(id)arg1 ;
-(void)_rejectProposedTime;
-(void)_cancelProposedTime;
-(void)_openInMaps;
-(void)_contactOrganizer;
-(void)_emailOrganizer;
-(void)_joinMeeting;
-(void)_saveStatus:(long long)arg1 sourceViewForPopover:(id)arg2 ;
-(id)_proposedDate;
-(id)_organizerContact;
-(BOOL)_canEmailOrganizer;
-(BOOL)_isDisplayingSuggestion;
-(BOOL)_shouldDisplayStatusButtons;
-(id)_statusButtonsForOrb:(BOOL)arg1 ;
-(BOOL)_isDisplayingSelfOrganizedInvitation;
-(BOOL)isICSPreview;
-(BOOL)showsAddToCalendarForICSPreview;
-(BOOL)showsUpdateCalendarForICSPreview;
-(BOOL)_isDisplayingDeletableEvent;
-(BOOL)showsDeleteForICSPreview;
-(long long)_actionsMaskForOrb:(BOOL)arg1 ;
-(void)setPresentationSourceViewController:(UIViewController *)arg1 ;
-(void)invokeAction:(long long)arg1 eventStatusButtonsView:(id)arg2 ;
-(void)_notifyDetailItemsOfVisibilityOnScreen;
-(void)_clearCustomTitle;
-(unsigned long long)_sectionForDetailItem:(id)arg1 ;
-(void)_performEditKeyCommand;
-(void)openAttendeesDetailItem;
-(BOOL)hideCalendarPreview;
-(void)setCalendarPreviewIsInlineDayView:(BOOL)arg1 ;
-(int)scrollToSection;
-(id)activeEventEditor;
-(void)eventItemDidStartEditing:(id)arg1 ;
-(void)eventItemDidSave:(id)arg1 ;
-(void)eventItemDidEndEditing:(id)arg1 ;
-(id)previewActionsWithPresentationController:(id)arg1 ;
-(void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(/*^block*/id)arg3 ;
-(void)detailItem:(id)arg1 wantsRowReload:(id)arg2 ;
-(void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4 ;
-(void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2 ;
-(void)setShowsConferenceItem:(BOOL)arg1 ;
-(void)setEditorShowTransition:(int)arg1 ;
-(void)setEditorHideTransition:(int)arg1 ;
@end

