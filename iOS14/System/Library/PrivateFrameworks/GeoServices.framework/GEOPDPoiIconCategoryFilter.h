/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOPDPoiIconCategoryFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _excludeCategoryFilters;
	SCD_Struct_GE17* _includeCategoryFilters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_excludeCategoryFilters : 1;
		unsigned read_includeCategoryFilters : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long includeCategoryFiltersCount; 
@property (nonatomic,readonly) unsigned* includeCategoryFilters; 
@property (nonatomic,readonly) unsigned long long excludeCategoryFiltersCount; 
@property (nonatomic,readonly) unsigned* excludeCategoryFilters; 
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
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned*)includeCategoryFilters;
-(unsigned long long)includeCategoryFiltersCount;
-(void)clearIncludeCategoryFilters;
-(unsigned)includeCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)excludeCategoryFiltersCount;
-(void)clearExcludeCategoryFilters;
-(unsigned)excludeCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(void)setIncludeCategoryFilters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)excludeCategoryFilters;
-(void)setExcludeCategoryFilters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)addIncludeCategoryFilter:(unsigned)arg1 ;
-(void)addExcludeCategoryFilter:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

