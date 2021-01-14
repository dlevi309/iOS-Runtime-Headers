/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <UIKitCore/UITableViewController.h>

@protocol MFAutocompleteResultsTableViewControllerDelegate;
@class NSMutableArray, _MFAutocompleteResultsTableViewModel, UIColor, NSArray;

@interface MFAutocompleteResultsTableViewController : UITableViewController {

	NSMutableArray* _searchResults;
	NSMutableArray* _suggestedSearchResults;
	NSMutableArray* _serverSearchResults;
	_MFAutocompleteResultsTableViewModel* _tableViewModel;
	BOOL _tableViewNeedsReload;
	BOOL _cellAnimationsEnabled;
	BOOL _deferTableViewUpdates;
	BOOL _shouldHighlightCompleteMatches;
	BOOL _shouldDimIrrelevantInformation;
	UIColor* _cellBackgroundColor;
	id<MFAutocompleteResultsTableViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MFAutocompleteResultsTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * contactRecipients;                                                     //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,readonly) NSArray * suggestedRecipients;                                                   //@synthesize suggestedSearchResults=_suggestedSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * directoryServerRecipients;                                             //@synthesize serverSearchResults=_serverSearchResults - In the implementation block
@property (nonatomic,readonly) NSArray * allRecipients; 
@property (nonatomic,retain) UIColor * cellBackgroundColor;                                                     //@synthesize cellBackgroundColor=_cellBackgroundColor - In the implementation block
@property (assign,getter=areCellAnimationsEnabled,nonatomic) BOOL cellAnimationsEnabled;                        //@synthesize cellAnimationsEnabled=_cellAnimationsEnabled - In the implementation block
@property (assign,getter=isDeferringTableViewUpdates,nonatomic) BOOL deferTableViewUpdates;                     //@synthesize deferTableViewUpdates=_deferTableViewUpdates - In the implementation block
@property (assign,nonatomic) BOOL shouldHighlightCompleteMatches;                                               //@synthesize shouldHighlightCompleteMatches=_shouldHighlightCompleteMatches - In the implementation block
@property (assign,nonatomic) BOOL shouldDimIrrelevantInformation;                                               //@synthesize shouldDimIrrelevantInformation=_shouldDimIrrelevantInformation - In the implementation block
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)clear;
-(void)presentSearchResults:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)selectNextSearchResult;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)setShouldHighlightCompleteMatches:(BOOL)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)selectPreviousSearchResult;
-(void)_updateTableViewModelAnimated:(BOOL)arg1 ;
-(id)_flattenedIndexPaths;
-(UIColor *)cellBackgroundColor;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id<MFAutocompleteResultsTableViewControllerDelegate>)delegate;
-(void)_selectSearchResultsRecipientAtIndexPath:(id)arg1 ;
-(id)_recipientAtIndexPath:(id)arg1 ;
-(id)_indexPathForRecipient:(id)arg1 ;
-(double)_tableViewHeaderHeight;
-(void)setShouldDimIrrelevantInformation:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setDeferTableViewUpdates:(BOOL)arg1 ;
-(id)_combinedResults;
-(BOOL)isDeferringTableViewUpdates;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)setCellBackgroundColor:(UIColor *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSArray *)allRecipients;
-(BOOL)containsRecipient:(id)arg1 ;
-(Class)recipientTableViewCellClass;
-(NSArray *)contactRecipients;
-(NSArray *)suggestedRecipients;
-(NSArray *)directoryServerRecipients;
-(BOOL)areCellAnimationsEnabled;
-(void)setCellAnimationsEnabled:(BOOL)arg1 ;
-(BOOL)shouldDimIrrelevantInformation;
-(void)setDelegate:(id<MFAutocompleteResultsTableViewControllerDelegate>)arg1 ;
-(void)resetScrollPosition;
-(unsigned long long)numberOfResults;
-(void)invalidateSearchResultRecipient:(id)arg1 ;
-(BOOL)shouldHighlightCompleteMatches;
-(BOOL)confirmSelectedRecipient;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
@end

