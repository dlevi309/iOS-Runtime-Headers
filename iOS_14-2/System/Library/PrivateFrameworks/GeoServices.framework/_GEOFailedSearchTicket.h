/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/_GEOFailedTicket.h>
#import <libobjc.A.dylib/GEOMapServiceSearchTicket.h>

@class NSString, GEOMapServiceTraits, GEOMapRegion, NSArray, GEORelatedSearchSuggestion, NSDictionary, GEOResolvedItem, GEODirectionIntent, GEOCategorySearchResultSection, GEOPDMerchantLookupResult;

@interface _GEOFailedSearchTicket : _GEOFailedTicket <GEOMapServiceSearchTicket> {

	NSString* searchQuery;
	NSString* _searchQuery;

}

@property (nonatomic,readonly) NSString * searchQuery;                                                    //@synthesize searchQuery=_searchQuery - In the implementation block
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
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE91 dataRequestKind; 
-(NSString *)searchQuery;
-(id)initWithError:(id)arg1 searchQuery:(id)arg2 traits:(id)arg3 ;
@end

