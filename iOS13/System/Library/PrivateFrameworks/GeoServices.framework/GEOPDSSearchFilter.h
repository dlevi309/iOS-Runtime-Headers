/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_brandFilter : 1;
		unsigned wrote_categoryFilter : 1;
		unsigned wrote_poiIconCategoryFilter : 1;
		unsigned wrote_venueFilter : 1;
		unsigned wrote_searchIntentFilter : 1;
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
-(void)setPoiIconCategoryFilter:(GEOPDPoiIconCategoryFilter *)arg1 ;
-(int)searchIntentFilter;
-(void)setSearchIntentFilter:(int)arg1 ;
-(BOOL)hasSearchIntentFilter;
-(void)setVenueFilter:(GEOPDSSearchVenueFilter *)arg1 ;
-(void)_readPoiIconCategoryFilter;
-(GEOPDPoiIconCategoryFilter *)poiIconCategoryFilter;
-(BOOL)hasPoiIconCategoryFilter;
-(void)_readVenueFilter;
-(GEOPDSSearchVenueFilter *)venueFilter;
-(BOOL)hasVenueFilter;
-(void)_readCategoryFilter;
-(void)_readBrandFilter;
-(GEOPDSCategoryFilter *)categoryFilter;
-(GEOPDSBrandFilter *)brandFilter;
-(void)setCategoryFilter:(GEOPDSCategoryFilter *)arg1 ;
-(void)setBrandFilter:(GEOPDSBrandFilter *)arg1 ;
-(BOOL)hasCategoryFilter;
-(BOOL)hasBrandFilter;
-(void)setHasSearchIntentFilter:(BOOL)arg1 ;
-(id)searchIntentFilterAsString:(int)arg1 ;
-(int)StringAsSearchIntentFilter:(id)arg1 ;
@end

