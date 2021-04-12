/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOLatLngE7 : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _latE7;
	int _lngE7;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) GEOLatLng * latLng; 
@property (assign,nonatomic) int latE7; 
@property (assign,nonatomic) int lngE7; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)latE7;
-(int)lngE7;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(GEOCoarseLocationLatLng)coordinate;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEOLatLng *)latLng;
-(id)description;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)initWithLatLng:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLatE7:(int)arg1 ;
-(void)setLngE7:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithE7Latitude:(int)arg1 longitude:(int)arg2 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

