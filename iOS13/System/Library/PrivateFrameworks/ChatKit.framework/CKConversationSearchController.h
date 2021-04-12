/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKSearchController.h>

@class NSSet, _PSSuggester, NSArray;

@interface CKConversationSearchController : CKSearchController {

	BOOL _gotResults;
	BOOL _searchTerminated;
	NSSet* _intermediaryResults;
	_PSSuggester* _zkwSuggester;
	NSArray* _currentZKWSuggestions;

}

@property (assign,nonatomic) BOOL gotResults;                              //@synthesize gotResults=_gotResults - In the implementation block
@property (nonatomic,retain) NSSet * intermediaryResults;                  //@synthesize intermediaryResults=_intermediaryResults - In the implementation block
@property (assign,nonatomic) BOOL searchTerminated;                        //@synthesize searchTerminated=_searchTerminated - In the implementation block
@property (nonatomic,retain) _PSSuggester * zkwSuggester;                  //@synthesize zkwSuggester=_zkwSuggester - In the implementation block
@property (nonatomic,retain) NSArray * currentZKWSuggestions;              //@synthesize currentZKWSuggestions=_currentZKWSuggestions - In the implementation block
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(Class)cellClass;
+(BOOL)supportsQuicklook;
+(BOOL)useRecencyRankedSearchForMode:(unsigned long long)arg1 ;
+(unsigned long long)recencyRankedTargetResultCount;
+(BOOL)supportsMenuInteraction;
-(double)interGroupSpacing;
-(void)didSelectResult:(id)arg1 ;
-(id)filterQueries;
-(id)fetchAttributes;
-(unsigned long long)maxResultsForMode:(unsigned long long)arg1 ;
-(id)chatGUIDForSearchableItem:(id)arg1 ;
-(id)queryAttributesForText:(id)arg1 ;
-(id)queryResultsForItems:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
-(BOOL)wantsHeaderSection;
-(void)searchWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(NSDirectionalEdgeInsets)additionalGroupInsets;
-(void)searchEnded;
-(BOOL)searchTerminated;
-(void)setGotResults:(BOOL)arg1 ;
-(NSSet *)intermediaryResults;
-(void)setIntermediaryResults:(NSSet *)arg1 ;
-(void)setSearchTerminated:(BOOL)arg1 ;
-(id)rankingQueriesWithText:(id)arg1 ;
-(BOOL)gotResults;
-(id)_appendRecencyToRankingQuery:(id)arg1 hours:(unsigned long long)arg2 ;
-(void)_searchZKWWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)_searchSpotlightWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(_PSSuggester *)zkwSuggester;
-(void)setCurrentZKWSuggestions:(NSArray *)arg1 ;
-(NSArray *)currentZKWSuggestions;
-(id)_sortedAndRankedItemsWithItems:(id)arg1 ;
-(void)setZkwSuggester:(_PSSuggester *)arg1 ;
@end

