/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapRegion;

@interface GEOPDViewportInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _mapRegion;
	int _mapType;
	unsigned _timeSinceMapViewportChanged;
	SCD_Struct_GE33 _flags;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (assign,nonatomic) BOOL hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) unsigned timeSinceMapViewportChanged; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)viewportInfoForTraits:(id)arg1 ;
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
-(id)initWithTraits:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOMapRegion *)mapRegion;
-(BOOL)hasMapRegion;
-(void)setMapType:(int)arg1 ;
-(BOOL)hasMapType;
-(int)mapType;
-(unsigned)timeSinceMapViewportChanged;
-(void)setTimeSinceMapViewportChanged:(unsigned)arg1 ;
-(void)setHasTimeSinceMapViewportChanged:(BOOL)arg1 ;
-(BOOL)hasTimeSinceMapViewportChanged;
-(void)setHasMapType:(BOOL)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(int)StringAsMapType:(id)arg1 ;
@end

