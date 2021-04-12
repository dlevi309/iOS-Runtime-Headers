/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPSatelliteInfo;

@interface CLPSatelliteReport : PBCodable <NSCopying> {

	CLPSatelliteInfo* _galileo;
	CLPSatelliteInfo* _glonass;
	CLPSatelliteInfo* _gps;
	CLPSatelliteInfo* _qzss;

}

@property (nonatomic,readonly) BOOL hasGps; 
@property (nonatomic,retain) CLPSatelliteInfo * gps;                  //@synthesize gps=_gps - In the implementation block
@property (nonatomic,readonly) BOOL hasGlonass; 
@property (nonatomic,retain) CLPSatelliteInfo * glonass;              //@synthesize glonass=_glonass - In the implementation block
@property (nonatomic,readonly) BOOL hasQzss; 
@property (nonatomic,retain) CLPSatelliteInfo * qzss;                 //@synthesize qzss=_qzss - In the implementation block
@property (nonatomic,readonly) BOOL hasGalileo; 
@property (nonatomic,retain) CLPSatelliteInfo * galileo;              //@synthesize galileo=_galileo - In the implementation block
-(id)dictionaryRepresentation;
-(CLPSatelliteInfo *)galileo;
-(void)setQzss:(CLPSatelliteInfo *)arg1 ;
-(void)setGalileo:(CLPSatelliteInfo *)arg1 ;
-(BOOL)hasQzss;
-(void)setGlonass:(CLPSatelliteInfo *)arg1 ;
-(BOOL)hasGps;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)hasGalileo;
-(CLPSatelliteInfo *)gps;
-(void)setGps:(CLPSatelliteInfo *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(CLPSatelliteInfo *)glonass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasGlonass;
-(BOOL)isEqual:(id)arg1 ;
-(CLPSatelliteInfo *)qzss;
@end

