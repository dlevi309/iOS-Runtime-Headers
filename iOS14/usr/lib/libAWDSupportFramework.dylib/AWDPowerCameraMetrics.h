/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDPowerCameraMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _cameraBackOnDuration;
	unsigned _cameraFrontOnDuration;
	unsigned _cameraTorchOnDuration;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCameraFrontOnDuration; 
@property (assign,nonatomic) unsigned cameraFrontOnDuration;              //@synthesize cameraFrontOnDuration=_cameraFrontOnDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCameraBackOnDuration; 
@property (assign,nonatomic) unsigned cameraBackOnDuration;               //@synthesize cameraBackOnDuration=_cameraBackOnDuration - In the implementation block
@property (assign,nonatomic) BOOL hasCameraTorchOnDuration; 
@property (assign,nonatomic) unsigned cameraTorchOnDuration;              //@synthesize cameraTorchOnDuration=_cameraTorchOnDuration - In the implementation block
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
-(void)setCameraFrontOnDuration:(unsigned)arg1 ;
-(void)setCameraBackOnDuration:(unsigned)arg1 ;
-(void)setCameraTorchOnDuration:(unsigned)arg1 ;
-(void)setHasCameraFrontOnDuration:(BOOL)arg1 ;
-(BOOL)hasCameraFrontOnDuration;
-(void)setHasCameraBackOnDuration:(BOOL)arg1 ;
-(BOOL)hasCameraBackOnDuration;
-(void)setHasCameraTorchOnDuration:(BOOL)arg1 ;
-(BOOL)hasCameraTorchOnDuration;
-(unsigned)cameraFrontOnDuration;
-(unsigned)cameraBackOnDuration;
-(unsigned)cameraTorchOnDuration;
@end

