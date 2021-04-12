/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOURLCamera;

@interface GEOStorageCameraView : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOURLCamera* _camera;
	int _mapType;
	struct {
		unsigned has_mapType : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCamera; 
@property (nonatomic,retain) GEOURLCamera * camera; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(GEOURLCamera *)camera;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(int)mapType;
-(int)StringAsMapType:(id)arg1 ;
-(void)setMapType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(id)description;
-(BOOL)hasMapType;
-(void)setCamera:(GEOURLCamera *)arg1 ;
-(BOOL)hasCamera;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasMapType:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

