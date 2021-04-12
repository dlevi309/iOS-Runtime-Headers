/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/CNComposeRecipientTableViewCellDelegate.h>

@protocol CNAutocompleteResultsTableViewControllerDelegate;
@class NSMutableArray, _CNAutocompleteResultsTableViewModel, NSArray, NSMutableSet, NSString;

@interface CNAutocompleteResultsTableViewController : UITableViewController <CNComposeRecipientTableViewCellDelegate> {

	NSMutableArray* _searchResults;
	NSMutableArray* _suggestedSearchResults;
	NSMutableArray* _serverSearchResults;
	_CNAutocompleteResultsTableViewModel* _tableViewModel;
	BOOL _tableViewNeedsReload;
	BOOL _deferTableViewUpdates;
	BOOL _inDisambiguationMode;
	BOOL _hasPerformedRecipientExpansion;
	BOOL _isDeviceLocked;
	id<CNAutocompleteResultsTableViewControllerDelegate> _delegate;
	NSArray* _recipients;
	double _trailingButtonMidlineInsetFromLayoutMargin;
	NSMutableSet* _expandedIdentifiers;

}

@property (nonatomic,retain) NSMutableSet * expandedIdentifiers;                                                //@synthesize expandedIdentifiers=_expandedIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL inDisambiguationMode;                                                         //@synthesize inDisambiguationMode=_inDisambiguationMode - In the implementation block
@property (assign,nonatomic) BOOL hasPerformedRecipientExpansion;                                               //@synthesize hasPerformedRecipientExpansion=_hasPerformedRecipientExpansion - In the implementation block
@property (assign,nonatomic) BOOL isDeviceLocked;                                                               //@synthesize isDeviceLocked=_isDeviceLocked - In the implementation block
@property (assign,nonatomic,__weak) id<CNAutocompleteResultsTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                                                                //@synthesize recipients=_recipients - In the implementation block
@property (assign,getter=isDeferringTableViewUpdates,nonatomic) BOOL deferTableViewUpdates;                     //@synthesize deferTableViewUpdates=_deferTableViewUpdates - In the implementation block
@property (assign,nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;                                 //@synthesize trailingButtonMidlineInsetFromLayoutMargin=_trailingButtonMidlineInsetFromLayoutMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)dispatchMainIfNecessary:(/*^block*/id)arg1 ;
-(id<CNAutocompleteResultsTableViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CNAutocompleteResultsTableViewControllerDelegate>)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(BOOL)isDeviceLocked;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)viewLayoutMarginsDidChange;
-(void)selectNextSearchResult;
-(void)selectPreviousSearchResult;
-(void)invalidatePreferredRecipients;
-(void)invalidateSearchResultRecipient:(id)arg1 ;
-(void)invalidateAddressTintColors;
-(void)updateRecipients:(id)arg1 disambiguatingRecipient:(id)arg2 ;
-(void)setDeferTableViewUpdates:(BOOL)arg1 ;
-(void)_updateTableViewModelAnimated:(BOOL)arg1 ;
-(id)_combinedResults;
-(id)_flattenedIndexPaths;
-(void)_selectSearchResultsRecipientAtIndexPath:(id)arg1 ;
-(id)_recipientAtIndexPath:(id)arg1 ;
-(id)_indexPathForRecipient:(id)arg1 ;
-(double)_tableViewHeaderHeight;
-(BOOL)confirmSelectedRecipient;
-(BOOL)isDeferringTableViewUpdates;
-(double)trailingButtonMidlineInsetFromLayoutMargin;
-(void)setTrailingButtonMidlineInsetFromLayoutMargin:(double)arg1 ;
-(void)setExpandedIdentifiers:(NSMutableSet *)arg1 ;
-(BOOL)_deviceIsLockedWithPassword;
-(void)setIsDeviceLocked:(BOOL)arg1 ;
-(void)setInDisambiguationMode:(BOOL)arg1 ;
-(void)setHasPerformedRecipientExpansion:(BOOL)arg1 ;
-(NSMutableSet *)expandedIdentifiers;
-(id)unificationIdentifierForRecipient:(id)arg1 ;
-(id)_unifiedRecipientForRecipientAtIndexPath:(id)arg1 ;
-(BOOL)recipientIsExpanded:(id)arg1 ;
-(BOOL)recipientIsDisambiguationRecipient:(id)arg1 ;
-(void)updateBackgroundAndSeparatorsForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)recipientIsExpandedParent:(id)arg1 ;
-(BOOL)recipientIsExpandedChild:(id)arg1 ;
-(BOOL)inDisambiguationMode;
-(BOOL)updatePreferredRecipientForCell:(id)arg1 isInvalidation:(BOOL)arg2 ;
-(void)updateLabelColorForCell:(id)arg1 ;
-(BOOL)hasPerformedRecipientExpansion;
-(BOOL)shouldShowCheckmarkForRecipient:(id)arg1 preferredRecipient:(id)arg2 ;
-(void)didTapDisambiguationChevronForCell:(id)arg1 ;
-(void)didTapInfoButtonForCell:(id)arg1 ;
@end

