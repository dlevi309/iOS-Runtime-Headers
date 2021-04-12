/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, BWFigCaptureDeviceClient, NSObject, NSDictionary;

@interface BWFigCaptureDeviceVendor : NSObject {

	/*function pointer*/void* _deviceCreateFunction;
	OpaqueFigCaptureDeviceRef _device;
	NSMutableArray* _controlledStreams;
	NSMutableArray* _streamsControlledByOtherClients;
	NSMutableArray* _registeredDeviceClients;
	BWFigCaptureDeviceClient* _deviceClient;
	NSMutableArray* _victimizedDeviceClients;
	NSObject*<OS_dispatch_queue> _deviceQueue;
	NSObject*<OS_dispatch_source> _deviceCloseTimer;
	int _deviceUsageCount;
	double _deviceCloseTimeoutSeconds;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_os_transaction> _activeForClientAssertion;
	NSDictionary* _cameraPoseMatricesByPortType;

}
+(void)initialize;
+(id)sharedCaptureDeviceVendor;
+(BOOL)videoCaptureDeviceFirmwareIsLoaded;
-(void)dealloc;
-(float)structuredLightProjectorStandbyTemperatureWithError:(int*)arg1 ;
-(id)initWithDeviceCreateFunction:(/*function pointer*/void*)arg1 ;
-(void)invalidateVideoDevice:(OpaqueFigCaptureDeviceRef)arg1 forPID:(int)arg2 ;
-(void)_createDevice:(const char*)arg1 clientPID:(int)arg2 ;
-(void)_setupDeviceCloseTimer;
-(void)_resetDeviceCloseTimer;
-(void)_performBlockOnDeviceQueue:(/*^block*/id)arg1 ;
-(void)_performBlockOnDeviceQueueSynchronously:(/*^block*/id)arg1 ;
-(id)_registeredDeviceClientWithID:(int)arg1 ;
-(void)_relinquishControlOfStreams;
-(void)_releaseDevice;
-(id)_moveDeviceClientToVictimizedList;
-(void)_dumpInventory;
-(void)_deviceAvailabilityChangedForClient:(id)arg1 available:(BOOL)arg2 postNotification:(BOOL)arg3 reason:(int)arg4 ;
-(OpaqueFigCaptureStreamRef)_copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(OpaqueFigCaptureDeviceRef)arg3 requestControl:(BOOL)arg4 error:(int*)arg5 ;
-(id)_copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(OpaqueFigCaptureDeviceRef)arg3 requestControl:(BOOL)arg4 error:(int*)arg5 ;
-(int)_requestControlOfStreams:(id)arg1 device:(OpaqueFigCaptureDeviceRef)arg2 ;
-(id)_popLatestVictimizedDeviceClient;
-(void)_removeDeviceClient;
-(void)_removeVictimizedDeviceClientWithClientID:(int)arg1 ;
-(void)_unregisterFromStreamNotifications:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)_handleErrorForGlobalDevice;
-(void)_registerForStreamNotifications:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)_registerForDeviceNotifications:(OpaqueFigCaptureDeviceRef)arg1 ;
-(void)_unregisterForDeviceNotifications:(OpaqueFigCaptureDeviceRef)arg1 ;
-(void)prewarmDefaultVideoDeviceForPID:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)registerClientWithPID:(int)arg1 stealingBehavior:(int)arg2 deviceSharingWithOtherClientsAllowed:(BOOL)arg3 deviceAvailabilityChangedHandler:(/*^block*/id)arg4 ;
-(OpaqueFigCaptureDeviceRef)copyDeviceForClient:(int)arg1 ;
-(OpaqueFigCaptureStreamRef)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(OpaqueFigCaptureDeviceRef)arg3 error:(int*)arg4 ;
-(OpaqueFigCaptureStreamRef)copyStreamForFlashlightWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(OpaqueFigCaptureDeviceRef)arg3 ;
-(id)copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(OpaqueFigCaptureDeviceRef)arg3 error:(int*)arg4 ;
-(void)setDeviceReleaseBehavior:(int)arg1 forClient:(int)arg2 ;
-(void)takeBackDevice:(OpaqueFigCaptureDeviceRef)arg1 forClient:(int)arg2 ;
-(void)shutDownSystemPressuredDevice:(OpaqueFigCaptureDeviceRef)arg1 ;
-(void)resumeSystemPressuredDevice;
-(BOOL)activeDeviceEquals:(OpaqueFigCaptureDeviceRef)arg1 ;
-(void)unregisterCallbacksForClient:(int)arg1 ;
-(id)cameraPoseMatrixForStreamWithPosition:(int)arg1 deviceType:(int)arg2 ;
-(void)_handleStreamControlTakenByAnotherClientNotification:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)_handleStreamRelinquishedByAnotherClientNotification:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)_handleStreamFrameReceiveTimeoutNotification:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)_handleDeviceUnrecoverableError:(int)arg1 fromDevice:(OpaqueFigCaptureDeviceRef)arg2 ;
@end

