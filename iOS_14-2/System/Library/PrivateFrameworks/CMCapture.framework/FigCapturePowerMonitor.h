/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject;

@interface FigCapturePowerMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _registrationToken;
	/*^block*/id _torchHandler;
	OpaqueFigSimpleMutexRef _maxTorchLevelLock;
	float _maxTorchLevel;

}

@property (readonly) float maxTorchLevel; 
+(void)initialize;
-(id)init;
-(void)setPowerHandler:(/*^block*/id)arg1 ;
-(float)maxTorchLevel;
-(void)_powerNotification:(unsigned)arg1 ;
-(void)dealloc;
@end

