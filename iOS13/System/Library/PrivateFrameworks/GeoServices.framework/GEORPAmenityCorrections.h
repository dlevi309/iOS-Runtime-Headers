/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEORPAmenityCorrections : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _addedAmenities;
	SCD_Struct_GE1* _removedAmenities;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_addedAmenities : 1;
		unsigned read_removedAmenities : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_addedAmenities : 1;
		unsigned wrote_removedAmenities : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long addedAmenitiesCount; 
@property (nonatomic,readonly) int* addedAmenities; 
@property (nonatomic,readonly) unsigned long long removedAmenitiesCount; 
@property (nonatomic,readonly) int* removedAmenities; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
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
-(void)_readAddedAmenities;
-(void)_addNoFlagsAddedAmenities:(int)arg1 ;
-(void)_readRemovedAmenities;
-(void)_addNoFlagsRemovedAmenities:(int)arg1 ;
-(unsigned long long)addedAmenitiesCount;
-(void)clearAddedAmenities;
-(int)addedAmenitiesAtIndex:(unsigned long long)arg1 ;
-(void)addAddedAmenities:(int)arg1 ;
-(unsigned long long)removedAmenitiesCount;
-(void)clearRemovedAmenities;
-(int)removedAmenitiesAtIndex:(unsigned long long)arg1 ;
-(void)addRemovedAmenities:(int)arg1 ;
-(int*)addedAmenities;
-(void)setAddedAmenities:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)addedAmenitiesAsString:(int)arg1 ;
-(int)StringAsAddedAmenities:(id)arg1 ;
-(int*)removedAmenities;
-(void)setRemovedAmenities:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)removedAmenitiesAsString:(int)arg1 ;
-(int)StringAsRemovedAmenities:(id)arg1 ;
@end

