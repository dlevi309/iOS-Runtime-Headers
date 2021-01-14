/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSViewController.h>
#import <UIKit/UIAppearance.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDataSourcePrefetching.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PSSpecifierObserver.h>
#import <libobjc.A.dylib/PSViewControllerOffsetProtocol.h>
#import <libobjc.A.dylib/PSURLControllerHandlerDelegate.h>

@protocol PSSpecifierDataSource;
@class NSMutableArray, NSMutableDictionary, UITableView, NSArray, NSString, UIKeyboard, UIView, NSIndexPath, NSDictionary, PSURLControllerHandler, UIColor;

@interface PSListController : PSViewController <UIAppearance, UITableViewDelegate, UITableViewDataSource, UITableViewDataSourcePrefetching, UIAlertViewDelegate, UIPopoverPresentationControllerDelegate, PSSpecifierObserver, PSViewControllerOffsetProtocol, PSURLControllerHandlerDelegate> {

	NSMutableArray* _prequeuedReusablePSTableCells;
	NSMutableDictionary* _cells;
	BOOL _cachesCells;
	BOOL _reusesCells;
	BOOL _forceSynchronousIconLoadForCreatedCells;
	UITableView* _table;
	NSArray* _specifiers;
	NSMutableDictionary* _specifiersByID;
	NSMutableArray* _groups;
	NSString* _specifierID;
	NSMutableArray* _bundleControllers;
	BOOL _bundlesLoaded;
	BOOL _keyboardWasVisible;
	UIKeyboard* _keyboard;
	BOOL _popupIsModal;
	BOOL _popupIsDismissing;
	BOOL _hasAppeared;
	BOOL _showingSetupController;
	float _verticalContentOffset;
	NSString* _offsetItemName;
	CGPoint _contentOffsetWithKeyboard;
	NSString* _highlightItemName;
	BOOL _isVisible;
	id<PSSpecifierDataSource> _dataSource;
	BOOL _requestingSpecifiersFromDataSource;
	BOOL _sectionContentInsetInitialized;
	UIView* _containerView;
	NSIndexPath* _savedSelectedIndexPath;
	BOOL _edgeToEdgeCells;
	BOOL _prefetchingEnabled;
	BOOL _contentSizeDidChange;
	BOOL _usesDarkTheme;
	NSDictionary* _pendingURLResourceDictionary;
	NSString* _specifierIDPendingPush;
	/*^block*/id _urlHandlingCompletion;
	PSURLControllerHandler* _urlHandler;
	UIColor* _backgroundColor;
	UIColor* _foregroundColor;
	UIColor* _separatorColor;
	UIColor* _cellHighlightColor;
	UIColor* _padSelectionColor;
	UIColor* _cellAccessoryColor;
	UIColor* _cellAccessoryHighlightColor;
	UIColor* _textColor;
	UIColor* _altTextColor;
	UIColor* _buttonTextColor;
	UIColor* _editableTextColor;
	UIColor* _editablePlaceholderTextColor;
	UIColor* _editableInsertionPointColor;
	UIColor* _editableSelectionBarColor;
	UIColor* _editableSelectionHighlightColor;
	UIColor* _footerHyperlinkColor;
	UIColor* _segmentedSliderTrackColor;

}

