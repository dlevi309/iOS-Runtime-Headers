/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIAccelerometerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class CMMotionManager;

@interface UIAccelerometer : NSObject {

	double _updateInterval;
	id<UIAccelerometerDelegate> _delegate;
	struct {
		unsigned delegateDidAccelerate : 1;
		unsigned reserved : 31;
	}  _accelerometerFlags;
	CMMotionManager* _motionManager;

}

@property (assign,nonatomic) double updateInterval;                                    //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic,__weak) id<UIAccelerometerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedAccelerometer;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(id)init;
-(id<UIAccelerometerDelegate>)delegate;
-(void)_willResume:(id)arg1 ;
-(void)_didSuspend:(id)arg1 ;
-(id)_motionManager;
-(void)_stopAccelerometer;
-(void)_startAccelerometerIfNecessary;
-(void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4 ;
-(void)setDelegate:(id<UIAccelerometerDelegate>)arg1 ;
-(void)dealloc;
@end

