/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKUIAccountRefresherDelegate.h>

@protocol EKCalendarChooserDelegate, EKStyleProvider;
@class EKUIAccountRefresher, NSMutableDictionary, NSArray, NSSet, UITableViewCell, UIBarButtonItem, NSMutableSet, EKEvent, UITableView, NSMutableArray, NSIndexPath, EKSource, _UIAccessDeniedView, EKCalendarEditor, UIRefreshControl, EKEventStore, EKCalendar, NSString;

@interface EKCalendarChooser : UIViewController <EKUIAccountRefresherDelegate> {

	EKUIAccountRefresher* _currentAccountRefresher;
	NSMutableDictionary* _accountErrorAnalyticsState;
	NSArray* _delegateSources;
	BOOL _showDelegateCalendarsCell;
	NSSet* _currentKnownCalendarIds;
	long long _displayStyle;
	UITableViewCell* _showDeclinedEventsCell;
	UIBarButtonItem* _addCalendarButton;
	BOOL _updatingHeaderHeight;
	BOOL _canShowIdentityChooser;
	BOOL _disableCalendarEditing;
	BOOL _showsDeclinedEventsSetting;
	BOOL _showAccountStatus;
	BOOL _onlyShowUnmanagedAccounts;
	BOOL _showDetailAccessories;
	BOOL _allowsEdit;
	struct {
		unsigned listIsFlat : 1;
		unsigned showAll : 1;
		unsigned showColors : 1;
		unsigned allSelected : 1;
		unsigned allowsRotation : 1;
		unsigned showsDoneButton : 1;
		unsigned showsCancelButton : 1;
		unsigned showsWritableCalendarsOnly : 1;
		unsigned showsRefreshButton : 1;
		unsigned allowsPullToRefresh : 1;
	}  _flags;
	int _chooserMode;
	int _explanatoryTextMode;
	long long _style;
	NSMutableSet* _selectedCalendars;
	id<EKCalendarChooserDelegate> _delegate;
	unsigned long long _entityType;
	long long _lastAuthorizationStatus;
	EKEvent* _event;
	UITableView* _tableView;
	UIBarButtonItem* _showAllButton;
	NSMutableArray* _groups;
	NSMutableDictionary* _storeGroupMap;
	NSMutableDictionary* _customGroupMap;
	NSIndexPath* _checkedRow;
	id<EKStyleProvider> _styleProvider;
	EKSource* _limitedToSource;
	_UIAccessDeniedView* _accessDeniedView;
	EKCalendarEditor* _presentedEditor;
	UIRefreshControl* _refreshControl;
	EKEventStore* _eventStore;

}

