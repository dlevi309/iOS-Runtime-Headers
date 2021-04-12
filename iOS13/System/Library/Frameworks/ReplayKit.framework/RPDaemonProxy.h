/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/RPDaemonProtocol.h>
#import <libobjc.A.dylib/RPClientProtocol.h>

@class NSURL, NSXPCConnection, NSString;

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPDaemonProtocol, RPClientProtocol> {

	NSURL* _broadcastURL;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSURL * broadcastURL;                      //@synthesize broadcastURL=_broadcastURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemonProxy;
-(id)init;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(oneway void)pauseRecording;
-(oneway void)setMicrophoneEnabled:(BOOL)arg1 ;
-(oneway void)stopRecordingWithHandler:(/*^block*/id)arg1 ;
-(oneway void)synchronousIsBroadcastingWithPreferredExtension:(id)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)setHasUserConsentForCamera:(BOOL)arg1 ;
-(oneway void)setHasUserConsentForMicrophone:(BOOL)arg1 ;
-(void)setBroadcastURL:(NSURL *)arg1 ;
-(oneway void)reportCameraUsage:(long long)arg1 ;
-(oneway void)startRecordingWindowLayerContextIDs:(id)arg1 windowSize:(CGSize)arg2 microphoneEnabled:(BOOL)arg3 cameraEnabled:(BOOL)arg4 broadcast:(BOOL)arg5 systemRecording:(BOOL)arg6 captureEnabled:(BOOL)arg7 listenerEndpoint:(id)arg8 withHandler:(/*^block*/id)arg9 ;
-(oneway void)saveVideoToCameraRoll:(id)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)stopRecordingWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(/*^block*/id)arg3 ;
-(oneway void)recordingTimerDidUpdate:(id)arg1 ;
-(oneway void)discardRecordingWithHandler:(/*^block*/id)arg1 ;
-(oneway void)resumeRecordingWithWindowLayerContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1 ;
-(oneway void)recordingLockInterrupted:(id)arg1 ;
-(oneway void)updateScreenRecordingStateWithCurrentState:(id)arg1 ;
-(oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2 ;
-(oneway void)recordingDidPause;
-(oneway void)recordingShouldResume;
-(oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2 ;
-(oneway void)captureHandlerWithAudioSample:(id)arg1 bufferType:(long long)arg2 ;
-(NSURL *)broadcastURL;
-(oneway void)updateBroadcastURL:(id)arg1 ;
-(oneway void)updateBroadcastServiceInfo:(id)arg1 ;
-(oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(/*^block*/id)arg5 ;
-(oneway void)getSystemBroadcastExtensionInfo:(/*^block*/id)arg1 ;
-(oneway void)macApplicationDidResignActive;
-(oneway void)macApplicationDidBecomeActiveWithContextID:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(oneway void)synchronousGetCurrentState:(/*^block*/id)arg1 ;
-(void)issueSandboxExtension;
@end

