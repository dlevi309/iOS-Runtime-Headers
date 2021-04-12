/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SearchUI/SearchUIResultsViewController.h>
#import <libobjc.A.dylib/SPSearchAgentDelegate.h>
#import <libobjc.A.dylib/SPUIResultsViewTestingDelegate.h>

@class SFSearchResult, NSArray, SFResultSection;

@interface SPUIResultsViewController : SearchUIResultsViewController <SPSearchAgentDelegate, SPUIResultsViewTestingDelegate> {

	unsigned long long _startTime;
	BOOL _isHighlighting;
	BOOL _hasResultsWaitingToUpdate;
	/*^block*/id didFinishGettingAllResultsHandler;
	SFSearchResult* _goTakeoverResult;
	NSArray* _resultSections;
	SFResultSection* _suggestionsSection;
	SFResultSection* _searchThroughSection;
	unsigned long long _previousQueryId;
	SFSearchResult* _highlightedResult;

}

@property (retain) NSArray * resultSections;                                           //@synthesize resultSections=_resultSections - In the implementation block
@property (retain) SFResultSection * suggestionsSection;                               //@synthesize suggestionsSection=_suggestionsSection - In the implementation block
@property (readonly) SFSearchResult * actualSearchSuggestionResult; 
@property (assign) BOOL hasResultsWaitingToUpdate;                                     //@synthesize hasResultsWaitingToUpdate=_hasResultsWaitingToUpdate - In the implementation block
@property (retain) SFResultSection * searchThroughSection;                             //@synthesize searchThroughSection=_searchThroughSection - In the implementation block
@property (assign) unsigned long long previousQueryId;                                 //@synthesize previousQueryId=_previousQueryId - In the implementation block
@property (retain) SFSearchResult * highlightedResult;                                 //@synthesize highlightedResult=_highlightedResult - In the implementation block
@property (assign,nonatomic,__weak) id<SPUIResultsViewDelegate> delegate; 
@property (nonatomic,retain) SFSearchResult * goTakeoverResult;                        //@synthesize goTakeoverResult=_goTakeoverResult - In the implementation block
@property (nonatomic,readonly) BOOL isHighlighting;                                    //@synthesize isHighlighting=_isHighlighting - In the implementation block
@property (nonatomic,copy) id didFinishGettingAllResultsHandler; 
-(BOOL)_hasRealSuggestions;
-(void)searchAgentClearedResults:(id)arg1 ;
-(id)asTypedSearchResult;
-(BOOL)hasResultsWaitingToUpdate;
-(void)removeCompletionAndHighlightAsTyped:(BOOL)arg1 ;
-(void)searchUpdatedWithString:(id)arg1 tokenEntity:(id)arg2 queryId:(unsigned long long)arg3 wantsCompletions:(BOOL)arg4 ;
-(void)clearSuggestionSection;
-(void)setHasResultsWaitingToUpdate:(BOOL)arg1 ;
-(SFSearchResult *)highlightedResult;
-(void)setSuggestionsSection:(SFResultSection *)arg1 ;
-(void)setPreviousQueryId:(unsigned long long)arg1 ;
-(void)setDidFinishGettingAllResultsHandler:(id)arg1 ;
-(void)forceHighlightForResult:(id)arg1 ;
-(BOOL)isResultOriginalSearchSuggestion:(id)arg1 ;
-(NSArray *)resultSections;
-(void)setHighlightedResult:(SFSearchResult *)arg1 ;
-(SFSearchResult *)actualSearchSuggestionResult;
-(void)changeTextFieldsReturnKeyType:(long long)arg1 withGoTakeoverResult:(id)arg2 ;
-(void)setGoTakeoverResult:(SFSearchResult *)arg1 ;
-(void)searchAgentFinishedQueryWithoutAdditionalResults:(id)arg1 ;
-(void)setResultSections:(NSArray *)arg1 ;
-(void)insertYahooAttributionIfNecessaryForResult:(id)arg1 ;
-(SFResultSection *)searchThroughSection;
-(id)makeAsYouTypeSuggestionSearchResultWithSearchString:(id)arg1 detailText:(id)arg2 suggestionIdentifier:(id)arg3 queryId:(unsigned long long)arg4 ;
-(id)initWithSearchModel:(id)arg1 ;
-(void)searchAgentUpdatedResults:(id)arg1 ;
-(BOOL)isHighlighting;
-(id)didFinishGettingAllResultsHandler;
-(SFResultSection *)suggestionsSection;
-(void)setSearchThroughSection:(SFResultSection *)arg1 ;
-(void)_pushSectionsUpdate;
-(unsigned long long)previousQueryId;
-(SFSearchResult *)goTakeoverResult;
@end

