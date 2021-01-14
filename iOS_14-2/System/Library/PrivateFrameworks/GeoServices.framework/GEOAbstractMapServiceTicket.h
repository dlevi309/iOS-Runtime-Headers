/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>
#import <libobjc.A.dylib/GEOMapServiceTicket.h>

@class GEOMapServiceTraits, GEOMapRegion, NSArray, GEORelatedSearchSuggestion, NSDictionary, NSString, GEOResolvedItem, GEODirectionIntent, GEOCategorySearchResultSection, GEOPDMerchantLookupResult;

@interface GEOAbstractMapServiceTicket : GEOAbstractTicket <GEOMapServiceTicket> {

	GEOMapRegion* _resultBoundingRegion;
	BOOL _chainResultSet;
	NSArray* _relatedSearchSuggestions;
	NSArray* _browseCategories;
	GEORelatedSearchSuggestion* _defaultRelatedSuggestion;
	NSString* _resultSectionHeader;
	int _searchResultType;
	NSString* _resultDisplayHeader;
	NSArray* _displayHeaderSubstitutes;
	BOOL _shouldEnableRedoSearch;
	GEOResolvedItem* _clientResolvedResult;
	GEODirectionIntent* _directionIntent;
	NSArray* _retainedSearchMetadata;
	NSArray* _searchResultSections;
	unsigned _dymSuggestionVisibleTime;
	BOOL _showDymSuggestionCloseButton;
	GEOPDMerchantLookupResult* _merchantLookupResult;
	GEOCategorySearchResultSection* _categorySearchResultSection;
	NSArray* _relatedEntitySections;
	NSArray* _collectionResults;
	NSArray* _publisherResults;

}

@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) GEOMapRegion * resultBoundingRegion;                                       //@synthesize resultBoundingRegion=_resultBoundingRegion - In the implementation block
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet;                               //@synthesize chainResultSet=_chainResultSet - In the implementation block
@property (nonatomic,readonly) NSArray * relatedSearchSuggestions;                                        //@synthesize relatedSearchSuggestions=_relatedSearchSuggestions - In the implementation block
@property (nonatomic,readonly) NSArray * browseCategories;                                                //@synthesize browseCategories=_browseCategories - In the implementation block
@property (nonatomic,readonly) GEORelatedSearchSuggestion * defaultRelatedSuggestion;                     //@synthesize defaultRelatedSuggestion=_defaultRelatedSuggestion - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseUserInfo; 
@property (nonatomic,readonly) NSString * resultSectionHeader;                                            //@synthesize resultSectionHeader=_resultSectionHeader - In the implementation block
@property (nonatomic,readonly) int searchResultType;                                                      //@synthesize searchResultType=_searchResultType - In the implementation block
@property (nonatomic,readonly) NSString * resultDisplayHeader;                                            //@synthesize resultDisplayHeader=_resultDisplayHeader - In the implementation block
@property (nonatomic,readonly) NSArray * displayHeaderSubstitutes;                                        //@synthesize displayHeaderSubstitutes=_displayHeaderSubstitutes - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnableRedoSearch;                                               //@synthesize shouldEnableRedoSearch=_shouldEnableRedoSearch - In the implementation block
@property (nonatomic,readonly) GEOResolvedItem * clientResolvedResult;                                    //@synthesize clientResolvedResult=_clientResolvedResult - In the implementation block
@property (nonatomic,readonly) GEODirectionIntent * directionIntent;                                      //@synthesize directionIntent=_directionIntent - In the implementation block
@property (nonatomic,readonly) NSArray * retainedSearchMetadata;                                          //@synthesize retainedSearchMetadata=_retainedSearchMetadata - In the implementation block
@property (nonatomic,readonly) NSArray * searchResultSections;                                            //@synthesize searchResultSections=_searchResultSections - In the implementation block
@property (nonatomic,readonly) GEOCategorySearchResultSection * categorySearchResultSection;              //@synthesize categorySearchResultSection=_categorySearchResultSection - In the implementation block
@property (nonatomic,readonly) NSArray * relatedEntitySections;                                           //@synthesize relatedEntitySections=_relatedEntitySections - In the implementation block
@property (nonatomic,readonly) unsigned dymSuggestionVisibleTime;                                         //@synthesize dymSuggestionVisibleTime=_dymSuggestionVisibleTime - In the implementation block
@property (nonatomic,readonly) BOOL showDymSuggestionCloseButton;                                         //@synthesize showDymSuggestionCloseButton=_showDymSuggestionCloseButton - In the implementation block
@property (assign,nonatomic) unsigned long long cachePolicy; 
@property (nonatomic,readonly) GEOPDMerchantLookupResult * merchantLookupResult;                          //@synthesize merchantLookupResult=_merchantLookupResult - In the implementation block
@property (nonatomic,readonly) NSArray * collectionResults;                                               //@synthesize collectionResults=_collectionResults - In the implementation block
@property (nonatomic,readonly) NSArray * publisherResults;                                                //@synthesize publisherResults=_publisherResults - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE91 dataRequestKind; 
-(void)applyToCorrectedSearch:(id)arg1 ;
-(BOOL)isChainResultSet;
-(NSArray *)collectionResults;
-(int)searchResultType;
-(GEODirectionIntent *)directionIntent;
-(GEOResolvedItem *)clientResolvedResult;
-(NSString *)resultSectionHeader;
-(BOOL)shouldEnableRedoSearch;
-(NSArray *)relatedSearchSuggestions;
-(NSArray *)retainedSearchMetadata;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(NSArray *)searchResultSections;
-(NSArray *)displayHeaderSubstitutes;
-(NSArray *)browseCategories;
-(unsigned)dymSuggestionVisibleTime;
-(NSArray *)publisherResults;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(NSString *)resultDisplayHeader;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 queue:(id)arg5 ;
-(GEOMapRegion *)resultBoundingRegion;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(NSArray *)relatedEntitySections;
-(GEORelatedSearchSuggestion *)defaultRelatedSuggestion;
-(GEOCategorySearchResultSection *)categorySearchResultSection;
-(void)submitWithHandler:(/*^block*/id)arg1 timeout:(long long)arg2 networkActivity:(/*^block*/id)arg3 ;
-(void)submitWithRefinedHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)applyToPlaceInfo:(id)arg1 ;
-(BOOL)showDymSuggestionCloseButton;
-(GEOPDMerchantLookupResult *)merchantLookupResult;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(SCD_Struct_GE91)dataRequestKind;
@end

