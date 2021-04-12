/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol _GCMotionEvent <NSCopying,NSObject>
@property (readonly) BOOL hasGyro; 
@property (readonly) double gyroPitch; 
@property (readonly) double gyroYaw; 
@property (readonly) double gyroRoll; 
@property (readonly) BOOL hasAccelerometer; 
@property (readonly) double accelerometerX; 
@property (readonly) double accelerometerY; 
@property (readonly) double accelerometerZ; 
@property (readonly) BOOL hasAttitude; 
@property (readonly) double attitudeW; 
@property (readonly) double attitudeX; 
@property (readonly) double attitudeY; 
@property (readonly) double attitudeZ; 
@required
-(BOOL)hasGyro;
-(double)gyroYaw;
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

@end

