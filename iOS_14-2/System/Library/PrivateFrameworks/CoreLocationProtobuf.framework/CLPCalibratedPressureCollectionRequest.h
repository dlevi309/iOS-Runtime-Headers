/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPMotionActivity, CLPBaroCalibrationIndication;

@interface CLPCalibratedPressureCollectionRequest : PBRequest <NSCopying> {

	double _latitudeDeg;
	double _longitudeDeg;
	double _timeSinceLastSignificantLocationVisitExitS;
	double _timestampOfCalibrationS;
	CLPMotionActivity* _activity;
	float _altitudeHAEM;
	float _altitudeHAEUncM;
	float _calibratedPressurePa;
	float _calibratedPressureUncPa;
	CLPBaroCalibrationIndication* _calibration;
	float _devicePressurePa;
	float _devicePressureUncPa;
	float _horizontalUncM;
	float _referenceAltM;
	float _referenceAltUncM;
	int _reliability;
	float _speedMps;
	float _speedUncMps;
	SCD_Struct_CL4 _has;

}

@property (assign,nonatomic) BOOL hasDevicePressurePa; 
@property (assign,nonatomic) float devicePressurePa;                                          //@synthesize devicePressurePa=_devicePressurePa - In the implementation block
@property (assign,nonatomic) BOOL hasDevicePressureUncPa; 
@property (assign,nonatomic) float devicePressureUncPa;                                       //@synthesize devicePressureUncPa=_devicePressureUncPa - In the implementation block
@property (assign,nonatomic) BOOL hasCalibratedPressurePa; 
@property (assign,nonatomic) float calibratedPressurePa;                                      //@synthesize calibratedPressurePa=_calibratedPressurePa - In the implementation block
@property (assign,nonatomic) BOOL hasCalibratedPressureUncPa; 
@property (assign,nonatomic) float calibratedPressureUncPa;                                   //@synthesize calibratedPressureUncPa=_calibratedPressureUncPa - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampOfCalibrationS; 
@property (assign,nonatomic) double timestampOfCalibrationS;                                  //@synthesize timestampOfCalibrationS=_timestampOfCalibrationS - In the implementation block
@property (assign,nonatomic) BOOL hasLatitudeDeg; 
@property (assign,nonatomic) double latitudeDeg;                                              //@synthesize latitudeDeg=_latitudeDeg - In the implementation block
@property (assign,nonatomic) BOOL hasLongitudeDeg; 
@property (assign,nonatomic) double longitudeDeg;                                             //@synthesize longitudeDeg=_longitudeDeg - In the implementation block
@property (assign,nonatomic) BOOL hasHorizontalUncM; 
@property (assign,nonatomic) float horizontalUncM;                                            //@synthesize horizontalUncM=_horizontalUncM - In the implementation block
@property (assign,nonatomic) BOOL hasAltitudeHAEM; 
@property (assign,nonatomic) float altitudeHAEM;                                              //@synthesize altitudeHAEM=_altitudeHAEM - In the implementation block
@property (assign,nonatomic) BOOL hasAltitudeHAEUncM; 
@property (assign,nonatomic) float altitudeHAEUncM;                                           //@synthesize altitudeHAEUncM=_altitudeHAEUncM - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedMps; 
@property (assign,nonatomic) float speedMps;                                                  //@synthesize speedMps=_speedMps - In the implementation block
@property (assign,nonatomic) BOOL hasSpeedUncMps; 
@property (assign,nonatomic) float speedUncMps;                                               //@synthesize speedUncMps=_speedUncMps - In the implementation block
@property (assign,nonatomic) BOOL hasReferenceAltM; 
@property (assign,nonatomic) float referenceAltM;                                             //@synthesize referenceAltM=_referenceAltM - In the implementation block
@property (assign,nonatomic) BOOL hasReferenceAltUncM; 
@property (assign,nonatomic) float referenceAltUncM;                                          //@synthesize referenceAltUncM=_referenceAltUncM - In the implementation block
@property (assign,nonatomic) BOOL hasTimeSinceLastSignificantLocationVisitExitS; 
@property (assign,nonatomic) double timeSinceLastSignificantLocationVisitExitS;               //@synthesize timeSinceLastSignificantLocationVisitExitS=_timeSinceLastSignificantLocationVisitExitS - In the implementation block
@property (nonatomic,readonly) BOOL hasActivity; 
@property (nonatomic,retain) CLPMotionActivity * activity;                                    //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) BOOL hasReliability; 
@property (assign,nonatomic) int reliability;                                                 //@synthesize reliability=_reliability - In the implementation block
@property (nonatomic,readonly) BOOL hasCalibration; 
@property (nonatomic,retain) CLPBaroCalibrationIndication * calibration;                      //@synthesize calibration=_calibration - In the implementation block
-(id)dictionaryRepresentation;
-(CLPMotionActivity *)activity;
-(int)reliability;
-(void)mergeFrom:(id)arg1 ;
-(void)setActivity:(CLPMotionActivity *)arg1 ;
-(id)description;
-(BOOL)hasActivity;
-(void)setReliability:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCalibration:(CLPBaroCalibrationIndication *)arg1 ;
-(void)setDevicePressurePa:(float)arg1 ;
-(void)setHasDevicePressurePa:(BOOL)arg1 ;
-(BOOL)hasDevicePressurePa;
-(void)setDevicePressureUncPa:(float)arg1 ;
-(void)setHasDevicePressureUncPa:(BOOL)arg1 ;
-(BOOL)hasDevicePressureUncPa;
-(void)setCalibratedPressurePa:(float)arg1 ;
-(void)setHasCalibratedPressurePa:(BOOL)arg1 ;
-(BOOL)hasCalibratedPressurePa;
-(void)setCalibratedPressureUncPa:(float)arg1 ;
-(void)setHasCalibratedPressureUncPa:(BOOL)arg1 ;
-(BOOL)hasCalibratedPressureUncPa;
-(void)setTimestampOfCalibrationS:(double)arg1 ;
-(void)setHasTimestampOfCalibrationS:(BOOL)arg1 ;
-(BOOL)hasTimestampOfCalibrationS;
-(void)setLatitudeDeg:(double)arg1 ;
-(void)setHasLatitudeDeg:(BOOL)arg1 ;
-(BOOL)hasLatitudeDeg;
-(void)setLongitudeDeg:(double)arg1 ;
-(void)setHasLongitudeDeg:(BOOL)arg1 ;
-(BOOL)hasLongitudeDeg;
-(void)setHorizontalUncM:(float)arg1 ;
-(void)setHasHorizontalUncM:(BOOL)arg1 ;
-(BOOL)hasHorizontalUncM;
-(void)setAltitudeHAEM:(float)arg1 ;
-(void)setHasAltitudeHAEM:(BOOL)arg1 ;
-(BOOL)hasAltitudeHAEM;
-(void)setAltitudeHAEUncM:(float)arg1 ;
-(void)setHasAltitudeHAEUncM:(BOOL)arg1 ;
-(BOOL)hasAltitudeHAEUncM;
-(void)setSpeedMps:(float)arg1 ;
-(void)setHasSpeedMps:(BOOL)arg1 ;
-(BOOL)hasSpeedMps;
-(void)setSpeedUncMps:(float)arg1 ;
-(void)setHasSpeedUncMps:(BOOL)arg1 ;
-(BOOL)hasSpeedUncMps;
-(void)setReferenceAltM:(float)arg1 ;
-(void)setHasReferenceAltM:(BOOL)arg1 ;
-(BOOL)hasReferenceAltM;
-(void)setReferenceAltUncM:(float)arg1 ;
-(void)setHasReferenceAltUncM:(BOOL)arg1 ;
-(BOOL)hasReferenceAltUncM;
-(void)setTimeSinceLastSignificantLocationVisitExitS:(double)arg1 ;
-(void)setHasTimeSinceLastSignificantLocationVisitExitS:(BOOL)arg1 ;
-(BOOL)hasTimeSinceLastSignificantLocationVisitExitS;
-(void)setHasReliability:(BOOL)arg1 ;
-(BOOL)hasReliability;
-(id)reliabilityAsString:(int)arg1 ;
-(int)StringAsReliability:(id)arg1 ;
-(BOOL)hasCalibration;
-(float)devicePressurePa;
-(float)devicePressureUncPa;
-(float)calibratedPressurePa;
-(float)calibratedPressureUncPa;
-(double)timestampOfCalibrationS;
-(double)latitudeDeg;
-(double)longitudeDeg;
-(float)horizontalUncM;
-(float)altitudeHAEM;
-(float)altitudeHAEUncM;
-(float)speedMps;
-(float)speedUncMps;
-(float)referenceAltM;
-(float)referenceAltUncM;
-(double)timeSinceLastSignificantLocationVisitExitS;
-(CLPBaroCalibrationIndication *)calibration;
@end

