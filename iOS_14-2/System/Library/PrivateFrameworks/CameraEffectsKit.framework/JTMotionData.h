/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class CMMotionManager, NSOperationQueue, CMAttitude;

@interface JTMotionData : NSObject {

	BOOL _started;
	CMMotionManager* _motionManager;
	NSOperationQueue* _motionQueue;
	CMAttitude* _refAttitude;
	double _yawRadians;
	double _rollRadians;
	double _pitchRadians;
	SCD_Struct_JT25 _currentAttitude;

}

@property (nonatomic,retain) CMMotionManager * motionManager;              //@synthesize motionManager=_motionManager - In the implementation block
@property (nonatomic,retain) NSOperationQueue * motionQueue;               //@synthesize motionQueue=_motionQueue - In the implementation block
@property (nonatomic,retain) CMAttitude * refAttitude;                     //@synthesize refAttitude=_refAttitude - In the implementation block
@property (assign,nonatomic) SCD_Struct_JT25 currentAttitude;              //@synthesize currentAttitude=_currentAttitude - In the implementation block
@property (assign,nonatomic) double yawRadians;                            //@synthesize yawRadians=_yawRadians - In the implementation block
@property (assign,nonatomic) double rollRadians;                           //@synthesize rollRadians=_rollRadians - In the implementation block
@property (assign,nonatomic) double pitchRadians;                          //@synthesize pitchRadians=_pitchRadians - In the implementation block
@property (assign) BOOL started;                                           //@synthesize started=_started - In the implementation block
+(id)sharedInstance;
-(SCD_Struct_JT25)currentOrientation;
-(id)init;
-(double)yawRadians;
-(BOOL)started;
-(double)pitchRadians;
-(double)rollRadians;
-(void)setYawRadians:(double)arg1 ;
-(void)setPitchRadians:(double)arg1 ;
-(void)setRollRadians:(double)arg1 ;
-(CMMotionManager *)motionManager;
-(void)setStarted:(BOOL)arg1 ;
-(void)setMotionManager:(CMMotionManager *)arg1 ;
-(void)setMotionQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)motionQueue;
-(SCD_Struct_JT25)getOrientation:(SCD_Struct_JT25)arg1 ;
-(void)setCurrentAttitude:(SCD_Struct_JT25)arg1 ;
-(SCD_Struct_JT25)syntheticOrientation;
-(void)startMotion;
-(void)stopMotion;
-(CMAttitude *)refAttitude;
-(void)setRefAttitude:(CMAttitude *)arg1 ;
-(SCD_Struct_JT25)currentAttitude;
@end

