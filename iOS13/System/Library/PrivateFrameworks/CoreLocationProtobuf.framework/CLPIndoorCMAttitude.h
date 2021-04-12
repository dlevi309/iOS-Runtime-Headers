/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CLPQuaternion *)quaternion;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setQuaternion:(CLPQuaternion *)arg1 ;
-(BOOL)hasQuaternion;
-(void)setMagneticAccuracy:(float)arg1 ;
-(void)setHasMagneticAccuracy:(BOOL)arg1 ;
-(BOOL)hasMagneticAccuracy;
-(int)magneticCalibration;
-(void)setMagneticCalibration:(int)arg1 ;
-(void)setHasMagneticCalibration:(BOOL)arg1 ;
-(BOOL)hasMagneticCalibration;
-(id)magneticCalibrationAsString:(int)arg1 ;
-(int)StringAsMagneticCalibration:(id)arg1 ;
-(float)magneticAccuracy;
@end

