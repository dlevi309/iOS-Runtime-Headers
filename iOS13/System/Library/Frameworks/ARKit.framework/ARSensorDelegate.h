/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
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

