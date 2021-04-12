/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng;

@interface GEOPDSpatialEventLookupParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _categoryFilters;
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_categoryFilters : 1;
		unsigned wrote_center : 1;
		unsigned wrote_timeRange : 1;
		unsigned wrote_count : 1;
		unsigned wrote_radius : 1;
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)count;
-(id)initWithData:(id)arg1 ;
-(void)setCount:(int)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(int)radius;
-(void)setRadius:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCenter;
-(BOOL)hasCenter;
-(void)_readCategoryFilters;
-(void)_addNoFlagsCategoryFilter:(int)arg1 ;
-(unsigned long long)categoryFiltersCount;
-(void)clearCategoryFilters;
-(int)categoryFilterAtIndex:(unsigned long long)arg1 ;
-(void)addCategoryFilter:(int)arg1 ;
-(void)setHasRadius:(BOOL)arg1 ;
-(BOOL)hasRadius;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(int*)categoryFilters;
-(void)setCategoryFilters:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)categoryFiltersAsString:(int)arg1 ;
-(int)StringAsCategoryFilters:(id)arg1 ;
-(BOOL)hasTimeRange;
-(void)setTimeRange:(GEOPDTimeRange)arg1 ;
-(GEOPDTimeRange)timeRange;
-(void)setHasTimeRange:(BOOL)arg1 ;
@end

