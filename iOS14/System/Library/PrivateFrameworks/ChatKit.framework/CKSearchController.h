/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKSearchControllerDelegate;
#import <ChatKit/ChatKit-Structs.h>
@class NSString, CSSearchQuery, NSArray, CKQLPreviewControllerDataSource;

@interface CKSearchController : NSObject {

	BOOL _suppressAvatars;
	BOOL _queryRunning;
	id<CKSearchControllerDelegate> _delegate;
	NSString* _currentSearchText;
	unsigned long long _mode;
	CSSearchQuery* _query;
	NSString* _currentQueryIdentifier;
	/*^block*/id _queryFoundItemHandler;
	/*^block*/id _queryCompletionHandler;
	unsigned long long _sectionIndex;
	NSArray* _results;
	CKQLPreviewControllerDataSource* _qlPreviewDataSource;

}

@property (nonatomic,retain) NSArray * results;                                                  //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndex;                                    //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (nonatomic,retain) CSSearchQuery * query;                                              //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSString * currentQueryIdentifier;                                  //@synthesize currentQueryIdentifier=_currentQueryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * currentSearchText;                                       //@synthesize currentSearchText=_currentSearchText - In the implementation block
@property (assign,nonatomic) BOOL queryRunning;                                                  //@synthesize queryRunning=_queryRunning - In the implementation block
@property (assign,nonatomic,__weak) id<CKSearchControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id queryFoundItemHandler;                                             //@synthesize queryFoundItemHandler=_queryFoundItemHandler - In the implementation block
@property (nonatomic,copy) id queryCompletionHandler;                                            //@synthesize queryCompletionHandler=_queryCompletionHandler - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreResults; 
@property (assign,nonatomic) BOOL suppressAvatars;                                               //@synthesize suppressAvatars=_suppressAvatars - In the implementation block
@property (nonatomic,retain) CKQLPreviewControllerDataSource * qlPreviewDataSource;              //@synthesize qlPreviewDataSource=_qlPreviewDataSource - In the implementation block
+(id)sectionIdentifier;
+(BOOL)supportsQuicklookForResult:(id)arg1 ;
+(BOOL)supportsMacSelection;
+(id)sectionTitle;
+(Class)cellClass;
+(long long)orthogonalScrollingBehavior;
+(BOOL)supportsMenuInteraction;
+(BOOL)useRecencyRankedSearchForMode:(unsigned long long)arg1 ;
+(unsigned long long)recencyRankedTargetResultCount;
+(id)indexingString;
+(id)reuseIdentifier;
+(BOOL)previewControllerPresentsModally;
-(void)setResults:(NSArray *)arg1 ;
-(CSSearchQuery *)query;
-(NSArray *)results;
-(id)filterQueries;
-(unsigned long long)mode;
-(id)initWithSectionIndex:(unsigned long long)arg1 ;
-(void)setQlPreviewDataSource:(CKQLPreviewControllerDataSource *)arg1 ;
-(BOOL)wantsHeaderSection;
-(NSString *)currentSearchText;
-(void)searchWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)saveAttachmentForResult:(id)arg1 ;
-(CKQLPreviewControllerDataSource *)qlPreviewDataSource;
-(Class)headerOverrideClass;
-(NSDirectionalEdgeInsets)additionalGroupInsets;
-(id<CKSearchControllerDelegate>)delegate;
-(id)fetchAttributes;
-(void)searchEnded;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setDelegate:(id<CKSearchControllerDelegate>)arg1 ;
-(id)_queryStringWithText:(id)arg1 ;
-(void)setQueryRunning:(BOOL)arg1 ;
-(id)_queryContextWithText:(id)arg1 ;
-(id)queryFoundItemHandler;
-(void)setCurrentSearchText:(NSString *)arg1 ;
-(unsigned long long)queryTypeForSearchText:(id)arg1 ;
-(BOOL)queryRunning;
-(BOOL)_currentModeIsDetails;
-(id)_overridingMenuElementsForResult:(id)arg1 ;
-(id)customLayoutSectionForEnvironment:(id)arg1 ;
-(void)setCurrentQueryIdentifier:(NSString *)arg1 ;
-(double)interGroupSpacing;
-(Class)footerClass;
-(void)didSelectResult:(id)arg1 ;
-(unsigned long long)layoutWidth;
-(void)setQueryCompletionHandler:(id)arg1 ;
-(void)setQueryFoundItemHandler:(id)arg1 ;
-(void)cancelCurrentSearch;
-(NSString *)currentQueryIdentifier;
-(BOOL)hasMoreResults;
-(id)menuElementsForResult:(id)arg1 atRect:(CGRect)arg2 ;
-(id)zkwFilterQueries;
-(id)rankingQueriesWithText:(id)arg1 ;
-(BOOL)wantsFooterSection;
-(void)setQuery:(CSSearchQuery *)arg1 ;
-(unsigned long long)maxResultsForMode:(unsigned long long)arg1 ;
-(id)chatGUIDForSearchableItem:(id)arg1 ;
-(BOOL)suppressAvatars;
-(id)queryAttributesForText:(id)arg1 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg1 ;
-(id)queryResultsForItems:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3 ;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(id)_additionalMenuElementsForResult:(id)arg1 ;
-(id)itemProviderForSearchResult:(id)arg1 ;
-(id)_activityItemProviderForResult:(id)arg1 ;
-(void)deleteAttachmentForResult:(id)arg1 ;
-(BOOL)shouldStartMenuInteractionForResult:(id)arg1 ;
-(id)previewViewControllerForResult:(id)arg1 ;
-(BOOL)handleSelectionForResult:(id)arg1 ;
-(id)queryCompletionHandler;
-(id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3 ;
-(void)setSuppressAvatars:(BOOL)arg1 ;
@end

