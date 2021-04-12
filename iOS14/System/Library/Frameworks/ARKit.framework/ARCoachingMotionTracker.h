/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@interface ARCoachingMotionTracker : NSObject {

	[5 _velocities];
	 _lastPosition;
	double _lastTime;
	int _velocityIndex;
	double _lastThresholdBreakTime;
	int _thresholdBreakCount;
	BOOL _wasMoving;
	BOOL _isMoving;

}

@property (assign,nonatomic) BOOL isMoving;                      //@synthesize isMoving=_isMoving - In the implementation block
@property (nonatomic,readonly) BOOL didStartMoving; 
@property (nonatomic,readonly) BOOL didStopMoving; 
-(void)clear;
-(id)init;
-(void)updateWithFrame:(id)arg1 ;
-(BOOL)didStopMoving;
-(void)setIsMoving:(BOOL)arg1 ;
-(BOOL)isMoving;
-(BOOL)didStartMoving;
-(1)calcAverageVelocity;
@end

