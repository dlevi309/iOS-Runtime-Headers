/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractRequestResponseTicket.h>
#import <libobjc.A.dylib/GEOMapServiceCompletionTicket.h>

@class NSString, GEOAutocompleteSessionData, GEOMapServiceTraits, NSDictionary;

@interface _GEOPlaceSearchAutocompleteTicket : GEOAbstractRequestResponseTicket <GEOMapServiceCompletionTicket> {

	NSString* _searchQuery;
	GEOAutocompleteSessionData* _sessionData;

}

@property (getter=_searchQuery,nonatomic,readonly) NSString * searchQuery;              //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE91 dataRequestKind; 
-(id)_searchQuery;
-(BOOL)shouldDisplayNoResults;
-(BOOL)hasShouldDisplayNoResults;
-(double)retainSearchTime;
-(BOOL)isRapEnabled;
-(id)clientRankingModel;
-(BOOL)matchesFragment:(id)arg1 ;
-(void)submitWithAutoCompletionHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(void)applyToSuggestionList:(id)arg1 ;
-(void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2 ;
-(id)sortPriorityMapping;
-(BOOL)autocompleteTopSectionIsQuerySuggestions;
-(BOOL)showAutocompleteClientSource;
-(void)submitWithAutoCompletionHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3 ;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 searchQuery:(id)arg3 sessionData:(id)arg4 ;
@end

