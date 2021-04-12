/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOMapItemAddressBookAttributes, GEOMapItemCorrectedLocationAttributes, GEOMapItemRoutineAttributes;

@interface GEOMapItemClientAttributes : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapItemAddressBookAttributes* _addressBookAttributes;
	GEOMapItemCorrectedLocationAttributes* _correctedLocationAttributes;
	GEOMapItemRoutineAttributes* _routineAttributes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_addressBookAttributes : 1;
		unsigned read_correctedLocationAttributes : 1;
		unsigned read_routineAttributes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAddressBookAttributes; 
@property (nonatomic,retain) GEOMapItemAddressBookAttributes * addressBookAttributes; 
@property (nonatomic,readonly) BOOL hasRoutineAttributes; 
@property (nonatomic,retain) GEOMapItemRoutineAttributes * routineAttributes; 
@property (nonatomic,readonly) BOOL hasCorrectedLocationAttributes; 
@property (nonatomic,retain) GEOMapItemCorrectedLocationAttributes * correctedLocationAttributes; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setRoutineAttributes:(GEOMapItemRoutineAttributes *)arg1 ;
-(GEOMapItemAddressBookAttributes *)addressBookAttributes;
-(void)setAddressBookAttributes:(GEOMapItemAddressBookAttributes *)arg1 ;
-(void)setCorrectedLocationAttributes:(GEOMapItemCorrectedLocationAttributes *)arg1 ;
-(GEOMapItemCorrectedLocationAttributes *)correctedLocationAttributes;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasAddressBookAttributes;
-(id)description;
-(BOOL)hasRoutineAttributes;
-(unsigned long long)hash;
-(BOOL)hasCorrectedLocationAttributes;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOMapItemRoutineAttributes *)routineAttributes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

