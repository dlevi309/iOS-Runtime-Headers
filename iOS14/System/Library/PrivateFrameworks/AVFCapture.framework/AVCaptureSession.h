/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureSessionInternal, NSString, NSArray;

@interface AVCaptureSession : NSObject {

	AVCaptureSessionInternal* _internal;

}

@property (nonatomic,copy) NSString * sessionPreset; 
@property (nonatomic,readonly) NSArray * inputs; 
@property (nonatomic,readonly) NSArray * outputs; 
@property (nonatomic,readonly) NSArray * connections; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isInterrupted,nonatomic,readonly) BOOL interrupted; 
@property (assign,nonatomic) BOOL usesApplicationAudioSession; 
@property (assign,nonatomic) BOOL automaticallyConfiguresApplicationAudioSession; 
@property (assign,nonatomic) BOOL automaticallyConfiguresCaptureDeviceForWideColor; 
@property (nonatomic,readonly) OpaqueCMClockRef masterClock; 
+(void)initialize;
+(BOOL)_isConfiguringProperty:(id)arg1 forDevice:(id)arg2 ;
+(BOOL)automaticallyNotifiesObserversOfMasterClock;
+(id)allSessionPresets;
+(id)dotString;
+(void)_startConfiguringProperty:(id)arg1 forDevice:(id)arg2 ;
+(BOOL)automaticallyNotifiesObserversOfRunning;
+(void)_finishConfiguringProperty:(id)arg1 forDevice:(id)arg2 ;
-(OpaqueCMClockRef)masterClock;
-(BOOL)isInterrupted;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)notifiesOnMainThread;
-(BOOL)canAddOutput:(id)arg1 ;
-(void)_postRuntimeError:(id)arg1 ;
-(BOOL)_canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_addConnection:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)handleVideoInputDevice:(id)arg1 activeFormatChanged:(id)arg2 ;
-(BOOL)usesApplicationAudioSession;
-(void)setUsesApplicationAudioSession:(BOOL)arg1 ;
-(void)_setRunning:(BOOL)arg1 ;
-(BOOL)canSetSessionPreset:(id)arg1 ;
-(BOOL)_canAddInput:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_canAddOutput:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)isOverCost:(id*)arg1 ;
-(id)init;
-(NSArray *)connections;
-(void)_removeConnection:(id)arg1 ;
-(BOOL)automaticallyConfiguresApplicationAudioSession;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)removeConnection:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)startRunning;
-(void)_handleServerConnectionDiedNotification;
-(void)commitConfiguration;
-(void)removeInput:(id)arg1 ;
-(void)_removeVideoPreviewLayer:(id)arg1 ;
-(BOOL)_addVideoPreviewLayer:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_removeInput:(id)arg1 ;
-(BOOL)_addVideoPreviewLayerWithNoConnection:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)automaticallyConfiguresCaptureDeviceForWideColor;
-(id)_stopError;
-(int)_createFigCaptureSession;
-(void)_beginConfiguration;
-(void)_makeConfigurationLive:(id)arg1 ;
-(void)_teardownFigCaptureSession;
-(id)sessionVideoCaptureDevices;
-(void)_commitConfiguration;
-(void)addOutput:(id)arg1 ;
-(BOOL)_buildAndRunGraph;
-(void)_determineMasterClock;
-(void)_setMasterClock:(OpaqueCMClockRef)arg1 ;
-(BOOL)_addInputWithNoConnections:(id)arg1 exceptionReason:(id*)arg2 ;
-(id)_connectionsForNewInputPort:(id)arg1 ;
-(void)_removeConnectionsForInputPort:(id)arg1 ;
-(BOOL)_addOutputWithNoConnections:(id)arg1 exceptionReason:(id*)arg2 ;
-(id)_connectionsForNewOutput:(id)arg1 ;
-(BOOL)canAddConnection:(id)arg1 ;
-(BOOL)_canAddVideoPreviewLayer:(id)arg1 failureReason:(id*)arg2 ;
-(void)_removeAllPreviewLayers;
-(id)_connectionsForNewVideoPreviewLayer:(id)arg1 ;
-(BOOL)_stopFigCaptureSession;
-(BOOL)videoHDREnabledForDevice:(id)arg1 format:(id)arg2 sessionPreset:(id)arg3 ;
-(void)informSessionMembersOfChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)_rebuildGraph;
-(void)handleVideoInputDevice:(id)arg1 activeDepthDataFormatChanged:(id)arg2 ;
-(BOOL)_shouldAutomaticallyAddConnection:(id)arg1 ;
-(void)_updateDeviceActiveFormatsAndActiveConnections;
-(void)_updateDepthDataDeliveryEnabledForAllConnectedSourceDevices;
-(BOOL)_startFigCaptureSession;
-(void)removeOutput:(id)arg1 ;
-(void)_updateCameraCalibrationDataDeliveryEnabledForAllConnectedSourceDevices;
-(id)_figCaptureSessionConfiguration;
-(void)_stopAndTearDownGraph;
-(void)_notifySessionStopped;
-(id)_outputWithClass:(Class)arg1 forSourceDevice:(id)arg2 ;
-(void)_updateDepthDataDeliveryEnabledForSourceDevice:(id)arg1 ;
-(void)_setInterrupted:(BOOL)arg1 withReason:(int)arg2 ;
-(void)_notifySessionStarted;
-(void)_notifyMediaServicesError;
-(void)_reconnectAfterServerConnectionDied;
-(id)description;
-(void)_handleDidStartRunningNotificationWithPayload:(id)arg1 ;
-(void)_handleDidStopRunningNotificationWithPayload:(id)arg1 ;
-(void)_handleConfigurationCommittedNotificationWithPayload:(id)arg1 ;
-(void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(id)arg1 ;
-(void)_updateCameraCalibrationDataDeliveryEnabledForSourceDevice:(id)arg1 ;
-(void)addInputWithNoConnections:(id)arg1 ;
-(void)addOutputWithNoConnections:(id)arg1 ;
-(void)cancelForegroundAutoResumeAfterDate:(id)arg1 ;
-(void)setAutomaticallyConfiguresApplicationAudioSession:(BOOL)arg1 ;
-(void)setAutomaticallyConfiguresCaptureDeviceForWideColor:(BOOL)arg1 ;
-(void)stopRunning;
-(void)addConnection:(id)arg1 ;
-(BOOL)canAddInput:(id)arg1 ;
-(NSString *)sessionPreset;
-(void)addInput:(id)arg1 ;
-(BOOL)isRunning;
-(NSArray *)inputs;
-(NSArray *)outputs;
-(void)beginConfiguration;
-(void)setSessionPreset:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isBeingConfigured;
@end

