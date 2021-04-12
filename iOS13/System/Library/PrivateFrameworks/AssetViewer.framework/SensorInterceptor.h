/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
*/

#import <libobjc.A.dylib/ARSensorDelegate.h>

@protocol ARSensorDelegate, ARSensor;
@class NSString;

@interface SensorInterceptor : NSObject <ARSensorDelegate> {

	id<ARSensorDelegate> _originalDelegate;
	id<ARSensor> _targetSensor;
	 _acceleration;

}

@property (assign,nonatomic,__weak) id<ARSensorDelegate> originalDelegate;              //@synthesize originalDelegate=_originalDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<ARSensor> targetSensor;                          //@synthesize targetSensor=_targetSensor - In the implementation block
@property (assign,nonatomic)  acceleration;                                             //@synthesize acceleration=_acceleration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-()acceleration;
-(void)setAcceleration:;
-(void)sensor:(id)arg1 didOutputSensorData:(id)arg2 ;
-(void)sensor:(id)arg1 didFailWithError:(id)arg2 ;
-(void)sensorDidStart:(id)arg1 ;
-(void)sensorDidPause:(id)arg1 ;
-(void)sensorDidRestart:(id)arg1 ;
-(id<ARSensorDelegate>)originalDelegate;
-(void)setOriginalDelegate:(id<ARSensorDelegate>)arg1 ;
-(id<ARSensor>)targetSensor;
-(void)setTargetSensor:(id<ARSensor>)arg1 ;
@end

