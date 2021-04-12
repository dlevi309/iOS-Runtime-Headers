/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCoreRoutineTrafficConditions : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _precisionRecall;
	int _trafficDensity;
	BOOL _predictedLocationOfInterest;
	BOOL _vehicleConnected;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVehicleConnected; 
@property (assign,nonatomic) BOOL vehicleConnected;                            //@synthesize vehicleConnected=_vehicleConnected - In the implementation block
@property (assign,nonatomic) BOOL hasPredictedLocationOfInterest; 
@property (assign,nonatomic) BOOL predictedLocationOfInterest;                 //@synthesize predictedLocationOfInterest=_predictedLocationOfInterest - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficDensity; 
@property (assign,nonatomic) int trafficDensity;                               //@synthesize trafficDensity=_trafficDensity - In the implementation block
@property (assign,nonatomic) BOOL hasPrecisionRecall; 
@property (assign,nonatomic) int precisionRecall;                              //@synthesize precisionRecall=_precisionRecall - In the implementation block
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
-(void)setPrecisionRecall:(int)arg1 ;
-(void)setHasPrecisionRecall:(BOOL)arg1 ;
-(BOOL)hasPrecisionRecall;
-(int)precisionRecall;
-(void)setVehicleConnected:(BOOL)arg1 ;
-(void)setHasVehicleConnected:(BOOL)arg1 ;
-(BOOL)hasVehicleConnected;
-(void)setPredictedLocationOfInterest:(BOOL)arg1 ;
-(void)setHasPredictedLocationOfInterest:(BOOL)arg1 ;
-(BOOL)hasPredictedLocationOfInterest;
-(int)trafficDensity;
-(void)setTrafficDensity:(int)arg1 ;
-(void)setHasTrafficDensity:(BOOL)arg1 ;
-(BOOL)hasTrafficDensity;
-(id)trafficDensityAsString:(int)arg1 ;
-(int)StringAsTrafficDensity:(id)arg1 ;
-(id)precisionRecallAsString:(int)arg1 ;
-(int)StringAsPrecisionRecall:(id)arg1 ;
-(BOOL)vehicleConnected;
-(BOOL)predictedLocationOfInterest;
@end

