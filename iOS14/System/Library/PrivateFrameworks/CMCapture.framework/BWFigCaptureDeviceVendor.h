/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
#import <CMCapture/CMCapture-Structs.h>
@class BWFigCaptureDevice, NSMutableArray, BWFigCaptureDeviceClient, NSObject, NSDictionary, NSMutableSet, NSMutableDictionary;

@interface BWFigCaptureDeviceVendor : NSObject {

	/*function pointer*/void* _deviceCreateFunction;
	BWFigCaptureDevice* _device;
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
	NSMutableSet* _portTypesToCheckForToFAFEstimator;
	NSMutableDictionary* _tofAFEstimatorResultsByPortType;
	NSMutableSet* _portTypesToCheckForAFDriverShortStatistics;
	NSMutableDictionary* _afDriverShortStatisticsByPortType;

}
+(void)initialize;
+(id)sharedCaptureDeviceVendor;
+(BOOL)videoCaptureDeviceFirmwareIsLoaded;
-(void)_registerForDeviceNotifications:(id)arg1 ;
-(void)_setupDeviceCloseTimer;
-(void)_handleStreamRelinquishedByAnotherClientNotification:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)_relinquishControlOfStreams;
-(void)_deviceAvailabilityChangedForClient:(id)arg1 available:(BOOL)arg2 postNotification:(BOOL)arg3 reason:(int)arg4 ;
-(void)_handleDeviceNoLongerAvailable:(OpaqueFigCaptureDeviceRef)arg1 ;
-(void)_logAFDriverShortStatisticsToCoreAnalytics;
-(void)_handleStreamControlTakenByAnotherClientNotification:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)prewarmDefaultVideoDeviceForPID:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleErrorForGlobalDevice;
-(void)_performBlockOnDeviceQueue:(/*^block*/id)arg1 ;
-(BOOL)activeDeviceEquals:(id)arg1 ;
-(id)copyStreamsWithUniqueIDs:(id)arg1 forDevice:(id)arg2 error:(int*)arg3 ;
-(int)_requestControlOfStreams:(id)arg1 device:(id)arg2 ;
-(id)copyStreamForFlashlightWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(id)arg3 ;
-(float)structuredLightProjectorStandbyTemperatureWithError:(int*)arg1 ;
-(void)_registerForStreamNotifications:(id)arg1 ;
-(void)_invalidateAndReleaseDevice;
-(id)_moveDeviceClientToVictimizedList;
-(void)_performBlockOnDeviceQueueSynchronously:(/*^block*/id)arg1 ;
-(id)_popLatestVictimizedDeviceClient;
-(id)_registeredDeviceClientWithID:(int)arg1 ;
-(id)copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(id)arg3 error:(int*)arg4 ;
-(void)takeBackDevice:(id)arg1 forClient:(int)arg2 informClientWhenDeviceAvailableAgain:(BOOL)arg3 ;
-(void)_updateAFDriverShortStatisticsForStream:(id)arg1 ;
-(void)takeBackStreams:(id)arg1 device:(id)arg2 ;
-(id)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(id)arg3 error:(int*)arg4 ;
-(void)_updateTofAFEstimatorResultsForStream:(id)arg1 ;
-(id)_copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(id)arg3 requestControl:(BOOL)arg4 error:(int*)arg5 ;
-(void)_dumpInventory;
-(void)unregisterCallbacksForClient:(int)arg1 ;
-(int)_createDevice:(const char*)arg1 clientPID:(int)arg2 ;
-(void)_removeVictimizedDeviceClientWithClientID:(int)arg1 ;
-(BOOL)streamsInUseForDevice:(id)arg1 ;
-(void)resumeSystemPressuredDevice;
-(void)_unregisterForDeviceNotifications:(id)arg1 ;
-(void)invalidateVideoDevice:(id)arg1 forPID:(int)arg2 ;
-(id)initWithDeviceCreateFunction:(/*function pointer*/void*)arg1 ;
-(void)shutDownSystemPressuredDevice:(id)arg1 ;
-(void)_logToFAFEstimatorResultsToCoreAnalytics;
-(int)registerClientWithPID:(int)arg1 clientDescription:(id)arg2 stealingBehavior:(int)arg3 deviceSharingWithOtherClientsAllowed:(BOOL)arg4 deviceAvailabilityChangedHandler:(/*^block*/id)arg5 ;
-(void)_resetDeviceCloseTimer;
-(void)_unregisterFromStreamNotifications:(id)arg1 ;
-(void)_removeDeviceClient;
-(id)_copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(id)arg3 requestControl:(BOOL)arg4 error:(int*)arg5 ;
-(void)_handleDeviceUnrecoverableError:(int)arg1 fromDevice:(OpaqueFigCaptureDeviceRef)arg2 ;
-(void)_handleStreamFrameReceiveTimeoutNotification:(OpaqueFigCaptureStreamRef)arg1 ;
-(void)dealloc;
-(id)cameraPoseMatrixForStreamWithPosition:(int)arg1 deviceType:(int)arg2 ;
-(id)copyDeviceForClient:(int)arg1 error:(int*)arg2 ;
@end

