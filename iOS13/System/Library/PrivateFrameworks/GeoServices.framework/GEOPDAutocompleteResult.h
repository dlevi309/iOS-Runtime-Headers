/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDAutocompleteSessionData, NSMutableArray;

@interface GEOPDAutocompleteResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDAutocompleteSessionData* _autocompleteSessionData;
	NSMutableArray* _clientRankingFeatureMetadatas;
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
		unsigned read_sections : 1;
		unsigned read_sortPriorityMappings : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_autocompleteSessionData : 1;
		unsigned wrote_clientRankingFeatureMetadatas : 1;
		unsigned wrote_sections : 1;
		unsigned wrote_sortPriorityMappings : 1;
		unsigned wrote_retainSearchTime : 1;
		unsigned wrote_enableRap : 1;
		unsigned wrote_isNoResultFromNegativeCache : 1;
		unsigned wrote_isTopSectionTypeQuery : 1;
		unsigned wrote_shouldDifferentiateClientAndServerResults : 1;
		unsigned wrote_shouldDisplayNoResults : 1;
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)sectionsType;
+(Class)sortPriorityMappingType;
+(Class)clientRankingFeatureMetadataType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)sections;
-(void)setSections:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(void)_readSections;
-(void)_addNoFlagsSections:(id)arg1 ;
-(void)_readSortPriorityMappings;
-(void)_addNoFlagsSortPriorityMapping:(id)arg1 ;
-(void)_readClientRankingFeatureMetadatas;
-(void)_addNoFlagsClientRankingFeatureMetadata:(id)arg1 ;
-(void)_readAutocompleteSessionData;
-(GEOPDAutocompleteSessionData *)autocompleteSessionData;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(void)addSections:(id)arg1 ;
-(unsigned long long)sortPriorityMappingsCount;
-(void)clearSortPriorityMappings;
-(id)sortPriorityMappingAtIndex:(unsigned long long)arg1 ;
-(void)addSortPriorityMapping:(id)arg1 ;
-(unsigned long long)clientRankingFeatureMetadatasCount;
-(void)clearClientRankingFeatureMetadatas;
-(id)clientRankingFeatureMetadataAtIndex:(unsigned long long)arg1 ;
-(void)addClientRankingFeatureMetadata:(id)arg1 ;
-(void)setAutocompleteSessionData:(GEOPDAutocompleteSessionData *)arg1 ;
-(NSMutableArray *)sortPriorityMappings;
-(NSMutableArray *)clientRankingFeatureMetadatas;
-(BOOL)enableRap;
-(void)setEnableRap:(BOOL)arg1 ;
-(void)setHasEnableRap:(BOOL)arg1 ;
-(BOOL)hasEnableRap;
-(BOOL)shouldDisplayNoResults;
-(void)setShouldDisplayNoResults:(BOOL)arg1 ;
-(void)setHasShouldDisplayNoResults:(BOOL)arg1 ;
-(BOOL)hasShouldDisplayNoResults;
-(unsigned)retainSearchTime;
-(void)setRetainSearchTime:(unsigned)arg1 ;
-(void)setHasRetainSearchTime:(BOOL)arg1 ;
-(BOOL)hasRetainSearchTime;
-(BOOL)isNoResultFromNegativeCache;
-(void)setIsNoResultFromNegativeCache:(BOOL)arg1 ;
-(void)setHasIsNoResultFromNegativeCache:(BOOL)arg1 ;
-(BOOL)hasIsNoResultFromNegativeCache;
-(void)setSortPriorityMappings:(NSMutableArray *)arg1 ;
-(BOOL)isTopSectionTypeQuery;
-(void)setIsTopSectionTypeQuery:(BOOL)arg1 ;
-(void)setHasIsTopSectionTypeQuery:(BOOL)arg1 ;
-(BOOL)hasIsTopSectionTypeQuery;
-(void)setClientRankingFeatureMetadatas:(NSMutableArray *)arg1 ;
-(BOOL)shouldDifferentiateClientAndServerResults;
-(void)setShouldDifferentiateClientAndServerResults:(BOOL)arg1 ;
-(void)setHasShouldDifferentiateClientAndServerResults:(BOOL)arg1 ;
-(BOOL)hasShouldDifferentiateClientAndServerResults;
-(BOOL)hasAutocompleteSessionData;
@end

