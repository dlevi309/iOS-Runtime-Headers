/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOCompletionItemPrivate.h>

@protocol GEOMapItem;
@class GEOPDAutocompleteEntry, GEOMapServiceTraits, NSArray, GEOSearchCategory, NSString, GEOResolvedItem, GEODirectionIntent, GEORetainedSearchMetadata, GEOServerResultScoreMetadata, NSData, GEOMapItemIdentifier;

@interface _GEOPlaceSearchCompletionItem : NSObject <GEOCompletionItemPrivate> {

	GEOMapServiceTraits* _traits;
	int _entryListIndex;
	int _entryIndex;
	GEOPDAutocompleteEntry* _entry;
	NSArray* _displayLines;
	NSArray* _lineHighlights;
	id<GEOMapItem> _mapItem;
	GEOSearchCategory* _category;

}

@property (nonatomic,readonly) GEOPDAutocompleteEntry * entry;                                                                      //@synthesize entry=_entry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
@property (getter=_placeDataAutocompleteEntry,nonatomic,readonly) GEOPDAutocompleteEntry * placeDataAutocompleteEntry; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)type;
-(GEOMapItemIdentifier *)identifier;
-(NSData *)metadata;
-(int)placeType;
-(GEOPDAutocompleteEntry *)entry;
-(GEODirectionIntent *)directionIntent;
-(id<GEOMapItem>)geoMapItem;
-(GEORetainedSearchMetadata *)retainedSearchMetadata;
-(id)initWithEntry:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 mapItems:(id)arg5 ;
-(id)queryLine;
-(GEOResolvedItem *)clientResolved;
-(BOOL)hasSortPriority;
-(long long)sortPriority;
-(GEOServerResultScoreMetadata *)serverResultScoreMetadata;
-(NSString *)queryAcceleratorCompletionString;
-(BOOL)hasDisambiguationRadiusMeters;
-(float)disambiguationRadiusMeters;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(id)calloutTitle;
-(BOOL)getCoordinate:(SCD_Struct_GE32*)arg1 ;
-(void)sendFeedback;
-(NSArray *)displayLines;
-(GEOSearchCategory *)searchCategory;
-(long long)entryTapBehavior;
-(long long)autocompleteCellType;
-(NSData *)entryMetadata;
-(BOOL)hasQueryAcceleratorAffordanceEnabled;
-(id)_placeDataAutocompleteEntry;
@end

