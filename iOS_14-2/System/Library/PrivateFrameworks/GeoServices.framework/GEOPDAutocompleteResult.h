/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAutocompleteSessionData, NSMutableArray, GEOPDParsecQueryRankingFeatures;

@interface GEOPDAutocompleteResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAutocompleteSessionData* _autocompleteSessionData;
	NSMutableArray* _clientRankingFeatureMetadatas;
	GEOPDParsecQueryRankingFeatures* _parsecQueryRankingFeatures;
	NSMutableArray* _sections;
	NSMutableArray* _sortPriorityMappings;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _retainSearchTime;
	BOOL _enableRap;
	BOOL _isNoResultFromNegativeCache;
	BOOL _isTopSectionTypeQuery;
	BOOL _shouldDifferentiateClientAndServerResults;
	BOOL _shouldDisplayNoResults;
	struct {
		unsigned has_retainSearchTime : 1;
		unsigned has_enableRap : 1;
		unsigned has_isNoResultFromNegativeCache : 1;
		unsigned has_isTopSectionTypeQuery : 1;
		unsigned has_shouldDifferentiateClientAndServerResults : 1;
		unsigned has_shouldDisplayNoResults : 1;
		unsigned read_unknownFields : 1;
		unsigned read_autocompleteSessionData : 1;
		unsigned read_clientRankingFeatureMetadatas : 1;
		unsigned read_parsecQueryRankingFeatures : 1;
		unsigned read_sections : 1;
		unsigned read_sortPriorityMappings : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * sections; 
@property (assign,nonatomic) BOOL hasEnableRap; 
@property (assign,nonatomic) BOOL enableRap; 
@property (assign,nonatomic) BOOL hasShouldDisplayNoResults; 
@property (assign,nonatomic) BOOL shouldDisplayNoResults; 
@property (assign,nonatomic) BOOL hasRetainSearchTime; 
@property (assign,nonatomic) unsigned retainSearchTime; 
@property (assign,nonatomic) BOOL hasIsNoResultFromNegativeCache; 
@property (assign,nonatomic) BOOL isNoResultFromNegativeCache; 
@property (nonatomic,retain) NSMutableArray * sortPriorityMappings; 
@property (assign,nonatomic) BOOL hasIsTopSectionTypeQuery; 
@property (assign,nonatomic) BOOL isTopSectionTypeQuery; 
@property (nonatomic,retain) NSMutableArray * clientRankingFeatureMetadatas; 
@property (assign,nonatomic) BOOL hasShouldDifferentiateClientAndServerResults; 
@property (assign,nonatomic) BOOL shouldDifferentiateClientAndServerResults; 
@property (nonatomic,readonly) BOOL hasAutocompleteSessionData; 
@property (nonatomic,retain) GEOPDAutocompleteSessionData * autocompleteSessionData; 
@property (nonatomic,readonly) BOOL hasParsecQueryRankingFeatures; 
@property (nonatomic,retain) GEOPDParsecQueryRankingFeatures * parsecQueryRankingFeatures; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)sortPriorityMappingType;
+(Class)sectionsType;
+(Class)clientRankingFeatureMetadataType;
+(BOOL)isValid:(id)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(NSMutableArray *)sections;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)sectionsCount;
-(GEOPDAutocompleteSessionData *)autocompleteSessionData;
-(void)setAutocompleteSessionData:(GEOPDAutocompleteSessionData *)arg1 ;
-(BOOL)enableRap;
-(BOOL)hasAutocompleteSessionData;
-(GEOPDParsecQueryRankingFeatures *)parsecQueryRankingFeatures;
-(void)setEnableRap:(BOOL)arg1 ;
-(void)setShouldDisplayNoResults:(BOOL)arg1 ;
-(BOOL)hasEnableRap;
-(void)setRetainSearchTime:(unsigned)arg1 ;
-(void)setIsNoResultFromNegativeCache:(BOOL)arg1 ;
-(void)addSortPriorityMapping:(id)arg1 ;
-(void)setIsTopSectionTypeQuery:(BOOL)arg1 ;
-(void)addClientRankingFeatureMetadata:(id)arg1 ;
-(unsigned long long)sortPriorityMappingsCount;
-(void)setShouldDifferentiateClientAndServerResults:(BOOL)arg1 ;
-(void)setParsecQueryRankingFeatures:(GEOPDParsecQueryRankingFeatures *)arg1 ;
-(void)clearSortPriorityMappings;
-(id)sortPriorityMappingAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)clientRankingFeatureMetadatasCount;
-(void)clearClientRankingFeatureMetadatas;
-(id)clientRankingFeatureMetadataAtIndex:(unsigned long long)arg1 ;
-(void)setHasEnableRap:(BOOL)arg1 ;
-(BOOL)shouldDisplayNoResults;
-(void)setHasShouldDisplayNoResults:(BOOL)arg1 ;
-(BOOL)hasShouldDisplayNoResults;
-(unsigned)retainSearchTime;
-(void)setHasRetainSearchTime:(BOOL)arg1 ;
-(BOOL)hasRetainSearchTime;
-(void)setSortPriorityMappings:(NSMutableArray *)arg1 ;
-(BOOL)isNoResultFromNegativeCache;
-(void)setHasIsNoResultFromNegativeCache:(BOOL)arg1 ;
-(NSMutableArray *)sortPriorityMappings;
-(BOOL)hasIsNoResultFromNegativeCache;
-(BOOL)isTopSectionTypeQuery;
-(void)setHasIsTopSectionTypeQuery:(BOOL)arg1 ;
-(void)addSections:(id)arg1 ;
-(BOOL)hasIsTopSectionTypeQuery;
-(NSMutableArray *)clientRankingFeatureMetadatas;
-(BOOL)hasParsecQueryRankingFeatures;
-(void)setClientRankingFeatureMetadatas:(NSMutableArray *)arg1 ;
-(BOOL)shouldDifferentiateClientAndServerResults;
-(void)setHasShouldDifferentiateClientAndServerResults:(BOOL)arg1 ;
-(BOOL)hasShouldDifferentiateClientAndServerResults;
-(void)clearSections;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

