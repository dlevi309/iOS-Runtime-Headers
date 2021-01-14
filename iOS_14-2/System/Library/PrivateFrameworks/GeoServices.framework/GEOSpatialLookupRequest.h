/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLatLng;

@interface GEOSpatialLookupRequest : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE90* _categorys;
	GEOLatLng* _center;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _maxResults;
	int _radius;
	struct {
		unsigned has_maxResults : 1;
		unsigned has_radius : 1;
		unsigned read_categorys : 1;
		unsigned read_center : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) GEOLatLng * center; 
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) int radius; 
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults; 
@property (nonatomic,readonly) unsigned long long categorysCount; 
@property (nonatomic,readonly) int* categorys; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRadius:(int)arg1 ;
-(void)addCategory:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(GEOLatLng *)center;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasMaxResults;
-(unsigned long long)categorysCount;
-(int)categoryAtIndex:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMaxResults:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)maxResults;
-(BOOL)hasRadius;
-(void)clearCategorys;
-(id)initWithDictionary:(id)arg1 ;
-(int)radius;
-(void)setCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)categorysAsString:(int)arg1 ;
-(int)StringAsCategorys:(id)arg1 ;
-(id)description;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(int*)categorys;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasRadius:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

