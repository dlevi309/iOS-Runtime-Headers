/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDImageSignalProcessorSensorFaults : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _teleCameraSensorTemperatureFaults;
	unsigned _wideCameraSensorTemperatureFaults;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWideCameraSensorTemperatureFaults; 
@property (assign,nonatomic) unsigned wideCameraSensorTemperatureFaults;              //@synthesize wideCameraSensorTemperatureFaults=_wideCameraSensorTemperatureFaults - In the implementation block
@property (assign,nonatomic) BOOL hasTeleCameraSensorTemperatureFaults; 
@property (assign,nonatomic) unsigned teleCameraSensorTemperatureFaults;              //@synthesize teleCameraSensorTemperatureFaults=_teleCameraSensorTemperatureFaults - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWideCameraSensorTemperatureFaults:(unsigned)arg1 ;
-(void)setHasWideCameraSensorTemperatureFaults:(BOOL)arg1 ;
-(BOOL)hasWideCameraSensorTemperatureFaults;
-(void)setTeleCameraSensorTemperatureFaults:(unsigned)arg1 ;
-(void)setHasTeleCameraSensorTemperatureFaults:(BOOL)arg1 ;
-(BOOL)hasTeleCameraSensorTemperatureFaults;
-(unsigned)wideCameraSensorTemperatureFaults;
-(unsigned)teleCameraSensorTemperatureFaults;
@end

