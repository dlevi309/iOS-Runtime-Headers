/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPQuaternion;

@interface CLPIndoorCMAttitude : PBCodable <NSCopying> {

	double _timestamp;
	float _magneticAccuracy;
	int _magneticCalibration;
	CLPQuaternion* _quaternion;
	SCD_Struct_CL1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasQuaternion; 
@property (nonatomic,retain) CLPQuaternion * quaternion;               //@synthesize quaternion=_quaternion - In the implementation block
@property (assign,nonatomic) BOOL hasMagneticAccuracy; 
@property (assign,nonatomic) float magneticAccuracy;                   //@synthesize magneticAccuracy=_magneticAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasMagneticCalibration; 
@property (assign,nonatomic) int magneticCalibration;                  //@synthesize magneticCalibration=_magneticCalibration - In the implementation block
-(id)dictionaryRepresentation;
-(float)magneticAccuracy;
-(int)StringAsMagneticCalibration:(id)arg1 ;
-(void)setQuaternion:(CLPQuaternion *)arg1 ;
-(double)timestamp;
-(BOOL)hasMagneticCalibration;
-(id)magneticCalibrationAsString:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMagneticAccuracy:(float)arg1 ;
-(void)setMagneticCalibration:(int)arg1 ;
-(id)description;
-(int)magneticCalibration;
-(CLPQuaternion *)quaternion;
-(void)setHasMagneticCalibration:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)hasQuaternion;
-(BOOL)hasMagneticAccuracy;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasMagneticAccuracy:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

