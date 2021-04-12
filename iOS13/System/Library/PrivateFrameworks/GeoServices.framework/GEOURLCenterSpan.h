/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOURLCenterSpan : PBCodable <NSCopying> {

	double _latitudeDelta;
	double _latitude;
	double _longitudeDelta;
	double _longitude;
	struct {
		unsigned has_latitudeDelta : 1;
		unsigned has_latitude : 1;
		unsigned has_longitudeDelta : 1;
		unsigned has_longitude : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL hasLatitudeDelta; 
@property (assign,nonatomic) double latitudeDelta; 
@property (assign,nonatomic) BOOL hasLongitudeDelta; 
@property (assign,nonatomic) double longitudeDelta; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(void)readAll:(BOOL)arg1 ;
-(void)setLatitudeDelta:(double)arg1 ;
-(void)setLongitudeDelta:(double)arg1 ;
-(BOOL)hasLatitudeDelta;
-(BOOL)hasLongitudeDelta;
-(double)latitudeDelta;
-(double)longitudeDelta;
-(void)setHasLatitudeDelta:(BOOL)arg1 ;
-(void)setHasLongitudeDelta:(BOOL)arg1 ;
@end

