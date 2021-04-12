/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sectionIdentifier;
+(BOOL)supportsQuicklookForResult:(id)arg1 ;
+(Class)cellClass;
+(BOOL)supportsMenuInteraction;
+(BOOL)useRecencyRankedSearchForMode:(unsigned long long)arg1 ;
+(unsigned long long)recencyRankedTargetResultCount;
+(id)reuseIdentifier;
-(id)filterQueries;
-(BOOL)wantsHeaderSection;
-(void)searchWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(NSDirectionalEdgeInsets)additionalGroupInsets;
-(id)fetchAttributes;
-(void)searchEnded;
-(void)_searchZKWWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(id)_appendRecencyToRankingQuery:(id)arg1 hours:(unsigned long long)arg2 ;
-(void)_searchSpotlightWithText:(id)arg1 mode:(unsigned long long)arg2 ;
-(_PSSuggester *)zkwSuggester;
-(void)setCurrentZKWSuggestions:(NSArray *)arg1 ;
-(NSArray *)currentZKWSuggestions;
-(id)_sortedAndRankedItemsWithItems:(id)arg1 ;
-(void)setZkwSuggester:(_PSSuggester *)arg1 ;
-(BOOL)gotResults;
-(double)interGroupSpacing;
-(void)didSelectResult:(id)arg1 ;
-(BOOL)searchTerminated;
-(void)setGotResults:(BOOL)arg1 ;
-(NSSet *)intermediaryResults;
-(void)setIntermediaryResults:(NSSet *)arg1 ;
-(void)setSearchTerminated:(BOOL)arg1 ;
-(id)rankingQueriesWithText:(id)arg1 ;
-(unsigned long long)maxResultsForMode:(unsigned long long)arg1 ;
-(id)chatGUIDForSearchableItem:(id)arg1 ;
-(id)queryAttributesForText:(id)arg1 ;
-(id)queryResultsForItems:(id)arg1 ;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(id)layoutGroupWithEnvironment:(id)arg1 ;
@end

