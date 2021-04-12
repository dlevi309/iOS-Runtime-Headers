/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPIndoorPressure : PBCodable <NSCopying> {

	double _timestamp;
	float _pressure;
	float _temperature;
	SCD_Struct_CL1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasPressure; 
@property (assign,nonatomic) float pressure;                   //@synthesize pressure=_pressure - In the implementation block
@property (assign,nonatomic) BOOL hasTemperature; 
@property (assign,nonatomic) float temperature;                //@synthesize temperature=_temperature - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(float)temperature;
-(void)setTemperature:(float)arg1 ;
-(void)setHasTemperature:(BOOL)arg1 ;
-(BOOL)hasTemperature;
-(float)pressure;
-(void)setPressure:(float)arg1 ;
-(BOOL)hasPressure;
-(void)setHasPressure:(BOOL)arg1 ;
@end

