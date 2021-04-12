/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOPDPoiIconCategoryFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE19* _excludeCategoryFilters;
	SCD_Struct_GE19* _includeCategoryFilters;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_excludeCategoryFilters : 1;
		unsigned read_includeCategoryFilters : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_excludeCategoryFilters : 1;
		unsigned wrote_includeCategoryFilters : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long includeCategoryFiltersCount; 
@property (nonatomic,readonly) unsigned* includeCategoryFilters; 
@property (nonatomic,readonly) unsigned long long excludeCategoryFiltersCount; 
@property (nonatomic,readonly) unsigned* excludeCategoryFilters; 
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
-(void)addIncludeCategoryFilter:(unsigned)arg1 ;
-(void)addExcludeCategoryFilter:(unsigned)arg1 ;
-(void)_readIncludeCategoryFilters;
-(void)_addNoFlagsIncludeCategoryFilter:(unsigned)arg1 ;
-(void)_readExcludeCategoryFilters;
-(void)_addNoFlagsExcludeCategoryFilter:(unsigned)arg1 ;
-(unsigned long long)includeCategoryFiltersCount;
-(void)clearIncludeCategoryFilters;
-(unsigned)includeCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)excludeCategoryFiltersCount;
-(void)clearExcludeCategoryFilters;
-(unsigned)excludeCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(unsigned*)includeCategoryFilters;
-(void)setIncludeCategoryFilters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)excludeCategoryFilters;
-(void)setExcludeCategoryFilters:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

