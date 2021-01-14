/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDCollectionSuggestionResult, NSString, GEOPDPublisherSuggestionResult, GEOPDSearchBrowseCategorySuggestionResult;

@interface GEOPDMapsSearchHomeSection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDCollectionSuggestionResult* _collectionSuggestionResult;
	NSString* _name;
	GEOPDPublisherSuggestionResult* _publisherSuggestionResult;
	GEOPDSearchBrowseCategorySuggestionResult* _searchBrowseCategorySuggestionResult;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _sectionType;
	struct {
		unsigned has_sectionType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_collectionSuggestionResult : 1;
		unsigned read_name : 1;
		unsigned read_publisherSuggestionResult : 1;
		unsigned read_searchBrowseCategorySuggestionResult : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSectionType; 
@property (assign,nonatomic) int sectionType; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) BOOL hasSearchBrowseCategorySuggestionResult; 
@property (nonatomic,retain) GEOPDSearchBrowseCategorySuggestionResult * searchBrowseCategorySuggestionResult; 
@property (nonatomic,readonly) BOOL hasCollectionSuggestionResult; 
@property (nonatomic,retain) GEOPDCollectionSuggestionResult * collectionSuggestionResult; 
@property (nonatomic,readonly) BOOL hasPublisherSuggestionResult; 
@property (nonatomic,retain) GEOPDPublisherSuggestionResult * publisherSuggestionResult; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(id)init;
-(id)jsonRepresentation;
-(GEOPDCollectionSuggestionResult *)collectionSuggestionResult;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasCollectionSuggestionResult;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(GEOPDPublisherSuggestionResult *)publisherSuggestionResult;
-(void)setPublisherSuggestionResult:(GEOPDPublisherSuggestionResult *)arg1 ;
-(BOOL)hasPublisherSuggestionResult;
-(int)sectionType;
-(id)description;
-(void)setCollectionSuggestionResult:(GEOPDCollectionSuggestionResult *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSectionType;
-(void)setSectionType:(int)arg1 ;
-(GEOPDSearchBrowseCategorySuggestionResult *)searchBrowseCategorySuggestionResult;
-(void)setSearchBrowseCategorySuggestionResult:(GEOPDSearchBrowseCategorySuggestionResult *)arg1 ;
-(void)setHasSectionType:(BOOL)arg1 ;
-(id)sectionTypeAsString:(int)arg1 ;
-(int)StringAsSectionType:(id)arg1 ;
-(BOOL)hasSearchBrowseCategorySuggestionResult;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

