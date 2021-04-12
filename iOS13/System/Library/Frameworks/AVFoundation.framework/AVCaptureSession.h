/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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
+(id)allSessionPresets;
+(BOOL)_isActiveColorSpaceBeingConfiguredForDevice:(id)arg1 ;
+(void)_beginConfiguringActiveColorSpaceForDevice:(id)arg1 ;
+(void)_finishConfiguringActiveColorSpaceForDevice:(id)arg1 ;
+(id)dotString;
+(BOOL)automaticallyNotifiesObserversOfMasterClock;
+(BOOL)automaticallyNotifiesObserversOfRunning;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isRunning;
-(NSArray *)inputs;
-(void)removeInput:(id)arg1 ;
-(NSArray *)outputs;
-(void)removeOutput:(id)arg1 ;
-(BOOL)isInterrupted;
-(void)_setRunning:(BOOL)arg1 ;
-(NSArray *)connections;
-(void)stopRunning;
-(void)startRunning;
-(void)addConnection:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(void)beginConfiguration;
-(void)commitConfiguration;
-(BOOL)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(BOOL)canAddOutput:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
-(void)setUsesApplicationAudioSession:(BOOL)arg1 ;
-(OpaqueCMClockRef)masterClock;
-(void)_handleNotification:(id)arg1 payload:(id)arg2 ;
-(BOOL)isBeingConfigured;
-(BOOL)notifiesOnMainThread;
-(NSString *)sessionPreset;
-(BOOL)usesApplicationAudioSession;
-(BOOL)automaticallyConfiguresApplicationAudioSession;
-(BOOL)automaticallyConfiguresCaptureDeviceForWideColor;
-(void)_handleServerConnectionDiedNotification;
-(int)_createFigCaptureSession;
-(void)_beginConfiguration;
-(void)_makeConfigurationLive:(id)arg1 ;
-(void)_teardownFigCaptureSession;
-(BOOL)canSetSessionPreset:(id)arg1 ;
-(id)sessionVideoCaptureDevices;
-(void)_commitConfiguration;
-(BOOL)_buildAndRunGraph;
-(void)_determineMasterClock;
-(void)_setMasterClock:(OpaqueCMClockRef)arg1 ;
-(BOOL)_canAddInput:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_addInputWithNoConnections:(id)arg1 exceptionReason:(id*)arg2 ;
-(id)_connectionsForNewInputPort:(id)arg1 ;
-(BOOL)_addConnection:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_removeInput:(id)arg1 ;
-(void)_removeConnectionsForInputPort:(id)arg1 ;
-(BOOL)_canAddOutput:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_addOutputWithNoConnections:(id)arg1 exceptionReason:(id*)arg2 ;
-(id)_connectionsForNewOutput:(id)arg1 ;
-(BOOL)canAddConnection:(id)arg1 ;
-(void)_removeConnection:(id)arg1 ;
-(BOOL)_canAddVideoPreviewLayer:(id)arg1 failureReason:(id*)arg2 ;
-(void)_removeAllPreviewLayers;
-(id)_connectionsForNewVideoPreviewLayer:(id)arg1 ;
-(BOOL)_canAddConnection:(id)arg1 failureReason:(id*)arg2 ;
-(id)_stopError;
-(void)_postRuntimeError:(id)arg1 ;
-(BOOL)_stopFigCaptureSession;
-(BOOL)videoHDREnabledForDevice:(id)arg1 format:(id)arg2 sessionPreset:(id)arg3 ;
-(void)setSessionPreset:(NSString *)arg1 ;
-(void)informSessionMembersOfChangedActiveFormat:(id)arg1 forDevice:(id)arg2 ;
-(void)_rebuildGraph;
-(void)handleVideoInputDevice:(id)arg1 activeFormatChanged:(id)arg2 ;
-(void)handleVideoInputDevice:(id)arg1 activeDepthDataFormatChanged:(id)arg2 ;
-(void)_updateDeviceActiveFormatsAndActiveConnections;
-(void)_updateDepthDataDeliveryEnabledForAllConnectedSourceDevices;
-(void)_updateCameraCalibrationDataDeliveryEnabledForAllConnectedSourceDevices;
-(BOOL)isOverCost:(id*)arg1 ;
-(id)_figCaptureSessionConfiguration;
-(BOOL)_startFigCaptureSession;
-(void)_stopAndTearDownGraph;
-(void)_notifySessionStopped;
-(id)_outputWithClass:(Class)arg1 forSourceDevice:(id)arg2 ;
-(void)_updateDepthDataDeliveryEnabledForSourceDevice:(id)arg1 ;
-(void)_setInterrupted:(BOOL)arg1 withReason:(int)arg2 ;
-(void)_notifySessionStarted;
-(void)_notifyMediaServerdDied;
-(void)_reconnectAfterServerConnectionDied;
-(void)_handleDidStartRunningNotificationWithPayload:(id)arg1 ;
-(void)_handleDidStopRunningNotificationWithPayload:(id)arg1 ;
-(void)_handleConfigurationCommittedNotificationWithPayload:(id)arg1 ;
-(void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(id)arg1 ;
-(void)_updateCameraCalibrationDataDeliveryEnabledForSourceDevice:(id)arg1 ;
-(void)addInputWithNoConnections:(id)arg1 ;
-(void)addOutputWithNoConnections:(id)arg1 ;
-(BOOL)_addVideoPreviewLayer:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)_addVideoPreviewLayerWithNoConnection:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)_removeVideoPreviewLayer:(id)arg1 ;
-(void)setAutomaticallyConfiguresApplicationAudioSession:(BOOL)arg1 ;
-(void)setAutomaticallyConfiguresCaptureDeviceForWideColor:(BOOL)arg1 ;
-(void)cancelForegroundAutoResumeAfterDate:(id)arg1 ;
@end

