/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SuggestionsSpotlightMetrics.framework/SuggestionsSpotlightMetrics
*/

#import <libobjc.A.dylib/SFFeedbackListener.h>

@protocol SGSuggestionsServiceEventsProtocol;
@class SGSMMutableSearchState, NSCache, NSString;

@interface SGSMFeedbackListener : NSObject <SFFeedbackListener> {

	SGSMMutableSearchState* _searchState;
	SGSMMutableSearchState* _previousState;
	id<SGSuggestionsServiceEventsProtocol> _suggestionsService;
	NSCache* _eventLastInteractionTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)searchViewDidDisappear:(id)arg1 ;
-(void)didRankSections:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)didEngageSuggestion:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(void)_resetState;
-(void)_saveAndUnsetState;
-(void)_restoreStateIfUnset;
-(id)_eventIdentifierFromSearchResult:(id)arg1 ;
@end

