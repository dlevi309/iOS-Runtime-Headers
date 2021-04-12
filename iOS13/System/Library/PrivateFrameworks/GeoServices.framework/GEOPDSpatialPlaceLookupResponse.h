/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDBounds, GEOLatLng, GEOPDMapsIdentifier;

@interface GEOPDSpatialPlaceLookupResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _categorys;
	GEOPDBounds* _bounds;
	GEOLatLng* _center;
	GEOPDMapsIdentifier* _placeId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_categorys : 1;
		unsigned read_bounds : 1;
		unsigned read_center : 1;
		unsigned read_placeId : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_categorys : 1;
		unsigned wrote_bounds : 1;
		unsigned wrote_center : 1;
		unsigned wrote_placeId : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPlaceId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * placeId; 
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,readonly) unsigned long long categorysCount; 
@property (nonatomic,readonly) int* categorys; 
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) GEOPDBounds * bounds; 
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
-(GEOPDBounds *)bounds;
-(void)setBounds:(GEOPDBounds *)arg1 ;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCenter;
-(BOOL)hasCenter;
-(void)_readCategorys;
-(void)_addNoFlagsCategory:(int)arg1 ;
-(int*)categorys;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(int)categoryAtIndex:(unsigned long long)arg1 ;
-(void)addCategory:(int)arg1 ;
-(BOOL)hasPlaceId;
-(GEOPDMapsIdentifier *)placeId;
-(void)_readBounds;
-(BOOL)hasBounds;
-(void)setCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)categorysAsString:(int)arg1 ;
-(int)StringAsCategorys:(id)arg1 ;
-(void)_readPlaceId;
-(void)setPlaceId:(GEOPDMapsIdentifier *)arg1 ;
@end

