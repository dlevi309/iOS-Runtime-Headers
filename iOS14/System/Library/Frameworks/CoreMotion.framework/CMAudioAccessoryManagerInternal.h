/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue;

@interface CMAudioAccessoryManagerInternal : NSObject {

	os_unfair_lock_s fSampleLock;
	Dispatcher* fAudioAccessoryAccelerometerDispatcher;
	double fAudioAccessoryAccelerometerUpdateInterval;
	/*^block*/id fAudioAccessoryAccelerometerHandler;
	NSOperationQueue* fAudioAccessoryAccelerometerQueue;
	Sample fLatestAudioAccessoryAccelerometerSample;
	Dispatcher* fAudioAccessoryGyroDispatcher;
	double fAudioAccessoryGyroUpdateInterval;
	/*^block*/id fAudioAccessoryGyroHandler;
	NSOperationQueue* fAudioAccessoryGyroQueue;
	Sample fLatestAudioAccessoryGyroSample;
	Dispatcher* fAudioAccessoryDeviceMotionDispatcher;
	Dispatcher* fAudioAccessoryDeviceMotionConfigDispatcher;
	double fAudioAccessoryDeviceMotionUpdateInterval;
	/*^block*/id fAudioAccessoryDeviceMotionHandler;
	NSOperationQueue* fAudioAccessoryDeviceMotionQueue;
	CMOQuaternion fFrameRotation;
	Dispatcher* fAudioAccessoryDeviceMotionStatusDispatcher;
	/*^block*/id fAudioAccessoryDeviceMotionStatusHandler;
	NSOperationQueue* fAudioAccessoryDeviceMotionStatusQueue;
	BOOL fAudioAccessoryAccelerometerAvailable;
	BOOL fAudioAccessoryGyroAvailable;
	BOOL fAudioAccessoryDeviceMotionAvailable;

}
-(id)init;
@end

