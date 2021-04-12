/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@protocol VSSpeechConnectionDelegate, OS_dispatch_queue;
@class NSXPCConnection, NSString, VSSpeechConnectionDelegateWrapper, NSObject, VSSpeechRequest, VSPresynthesizedAudioRequest;

@interface VSSpeechConnection : NSObject {

	NSXPCConnection* _xpcConnection;
	NSString* _identifier;
	id<VSSpeechConnectionDelegate> _delegate;
	VSSpeechConnectionDelegateWrapper* _delegateWrapper;
	NSObject*<OS_dispatch_queue> _threadSafeQueue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                          //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) VSSpeechConnectionDelegateWrapper * delegateWrapper;                      //@synthesize delegateWrapper=_delegateWrapper - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> threadSafeQueue;                             //@synthesize threadSafeQueue=_threadSafeQueue - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<VSSpeechConnectionDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) VSSpeechRequest * request; 
@property (nonatomic,readonly) VSPresynthesizedAudioRequest * presynthesizedAudioRequest; 
-(id)init;
-(void)dealloc;
-(id<VSSpeechConnectionDelegate>)delegate;
-(void)setDelegate:(id<VSSpeechConnectionDelegate>)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(VSSpeechRequest *)request;
-(void)_connectionInvalidated;
-(id)_remoteObject;
-(void)killDaemon;
-(void)getVoiceResourceForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)prewarmIfNeededWithRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)queryPhaticCapabilityWithRequest:(id)arg1 ;
-(VSPresynthesizedAudioRequest *)presynthesizedAudioRequest;
-(BOOL)isSystemSpeaking;
-(void)stopPresynthesizedAudioRequest;
-(void)stopCurrentSpeechRequestAtMark:(long long)arg1 ;
-(void)pauseCurrentSpeechRequestAtMark:(long long)arg1 ;
-(void)startSynthesisRequest:(id)arg1 ;
-(void)startSpeechRequest:(id)arg1 ;
-(void)startPresynthesizedAudioRequest:(id)arg1 ;
-(void)cachePresynthesizedAudioRequest:(id)arg1 ;
-(BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
-(void)continueCurrentSpeechRequest;
-(void)estimateDurationWithRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setLogToFile:(BOOL)arg1 ;
-(void)getLogToFile:(/*^block*/id)arg1 ;
-(id)availableVoicesForLanguageCode:(id)arg1 ;
-(id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2 ;
-(void)getTTSServerVoicesWithFilter:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)forwardStreamObject:(id)arg1 ;
-(void)beginAudioPowerUpdateWithReply:(/*^block*/id)arg1 ;
-(void)endAudioPowerUpdate;
-(oneway void)cleanUnusedAssets:(/*^block*/id)arg1 ;
-(void)getLocalVoiceAssets:(/*^block*/id)arg1 ;
-(void)getLocalVoiceResources:(/*^block*/id)arg1 ;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2 ;
-(void)getAutoDownloadedVoiceAssetsWithClientID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)updateWithConnectionIdentifier:(id)arg1 ;
-(VSSpeechConnectionDelegateWrapper *)delegateWrapper;
-(id)concurrentSynthesisRequests;
-(void)setPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg1 ;
-(id)_remoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectSync;
-(void)setDelegateWrapper:(VSSpeechConnectionDelegateWrapper *)arg1 ;
-(NSObject*<OS_dispatch_queue>)threadSafeQueue;
-(void)setThreadSafeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

