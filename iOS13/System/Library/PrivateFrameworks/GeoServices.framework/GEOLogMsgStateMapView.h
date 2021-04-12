/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) double zoomLevel; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOMapRegion *)mapRegion;
-(BOOL)hasMapRegion;
-(void)setMapType:(int)arg1 ;
-(BOOL)hasMapType;
-(int)mapType;
-(double)zoomLevel;
-(void)setHasMapType:(BOOL)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(int)StringAsMapType:(id)arg1 ;
-(void)setZoomLevel:(double)arg1 ;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(BOOL)hasZoomLevel;
@end

