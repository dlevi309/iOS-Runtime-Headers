/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCMotionEvent.h>

@class NSString;

@interface _GCMotionEventImpl : NSObject <_GCMotionEvent> {

	BOOL _hasGyro;
	BOOL _hasAccelerometer;
	BOOL _hasAttitude;
	double _gyroPitch;
	double _gyroYaw;
	double _gyroRoll;
	double _accelerometerX;
	double _accelerometerY;
	double _accelerometerZ;
	double _attitudeW;
	double _attitudeX;
	double _attitudeY;
	double _attitudeZ;

}

@property (assign,nonatomic) BOOL hasGyro;                          //@synthesize hasGyro=_hasGyro - In the implementation block
@property (assign,nonatomic) double gyroPitch;                      //@synthesize gyroPitch=_gyroPitch - In the implementation block
@property (assign,nonatomic) double gyroYaw;                        //@synthesize gyroYaw=_gyroYaw - In the implementation block
@property (assign,nonatomic) double gyroRoll;                       //@synthesize gyroRoll=_gyroRoll - In the implementation block
@property (assign,nonatomic) BOOL hasAccelerometer;                 //@synthesize hasAccelerometer=_hasAccelerometer - In the implementation block
@property (assign,nonatomic) double accelerometerX;                 //@synthesize accelerometerX=_accelerometerX - In the implementation block
@property (assign,nonatomic) double accelerometerY;                 //@synthesize accelerometerY=_accelerometerY - In the implementation block
@property (assign,nonatomic) double accelerometerZ;                 //@synthesize accelerometerZ=_accelerometerZ - In the implementation block
@property (assign,nonatomic) BOOL hasAttitude;                      //@synthesize hasAttitude=_hasAttitude - In the implementation block
@property (assign,nonatomic) double attitudeW;                      //@synthesize attitudeW=_attitudeW - In the implementation block
@property (assign,nonatomic) double attitudeX;                      //@synthesize attitudeX=_attitudeX - In the implementation block
@property (assign,nonatomic) double attitudeY;                      //@synthesize attitudeY=_attitudeY - In the implementation block
@property (assign,nonatomic) double attitudeZ;                      //@synthesize attitudeZ=_attitudeZ - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasGyro;
-(double)gyroYaw;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasGyro:(BOOL)arg1 ;
-(void)setGyroPitch:(double)arg1 ;
-(void)setGyroYaw:(double)arg1 ;
-(void)setGyroRoll:(double)arg1 ;
-(void)setHasAccelerometer:(BOOL)arg1 ;
-(void)setAccelerometerX:(double)arg1 ;
-(void)setAccelerometerY:(double)arg1 ;
-(void)setAccelerometerZ:(double)arg1 ;
-(void)setHasAttitude:(BOOL)arg1 ;
-(void)setAttitudeX:(double)arg1 ;
-(void)setAttitudeY:(double)arg1 ;
-(void)setAttitudeZ:(double)arg1 ;
-(void)setAttitudeW:(double)arg1 ;
-(BOOL)hasAttitude;
-(double)gyroPitch;
-(double)gyroRoll;
-(BOOL)hasAccelerometer;
-(double)accelerometerX;
-(double)accelerometerY;
-(double)accelerometerZ;
-(double)attitudeW;
-(double)attitudeX;
-(double)attitudeY;
-(double)attitudeZ;
-(id)initWithMotionEvent:(id)arg1 ;
@end

