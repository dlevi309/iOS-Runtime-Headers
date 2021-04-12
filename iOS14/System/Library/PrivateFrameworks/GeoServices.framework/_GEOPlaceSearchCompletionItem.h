/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOCompletionItemPrivate.h>

@protocol GEOMapItem;
@class GEOPDAutocompleteEntry, GEOMapServiceTraits, NSArray, GEOSearchCategory, GEOCollectionResult, GEOPublisherResult, GEOResolvedItem, GEODirectionIntent, GEORetainedSearchMetadata, GEOServerResultScoreMetadata, NSData, GEOMapItemIdentifier, NSString;

@interface _GEOPlaceSearchCompletionItem : NSObject <GEOCompletionItemPrivate> {

	GEOMapServiceTraits* _traits;
	int _entryListIndex;
	int _entryIndex;
	GEOPDAutocompleteEntry* _entry;
	NSArray* _displayLines;
	NSArray* _lineHighlights;
	id<GEOMapItem> _mapItem;
	GEOSearchCategory* _category;
	GEOCollectionResult* _collectionResult;
	GEOPublisherResult* _publisherResult;

}

@property (nonatomic,readonly) GEOPDAutocompleteEntry * entry;                                                                      //@synthesize entry=_entry - In the implementation block
@property (getter=_placeDataAutocompleteEntry,nonatomic,readonly) GEOPDAutocompleteEntry * placeDataAutocompleteEntry; 
@property (nonatomic,readonly) NSArray * displayLines;                                                                              //@synthesize displayLines=_displayLines - In the implementation block
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem; 
@property (nonatomic,readonly) GEOSearchCategory * searchCategory; 
@property (nonatomic,readonly) GEOResolvedItem * clientResolved; 
@property (nonatomic,readonly) GEODirectionIntent * directionIntent; 
@property (nonatomic,readonly) GEORetainedSearchMetadata * retainedSearchMetadata; 
@property (nonatomic,readonly) BOOL hasSortPriority; 
@property (nonatomic,readonly) long long sortPriority; 
@property (nonatomic,readonly) long long entryTapBehavior; 
@property (nonatomic,readonly) long long autocompleteCellType; 
@property (nonatomic,readonly) GEOServerResultScoreMetadata * serverResultScoreMetadata; 
@property (nonatomic,readonly) NSData * entryMetadata; 
@property (nonatomic,readonly) NSData * metadata; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (nonatomic,readonly) int placeType; 
@property (nonatomic,readonly) BOOL hasDisambiguationRadiusMeters; 
@property (nonatomic,readonly) float disambiguationRadiusMeters; 
@property (nonatomic,readonly) BOOL hasQueryAcceleratorAffordanceEnabled; 
@property (nonatomic,readonly) NSString * queryAcceleratorCompletionString; 
@property (nonatomic,readonly) GEOCollectionResult * collectionResult; 
@property (nonatomic,readonly) GEOPublisherResult * publisherResult; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GEODirectionIntent *)directionIntent;
-(GEORetainedSearchMetadata *)retainedSearchMetadata;
-(GEOPDAutocompleteEntry *)entry;
-(int)placeType;
-(long long)sortPriority;
-(BOOL)hasSortPriority;
-(id)calloutTitle;
-(long long)type;
-(id)queryLine;
-(GEOSearchCategory *)searchCategory;
-(BOOL)getCoordinate:(GEOCoarseLocationLatLng*)arg1 ;
-(void)sendFeedback;
-(id)initWithEntry:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 mapItems:(id)arg5 collections:(id)arg6 publishers:(id)arg7 ;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(long long)entryTapBehavior;
-(NSArray *)displayLines;
-(long long)autocompleteCellType;
-(NSData *)entryMetadata;
-(BOOL)hasQueryAcceleratorAffordanceEnabled;
-(GEOCollectionResult *)collectionResult;
-(GEOPublisherResult *)publisherResult;
-(id)_placeDataAutocompleteEntry;
-(unsigned long long)hash;
-(id<GEOMapItem>)geoMapItem;
-(GEOMapItemIdentifier *)identifier;
-(NSData *)metadata;
-(GEOResolvedItem *)clientResolved;
-(GEOServerResultScoreMetadata *)serverResultScoreMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)queryAcceleratorCompletionString;
-(float)disambiguationRadiusMeters;
-(BOOL)hasDisambiguationRadiusMeters;
@end

