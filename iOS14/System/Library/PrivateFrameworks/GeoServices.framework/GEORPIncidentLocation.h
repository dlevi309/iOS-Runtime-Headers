/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEORPIncidentLocation : PBCodable <NSCopying> {

	GEOLatLng* _latLng;
	unsigned _zoomLevel;
	struct {
		unsigned has_zoomLevel : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLatLng; 
@property (nonatomic,retain) GEOLatLng * latLng; 
@property (assign,nonatomic) BOOL hasZoomLevel; 
@property (assign,nonatomic) unsigned zoomLevel; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)zoomLevel;
-(void)readAll:(BOOL)arg1 ;
-(void)setZoomLevel:(unsigned)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasZoomLevel:(BOOL)arg1 ;
-(GEOLatLng *)latLng;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasLatLng;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLatLng:(GEOLatLng *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasZoomLevel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

