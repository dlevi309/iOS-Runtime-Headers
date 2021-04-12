/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setMapType:(int)arg1 ;
-(void)setCamera:(GEOURLCamera *)arg1 ;
-(BOOL)hasMapType;
-(BOOL)hasCamera;
-(int)mapType;
-(GEOURLCamera *)camera;
-(void)setHasMapType:(BOOL)arg1 ;
-(id)mapTypeAsString:(int)arg1 ;
-(int)StringAsMapType:(id)arg1 ;
@end

