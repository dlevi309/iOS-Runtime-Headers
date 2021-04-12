/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setGps:(CLPSatelliteInfo *)arg1 ;
-(void)setGlonass:(CLPSatelliteInfo *)arg1 ;
-(void)setQzss:(CLPSatelliteInfo *)arg1 ;
-(void)setGalileo:(CLPSatelliteInfo *)arg1 ;
-(BOOL)hasGps;
-(BOOL)hasGlonass;
-(BOOL)hasQzss;
-(BOOL)hasGalileo;
-(CLPSatelliteInfo *)gps;
-(CLPSatelliteInfo *)glonass;
-(CLPSatelliteInfo *)qzss;
-(CLPSatelliteInfo *)galileo;
@end

