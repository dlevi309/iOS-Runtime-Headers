/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setWideCameraSensorTemperatureFaults:(unsigned)arg1 ;
-(void)setHasWideCameraSensorTemperatureFaults:(BOOL)arg1 ;
-(BOOL)hasWideCameraSensorTemperatureFaults;
-(void)setTeleCameraSensorTemperatureFaults:(unsigned)arg1 ;
-(void)setHasTeleCameraSensorTemperatureFaults:(BOOL)arg1 ;
-(BOOL)hasTeleCameraSensorTemperatureFaults;
-(unsigned)wideCameraSensorTemperatureFaults;
-(unsigned)teleCameraSensorTemperatureFaults;
@end

