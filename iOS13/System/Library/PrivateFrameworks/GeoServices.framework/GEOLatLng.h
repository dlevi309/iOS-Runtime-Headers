/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	struct {
		unsigned has_gtLog : 1;
	}  _flags;

}

@property (nonatomic,readonly) SCD_Struct_GE32 coordinate; 
@property (assign,nonatomic) BOOL hasGtLog; 
@property (assign,nonatomic) BOOL gtLog; 
@property (assign,nonatomic) double lat; 
@property (assign,nonatomic) double lng; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_GE32)coordinate;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)initWithCoordinate:(SCD_Struct_GE32)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(double)lat;
-(void)setLat:(double)arg1 ;
-(double)lng;
-(void)setLng:(double)arg1 ;
-(BOOL)gtLog;
-(void)setGtLog:(BOOL)arg1 ;
-(void)setHasGtLog:(BOOL)arg1 ;
-(BOOL)hasGtLog;
@end

