/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAutocompleteEntryAddress, GEOPDAutocompleteEntryBrandProfile, GEOPDAutocompleteEntryBusiness, GEOPDAutocompleteEntryCategory, GEOPDAutocompleteEntryClientResolved, GEOPDAutocompleteEntryCollection, GEOPDAutocompleteEntryDirectionIntent, GEOPDAutocompleteEntryHighlightLine, GEOPDAutocompleteEntryOfflineArea, GEOPDParsecRankingFeatures, GEOPDAutocompleteEntryPublisher, NSString, GEOPDAutocompleteEntryQuery, GEOPDRetainedSearchMetadata, GEOPDServerResultScoreMetadata;

@interface GEOPDAutocompleteEntry : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAutocompleteEntryAddress* _address;
	GEOPDAutocompleteEntryBrandProfile* _brandProfile;
	GEOPDAutocompleteEntryBusiness* _business;
	GEOPDAutocompleteEntryCategory* _category;
	GEOPDAutocompleteEntryClientResolved* _clientResolved;
	GEOPDAutocompleteEntryCollection* _collection;
	GEOPDAutocompleteEntryDirectionIntent* _directionIntent;
	GEOPDAutocompleteEntryHighlightLine* _highlightExtra;
	GEOPDAutocompleteEntryHighlightLine* _highlightMain;
	GEOPDAutocompleteEntryOfflineArea* _offlineArea;
	GEOPDParsecRankingFeatures* _parsecRankingFeatures;
	GEOPDAutocompleteEntryPublisher* _publisher;
	NSString* _queryAcceleratorCompletionString;
	GEOPDAutocompleteEntryQuery* _query;
	GEOPDRetainedSearchMetadata* _retainSearch;
	GEOPDServerResultScoreMetadata* _serverResultScoreMetadata;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _autocompleteResultCellType;
	int _sortPriority;
	int _type;
	BOOL _enableQueryAcceleratorAffordance;
	struct {
		unsigned has_autocompleteResultCellType : 1;
		unsigned has_sortPriority : 1;
		unsigned has_type : 1;
		unsigned has_enableQueryAcceleratorAffordance : 1;
		unsigned read_unknownFields : 1;
		unsigned read_address : 1;
		unsigned read_brandProfile : 1;
		unsigned read_business : 1;
		unsigned read_category : 1;
		unsigned read_clientResolved : 1;
		unsigned read_collection : 1;
		unsigned read_directionIntent : 1;
		unsigned read_highlightExtra : 1;
		unsigned read_highlightMain : 1;
		unsigned read_offlineArea : 1;
		unsigned read_parsecRankingFeatures : 1;
		unsigned read_publisher : 1;
		unsigned read_queryAcceleratorCompletionString : 1;
		unsigned read_query : 1;
		unsigned read_retainSearch : 1;
		unsigned read_serverResultScoreMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasHighlightMain; 
@property (nonatomic,retain) GEOPDAutocompleteEntryHighlightLine * highlightMain; 
@property (nonatomic,readonly) BOOL hasHighlightExtra; 
@property (nonatomic,retain) GEOPDAutocompleteEntryHighlightLine * highlightExtra; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) GEOPDAutocompleteEntryQuery * query; 
@property (nonatomic,readonly) BOOL hasBusiness; 
@property (nonatomic,retain) GEOPDAutocompleteEntryBusiness * business; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOPDAutocompleteEntryAddress * address; 
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) GEOPDAutocompleteEntryCategory * category; 
@property (nonatomic,readonly) BOOL hasBrandProfile; 
@property (nonatomic,retain) GEOPDAutocompleteEntryBrandProfile * brandProfile; 
@property (nonatomic,readonly) BOOL hasOfflineArea; 
@property (nonatomic,retain) GEOPDAutocompleteEntryOfflineArea * offlineArea; 
@property (nonatomic,readonly) BOOL hasClientResolved; 
@property (nonatomic,retain) GEOPDAutocompleteEntryClientResolved * clientResolved; 
@property (nonatomic,readonly) BOOL hasDirectionIntent; 
@property (nonatomic,retain) GEOPDAutocompleteEntryDirectionIntent * directionIntent; 
@property (nonatomic,readonly) BOOL hasRetainSearch; 
@property (nonatomic,retain) GEOPDRetainedSearchMetadata * retainSearch; 
@property (nonatomic,readonly) BOOL hasParsecRankingFeatures; 
@property (nonatomic,retain) GEOPDParsecRankingFeatures * parsecRankingFeatures; 
@property (assign,nonatomic) BOOL hasSortPriority; 
@property (assign,nonatomic) int sortPriority; 
@property (assign,nonatomic) BOOL hasAutocompleteResultCellType; 
@property (assign,nonatomic) int autocompleteResultCellType; 
@property (nonatomic,readonly) BOOL hasServerResultScoreMetadata; 
@property (nonatomic,retain) GEOPDServerResultScoreMetadata * serverResultScoreMetadata; 
@property (assign,nonatomic) BOOL hasEnableQueryAcceleratorAffordance; 
@property (assign,nonatomic) BOOL enableQueryAcceleratorAffordance; 
@property (nonatomic,readonly) BOOL hasQueryAcceleratorCompletionString; 
@property (nonatomic,retain) NSString * queryAcceleratorCompletionString; 
@property (nonatomic,readonly) BOOL hasCollection; 
@property (nonatomic,retain) GEOPDAutocompleteEntryCollection * collection; 
@property (nonatomic,readonly) BOOL hasPublisher; 
@property (nonatomic,retain) GEOPDAutocompleteEntryPublisher * publisher; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setPublisher:(GEOPDAutocompleteEntryPublisher *)arg1 ;
-(GEOPDAutocompleteEntryPublisher *)publisher;
-(id)dictionaryRepresentation;
-(GEOPDAutocompleteEntryQuery *)query;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setCategory:(GEOPDAutocompleteEntryCategory *)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(GEOPDAutocompleteEntryCollection *)collection;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(void)setCollection:(GEOPDAutocompleteEntryCollection *)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasAddress;
-(void)clearSensitiveFields;
-(GEOPDAutocompleteEntryDirectionIntent *)directionIntent;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(GEOPDAutocompleteEntryCategory *)category;
-(BOOL)hasQuery;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(GEOPDAutocompleteEntryBusiness *)business;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(GEOPDAutocompleteEntryAddress *)address;
-(BOOL)hasCategory;
-(void)setAddress:(GEOPDAutocompleteEntryAddress *)arg1 ;
-(int)sortPriority;
-(void)setSortPriority:(int)arg1 ;
-(void)setHasSortPriority:(BOOL)arg1 ;
-(BOOL)hasSortPriority;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setQuery:(GEOPDAutocompleteEntryQuery *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDirectionIntent:(GEOPDAutocompleteEntryDirectionIntent *)arg1 ;
-(BOOL)hasDirectionIntent;
-(BOOL)hasPublisher;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(GEOPDAutocompleteEntryHighlightLine *)highlightMain;
-(GEOPDAutocompleteEntryHighlightLine *)highlightExtra;
-(GEOPDAutocompleteEntryBrandProfile *)brandProfile;
-(GEOPDAutocompleteEntryOfflineArea *)offlineArea;
-(GEOPDAutocompleteEntryClientResolved *)clientResolved;
-(GEOPDRetainedSearchMetadata *)retainSearch;
-(GEOPDParsecRankingFeatures *)parsecRankingFeatures;
-(GEOPDServerResultScoreMetadata *)serverResultScoreMetadata;
-(void)setHighlightMain:(GEOPDAutocompleteEntryHighlightLine *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)queryAcceleratorCompletionString;
-(void)setHighlightExtra:(GEOPDAutocompleteEntryHighlightLine *)arg1 ;
-(void)setBusiness:(GEOPDAutocompleteEntryBusiness *)arg1 ;
-(void)setBrandProfile:(GEOPDAutocompleteEntryBrandProfile *)arg1 ;
-(void)setOfflineArea:(GEOPDAutocompleteEntryOfflineArea *)arg1 ;
-(void)setClientResolved:(GEOPDAutocompleteEntryClientResolved *)arg1 ;
-(void)setRetainSearch:(GEOPDRetainedSearchMetadata *)arg1 ;
-(void)setParsecRankingFeatures:(GEOPDParsecRankingFeatures *)arg1 ;
-(void)setAutocompleteResultCellType:(int)arg1 ;
-(void)setServerResultScoreMetadata:(GEOPDServerResultScoreMetadata *)arg1 ;
-(BOOL)hasHighlightMain;
-(void)setEnableQueryAcceleratorAffordance:(BOOL)arg1 ;
-(void)setQueryAcceleratorCompletionString:(NSString *)arg1 ;
-(BOOL)hasBusiness;
-(BOOL)hasHighlightExtra;
-(BOOL)hasBrandProfile;
-(BOOL)hasOfflineArea;
-(BOOL)hasClientResolved;
-(BOOL)hasRetainSearch;
-(BOOL)hasParsecRankingFeatures;
-(int)autocompleteResultCellType;
-(void)setHasAutocompleteResultCellType:(BOOL)arg1 ;
-(BOOL)hasAutocompleteResultCellType;
-(id)autocompleteResultCellTypeAsString:(int)arg1 ;
-(int)StringAsAutocompleteResultCellType:(id)arg1 ;
-(BOOL)hasServerResultScoreMetadata;
-(BOOL)enableQueryAcceleratorAffordance;
-(void)setHasEnableQueryAcceleratorAffordance:(BOOL)arg1 ;
-(BOOL)hasCollection;
-(BOOL)hasEnableQueryAcceleratorAffordance;
-(BOOL)hasQueryAcceleratorCompletionString;
@end