@property (nonatomic,retain) PSURLControllerHandler * urlHandler;                                      //@synthesize urlHandler=_urlHandler - In the implementation block
@property (assign,nonatomic) BOOL contentSizeDidChange;                                                //@synthesize contentSizeDidChange=_contentSizeDidChange - In the implementation block
@property (assign,nonatomic) BOOL usesDarkTheme;                                                       //@synthesize usesDarkTheme=_usesDarkTheme - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                                                //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                                                 //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIColor * cellHighlightColor;                                             //@synthesize cellHighlightColor=_cellHighlightColor - In the implementation block
@property (nonatomic,retain) UIColor * padSelectionColor;                                              //@synthesize padSelectionColor=_padSelectionColor - In the implementation block
@property (nonatomic,retain) UIColor * cellAccessoryColor;                                             //@synthesize cellAccessoryColor=_cellAccessoryColor - In the implementation block
@property (nonatomic,retain) UIColor * cellAccessoryHighlightColor;                                    //@synthesize cellAccessoryHighlightColor=_cellAccessoryHighlightColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * altTextColor;                                                   //@synthesize altTextColor=_altTextColor - In the implementation block
@property (nonatomic,retain) UIColor * buttonTextColor;                                                //@synthesize buttonTextColor=_buttonTextColor - In the implementation block
@property (nonatomic,retain) UIColor * editableTextColor;                                              //@synthesize editableTextColor=_editableTextColor - In the implementation block
@property (nonatomic,retain) UIColor * editablePlaceholderTextColor;                                   //@synthesize editablePlaceholderTextColor=_editablePlaceholderTextColor - In the implementation block
@property (nonatomic,retain) UIColor * editableInsertionPointColor;                                    //@synthesize editableInsertionPointColor=_editableInsertionPointColor - In the implementation block
@property (nonatomic,retain) UIColor * editableSelectionBarColor;                                      //@synthesize editableSelectionBarColor=_editableSelectionBarColor - In the implementation block
@property (nonatomic,retain) UIColor * editableSelectionHighlightColor;                                //@synthesize editableSelectionHighlightColor=_editableSelectionHighlightColor - In the implementation block
@property (nonatomic,retain) UIColor * footerHyperlinkColor;                                           //@synthesize footerHyperlinkColor=_footerHyperlinkColor - In the implementation block
@property (nonatomic,retain) UIColor * segmentedSliderTrackColor;                                      //@synthesize segmentedSliderTrackColor=_segmentedSliderTrackColor - In the implementation block
@property (nonatomic,retain) id<PSSpecifierDataSource> specifierDataSource; 
@property (assign,getter=isShowingSetupController,nonatomic) BOOL showingSetupController;              //@synthesize showingSetupController=_showingSetupController - In the implementation block
@property (assign,nonatomic) BOOL forceSynchronousIconLoadForCreatedCells;                             //@synthesize forceSynchronousIconLoadForCreatedCells=_forceSynchronousIconLoadForCreatedCells - In the implementation block
@property (assign,nonatomic) BOOL edgeToEdgeCells;                                                     //@synthesize edgeToEdgeCells=_edgeToEdgeCells - In the implementation block
@property (nonatomic,retain) NSDictionary * pendingURLResourceDictionary;                              //@synthesize pendingURLResourceDictionary=_pendingURLResourceDictionary - In the implementation block
@property (nonatomic,copy) NSString * specifierIDPendingPush;                                          //@synthesize specifierIDPendingPush=_specifierIDPendingPush - In the implementation block
@property (nonatomic,copy) id urlHandlingCompletion;                                                   //@synthesize urlHandlingCompletion=_urlHandlingCompletion - In the implementation block
@property (assign,getter=isPrefetchingEnabled,nonatomic) BOOL prefetchingEnabled;                      //@synthesize prefetchingEnabled=_prefetchingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long observerType; 
+(id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2 ;
+(id)appearanceWhenContainedInInstancesOfClasses:(id)arg1 ;
+(id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2 ;
+(id)appearance;
+(id)appearanceWhenContainedIn:(Class)arg1 ;
+(id)appearanceForTraitCollection:(id)arg1 ;
+(id)aggregateReportingDomainOverride;
+(BOOL)displaysButtonBar;
+(void)setAggregateReportingDomainOverride:(id)arg1 ;
-(void)beginUpdates;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)bundle;
-(void)dismissPopover;
-(BOOL)contentSizeDidChange;
-(id)table;
-(void)endUpdates;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setSpecifier:(id)arg1 ;
-(id)specifier;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(UIColor *)textColor;
-(void)showPINSheet:(id)arg1 ;
-(id)specifiers;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(BOOL)usesDarkTheme;
-(id)popupStylePopoverController;
-(void)showPINSheet:(id)arg1 allowOptionsButton:(BOOL)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(UIColor *)foregroundColor;
-(void)insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(PSURLControllerHandler *)urlHandler;
-(UIColor *)buttonTextColor;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)specifierForID:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)removeSpecifierAtIndex:(long long)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(id)selectSpecifier:(id)arg1 ;
-(void)setDesiredVerticalContentOffsetItemNamed:(id)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)viewDidUnload;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)reloadSpecifiers;
-(void)handleURL:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSString *)description;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)didBecomeActive:(id)arg1 ;
-(void)clearCache;
-(void)setPrefetchingEnabled:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)reload;
-(void)_setContentInset:(double)arg1 ;
-(void)insertSpecifier:(id)arg1 atIndex:(long long)arg2 ;
-(void)setUsesDarkTheme:(BOOL)arg1 ;
-(void)loseFocus;
-(void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setSpecifiers:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)removeSpecifier:(id)arg1 ;
-(void)reloadSpecifierAtIndex:(long long)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(UIColor *)separatorColor;
-(void)setContentSizeDidChange:(BOOL)arg1 ;
-(long long)indexOfSpecifier:(id)arg1 ;
-(void)contentSizeDidChange:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 detailTextForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2 ;
-(void)loadView;
-(long long)tableView:(id)arg1 titleAlignmentForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)indexForIndexPath:(id)arg1 ;
-(id)specifierAtIndex:(long long)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifier:(id)arg3 ;
-(long long)indexOfGroup:(long long)arg1 ;
-(void)showController:(id)arg1 ;
-(void)setButtonTextColor:(UIColor *)arg1 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)highlightSpecifierWithID:(id)arg1 ;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3 ;
-(long long)rowsForGroup:(long long)arg1 ;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(void)setCachesCells:(BOOL)arg1 ;
-(void)setReusesCells:(BOOL)arg1 ;
-(void)setSpecifierID:(id)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3 ;
-(id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 ;
-(void)setSpecifierDataSource:(id<PSSpecifierDataSource>)arg1 ;
-(id)indexPathForIndex:(long long)arg1 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 ;
-(void)prepareSpecifiersMetadata;
-(BOOL)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierAtIndex:(long long)arg3 ;
-(void)createGroupIndices;
-(id)specifiersInGroup:(long long)arg1 ;
-(void)reloadSpecifierAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)reloadSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)reloadSpecifierID:(id)arg1 animated:(BOOL)arg2 ;
-(id)getGroupSpecifierForSpecifier:(id)arg1 ;
-(void)reloadSpecifier:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(long long)tableViewStyle;
-(BOOL)_getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierAtIndex:(long long)arg3 groups:(id)arg4 ;
-(long long)indexOfSpecifierID:(id)arg1 ;
-(void)_returnKeyPressed:(id)arg1 ;
-(void)insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)insertSpecifier:(id)arg1 atIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)insertSpecifier:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertSpecifier:(id)arg1 atEndOfGroup:(long long)arg2 animated:(BOOL)arg3 ;
-(void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3 ;
-(void)_addIdentifierForSpecifier:(id)arg1 ;
-(void)_insertContiguousSpecifiers:(id)arg1 atIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifier:(id)arg2 animated:(BOOL)arg3 ;
-(void)removeSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 animated:(BOOL)arg3 ;
-(void)addSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(long long)arg2 animated:(BOOL)arg3 ;
-(void)removeSpecifierID:(id)arg1 animated:(BOOL)arg2 ;
-(void)addSpecifiersFromArray:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)removeSpecifierAtIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)removeLastSpecifierAnimated:(BOOL)arg1 ;
-(void)setUrlHandler:(PSURLControllerHandler *)arg1 ;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 urlDictionary:(id)arg2 ;
-(void)_removeIdentifierForSpecifier:(id)arg1 ;
-(void)_removeContiguousSpecifiers:(id)arg1 animated:(BOOL)arg2 ;
-(void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 animated:(BOOL)arg3 ;
-(void)_unloadBundleControllers;
-(void)updateSpecifiersInRange:(NSRange)arg1 withSpecifiers:(id)arg2 ;
-(void)delayedContentSizeDidChange;
-(long long)_nextGroupInSpecifiersAfterIndex:(long long)arg1 inArray:(id)arg2 ;
-(void)dismissConfirmationViewAnimated:(BOOL)arg1 ;
-(Class)tableViewClass;
-(BOOL)edgeToEdgeCells;
-(BOOL)_isRegularWidth;
-(void)_updateSectionContentInsetWithAnimation:(BOOL)arg1 ;
-(id)_createGroupIndices:(id)arg1 ;
-(void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2 ;
-(void)setForceSynchronousIconLoadForCreatedCells:(BOOL)arg1 ;
-(id)cachedCellForSpecifier:(id)arg1 ;
-(BOOL)_isEmptyGroup:(unsigned long long)arg1 ;
-(id)_customViewForSpecifier:(id)arg1 class:(Class)arg2 isHeader:(BOOL)arg3 ;
-(void)returnPressedAtEnd;
-(double)_tableView:(id)arg1 heightForCustomInSection:(long long)arg2 isHeader:(BOOL)arg3 ;
-(void)_loadBundleControllers;
-(id)_tableView:(id)arg1 viewForCustomInSection:(long long)arg2 isHeader:(BOOL)arg3 ;
-(void)_scrollToSpecifierWithID:(id)arg1 animated:(BOOL)arg2 ;
-(void)popupViewWillDisappear;
-(BOOL)shouldSelectResponderOnAppearance;
-(id)findFirstVisibleResponder;
-(void)_performHighlightForSpecifierWithID:(id)arg1 tryAgainIfFailed:(BOOL)arg2 ;
-(void)formSheetViewWillDisappear;
-(void)viewDidLayoutSubviews;
-(void)confirmationViewAcceptedForSpecifier:(id)arg1 ;
-(BOOL)handlePendingURL;
-(void)confirmationViewAlternateAcceptedForSpecifier:(id)arg1 ;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)confirmationViewCancelledForSpecifier:(id)arg1 ;
-(BOOL)performConfirmationActionForSpecifier:(id)arg1 ;
-(void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2 ;
-(BOOL)performButtonActionForSpecifier:(id)arg1 ;
-(BOOL)performConfirmationAlternateActionForSpecifier:(id)arg1 ;
-(BOOL)performConfirmationCancelActionForSpecifier:(id)arg1 ;
-(BOOL)performActionForSpecifier:(id)arg1 ;
-(BOOL)performLoadActionForSpecifier:(id)arg1 ;
-(id)indexPathForSpecifier:(id)arg1 ;
-(long long)observerType;
-(void)showConfirmationViewForSpecifier:(id)arg1 ;
-(void)clearPendingURL;
-(void)setEdgeToEdgeCells:(BOOL)arg1 ;
-(void)dismissPopoverAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUrlHandlingCompletion:(id)arg1 ;
-(void)setPendingURLResourceDictionary:(NSDictionary *)arg1 ;
-(void)setSpecifierIDPendingPush:(NSString *)arg1 ;
-(id)urlHandlingCompletion;
-(void)reloadIconForSpecifierForBundle:(id)arg1 ;
-(double)_getKeyboardIntersectionHeightFromUserInfo:(id)arg1 ;
-(void)_performHighlightForSpecifierWithID:(id)arg1 ;
-(void)_moveSpecifierAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)performSpecifierUpdates:(id)arg1 ;
-(id)specifierAtIndexPath:(id)arg1 ;
-(void)prefetchResourcesFor:(id)arg1 ;
-(void)lazyLoadBundle:(id)arg1 ;
-(void)dataSource:(id)arg1 performUpdates:(id)arg2 ;
-(long long)numberOfGroups;
-(void)invalidateSpecifiersForDataSource:(id)arg1 ;
-(void)setDesiredVerticalContentOffset:(float)arg1 ;
-(id)specifierID;
-(float)verticalContentOffset;
-(BOOL)isShowingSetupController;
-(void)setShowingSetupController:(BOOL)arg1 ;
-(void)reloadSpecifierID:(id)arg1 ;
-(BOOL)containsSpecifier:(id)arg1 ;
-(id)getGroupSpecifierForSpecifierID:(id)arg1 ;
-(BOOL)getGroup:(long long*)arg1 row:(long long*)arg2 ofSpecifierID:(id)arg3 ;
-(long long)indexForRow:(long long)arg1 inGroup:(long long)arg2 ;
-(NSRange)rangeOfSpecifiersInGroupID:(id)arg1 ;
-(void)insertSpecifier:(id)arg1 afterSpecifierID:(id)arg2 ;
-(void)insertSpecifier:(id)arg1 atEndOfGroup:(long long)arg2 ;
-(void)addSpecifier:(id)arg1 ;
-(void)insertContiguousSpecifiers:(id)arg1 afterSpecifierID:(id)arg2 ;
-(void)addSpecifiersFromArray:(id)arg1 ;
-(void)insertContiguousSpecifiers:(id)arg1 atEndOfGroup:(long long)arg2 ;
-(void)removeSpecifierID:(id)arg1 ;
-(void)removeLastSpecifier;
-(void)removeContiguousSpecifiers:(id)arg1 ;
-(void)replaceContiguousSpecifiers:(id)arg1 withSpecifiers:(id)arg2 ;
-(void)updateSpecifiers:(id)arg1 withSpecifiers:(id)arg2 ;
-(id)initForContentSize:(CGSize)arg1 ;
-(id)cachedCellForSpecifierID:(id)arg1 ;
-(void)createPrequeuedPSTableCells:(unsigned long long)arg1 ;
-(void)_scrollToSpecifierNamed:(id)arg1 ;
-(void)selectRowForSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)showConfirmationViewForSpecifier:(id)arg1 useAlert:(BOOL)arg2 swapAlertButtons:(BOOL)arg3 ;
-(id)specifiersForIDs:(id)arg1 ;
-(id)controllerForRowAtIndexPath:(id)arg1 ;
-(void)dismissPopoverWithCompletion:(/*^block*/id)arg1 ;
-(id<PSSpecifierDataSource>)specifierDataSource;
-(void)_setNotShowingSetupController;
-(BOOL)forceSynchronousIconLoadForCreatedCells;
-(BOOL)isPrefetchingEnabled;
-(NSDictionary *)pendingURLResourceDictionary;
-(NSString *)specifierIDPendingPush;
-(UIColor *)cellHighlightColor;
-(void)setCellHighlightColor:(UIColor *)arg1 ;
-(UIColor *)padSelectionColor;
-(void)setPadSelectionColor:(UIColor *)arg1 ;
-(UIColor *)altTextColor;
-(UIColor *)cellAccessoryColor;
-(void)setCellAccessoryColor:(UIColor *)arg1 ;
-(UIColor *)cellAccessoryHighlightColor;
-(void)setCellAccessoryHighlightColor:(UIColor *)arg1 ;
-(void)setAltTextColor:(UIColor *)arg1 ;
-(UIColor *)editableTextColor;
-(void)setEditableTextColor:(UIColor *)arg1 ;
-(UIColor *)editablePlaceholderTextColor;
-(UIColor *)editableInsertionPointColor;
-(BOOL)shouldDeferPushForSpecifierID:(id)arg1 ;
-(void)setEditablePlaceholderTextColor:(UIColor *)arg1 ;
-(void)setEditableInsertionPointColor:(UIColor *)arg1 ;
-(UIColor *)editableSelectionBarColor;
-(void)setEditableSelectionBarColor:(UIColor *)arg1 ;
-(UIColor *)footerHyperlinkColor;
-(UIColor *)editableSelectionHighlightColor;
-(void)setEditableSelectionHighlightColor:(UIColor *)arg1 ;
-(void)setFooterHyperlinkColor:(UIColor *)arg1 ;
-(UIColor *)segmentedSliderTrackColor;
-(void)setSegmentedSliderTrackColor:(UIColor *)arg1 ;
@end