@property (assign,nonatomic) long long selectionStyle;                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long entityType;                              //@synthesize entityType=_entityType - In the implementation block
@property (assign,nonatomic) long long lastAuthorizationStatus;                          //@synthesize lastAuthorizationStatus=_lastAuthorizationStatus - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                            //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                    //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * showAllButton;                            //@synthesize showAllButton=_showAllButton - In the implementation block
@property (nonatomic,retain) NSMutableArray * groups;                                    //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * storeGroupMap;                        //@synthesize storeGroupMap=_storeGroupMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customGroupMap;                       //@synthesize customGroupMap=_customGroupMap - In the implementation block
@property (nonatomic,retain) NSIndexPath * checkedRow;                                   //@synthesize checkedRow=_checkedRow - In the implementation block
@property (assign,nonatomic,__weak) id<EKStyleProvider> styleProvider;                   //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) SCD_Struct_EK10 flags;                                      //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedCalendarSet;                         //@synthesize selectedCalendars=_selectedCalendars - In the implementation block
@property (nonatomic,retain) EKSource * limitedToSource;                                 //@synthesize limitedToSource=_limitedToSource - In the implementation block
@property (nonatomic,retain) _UIAccessDeniedView * accessDeniedView;                     //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (nonatomic,retain) EKCalendarEditor * presentedEditor;                         //@synthesize presentedEditor=_presentedEditor - In the implementation block
@property (assign,nonatomic) BOOL canShowIdentityChooser;                                //@synthesize canShowIdentityChooser=_canShowIdentityChooser - In the implementation block
@property (nonatomic,retain) UIRefreshControl * refreshControl;                          //@synthesize refreshControl=_refreshControl - In the implementation block
@property (assign,nonatomic) BOOL allowsRotation; 
@property (nonatomic,retain) EKCalendar * selectedCalendar; 
@property (assign,nonatomic) int chooserMode;                                            //@synthesize chooserMode=_chooserMode - In the implementation block
@property (assign,nonatomic) BOOL disableCalendarEditing;                                //@synthesize disableCalendarEditing=_disableCalendarEditing - In the implementation block
@property (assign,nonatomic) BOOL showsRefreshButton; 
@property (assign,nonatomic) BOOL allowsPullToRefresh; 
@property (assign,nonatomic) BOOL showsDeclinedEventsSetting;                            //@synthesize showsDeclinedEventsSetting=_showsDeclinedEventsSetting - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore;                                  //@synthesize eventStore=_eventStore - In the implementation block
@property (assign,nonatomic) int explanatoryTextMode;                                    //@synthesize explanatoryTextMode=_explanatoryTextMode - In the implementation block
@property (assign,nonatomic) BOOL showAccountStatus;                                     //@synthesize showAccountStatus=_showAccountStatus - In the implementation block
@property (assign,nonatomic) BOOL onlyShowUnmanagedAccounts;                             //@synthesize onlyShowUnmanagedAccounts=_onlyShowUnmanagedAccounts - In the implementation block
@property (assign,nonatomic) BOOL showDetailAccessories;                                 //@synthesize showDetailAccessories=_showDetailAccessories - In the implementation block
@property (assign,nonatomic) BOOL allowsEdit;                                            //@synthesize allowsEdit=_allowsEdit - In the implementation block
@property (assign,nonatomic,__weak) id<EKCalendarChooserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton; 
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (nonatomic,copy) NSSet * selectedCalendars; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hideAllString;
+(id)showAllString;
+(BOOL)groups:(id)arg1 differStructurallyFromGroups:(id)arg2 ;
+(id)delegatesString;
+(id)_subscribedLocalizedString;
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)entityType;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)_tableHeaderView;
-(void)_eventStoreChanged:(id)arg1 ;
-(EKEventStore *)eventStore;
-(void)setLimitedToSource:(EKSource *)arg1 ;
-(NSSet *)selectedCalendars;
-(void)setShowsWritableCalendarsOnly:(BOOL)arg1 ;
-(BOOL)showsWritableCalendarsOnly;
-(void)centerOnCalendar:(id)arg1 ;
-(id)displayedEditor;
-(void)redisplayEditor:(id)arg1 ;
-(void)identityChanged:(id)arg1 ;
-(void)setSelectedCalendarSet:(NSMutableSet *)arg1 ;
-(long long)lastAuthorizationStatus;
-(void)setLastAuthorizationStatus:(long long)arg1 ;
-(NSMutableDictionary *)storeGroupMap;
-(void)setStoreGroupMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)customGroupMap;
-(void)setCustomGroupMap:(NSMutableDictionary *)arg1 ;
-(EKCalendarEditor *)presentedEditor;
-(void)setPresentedEditor:(EKCalendarEditor *)arg1 ;
-(BOOL)canShowIdentityChooser;
-(void)setCanShowIdentityChooser:(BOOL)arg1 ;
-(int)chooserMode;
-(void)setShowsDeclinedEventsSetting:(BOOL)arg1 ;
-(BOOL)showsDoneButton;
-(BOOL)showsCancelButton;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<EKCalendarChooserDelegate>)delegate;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_ignoredErrorsChanged;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(SCD_Struct_EK10)flags;
-(BOOL)allowsRotation;
-(void)cancel:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(EKSource *)limitedToSource;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)_loadCalendars;
-(void)setExplanatoryTextMode:(int)arg1 ;
-(BOOL)showAccountStatus;
-(void)setShowAccountStatus:(BOOL)arg1 ;
-(BOOL)allowsEdit;
-(void)setAllowsEdit:(BOOL)arg1 ;
-(NSMutableArray *)groups;
-(void)done:(id)arg1 ;
-(UIBarButtonItem *)showAllButton;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setShowAllButton:(UIBarButtonItem *)arg1 ;
-(id)_allCalendars;
-(void)refresh:(id)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(id)sourceForSelectedIdentity;
-(void)setDelegate:(id<EKCalendarChooserDelegate>)arg1 ;
-(void)setSelectedCalendar:(EKCalendar *)arg1 ;
-(EKCalendar *)selectedCalendar;
-(_UIAccessDeniedView *)accessDeniedView;
-(CGSize)preferredContentSize;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(EKEvent *)event;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(void)setSelectionStyle:(long long)arg1 ;
-(void)_updateDelegateSources;
-(void)_updateShowDelegateCalendarsCell;
-(void)_setCalendars:(id)arg1 changedObjectsHint:(id)arg2 ;
-(void)setShowAll:(BOOL)arg1 ;
-(void)accountRefreshFinished:(id)arg1 ;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)setFlags:(SCD_Struct_EK10)arg1 ;
-(id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 forEvent:(id)arg4 eventStore:(id)arg5 limitedToSource:(id)arg6 showIdentityChooser:(BOOL)arg7 showAccountStatus:(BOOL)arg8 ;
-(void)setOnlyShowUnmanagedAccounts:(BOOL)arg1 ;
-(void)setDisableCalendarEditing:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEntityType:(unsigned long long)arg1 ;
-(void)calendarEditor:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(NSMutableSet *)selectedCalendarSet;
-(UIRefreshControl *)refreshControl;
-(void)_selectAllCalendarsAndStores:(BOOL)arg1 ;
-(void)_updateCurrentKnownCalendarIds;
-(void)_layoutNavToolbarControls;
-(void)_updateViewControllerTitle;
-(BOOL)_shouldShowIdentityChooser;
-(id)_contactForSource:(id)arg1 ;
-(id)_preferredAddressFromOwnerAddresses:(id)arg1 ;
-(void)_pulledToRefresh:(id)arg1 ;
-(BOOL)disableCalendarEditing;
-(BOOL)hasAccountThatCanCreateCalendars;
-(void)addCalendarButtonPressed:(id)arg1 ;
-(BOOL)_applySelection;
-(void)showAllButtonPressed;
-(int)explanatoryTextMode;
-(void)_finishRefreshing;
-(void)_setGroup:(id)arg1 withSourceIdentifier:(id)arg2 ;
-(id)_calendarSetToCalendarIdSet:(id)arg1 ;
-(void)_delegateSelectionDidChange:(BOOL)arg1 ;
-(id)_currentKnownCalendarIds;
-(id)_saveSelection;
-(void)_restoreSelection:(id)arg1 calendarsForSelectedSource:(id)arg2 allCalendars:(id)arg3 ;
-(BOOL)onlyShowUnmanagedAccounts;
-(void)_ensureWritableCalendarExists;
-(id)_calendarsForSelectedSource;
-(int)_numSelectedGroups;
-(void)setAllSelected:(BOOL)arg1 ;
-(void)populateGroupsForNonDelegateSources;
-(long long)_groupsOffset;
-(double)marginForTableView:(id)arg1 ;
-(void)setShowDetailAccessories:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setAccessDeniedView:(_UIAccessDeniedView *)arg1 ;
-(id<EKStyleProvider>)styleProvider;
-(void)loadView;
-(id)_groupForCustomGroupType:(unsigned long long)arg1 ;
-(id)_groupForSource:(id)arg1 ;
-(void)_insertStoreIntoByGroupArray:(id)arg1 ;
-(id)_statusTextForGroup:(id)arg1 ;
-(void)_sendAnalyticsEvent:(unsigned long long)arg1 forGroup:(id)arg2 ;
-(void)_populateGroupsForCalendars:(id)arg1 includingAccountsWithoutCalendars:(BOOL)arg2 footersChanged:(BOOL*)arg3 ;
-(id)_groupForSection:(long long)arg1 ;
-(id)_indexPathForCalendar:(id)arg1 ;
-(id)_filterCalendars:(id)arg1 ;
-(BOOL)_isIdentityChooserSection:(long long)arg1 ;
-(long long)_accountErrorActionIndexForGroup:(id)arg1 ;
-(long long)_tableSectionRow:(long long)arg1 toCalendarIndexInGroup:(id)arg2 ;
-(void)_presentEditor:(id)arg1 withIndexPath:(id)arg2 barButtonItem:(id)arg3 permittedArrowDirections:(unsigned long long)arg4 animated:(BOOL)arg5 ;
-(BOOL)_tableShouldDisplayAccountErrorActionCellForGroup:(id)arg1 ;
-(long long)_calendarRowOffsetForGroup:(id)arg1 ;
-(BOOL)_isDeclinedEventsSwitchSection:(long long)arg1 ;
-(BOOL)_isDelegateCalendarsCellSection:(long long)arg1 ;
-(BOOL)showsDeclinedEventsSetting;
-(BOOL)_shouldShowDelegateCalendarsCellSection;
-(BOOL)_shouldShowGroupNameInSection:(long long)arg1 ;
-(void)updateDeclinedEventsCell:(BOOL)arg1 ;
-(id)_viewModeTitle;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(NSIndexPath *)checkedRow;
-(void)setCheckedRow:(NSIndexPath *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(long long)selectionStyle;
-(long long)_tableSectionRowToDelegateSourceIndex:(long long)arg1 ;
-(id)_stringForSharedCalendar:(id)arg1 ;
-(id)_cellIdentifierWithSubtitle:(BOOL)arg1 ;
-(BOOL)_calendarAvailableForEditing:(id)arg1 ;
-(BOOL)showDetailAccessories;
-(void)_selectGroup:(id)arg1 selected:(BOOL)arg2 ;
-(void)declinedEventsChanged;
-(void)presentAccountErrorAlertForGroup:(id)arg1 ;
-(void)_selectCalendar:(id)arg1 selected:(BOOL)arg2 ;
-(id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 entityType:(unsigned long long)arg3 eventStore:(id)arg4 ;
-(void)setShowsRefreshButton:(BOOL)arg1 ;
-(void)setAllowsPullToRefresh:(BOOL)arg1 ;
-(id)centeredCalendar;
-(void)groupHeaderChangedHeight:(id)arg1 ;
-(BOOL)allowsPullToRefresh;
-(BOOL)showsRefreshButton;
-(void)groupShowAllTapped:(id)arg1 ;
-(void)dealloc;
-(void)setSelectedCalendars:(NSSet *)arg1 ;
-(id)initWithSelectionStyle:(long long)arg1 displayStyle:(long long)arg2 eventStore:(id)arg3 ;
-(void)setChooserMode:(int)arg1 ;
@end

