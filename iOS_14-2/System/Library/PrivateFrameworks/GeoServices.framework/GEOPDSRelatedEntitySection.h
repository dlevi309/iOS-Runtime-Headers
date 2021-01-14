/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOPDSRelatedCollectionSection;

@interface GEOPDSRelatedEntitySection : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _name;
	GEOPDSRelatedCollectionSection* _relatedCollectionSection;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _index;
	int _sectionType;
	struct {
		unsigned has_index : 1;
		unsigned has_sectionType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_name : 1;
		unsigned read_relatedCollectionSection : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) BOOL hasIndex; 
@property (assign,nonatomic) unsigned index; 
@property (assign,nonatomic) BOOL hasSectionType; 
@property (assign,nonatomic) int sectionType; 
@property (nonatomic,readonly) BOOL hasRelatedCollectionSection; 
@property (nonatomic,retain) GEOPDSRelatedCollectionSection * relatedCollectionSection; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)index;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasName;
-(GEOPDSRelatedCollectionSection *)relatedCollectionSection;
-(void)setRelatedCollectionSection:(GEOPDSRelatedCollectionSection *)arg1 ;
-(BOOL)hasRelatedCollectionSection;
-(id)init;
-(id)jsonRepresentation;
-(void)setIndex:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(BOOL)hasIndex;
-(int)sectionType;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasSectionType;
-(void)setSectionType:(int)arg1 ;
-(void)setHasSectionType:(BOOL)arg1 ;
-(id)sectionTypeAsString:(int)arg1 ;
-(int)StringAsSectionType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasIndex:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

