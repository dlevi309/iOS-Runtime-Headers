/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <ReplayKit/RPBroadcastHandler.h>
#import <libobjc.A.dylib/RPExtensionContextDelegate.h>

@protocol RPBroadcastDaemonProtocol;
@class NSString;

@interface RPBroadcastSampleHandler : RPBroadcastHandler <RPExtensionContextDelegate> {

	id<RPBroadcastDaemonProtocol> _daemonProxy;

}

@property (nonatomic,retain) id<RPBroadcastDaemonProtocol> daemonProxy;              //@synthesize daemonProxy=_daemonProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)group;
-(id<RPBroadcastDaemonProtocol>)daemonProxy;
-(id)videoQueue;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(id)audioQueue;
-(void)updateServiceInfo:(id)arg1 ;
-(void)updateBroadcastURL:(id)arg1 ;
-(void)finishBroadcastWithError:(id)arg1 ;
-(void)_setupListenerWithEndpoint:(id)arg1 ;
-(void)_processPayloadWithVideoSample:(id)arg1 ;
-(void)_processPayloadWithAudioSample:(id)arg1 type:(long long)arg2 ;
-(void)broadcastAnnotatedWithApplicationInfo:(id)arg1 ;
-(void)broadcastStartedWithSetupInfo:(id)arg1 ;
-(void)broadcastPaused;
-(void)broadcastResumed;
-(void)broadcastFinished;
-(void)processSampleBuffer:(opaqueCMSampleBufferRef)arg1 withType:(long long)arg2 ;
-(void)_processPayload:(id)arg1 ;
-(void)processPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDaemonProxy:(id<RPBroadcastDaemonProtocol>)arg1 ;
-(void)extensionContext:(id)arg1 setEndpoint:(id)arg2 ;
@end

