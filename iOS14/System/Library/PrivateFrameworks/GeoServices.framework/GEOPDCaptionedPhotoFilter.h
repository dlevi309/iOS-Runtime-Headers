/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDCaptionedPhotoFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOPDPhotoSizeFilterValue* _photoSizeFilters;
	unsigned long long _photoSizeFiltersCount;
	unsigned long long _photoSizeFiltersSpace;
	NSString* _vendorId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_photoSizeFilters : 1;
		unsigned read_vendorId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long photoSizeFiltersCount; 
@property (nonatomic,readonly) GEOPDPhotoSizeFilterValue* photoSizeFilters; 
@property (nonatomic,readonly) BOOL hasVendorId; 
@property (nonatomic,retain) NSString * vendorId; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)addPhotoSizeFilter:(GEOPDPhotoSizeFilterValue)arg1 ;
-(void)setVendorId:(NSString *)arg1 ;
-(unsigned long long)photoSizeFiltersCount;
-(GEOPDPhotoSizeFilterValue)photoSizeFilterAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setPhotoSizeFilters:(GEOPDPhotoSizeFilterValue*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)clearPhotoSizeFilters;
-(NSString *)vendorId;
-(GEOPDPhotoSizeFilterValue*)photoSizeFilters;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasVendorId;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

