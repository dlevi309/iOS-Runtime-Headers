/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng;

@interface GEOPDSpatialEventLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _categoryFilters;
	GEOLatLng* _center;
	GEOPDTimeRange _timeRange;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _count;
	int _radius;
	struct {
		unsigned has_timeRange : 1;
		unsigned has_count : 1;
		unsigned has_radius : 1;
		unsigned read_unknownFields : 1;
		unsigned read_categoryFilters : 1;
		unsigned read_center : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) int radius; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) int count; 
@property (nonatomic,readonly) unsigned long long categoryFiltersCount; 
@property (nonatomic,readonly) int* categoryFilters; 
@property (assign,nonatomic) BOOL hasTimeRange; 
@property (assign,nonatomic) GEOPDTimeRange timeRange; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setCount:(int)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setRadius:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOLatLng *)center;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCenter;
-(void)setTimeRange:(GEOPDTimeRange)arg1 ;
-(GEOPDTimeRange)timeRange;
-(void)mergeFrom:(id)arg1 ;
-(int)count;
-(id)initWithData:(id)arg1 ;
-(BOOL)hasRadius;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(void)addCategoryFilter:(int)arg1 ;
-(unsigned long long)categoryFiltersCount;
-(void)clearCategoryFilters;
-(int)categoryFilterAtIndex:(unsigned long long)arg1 ;
-(int*)categoryFilters;
-(void)setCategoryFilters:(int*)arg1 count:(unsigned long long)arg2 ;
-(int)radius;
-(id)categoryFiltersAsString:(int)arg1 ;
-(int)StringAsCategoryFilters:(id)arg1 ;
-(id)description;
-(void)setHasTimeRange:(BOOL)arg1 ;
-(BOOL)hasCount;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasTimeRange;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasRadius:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

