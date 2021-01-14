/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPBundleId, CLPIndoorCMAttitude, CLPIndoorCMPedometer, CLPLocation, CLPIndoorMotionActivity, CLPIndoorPressure, CLPIndoorWifiScan;

@interface CLPIndoorEvent : PBCodable <NSCopying> {

	CLPBundleId* _bundleId;
	CLPIndoorCMAttitude* _cmAttitude;
	CLPIndoorCMPedometer* _cmPedometer;
	CLPLocation* _location;
	CLPIndoorMotionActivity* _motionActivity;
	CLPIndoorPressure* _pressure;
	int _type;
	CLPIndoorWifiScan* _wifiScan;
	SCD_Struct_CL3 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasCmAttitude; 
@property (nonatomic,retain) CLPIndoorCMAttitude * cmAttitude;                      //@synthesize cmAttitude=_cmAttitude - In the implementation block
@property (nonatomic,readonly) BOOL hasCmPedometer; 
@property (nonatomic,retain) CLPIndoorCMPedometer * cmPedometer;                    //@synthesize cmPedometer=_cmPedometer - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) CLPLocation * location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasMotionActivity; 
@property (nonatomic,retain) CLPIndoorMotionActivity * motionActivity;              //@synthesize motionActivity=_motionActivity - In the implementation block
@property (nonatomic,readonly) BOOL hasPressure; 
@property (nonatomic,retain) CLPIndoorPressure * pressure;                          //@synthesize pressure=_pressure - In the implementation block
@property (nonatomic,readonly) BOOL hasWifiScan; 
@property (nonatomic,retain) CLPIndoorWifiScan * wifiScan;                          //@synthesize wifiScan=_wifiScan - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) CLPBundleId * bundleId;                                //@synthesize bundleId=_bundleId - In the implementation block
-(id)dictionaryRepresentation;
-(CLPIndoorMotionActivity *)motionActivity;
-(BOOL)hasMotionActivity;
-(void)setMotionActivity:(CLPIndoorMotionActivity *)arg1 ;
-(BOOL)hasCmPedometer;
-(id)typeAsString:(int)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(CLPIndoorCMAttitude *)cmAttitude;
-(int)StringAsType:(id)arg1 ;
-(void)setBundleId:(CLPBundleId *)arg1 ;
-(void)setWifiScan:(CLPIndoorWifiScan *)arg1 ;
-(CLPLocation *)location;
-(CLPBundleId *)bundleId;
-(BOOL)hasType;
-(BOOL)hasBundleId;
-(CLPIndoorPressure *)pressure;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(CLPIndoorCMPedometer *)cmPedometer;
-(void)setLocation:(CLPLocation *)arg1 ;
-(id)description;
-(BOOL)hasLocation;
-(void)setPressure:(CLPIndoorPressure *)arg1 ;
-(int)type;
-(CLPIndoorWifiScan *)wifiScan;
-(unsigned long long)hash;
-(BOOL)hasWifiScan;
-(void)setCmAttitude:(CLPIndoorCMAttitude *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPressure;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasCmAttitude;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCmPedometer:(CLPIndoorCMPedometer *)arg1 ;
@end

