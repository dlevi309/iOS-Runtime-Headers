/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)clear;
-(BOOL)isMoving;
-(BOOL)didStopMoving;
-(void)updateWithFrame:(id)arg1 ;
-(BOOL)didStartMoving;
-(1)calcAverageVelocity;
-(void)setIsMoving:(BOOL)arg1 ;
@end

