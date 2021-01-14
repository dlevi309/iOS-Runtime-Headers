/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@protocol ARSensorDelegate <NSObject>
@optional
-(void)sensorDidStart:(id)arg1;
-(void)sensorDidPause:(id)arg1;
-(void)sensorDidRestart:(id)arg1;

@required
-(void)sensor:(id)arg1 didOutputSensorData:(id)arg2;
-(void)sensor:(id)arg1 didFailWithError:(id)arg2;

@end

