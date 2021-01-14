/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface FigCaptureThermalMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _registrationToken;
	/*^block*/id _thermalHandler;
	OpaqueFigSimpleMutexRef _thermalNotificationLock;
	float _maxTorchLevel;
	int _thermalLevel;

}

@property (readonly) float maxTorchLevel; 
@property (readonly) int thermalLevel; 
+(void)initialize;
-(id)init;
-(void)setThermalHandler:(/*^block*/id)arg1 ;
-(void)_thermalNotification:(int)arg1 ;
-(int)thermalLevel;
-(float)maxTorchLevel;
-(void)dealloc;
@end

