/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDBounds, GEOLatLng;

@interface GEOPDSpatialLookupResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _mappedCategorys;
	GEOPDBounds* _bounds;
	GEOLatLng* _center;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_mappedCategorys : 1;
		unsigned read_bounds : 1;
		unsigned read_center : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) GEOPDBounds * bounds; 
@property (nonatomic,readonly) unsigned long long mappedCategorysCount; 
@property (nonatomic,readonly) int* mappedCategorys; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)spatialLookupResultForPlaceData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDBounds *)bounds;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOLatLng *)center;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCenter;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setBounds:(GEOPDBounds *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addMappedCategory:(int)arg1 ;
-(unsigned long long)mappedCategorysCount;
-(void)clearMappedCategorys;
-(int)mappedCategoryAtIndex:(unsigned long long)arg1 ;
-(int*)mappedCategorys;
-(void)setMappedCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)mappedCategorysAsString:(int)arg1 ;
-(int)StringAsMappedCategorys:(id)arg1 ;
-(id)description;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasBounds;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

