/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARSensor.h>

@protocol OS_dispatch_queue, ARSensorDelegate;
@class NSObject, ARGyroscopeData, ARAccelerometerData, NSString;

@interface ARIOMotionSensor : NSObject <ARSensor> {

	IOHIDEventSystemClientRef _accelerometerSystemClient;
	IOHIDServiceClientRef _accelerometerService;
	IOHIDEventSystemClientRef _gyroSystemClient;
	IOHIDServiceClientRef _gyroService;
	NSObject*<OS_dispatch_queue> _imuDataQueue;
	ARGyroscopeData* _currentGyroData;
	ARAccelerometerData* _currentAccelerometerData;
	id<ARSensorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ARSensorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long powerUsage; 
-(id)init;
-(void)dealloc;
-(id<ARSensorDelegate>)delegate;
-(void)setDelegate:(id<ARSensorDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(long long)preferredSampleRate;
-(unsigned long long)providedDataTypes;
-(void)accelerometerDidOutputEvent:(IOHIDEventRef)arg1 timestamp:(double)arg2 ;
-(void)gyroscopeDidOutputEvent:(IOHIDEventRef)arg1 timestamp:(double)arg2 ;
@end

