/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
*/

#import <SearchUI/SearchUIResultsViewController.h>
#import <libobjc.A.dylib/SPSearchAgentDelegate.h>
#import <libobjc.A.dylib/SPUIResultsViewTestingDelegate.h>

@class NSArray, SFResultSection, SFSearchResult;

@interface SPUIResultsViewController : SearchUIResultsViewController <SPSearchAgentDelegate, SPUIResultsViewTestingDelegate> {

	unsigned long long _startTime;
	BOOL _hasResultsWaitingToUpdate;
	/*^block*/id didFinishGettingAllResultsHandler;
	NSArray* _resultSections;
	SFResultSection* _suggestionsSection;
	SFResultSection* _searchThroughSection;
	unsigned long long _previousQueryId;

}

@property (retain) NSArray * resultSections;                                           //@synthesize resultSections=_resultSections - In the implementation block
@property (retain) SFResultSection * suggestionsSection;                               //@synthesize suggestionsSection=_suggestionsSection - In the implementation block
@property (readonly) SFSearchResult * actualSearchSuggestionResult; 
@property (assign) BOOL hasResultsWaitingToUpdate;                                     //@synthesize hasResultsWaitingToUpdate=_hasResultsWaitingToUpdate - In the implementation block
@property (retain) SFResultSection * searchThroughSection;                             //@synthesize searchThroughSection=_searchThroughSection - In the implementation block
@property (assign) unsigned long long previousQueryId;                                 //@synthesize previousQueryId=_previousQueryId - In the implementation block
@property (assign,nonatomic,__weak) id<SPUIResultsViewDelegate> delegate; 
@property (nonatomic,copy) id didFinishGettingAllResultsHandler; 
-(NSArray *)resultSections;
-(void)setResultSections:(NSArray *)arg1 ;
-(SFResultSection *)searchThroughSection;
-(id)initWithSearchModel:(id)arg1 ;
-(void)setDidFinishGettingAllResultsHandler:(id)arg1 ;
-(void)searchUpdatedWithString:(id)arg1 tokenEntity:(id)arg2 queryId:(unsigned long long)arg3 wantsCompletions:(BOOL)arg4 ;
-(void)setHasResultsWaitingToUpdate:(BOOL)arg1 ;
-(SFSearchResult *)actualSearchSuggestionResult;
-(id)didFinishGettingAllResultsHandler;
-(void)clearSuggestionSection;
-(void)setSuggestionsSection:(SFResultSection *)arg1 ;
-(SFResultSection *)suggestionsSection;
-(void)_truncateResultsSectionToFit;
-(void)setSearchThroughSection:(SFResultSection *)arg1 ;
-(void)_pushSectionsUpdate;
-(BOOL)hasResultsWaitingToUpdate;
-(unsigned long long)previousQueryId;
-(void)setPreviousQueryId:(unsigned long long)arg1 ;
-(void)searchAgentUpdatedResults:(id)arg1 ;
-(void)searchAgentClearedResults:(id)arg1 ;
-(void)searchAgentFinishedQueryWithoutAdditionalResults:(id)arg1 ;
-(BOOL)isResultOriginalSearchSuggestion:(id)arg1 ;
-(BOOL)_hasRealSuggestions;
@end

