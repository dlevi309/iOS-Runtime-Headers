/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(float)temperature;
-(double)timestamp;
-(float)pressure;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasTemperature;
-(id)description;
-(void)setPressure:(float)arg1 ;
-(void)setTemperature:(float)arg1 ;
-(void)setHasPressure:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPressure;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasTemperature:(BOOL)arg1 ;
@end

