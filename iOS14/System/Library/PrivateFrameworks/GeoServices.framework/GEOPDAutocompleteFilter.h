/*
* Generated on Thursday, January 14, 2021 at 2:20:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOPDPoiIconCategoryFilter;

@interface GEOPDAutocompleteFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _placeTypeFilters;
	SCD_Struct_GE90* _requestedEntryTypes;
	GEOPDPoiIconCategoryFilter* _poiIconCategoryFilter;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_placeTypeFilters : 1;
		unsigned read_requestedEntryTypes : 1;
		unsigned read_poiIconCategoryFilter : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long requestedEntryTypesCount; 
@property (nonatomic,readonly) int* requestedEntryTypes; 
@property (nonatomic,readonly) BOOL hasPoiIconCategoryFilter; 
@property (nonatomic,retain) GEOPDPoiIconCategoryFilter * poiIconCategoryFilter; 
@property (nonatomic,readonly) unsigned long long placeTypeFiltersCount; 
@property (nonatomic,readonly) int* placeTypeFilters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)addPlaceTypeFilter:(int)arg1 ;
-(GEOPDPoiIconCategoryFilter *)poiIconCategoryFilter;
-(void)addRequestedEntryType:(int)arg1 ;
-(void)setPoiIconCategoryFilter:(GEOPDPoiIconCategoryFilter *)arg1 ;
-(unsigned long long)requestedEntryTypesCount;
-(void)clearRequestedEntryTypes;
-(int)requestedEntryTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)placeTypeFiltersCount;
-(void)clearPlaceTypeFilters;
-(int*)placeTypeFilters;
-(int)placeTypeFilterAtIndex:(unsigned long long)arg1 ;
-(int*)requestedEntryTypes;
-(void)setRequestedEntryTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)description;
-(id)requestedEntryTypesAsString:(int)arg1 ;
-(int)StringAsRequestedEntryTypes:(id)arg1 ;
-(BOOL)hasPoiIconCategoryFilter;
-(void)setPlaceTypeFilters:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)placeTypeFiltersAsString:(int)arg1 ;
-(int)StringAsPlaceTypeFilters:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

