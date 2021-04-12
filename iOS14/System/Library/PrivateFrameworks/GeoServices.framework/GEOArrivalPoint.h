/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOArrivalPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _point;
	unsigned _radius;
	struct {
		unsigned has_radius : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasPoint; 
@property (nonatomic,retain) GEOLatLng * point; 
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) unsigned radius; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(GEOLatLng *)point;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setRadius:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRadius;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)radius;
-(id)description;
-(BOOL)hasPoint;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasRadius:(BOOL)arg1 ;
-(void)setPoint:(GEOLatLng *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

