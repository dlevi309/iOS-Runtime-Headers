/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_addressBookAttributes : 1;
		unsigned wrote_correctedLocationAttributes : 1;
		unsigned wrote_routineAttributes : 1;
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
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readAddressBookAttributes;
-(void)_readRoutineAttributes;
-(void)_readCorrectedLocationAttributes;
-(GEOMapItemAddressBookAttributes *)addressBookAttributes;
-(GEOMapItemRoutineAttributes *)routineAttributes;
-(GEOMapItemCorrectedLocationAttributes *)correctedLocationAttributes;
-(void)setAddressBookAttributes:(GEOMapItemAddressBookAttributes *)arg1 ;
-(void)setRoutineAttributes:(GEOMapItemRoutineAttributes *)arg1 ;
-(void)setCorrectedLocationAttributes:(GEOMapItemCorrectedLocationAttributes *)arg1 ;
-(BOOL)hasAddressBookAttributes;
-(BOOL)hasRoutineAttributes;
-(BOOL)hasCorrectedLocationAttributes;
@end

