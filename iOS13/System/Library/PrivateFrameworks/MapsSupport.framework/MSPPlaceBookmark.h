/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)origin;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTitle;
-(void)setOrigin:(int)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasMapItemStorage;
-(BOOL)hasOrigin;
-(void)setHasOrigin:(BOOL)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(GEOMapItemStorage *)mapItemStorage;
-(void)setMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(BOOL)hasDroppedPinCoordinate;
-(GEOLatLng *)droppedPinCoordinate;
-(void)setDroppedPinCoordinate:(GEOLatLng *)arg1 ;
-(BOOL)hasDroppedPinFloorOrdinal;
-(int)droppedPinFloorOrdinal;
-(void)setHasDroppedPinFloorOrdinal:(BOOL)arg1 ;
-(void)setDroppedPinFloorOrdinal:(int)arg1 ;
@end

