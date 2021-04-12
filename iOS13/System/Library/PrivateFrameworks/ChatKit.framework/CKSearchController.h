/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSearchControllerDelegate;
#import <ChatKit/ChatKit-Structs.h>
@class NSString, CSSearchQuery, NSArray;

@interface CKSearchController : NSObject {

	BOOL _suppressAvatars;
	BOOL _queryRunning;
	id<CKSearchControllerDelegate> _delegate;
	NSString* _currentSearchText;
	unsigned long long _mode;
	CSSearchQuery* _query;
	/*^block*/id _queryFoundItemHandler;
	/*^block*/id _queryCompletionHandler;
	unsigned long long _sectionIndex;
	NSArray* _results;

}

@property (nonatomic,retain) NSArray * results;                                           //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                     //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;                             //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,retain) CSSearchQuery * query;                                       //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSString * currentSearchText;                                //@synthesize currentSearchText=_currentSearchText - In the implementation block
@property (assign,nonatomic) BOOL queryRunning;                                           //@synthesize queryRunning=_queryRunning - In the implementation block
@property (assign,nonatomic,__weak) id<CKSearchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id queryFoundItemHandler;                                      //@synthesize queryFoundItemHandler=_queryFoundItemHandler - In the implementation block
@property (nonatomic,copy) id queryCompletionHandler;                                     //@synthesize queryCompletionHandler=_queryCompletionHandler - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreResults; 
@property (assign,nonatomic) BOOL suppressAvatars;                                        //@synthesize suppressAvatars=_suppressAvatars - In the implementation block
+(id)sectionTitle;
+(long long)orthogonalScrollingBehavior;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(Class)cellClass;
+(id)indexingString;
+(BOOL)supportsQuicklook;
+(BOOL)useRecencyRankedSearchForMode:(unsigned long long)arg1 ;
+(unsigned long long)recencyRankedTargetResultCount;
+(BOOL)previewControllerPresentsModally;
+(BOOL)supportsMenuInteraction;
-(id<CKSearchControllerDelegate>)delegate;
-(void)setDelegate:(id<CKSearchControllerDelegate>)arg1 ;
-(CSSearchQuery *)query;
-(void)setMode:(unsigned long long)arg1 ;
-(NSArray *)results;
-(void)setQuery:(CSSearchQuery *)arg1 ;
-(unsigned long long)mode;
-(double)interGroupSpacing;
-(void)setResults:(NSArray *)arg1 ;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(void)didSelectResult:(id)arg1 ;
-(id)filterQueries;
-(id)fetchAttributes;
-(unsigned long long)maxResultsForMode:(unsigned long long)arg1 ;
-(id)chatGUIDForSearchableItem:(id)arg1 ;
-(unsigned long long)layoutWidth;
-(BOOL)suppressAvatars;
-(id)queryAttributesForText:(id)arg1 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg1 ;
-(id)queryResultsForItems:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3 ;
-(void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(id)_additionalMenuActionsForResult:(id)arg1 ;
-(id)_pasteboardItemsForResult:(id)arg1 ;
-(id)_activityItemProviderForResult:(id)arg1 ;
-(void)deleteAttachmentForResult:(id)arg1 ;
-(BOOL)shouldStartMenuInteractionForResult:(id)arg1 ;
-(id)previewViewControllerForResult:(id)arg1 ;
-(BOOL)handleSelectionForResult:(id)arg1 ;
-(id)initWithSectionIndex:(unsigned long long)arg1 ;
-(BOOL)wantsHeaderSection;
-(NSString *)currentSearchText;
-(void)searchWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)saveAttachmentForResult:(id)arg1 ;
-(Class)headerOverrideClass;
-(NSDirectionalEdgeInsets)additionalGroupInsets;
-(void)searchEnded;
-(void)setQueryFoundItemHandler:(id)arg1 ;
-(void)setQueryCompletionHandler:(id)arg1 ;
-(void)cancelCurrentSearch;
-(BOOL)hasMoreResults;
-(id)menuActionsForResult:(id)arg1 atRect:(CGRect)arg2 ;
-(id)zkwFilterQueries;
-(id)rankingQueriesWithText:(id)arg1 ;
-(BOOL)wantsFooterSection;
-(Class)footerClass;
-(id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3 ;
-(void)setSuppressAvatars:(BOOL)arg1 ;
-(id)_queryStringWithText:(id)arg1 ;
-(id)_queryContextWithText:(id)arg1 ;
-(id)queryFoundItemHandler;
-(id)queryCompletionHandler;
-(void)setCurrentSearchText:(NSString *)arg1 ;
-(void)setQueryRunning:(BOOL)arg1 ;
-(unsigned long long)queryTypeForSearchText:(id)arg1 ;
-(BOOL)_currentModeIsDetails;
-(BOOL)queryRunning;
@end

