/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapRegion;

@interface GEOLogMsgStateMapView : PBCodable <NSCopying> {

	GEOMapRegion* _mapRegion;
	double _zoomLevel;
	int _mapType;
	SCD_Struct_GE123 _flags;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) double zoomLevel; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)zoomLevel;
-(void)readAll:(BOOL)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(id)jsonRepresentation;
-(int)mapType;
-(int)StringAsMapType:(id)arg1 ;
-(void)setMapType:(int)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasMapRegion;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(id)description;
-(BOOL)hasMapType;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasZoomLevel;
-(void)setHasMapType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

