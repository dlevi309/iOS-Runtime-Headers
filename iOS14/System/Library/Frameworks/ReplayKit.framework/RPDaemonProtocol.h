/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/


@protocol RPDaemonProtocol <NSObject>
@optional
-(oneway void)stopInAppRecordingWithUrl:(id)arg1 extensionToken:(id)arg2 handler:(/*^block*/id)arg3;
-(oneway void)saveVideo:(id)arg1 extensionToken:(id)arg2 handler:(/*^block*/id)arg3;

@required
-(oneway void)setMicrophoneEnabled:(BOOL)arg1;
-(oneway void)saveVideo:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)setBroadcastPickerPreferredExt:(id)arg1 showsMicButton:(BOOL)arg2;
-(oneway void)openControlCenterSystemRecordingView;
-(oneway void)stopSystemRecordingWithURLHandler:(/*^block*/id)arg1;
-(oneway void)startInAppRecordingWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 withHandler:(/*^block*/id)arg5;
-(oneway void)stopInAppRecordingWithHandler:(/*^block*/id)arg1;
-(oneway void)stopInAppRecordingWithUrl:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)discardInAppRecordingWithHandler:(/*^block*/id)arg1;
-(oneway void)pauseInAppRecording;
-(oneway void)resumeInAppRecordingWithWindowLayerContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)startInAppCaptureWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 withHandler:(/*^block*/id)arg5;
-(oneway void)stopInAppCaptureWithHandler:(/*^block*/id)arg1;
-(oneway void)pauseInAppCapture;
-(oneway void)resumeInAppCaptureWithWindowLayerContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)startInAppBroadcastWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 listenerEndpoint:(id)arg5 withHandler:(/*^block*/id)arg6;
-(oneway void)stopInAppBroadcastWithHandler:(/*^block*/id)arg1;
-(oneway void)pauseInAppBroadcast;
-(oneway void)resumeInAppBroadcastWithWindowLayerContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)setBroadcastURL:(id)arg1;
-(oneway void)startSystemRecordingWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 withHandler:(/*^block*/id)arg5;
-(oneway void)stopSystemRecordingWithHandler:(/*^block*/id)arg1;
-(oneway void)resumeSystemRecordingWithCompletionHandler:(/*^block*/id)arg1;
-(oneway void)setupSystemBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(/*^block*/id)arg5;
-(oneway void)startSystemBroadcastWithContextID:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 listenerEndpoint:(id)arg5 withHandler:(/*^block*/id)arg6;
-(oneway void)stopSystemBroadcastWithHandler:(/*^block*/id)arg1;
-(oneway void)resumeSystemBroadcastWithCompletionHandler:(/*^block*/id)arg1;
-(oneway void)startClipBufferingWithMicrophoneEnabled:(BOOL)arg1 windowSize:(CGSize)arg2 withHandler:(/*^block*/id)arg3;
-(oneway void)stopClipBufferingWithHandler:(/*^block*/id)arg1;
-(oneway void)generateClipWithSeconds:(double)arg1 handler:(/*^block*/id)arg2;
-(oneway void)saveVideoToCameraRoll:(id)arg1 handler:(/*^block*/id)arg2;
-(oneway void)reportCameraUsage:(long long)arg1;
-(oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;
-(oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(/*^block*/id)arg5;
-(oneway void)getSystemBroadcastPickerInfo:(/*^block*/id)arg1;
-(oneway void)getSystemBroadcastExtensionInfo:(/*^block*/id)arg1;
-(oneway void)macApplicationDidResignActive;
-(oneway void)macApplicationDidBecomeActiveWithContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2;
-(oneway void)consumeSandboxExtension:(id)arg1 processNewConnection:(BOOL)arg2;
-(oneway void)stopCurrentActiveSessionWithHandler:(/*^block*/id)arg1;
-(oneway void)stopAllActiveClients;

@end

