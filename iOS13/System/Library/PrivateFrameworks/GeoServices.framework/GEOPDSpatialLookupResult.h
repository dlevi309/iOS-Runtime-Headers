/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDBounds, GEOLatLng;

@interface GEOPDSpatialLookupResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _mappedCategorys;
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_mappedCategorys : 1;
		unsigned wrote_bounds : 1;
		unsigned wrote_center : 1;
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
-(void)_readBounds;
-(void)_readMappedCategorys;
-(void)_addNoFlagsMappedCategory:(int)arg1 ;
-(unsigned long long)mappedCategorysCount;
-(void)clearMappedCategorys;
-(int)mappedCategoryAtIndex:(unsigned long long)arg1 ;
-(void)addMappedCategory:(int)arg1 ;
-(BOOL)hasBounds;
-(int*)mappedCategorys;
-(void)setMappedCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)mappedCategorysAsString:(int)arg1 ;
-(int)StringAsMappedCategorys:(id)arg1 ;
@end

