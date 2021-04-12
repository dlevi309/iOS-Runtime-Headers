/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

