/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/CAMStillImageCaptureRequestDelegate.h>
#import <libobjc.A.dylib/CAMNebulaDaemonTimelapseClientProtocol.h>

@protocol CAMTimelapseControllerDelegate, OS_dispatch_source;
@class CAMCaptureGraphConfiguration, CAMFocusResult, CAMTimelapseState, NSObject, NSCountedSet, NSMutableSet, CUCaptureController, CAMLocationController, CAMMotionController, CAMPersistenceController, CAMStorageController, CAMNebulaDaemonProxyManager, NSDate, NSString;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, CAMNebulaDaemonTimelapseClientProtocol> {

	BOOL __ignoringTimerCallbacksForTearDown;
	BOOL __ignoringTimerCallbacksWaitingForCaptureResponse;
	BOOL __shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
	BOOL __backendRecoveryNeeded;
	BOOL __previewStarted;
	BOOL __focusAndExposureAdjusted;
	CAMCaptureGraphConfiguration* __graphConfigurationForCurrentState;
	id<CAMTimelapseControllerDelegate> _delegate;
	CAMFocusResult* _lastFocusResult;
	CAMTimelapseState* __state;
	NSObject*<OS_dispatch_source> __captureTimer;
	NSCountedSet* __inFlightTimelapseUUIDs;
	NSMutableSet* __pendingCompletedStates;
	CUCaptureController* __captureController;
	CAMLocationController* __locationController;
	CAMMotionController* __motionController;
	CAMPersistenceController* __persistenceController;
	CAMStorageController* __storageController;
	CAMNebulaDaemonProxyManager* __nebulaDaemonProxyManager;

}

