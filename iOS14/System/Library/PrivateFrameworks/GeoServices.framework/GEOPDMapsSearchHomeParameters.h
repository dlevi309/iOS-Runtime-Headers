/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDCollectionSuggestionParameters, GEOPDPublisherSuggestionParameters, GEOPDSearchBrowseCategorySuggestionParameters;

@interface GEOPDMapsSearchHomeParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _supportedSectionTypes;
	GEOPDCollectionSuggestionParameters* _collectionSuggestionParameters;
	GEOPDPublisherSuggestionParameters* _publisherSuggestionParameters;
	GEOPDSearchBrowseCategorySuggestionParameters* _searchBrowseCategorySuggestionParameters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_supportedSectionTypes : 1;
		unsigned read_collectionSuggestionParameters : 1;
		unsigned read_publisherSuggestionParameters : 1;
		unsigned read_searchBrowseCategorySuggestionParameters : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long supportedSectionTypesCount; 
@property (nonatomic,readonly) int* supportedSectionTypes; 
@property (nonatomic,readonly) BOOL hasSearchBrowseCategorySuggestionParameters; 
@property (nonatomic,retain) GEOPDSearchBrowseCategorySuggestionParameters * searchBrowseCategorySuggestionParameters; 
@property (nonatomic,readonly) BOOL hasCollectionSuggestionParameters; 
@property (nonatomic,retain) GEOPDCollectionSuggestionParameters * collectionSuggestionParameters; 
@property (nonatomic,readonly) BOOL hasPublisherSuggestionParameters; 
@property (nonatomic,retain) GEOPDPublisherSuggestionParameters * publisherSuggestionParameters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCollectionSuggestionParameters;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDPublisherSuggestionParameters *)publisherSuggestionParameters;
-(void)setPublisherSuggestionParameters:(GEOPDPublisherSuggestionParameters *)arg1 ;
-(BOOL)hasPublisherSuggestionParameters;
-(id)description;
-(GEOPDCollectionSuggestionParameters *)collectionSuggestionParameters;
-(void)setCollectionSuggestionParameters:(GEOPDCollectionSuggestionParameters *)arg1 ;
-(unsigned long long)hash;
-(GEOPDSearchBrowseCategorySuggestionParameters *)searchBrowseCategorySuggestionParameters;
-(void)addSupportedSectionType:(int)arg1 ;
-(void)setSearchBrowseCategorySuggestionParameters:(GEOPDSearchBrowseCategorySuggestionParameters *)arg1 ;
-(unsigned long long)supportedSectionTypesCount;
-(void)clearSupportedSectionTypes;
-(int)supportedSectionTypeAtIndex:(unsigned long long)arg1 ;
-(int*)supportedSectionTypes;
-(void)setSupportedSectionTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)supportedSectionTypesAsString:(int)arg1 ;
-(int)StringAsSupportedSectionTypes:(id)arg1 ;
-(BOOL)hasSearchBrowseCategorySuggestionParameters;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

