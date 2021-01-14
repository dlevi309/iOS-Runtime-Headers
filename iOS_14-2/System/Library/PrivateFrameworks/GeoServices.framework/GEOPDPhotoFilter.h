/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDPhotoFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDPhotoSizeFilterValue* _photoSizeFilters;
	unsigned long long _photoSizeFiltersCount;
	unsigned long long _photoSizeFiltersSpace;

}

@property (nonatomic,readonly) unsigned long long photoSizeFiltersCount; 
@property (nonatomic,readonly) GEOPDPhotoSizeFilterValue* photoSizeFilters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)addPhotoSizeFilter:(GEOPDPhotoSizeFilterValue)arg1 ;
-(unsigned long long)photoSizeFiltersCount;
-(GEOPDPhotoSizeFilterValue)photoSizeFilterAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setPhotoSizeFilters:(GEOPDPhotoSizeFilterValue*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)clearPhotoSizeFilters;
-(GEOPDPhotoSizeFilterValue*)photoSizeFilters;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

