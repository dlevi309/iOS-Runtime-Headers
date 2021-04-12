/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/CNComposeRecipientTableViewCellDelegate.h>

@protocol CNAutocompleteResultsTableViewControllerDelegate;
@class NSMutableArray, _CNAutocompleteResultsTableViewModel, NSArray, NSMutableSet, CNAvatarViewControllerSettings, NSString;

@interface CNAutocompleteResultsTableViewController : UITableViewController <CNComposeRecipientTableViewCellDelegate> {

	NSMutableArray* _searchResults;
	NSMutableArray* _suggestedSearchResults;
	NSMutableArray* _serverSearchResults;
	_CNAutocompleteResultsTableViewModel* _tableViewModel;
	BOOL _tableViewNeedsReload;
	BOOL _deferTableViewUpdates;
	BOOL _inDisambiguationMode;
	BOOL _hasPerformedRecipientExpansion;
	BOOL _supportsInfoButton;
	id<CNAutocompleteResultsTableViewControllerDelegate> _delegate;
	NSArray* _recipients;
	double _trailingButtonMidlineInsetFromLayoutMargin;
	NSMutableSet* _expandedIdentifiers;
	CNAvatarViewControllerSettings* _sharedAvatarViewControllerSettings;

}

@property (nonatomic,retain) NSMutableSet * expandedIdentifiers;                                                //@synthesize expandedIdentifiers=_expandedIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL inDisambiguationMode;                                                         //@synthesize inDisambiguationMode=_inDisambiguationMode - In the implementation block
@property (assign,nonatomic) BOOL hasPerformedRecipientExpansion;                                               //@synthesize hasPerformedRecipientExpansion=_hasPerformedRecipientExpansion - In the implementation block
@property (assign,nonatomic) BOOL supportsInfoButton;                                                           //@synthesize supportsInfoButton=_supportsInfoButton - In the implementation block
@property (nonatomic,retain) CNAvatarViewControllerSettings * sharedAvatarViewControllerSettings;               //@synthesize sharedAvatarViewControllerSettings=_sharedAvatarViewControllerSettings - In the implementation block
@property (assign,nonatomic,__weak) id<CNAutocompleteResultsTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                                                                //@synthesize recipients=_recipients - In the implementation block
@property (assign,getter=isDeferringTableViewUpdates,nonatomic) BOOL deferTableViewUpdates;                     //@synthesize deferTableViewUpdates=_deferTableViewUpdates - In the implementation block
@property (assign,nonatomic) double trailingButtonMidlineInsetFromLayoutMargin;                                 //@synthesize trailingButtonMidlineInsetFromLayoutMargin=_trailingButtonMidlineInsetFromLayoutMargin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)avatarsAreHidden;
+(void)dispatchMainIfNecessary:(/*^block*/id)arg1 ;
-(NSArray *)recipients;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)selectNextSearchResult;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)didHover:(id)arg1 ;
-(void)setExpandedIdentifiers:(NSMutableSet *)arg1 ;
-(BOOL)_deviceIsLockedWithPassword;
-(void)setSupportsInfoButton:(BOOL)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)selectPreviousSearchResult;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setSharedAvatarViewControllerSettings:(CNAvatarViewControllerSettings *)arg1 ;
-(void)selectRowAtIndexPath:(id)arg1 ;
-(void)_updateTableViewModelAnimated:(BOOL)arg1 ;
-(void)setInDisambiguationMode:(BOOL)arg1 ;
-(void)setHasPerformedRecipientExpansion:(BOOL)arg1 ;
-(NSMutableSet *)expandedIdentifiers;
-(id)unificationIdentifierForRecipient:(id)arg1 ;
-(id)_flattenedIndexPaths;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<CNAutocompleteResultsTableViewControllerDelegate>)delegate;
-(void)_selectSearchResultsRecipientAtIndexPath:(id)arg1 ;
-(BOOL)attemptDisambiguationToggleAtSelectedRowIsExpand:(BOOL)arg1 ;
-(void)didToggleDisambiguationAtIndexPath:(id)arg1 ;
-(id)_recipientAtIndexPath:(id)arg1 ;
-(id)_unifiedRecipientForRecipientAtIndexPath:(id)arg1 ;
-(BOOL)recipientIsExpanded:(id)arg1 ;
-(BOOL)recipientIsDisambiguationRecipient:(id)arg1 ;
-(id)_indexPathForRecipient:(id)arg1 ;
-(void)updateBackgroundAndSeparatorsForCell:(id)arg1 atIndexPath:(id)arg2 ;
-(double)_tableViewHeaderHeight;
-(BOOL)recipientIsExpandedParent:(id)arg1 ;
-(BOOL)recipientIsExpandedChild:(id)arg1 ;
-(CNAvatarViewControllerSettings *)sharedAvatarViewControllerSettings;
-(BOOL)inDisambiguationMode;
-(BOOL)supportsInfoButton;
-(BOOL)updatePreferredRecipientForCell:(id)arg1 isInvalidation:(BOOL)arg2 ;
-(void)updateLabelColorForCell:(id)arg1 ;
-(double)trailingButtonMidlineInsetFromLayoutMargin;
-(void)setTrailingButtonMidlineInsetFromLayoutMargin:(double)arg1 ;
-(BOOL)hasPerformedRecipientExpansion;
-(BOOL)shouldShowCheckmarkForRecipient:(id)arg1 preferredRecipient:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)willProvideOverrideImageDataForCell:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)didTapDisambiguationChevronForCell:(id)arg1 ;
-(void)didTapInfoButtonForCell:(id)arg1 ;
-(void)setDeferTableViewUpdates:(BOOL)arg1 ;
-(id)_combinedResults;
-(BOOL)isDeferringTableViewUpdates;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<CNAutocompleteResultsTableViewControllerDelegate>)arg1 ;
-(void)viewLayoutMarginsDidChange;
-(void)invalidateSearchResultRecipient:(id)arg1 ;
-(void)invalidateAddressTintColors;
-(void)invalidatePreferredRecipients;
-(void)updateRecipients:(id)arg1 disambiguatingRecipient:(id)arg2 ;
-(BOOL)confirmSelectedRecipient;
-(BOOL)expandSelectedRecipient;
-(BOOL)collapseSelectedRecipient;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

