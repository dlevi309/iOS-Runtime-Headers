/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDSBrandFilter, GEOPDSCategoryFilter, GEOPDPoiIconCategoryFilter, GEOPDSSearchVenueFilter;

@interface GEOPDSSearchFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDSBrandFilter* _brandFilter;
	GEOPDSCategoryFilter* _categoryFilter;
	GEOPDPoiIconCategoryFilter* _poiIconCategoryFilter;
	GEOPDSSearchVenueFilter* _venueFilter;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _searchIntentFilter;
	struct {
		unsigned has_searchIntentFilter : 1;
		unsigned read_unknownFields : 1;
		unsigned read_brandFilter : 1;
		unsigned read_categoryFilter : 1;
		unsigned read_poiIconCategoryFilter : 1;
		unsigned read_venueFilter : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVenueFilter; 
@property (nonatomic,retain) GEOPDSSearchVenueFilter * venueFilter; 
@property (nonatomic,readonly) BOOL hasCategoryFilter; 
@property (nonatomic,retain) GEOPDSCategoryFilter * categoryFilter; 
@property (nonatomic,readonly) BOOL hasBrandFilter; 
@property (nonatomic,retain) GEOPDSBrandFilter * brandFilter; 
@property (assign,nonatomic) BOOL hasSearchIntentFilter; 
@property (assign,nonatomic) int searchIntentFilter; 
@property (nonatomic,readonly) BOOL hasPoiIconCategoryFilter; 
@property (nonatomic,retain) GEOPDPoiIconCategoryFilter * poiIconCategoryFilter; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOPDSCategoryFilter *)categoryFilter;
-(GEOPDSBrandFilter *)brandFilter;
-(void)setCategoryFilter:(GEOPDSCategoryFilter *)arg1 ;
-(void)setBrandFilter:(GEOPDSBrandFilter *)arg1 ;
-(void)setSearchIntentFilter:(int)arg1 ;
-(BOOL)hasCategoryFilter;
-(BOOL)hasBrandFilter;
-(int)searchIntentFilter;
-(void)setHasSearchIntentFilter:(BOOL)arg1 ;
-(BOOL)hasSearchIntentFilter;
-(id)searchIntentFilterAsString:(int)arg1 ;
-(int)StringAsSearchIntentFilter:(id)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOPDPoiIconCategoryFilter *)poiIconCategoryFilter;
-(void)setPoiIconCategoryFilter:(GEOPDPoiIconCategoryFilter *)arg1 ;
-(id)description;
-(BOOL)hasPoiIconCategoryFilter;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDSSearchVenueFilter *)venueFilter;
-(void)setVenueFilter:(GEOPDSSearchVenueFilter *)arg1 ;
-(BOOL)hasVenueFilter;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