@property (nonatomic,readonly) CAMTimelapseState * _state;                                                                                                                         //@synthesize _state=__state - In the implementation block
@property (getter=_graphConfigurationForCurrentState,nonatomic,readonly) CAMCaptureGraphConfiguration * _graphConfigurationForCurrentState;                                        //@synthesize _graphConfigurationForCurrentState=__graphConfigurationForCurrentState - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> _captureTimer;                                                                                                        //@synthesize _captureTimer=__captureTimer - In the implementation block
@property (nonatomic,readonly) BOOL _ignoringTimerCallbacksForTearDown;                                                                                                            //@synthesize _ignoringTimerCallbacksForTearDown=__ignoringTimerCallbacksForTearDown - In the implementation block
@property (nonatomic,readonly) BOOL _ignoringTimerCallbacksWaitingForCaptureResponse;                                                                                              //@synthesize _ignoringTimerCallbacksWaitingForCaptureResponse=__ignoringTimerCallbacksWaitingForCaptureResponse - In the implementation block
@property (nonatomic,readonly) NSCountedSet * _inFlightTimelapseUUIDs;                                                                                                             //@synthesize _inFlightTimelapseUUIDs=__inFlightTimelapseUUIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * _pendingCompletedStates;                                                                                                             //@synthesize _pendingCompletedStates=__pendingCompletedStates - In the implementation block
@property (assign,setter=_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:,nonatomic) BOOL _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;              //@synthesize _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes=__shouldUpdateFocusAndExposureWhenContrastDetectionCompletes - In the implementation block
@property (assign,setter=_setBackendRecoveryNeeded:,nonatomic) BOOL _backendRecoveryNeeded;                                                                                        //@synthesize _backendRecoveryNeeded=__backendRecoveryNeeded - In the implementation block
@property (assign,setter=_setPreviewStarted:,nonatomic) BOOL _previewStarted;                                                                                                      //@synthesize _previewStarted=__previewStarted - In the implementation block
@property (assign,setter=_setFocusAndExposureAdjusted:,getter=_isFocusAndExposureAdjusted,nonatomic) BOOL _focusAndExposureAdjusted;                                               //@synthesize _focusAndExposureAdjusted=__focusAndExposureAdjusted - In the implementation block
@property (nonatomic,readonly) CUCaptureController * _captureController;                                                                                                           //@synthesize _captureController=__captureController - In the implementation block
@property (nonatomic,readonly) CAMLocationController * _locationController;                                                                                                        //@synthesize _locationController=__locationController - In the implementation block
@property (nonatomic,readonly) CAMMotionController * _motionController;                                                                                                            //@synthesize _motionController=__motionController - In the implementation block
@property (nonatomic,readonly) CAMPersistenceController * _persistenceController;                                                                                                  //@synthesize _persistenceController=__persistenceController - In the implementation block
@property (nonatomic,readonly) CAMStorageController * _storageController;                                                                                                          //@synthesize _storageController=__storageController - In the implementation block
@property (nonatomic,readonly) CAMNebulaDaemonProxyManager * _nebulaDaemonProxyManager;                                                                                            //@synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager - In the implementation block
@property (assign,nonatomic,__weak) id<CAMTimelapseControllerDelegate> delegate;                                                                                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCapturing,nonatomic,readonly) BOOL capturing; 
@property (nonatomic,readonly) NSDate * captureStartTime; 
@property (assign,nonatomic) CAMFocusResult * lastFocusResult;                                                                                                                     //@synthesize lastFocusResult=_lastFocusResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createPlaceholderResultForTimelapseState:(id)arg1 ;
+(IOSurfaceRef)_newVideoPreviewSurfaceForTimelapseState:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<CAMTimelapseControllerDelegate>)delegate;
-(void)setDelegate:(id<CAMTimelapseControllerDelegate>)arg1 ;
-(CAMTimelapseState *)_state;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)isCapturing;
-(CAMStorageController *)_storageController;
-(CUCaptureController *)_captureController;
-(CAMPersistenceController *)_persistenceController;
-(void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(CAMMotionController *)_motionController;
-(CAMLocationController *)_locationController;
-(BOOL)startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(BOOL)stopCapturingWithReasons:(long long)arg1 ;
-(void)forceStopTimelapseCaptureWithReasons:(long long)arg1 ;
-(CAMNebulaDaemonProxyManager *)_nebulaDaemonProxyManager;
-(void)_deviceStarted:(id)arg1 ;
-(void)_sessionStarted:(id)arg1 ;
-(void)_sessionRuntimeErrored:(id)arg1 ;
-(void)_previewStarted:(id)arg1 ;
-(id)initWithCaptureController:(id)arg1 locationController:(id)arg2 motionController:(id)arg3 persistenceController:(id)arg4 storageController:(id)arg5 nebulaDaemonProxyManager:(id)arg6 ;
-(void)_teardownCaptureTimer;
-(void)_restoreCaptureStateFromDisk;
-(void)_prepareForTimelapseCaptureSetModeAndDevice:(BOOL)arg1 ;
-(void)_setBackendRecoveryNeeded:(BOOL)arg1 ;
-(void)_triggerBackendCrashRecoveryIfNeeded;
-(void)_setFocusAndExposureAdjusted:(BOOL)arg1 ;
-(BOOL)_backendRecoveryNeeded;
-(BOOL)_previewStarted;
-(CAMCaptureGraphConfiguration *)_graphConfigurationForCurrentState;
-(void)_updateFocusAndExposureForStartCapturing;
-(void)_startCaptureTimer;
-(void)_startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(void)_stopCapturingWithReasons:(long long)arg1 ;
-(void)_setNewCaptureStateForCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2 ;
-(void)_invalidateCachedGraphConfiguration;
-(void)_reserveDiskSpaceForTimelapseUUID:(id)arg1 preferHEVC:(BOOL)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_saveStateToDisk:(id)arg1 ;
-(void)_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:(BOOL)arg1 ;
-(id)_createThumbnailImageFromPlaceholderResult:(id)arg1 ;
-(void)_notifyAGGDForDidStopCapturingWithState:(id)arg1 ;
-(void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2 ;
-(void)_captureTimerFired;
-(void)_updateLocationIfNecessary;
-(BOOL)_canCapturePhoto;
-(BOOL)_enqueueCaptureRequest;
-(void)_notifyInsufficientDiskSpaceForContinuingCapture;
-(BOOL)_isFocusAndExposureAdjusted;
-(id)_stillImageCaptureRequestWithCurrentSettings;
-(BOOL)_shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
-(CAMFocusResult *)lastFocusResult;
-(void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(BOOL)arg3 ;
-(void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
-(void)_setPreviewStarted:(BOOL)arg1 ;
-(void)restoreConfiguration;
-(NSDate *)captureStartTime;
-(void)setLastFocusResult:(CAMFocusResult *)arg1 ;
-(NSObject*<OS_dispatch_source>)_captureTimer;
-(BOOL)_ignoringTimerCallbacksForTearDown;
-(BOOL)_ignoringTimerCallbacksWaitingForCaptureResponse;
-(NSCountedSet *)_inFlightTimelapseUUIDs;
-(NSMutableSet *)_pendingCompletedStates;
@end

