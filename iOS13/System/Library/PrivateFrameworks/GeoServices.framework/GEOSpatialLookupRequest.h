/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLatLng;

@interface GEOSpatialLookupRequest : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE1* _categorys;
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
		unsigned wrote_categorys : 1;
		unsigned wrote_center : 1;
		unsigned wrote_maxResults : 1;
		unsigned wrote_radius : 1;
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
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
-(void)_readCenter;
-(void)setHasRadius:(BOOL)arg1 ;
-(BOOL)hasRadius;
-(void)_readCategorys;
-(void)_addNoFlagsCategory:(int)arg1 ;
-(int*)categorys;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(int)categoryAtIndex:(unsigned long long)arg1 ;
-(void)addCategory:(int)arg1 ;
-(int)maxResults;
-(void)setMaxResults:(int)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(void)setCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)categorysAsString:(int)arg1 ;
-(int)StringAsCategorys:(id)arg1 ;
@end

