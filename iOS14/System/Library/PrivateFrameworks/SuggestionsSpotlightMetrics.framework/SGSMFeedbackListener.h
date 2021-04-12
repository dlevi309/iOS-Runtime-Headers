/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_restoreStateIfUnset;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(void)searchViewDidDisappear:(id)arg1 ;
-(id)init;
-(void)didRankSections:(id)arg1 ;
-(void)didEngageSuggestion:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(void)_saveAndUnsetState;
-(void)didEngageResult:(id)arg1 ;
-(void)_resetState;
-(id)_eventIdentifierFromSearchResult:(id)arg1 ;
@end

