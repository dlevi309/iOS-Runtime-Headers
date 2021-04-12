/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSData, GEOPDAutocompleteEntry, NSString, GEOPDRetainedSearchMetadata, GEOPDVenueIdentifier, GEOPDViewportInfo;

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _supportedAutocompleteResultCellTypes;
	SCD_Struct_GE90* _supportedListTypes;
	NSData* _categorySuggestionEntryMetadata;
	GEOPDAutocompleteEntry* _categorySuggestionEntry;
	GEOPDAutocompleteEntry* _querySuggestionEntry;
	NSString* _query;
	GEOPDRetainedSearchMetadata* _retainedSearch;
	GEOPDVenueIdentifier* _venueIdentifier;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _maxQueryBuilderSuggestions;
	int _maxResults;
	BOOL _highlightDiff;
	BOOL _interleaveCategorySuggestions;
	BOOL _supportClientRankingFeatureMetadata;
	BOOL _supportDirectionIntentSuggestions;
	BOOL _supportRapAffordance;
	BOOL _supportSectionHeader;
	BOOL _supportUnresolvedDirectionIntent;
	struct {
		unsigned has_maxQueryBuilderSuggestions : 1;
		unsigned has_maxResults : 1;
		unsigned has_highlightDiff : 1;
		unsigned has_interleaveCategorySuggestions : 1;
		unsigned has_supportClientRankingFeatureMetadata : 1;
		unsigned has_supportDirectionIntentSuggestions : 1;
		unsigned has_supportRapAffordance : 1;
		unsigned has_supportSectionHeader : 1;
		unsigned has_supportUnresolvedDirectionIntent : 1;
		unsigned read_unknownFields : 1;
		unsigned read_supportedAutocompleteResultCellTypes : 1;
		unsigned read_supportedListTypes : 1;
		unsigned read_categorySuggestionEntryMetadata : 1;
		unsigned read_categorySuggestionEntry : 1;
		unsigned read_querySuggestionEntry : 1;
		unsigned read_query : 1;
		unsigned read_retainedSearch : 1;
		unsigned read_venueIdentifier : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults; 
@property (assign,nonatomic) BOOL hasHighlightDiff; 
@property (assign,nonatomic) BOOL highlightDiff; 
@property (nonatomic,readonly) BOOL hasCategorySuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * categorySuggestionEntryMetadata; 
@property (nonatomic,readonly) BOOL hasCategorySuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * categorySuggestionEntry; 
@property (assign,nonatomic) BOOL hasInterleaveCategorySuggestions; 
@property (assign,nonatomic) BOOL interleaveCategorySuggestions; 
@property (nonatomic,readonly) BOOL hasVenueIdentifier; 
@property (nonatomic,retain) GEOPDVenueIdentifier * venueIdentifier; 
@property (assign,nonatomic) BOOL hasSupportDirectionIntentSuggestions; 
@property (assign,nonatomic) BOOL supportDirectionIntentSuggestions; 
@property (nonatomic,readonly) BOOL hasRetainedSearch; 
@property (nonatomic,retain) GEOPDRetainedSearchMetadata * retainedSearch; 
@property (assign,nonatomic) BOOL hasSupportUnresolvedDirectionIntent; 
@property (assign,nonatomic) BOOL supportUnresolvedDirectionIntent; 
@property (nonatomic,readonly) unsigned long long supportedListTypesCount; 
@property (nonatomic,readonly) int* supportedListTypes; 
@property (nonatomic,readonly) BOOL hasQuerySuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * querySuggestionEntry; 
@property (assign,nonatomic) BOOL hasSupportClientRankingFeatureMetadata; 
@property (assign,nonatomic) BOOL supportClientRankingFeatureMetadata; 
@property (assign,nonatomic) BOOL hasMaxQueryBuilderSuggestions; 
@property (assign,nonatomic) int maxQueryBuilderSuggestions; 
@property (assign,nonatomic) BOOL hasSupportSectionHeader; 
@property (assign,nonatomic) BOOL supportSectionHeader; 
@property (nonatomic,readonly) unsigned long long supportedAutocompleteResultCellTypesCount; 
@property (nonatomic,readonly) int* supportedAutocompleteResultCellTypes; 
@property (assign,nonatomic) BOOL hasSupportRapAffordance; 
@property (assign,nonatomic) BOOL supportRapAffordance; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)query;
-(PBUnknownFields *)unknownFields;
-(GEOPDViewportInfo *)viewportInfo;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasMaxResults;
-(void)clearSensitiveFields;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasQuery;
-(void)setMaxResults:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)maxResults;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasViewportInfo;
-(id)description;
-(void)setHighlightDiff:(BOOL)arg1 ;
-(BOOL)highlightDiff;
-(void)setHasHighlightDiff:(BOOL)arg1 ;
-(BOOL)hasHighlightDiff;
-(GEOPDVenueIdentifier *)venueIdentifier;
-(NSData *)categorySuggestionEntryMetadata;
-(GEOPDAutocompleteEntry *)categorySuggestionEntry;
-(GEOPDRetainedSearchMetadata *)retainedSearch;
-(GEOPDAutocompleteEntry *)querySuggestionEntry;
-(void)setCategorySuggestionEntryMetadata:(NSData *)arg1 ;
-(void)setCategorySuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)setInterleaveCategorySuggestions:(BOOL)arg1 ;
-(void)setVenueIdentifier:(GEOPDVenueIdentifier *)arg1 ;
-(void)setRetainedSearch:(GEOPDRetainedSearchMetadata *)arg1 ;
-(void)setSupportDirectionIntentSuggestions:(BOOL)arg1 ;
-(void)setSupportUnresolvedDirectionIntent:(BOOL)arg1 ;
-(void)addSupportedListType:(int)arg1 ;
-(void)setQuerySuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)setSupportClientRankingFeatureMetadata:(BOOL)arg1 ;
-(void)setMaxQueryBuilderSuggestions:(int)arg1 ;
-(void)setSupportSectionHeader:(BOOL)arg1 ;
-(void)setSupportRapAffordance:(BOOL)arg1 ;
-(void)addSupportedAutocompleteResultCellType:(int)arg1 ;
-(BOOL)hasCategorySuggestionEntry;
-(int*)supportedListTypes;
-(BOOL)hasQuerySuggestionEntry;
-(unsigned long long)supportedListTypesCount;
-(void)clearSupportedListTypes;
-(int)supportedListTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedAutocompleteResultCellTypesCount;
-(BOOL)hasVenueIdentifier;
-(void)clearSupportedAutocompleteResultCellTypes;
-(int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCategorySuggestionEntryMetadata;
-(BOOL)interleaveCategorySuggestions;
-(BOOL)supportRapAffordance;
-(void)setHasInterleaveCategorySuggestions:(BOOL)arg1 ;
-(BOOL)hasInterleaveCategorySuggestions;
-(BOOL)hasRetainedSearch;
-(BOOL)supportDirectionIntentSuggestions;
-(void)setHasSupportDirectionIntentSuggestions:(BOOL)arg1 ;
-(BOOL)hasSupportDirectionIntentSuggestions;
-(BOOL)supportUnresolvedDirectionIntent;
-(void)setHasSupportUnresolvedDirectionIntent:(BOOL)arg1 ;
-(BOOL)hasSupportUnresolvedDirectionIntent;
-(void)setSupportedListTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedListTypesAsString:(int)arg1 ;
-(int)StringAsSupportedListTypes:(id)arg1 ;
-(BOOL)supportClientRankingFeatureMetadata;
-(void)setHasSupportClientRankingFeatureMetadata:(BOOL)arg1 ;
-(BOOL)hasSupportClientRankingFeatureMetadata;
-(int)maxQueryBuilderSuggestions;
-(BOOL)supportSectionHeader;
-(void)setHasMaxQueryBuilderSuggestions:(BOOL)arg1 ;
-(BOOL)hasMaxQueryBuilderSuggestions;
-(BOOL)hasSupportSectionHeader;
-(void)setHasSupportSectionHeader:(BOOL)arg1 ;
-(int*)supportedAutocompleteResultCellTypes;
-(void)setSupportedAutocompleteResultCellTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasSupportRapAffordance:(BOOL)arg1 ;
-(id)supportedAutocompleteResultCellTypesAsString:(int)arg1 ;
-(BOOL)hasSupportRapAffordance;
-(int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

