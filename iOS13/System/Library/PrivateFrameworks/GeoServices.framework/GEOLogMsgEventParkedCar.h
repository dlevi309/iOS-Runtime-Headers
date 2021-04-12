/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEOLogMsgEventParkedCar : PBCodable <NSCopying> {

	double _locationUncertainty;
	GEOLatLng* _location;
	double _timestamp;
	SCD_Struct_GE33 _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (assign,nonatomic) BOOL hasLocationUncertainty; 
@property (assign,nonatomic) double locationUncertainty; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(GEOLatLng *)location;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(double)locationUncertainty;
-(void)setLocationUncertainty:(double)arg1 ;
-(void)setHasLocationUncertainty:(BOOL)arg1 ;
-(BOOL)hasLocationUncertainty;
@end

