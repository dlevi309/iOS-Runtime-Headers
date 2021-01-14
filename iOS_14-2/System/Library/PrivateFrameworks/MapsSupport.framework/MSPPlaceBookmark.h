/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng, GEOMapItemStorage, NSString;

@interface MSPPlaceBookmark : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _droppedPinCoordinate;
	int _droppedPinFloorOrdinal;
	GEOMapItemStorage* _mapItemStorage;
	int _origin;
	NSString* _title;
	SCD_Struct_MS2 _has;

}

@property (nonatomic,readonly) BOOL hasMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * mapItemStorage;              //@synthesize mapItemStorage=_mapItemStorage - In the implementation block
@property (assign,nonatomic) BOOL hasOrigin; 
@property (assign,nonatomic) int origin;                                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasDroppedPinCoordinate; 
@property (nonatomic,retain) GEOLatLng * droppedPinCoordinate;                //@synthesize droppedPinCoordinate=_droppedPinCoordinate - In the implementation block
@property (assign,nonatomic) BOOL hasDroppedPinFloorOrdinal; 
@property (assign,nonatomic) int droppedPinFloorOrdinal;                      //@synthesize droppedPinFloorOrdinal=_droppedPinFloorOrdinal - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)setOrigin:(int)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(int)origin;
-(BOOL)hasMapItemStorage;
-(BOOL)hasTitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(GEOLatLng *)droppedPinCoordinate;
-(void)setDroppedPinCoordinate:(GEOLatLng *)arg1 ;
-(int)droppedPinFloorOrdinal;
-(void)setDroppedPinFloorOrdinal:(int)arg1 ;
-(unsigned long long)hash;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(BOOL)hasOrigin;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasDroppedPinCoordinate;
-(BOOL)hasDroppedPinFloorOrdinal;
-(void)setHasDroppedPinFloorOrdinal:(BOOL)arg1 ;
@end

