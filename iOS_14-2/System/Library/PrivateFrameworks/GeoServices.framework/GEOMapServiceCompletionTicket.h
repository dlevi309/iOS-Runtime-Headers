/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString, GEOMapServiceTraits, NSDictionary;


@protocol GEOMapServiceCompletionTicket <GEOMapServiceCancellableTicket,GEOMapServiceThrottlableTicket>
@property (getter=_searchQuery,nonatomic,readonly) NSString * searchQuery; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@required
-(GEOMapServiceTraits *)traits;
-(id)_searchQuery;
-(BOOL)shouldDisplayNoResults;
-(BOOL)hasShouldDisplayNoResults;
-(double)retainSearchTime;
-(NSDictionary *)responseUserInfo;
-(BOOL)isRapEnabled;
-(id)clientRankingModel;
-(BOOL)matchesFragment:(id)arg1;
-(void)submitWithAutoCompletionHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(void)applyToSuggestionList:(id)arg1;
-(void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;
-(id)sortPriorityMapping;
-(BOOL)autocompleteTopSectionIsQuerySuggestions;
-(BOOL)showAutocompleteClientSource;
-(void)cancel;

@end

