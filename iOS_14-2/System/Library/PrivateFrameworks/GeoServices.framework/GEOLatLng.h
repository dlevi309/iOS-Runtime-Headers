/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOLatLng : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _lat;
	double _lng;
	BOOL _gtLog;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (assign,nonatomic) BOOL hasGtLog; 
@property (assign,nonatomic) BOOL gtLog; 
@property (assign,nonatomic) double lat; 
@property (assign,nonatomic) double lng; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)lng;
-(void)setGtLog:(BOOL)arg1 ;
-(double)lat;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(GEOCoarseLocationLatLng)coordinate;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasGtLog:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasGtLog;
-(id)description;
-(void)setLng:(double)arg1 ;
-(BOOL)gtLog;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setLat:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

