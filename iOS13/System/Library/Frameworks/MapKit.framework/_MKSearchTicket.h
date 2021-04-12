/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MKTicket.h>
#import <libobjc.A.dylib/MKMapServiceSearchTicket.h>

@class NSString, GEOMapServiceTraits, NSArray, GEOMapRegion, GEORelatedSearchSuggestion, NSError, GEOResolvedItem, GEODirectionIntent, GEOCategorySearchResultSection;

@interface _MKSearchTicket : _MKTicket <MKMapServiceSearchTicket>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,readonly) NSArray * exactMapItems; 
@property (nonatomic,readonly) NSArray * refinedMapItems; 
@property (nonatomic,readonly) GEOMapRegion * boundingRegion; 
@property (getter=isChainResultSet,nonatomic,readonly) BOOL chainResultSet; 
@property (nonatomic,readonly) NSArray * relatedSearchSuggestions; 
@property (nonatomic,readonly) GEORelatedSearchSuggestion * defaultRelatedSuggestion; 
@property (nonatomic,readonly) NSArray * browseCategories; 
@property (nonatomic,readonly) int searchResultType; 
@property (nonatomic,readonly) NSString * resultDisplayHeader; 
@property (nonatomic,readonly) NSArray * displayHeaderSubstitutes; 
@property (nonatomic,readonly) BOOL shouldEnableRedoSearch; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) GEOResolvedItem * clientResolvedResult; 
@property (nonatomic,readonly) NSArray * retainedSearchMetadata; 
@property (nonatomic,readonly) GEODirectionIntent * directionIntent; 
@property (nonatomic,readonly) unsigned dymSuggestionVisibleTime; 
@property (nonatomic,readonly) BOOL showDymSuggestionCloseButton; 
@property (nonatomic,readonly) double requestResponseTime; 
@property (nonatomic,readonly) NSString * sectionHeader; 
@property (nonatomic,readonly) NSArray * searchResultSections; 
@property (nonatomic,readonly) GEOCategorySearchResultSection * categorySearchResultSection; 
@property (nonatomic,readonly) NSString * searchQuery; 
-(NSString *)searchQuery;
-(id)initWithSearchTicket:(id)arg1 ;
@end

