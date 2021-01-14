/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class GEOMapServiceTraits, GEOMapRegion, NSArray, GEORelatedSearchSuggestion, NSDictionary, NSString, GEOResolvedItem, GEODirectionIntent, GEOCategorySearchResultSection, GEOPDMerchantLookupResult;


@protocol GEOMapServiceTicket <GEOMapServiceCancellableTicket,GEOMapServiceCorrectableTicket,GEOMapServiceThrottlableTicket>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSArray * relatedSearchSuggestions; 
@property (nonatomic,readonly) NSArray * browseCategories; 
@property (nonatomic,readonly) GEORelatedSearchSuggestion * defaultRelatedSuggestion; 
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) NSString * resultSectionHeader; 
@property (nonatomic,readonly) int searchResultType; 
@property (nonatomic,readonly) NSString * resultDisplayHeader; 
@property (nonatomic,readonly) NSArray * displayHeaderSubstitutes; 
@property (nonatomic,readonly) BOOL shouldEnableRedoSearch; 
@property (nonatomic,readonly) GEOResolvedItem * clientResolvedResult; 
@property (nonatomic,readonly) GEODirectionIntent * directionIntent; 
@property (nonatomic,readonly) NSArray * retainedSearchMetadata; 
@property (nonatomic,readonly) NSArray * searchResultSections; 
@property (nonatomic,readonly) GEOCategorySearchResultSection * categorySearchResultSection; 
@property (nonatomic,readonly) NSArray * relatedEntitySections; 
@property (nonatomic,readonly) unsigned dymSuggestionVisibleTime; 
@property (nonatomic,readonly) BOOL showDymSuggestionCloseButton; 
@property (assign,nonatomic) unsigned long long cachePolicy; 
@property (nonatomic,readonly) GEOPDMerchantLookupResult * merchantLookupResult; 
@property (nonatomic,readonly) NSArray * collectionResults; 
@property (nonatomic,readonly) NSArray * publisherResults; 
@required
-(GEOMapServiceTraits *)traits;
-(BOOL)isChainResultSet;
-(NSArray *)collectionResults;
-(int)searchResultType;
-(GEODirectionIntent *)directionIntent;
-(GEOResolvedItem *)clientResolvedResult;
-(NSString *)resultSectionHeader;
-(BOOL)shouldEnableRedoSearch;
-(NSArray *)relatedSearchSuggestions;
-(NSArray *)retainedSearchMetadata;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(NSArray *)searchResultSections;
-(NSArray *)displayHeaderSubstitutes;
-(NSArray *)browseCategories;
-(unsigned)dymSuggestionVisibleTime;
-(NSArray *)publisherResults;
-(unsigned long long)cachePolicy;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(NSString *)resultDisplayHeader;
-(void)setCachePolicy:(unsigned long long)arg1;
-(NSDictionary *)responseUserInfo;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 queue:(id)arg4;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 queue:(id)arg5;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 queue:(id)arg4;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 queue:(id)arg5;
-(GEOMapRegion *)resultBoundingRegion;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 queue:(id)arg3;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 queue:(id)arg3;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3;
-(NSArray *)relatedEntitySections;
-(GEORelatedSearchSuggestion *)defaultRelatedSuggestion;
-(GEOCategorySearchResultSection *)categorySearchResultSection;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4;
-(void)applyToPlaceInfo:(id)arg1;
-(BOOL)showDymSuggestionCloseButton;
-(GEOPDMerchantLookupResult *)merchantLookupResult;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4;

@end

