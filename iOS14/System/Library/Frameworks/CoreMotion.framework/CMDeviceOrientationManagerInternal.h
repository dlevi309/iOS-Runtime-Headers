/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_semaphore;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue, NSObject;

@interface CMDeviceOrientationManagerInternal : NSObject {

	os_unfair_lock_s fSampleLock;
	Dispatcher* fDeviceOrientationDispatcher;
	/*^block*/id fDeviceOrientationHandler;
	NSOperationQueue* fDeviceOrientationQueue;
	NSObject*<OS_dispatch_semaphore> fDeviceOrientationSemaphore;
	BOOL fDidSignalSemaphore;
	int fOrientationCallbackMode;
	BOOL fEnableOrientationNotification;
	Sample fLatestDeviceOrientationSample;
	Sample fLastSignificantOrientationSample;

}
-(id)init;
-(void)dealloc;
@end

