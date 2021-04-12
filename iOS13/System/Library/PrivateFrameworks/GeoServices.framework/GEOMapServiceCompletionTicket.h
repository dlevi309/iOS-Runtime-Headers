/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString, GEOMapServiceTraits, NSDictionary;


@protocol GEOMapServiceCompletionTicket <GEOMapServiceCancellableTicket,GEOMapServiceThrottlableTicket>
@property (getter=_searchQuery,nonatomic,readonly) NSString * searchQuery; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@required
-(void)cancel;
-(GEOMapServiceTraits *)traits;
-(BOOL)shouldDisplayNoResults;
-(BOOL)hasShouldDisplayNoResults;
-(double)retainSearchTime;
-(NSDictionary *)responseUserInfo;
-(id)_searchQuery;
-(void)submitWithAutoCompletionHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(BOOL)matchesFragment:(id)arg1;
-(void)applyToSuggestionList:(id)arg1;
-(void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;
-(BOOL)isRapEnabled;
-(id)clientRankingModel;
-(id)sortPriorityMapping;
-(BOOL)autocompleteTopSectionIsQuerySuggestions;
-(BOOL)showAutocompleteClientSource;

@end

