/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol _GCDeviceMotionComponent <_GCDeviceComponent>
@property (nonatomic,copy) id deviceMotionServiceConnectedHandler; 
@property (nonatomic,readonly) id<_GCMotionEventSourceDescription> motionEventSource; 
@property (assign,nonatomic) BOOL sensorsActive; 
@required
-(void)setSensorsActive:(BOOL)arg1;
-(BOOL)sensorsActive;
-(id)deviceMotionServiceConnectedHandler;
-(void)setDeviceMotionServiceConnectedHandler:(/*^block*/id)arg1;
-(id<_GCMotionEventSourceDescription>)motionEventSource;

@end

