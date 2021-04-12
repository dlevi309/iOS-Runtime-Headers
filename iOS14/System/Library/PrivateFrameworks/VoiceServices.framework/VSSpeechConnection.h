/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)killDaemon;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(BOOL)queryPhaticCapabilityWithRequest:(id)arg1 ;
-(VSPresynthesizedAudioRequest *)presynthesizedAudioRequest;
-(void)stopCurrentSpeechRequestAtMark:(long long)arg1 ;
-(void)pauseCurrentSpeechRequestAtMark:(long long)arg1 ;
-(void)startSpeechRequest:(id)arg1 ;
-(BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
-(BOOL)isSystemSpeaking;
-(void)continueCurrentSpeechRequest;
-(void)updateWithConnectionIdentifier:(id)arg1 ;
-(id)init;
-(void)endAudioPowerUpdate;
-(void)getLocalVoiceResources:(/*^block*/id)arg1 ;
-(id)availableVoicesForLanguageCode:(id)arg1 ;
-(id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2 ;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(id<VSSpeechConnectionDelegate>)delegate;
-(void)beginAudioPowerUpdateWithReply:(/*^block*/id)arg1 ;
-(void)getAutoDownloadedVoiceAssetsWithClientID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(VSSpeechRequest *)request;
-(VSSpeechConnectionDelegateWrapper *)delegateWrapper;
-(id)concurrentSynthesisRequests;
-(void)setPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg1 ;
-(id)_remoteObjectSync;
-(void)setDelegateWrapper:(VSSpeechConnectionDelegateWrapper *)arg1 ;
-(NSObject*<OS_dispatch_queue>)threadSafeQueue;
-(void)getTTSServerVoicesWithFilter:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setThreadSafeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)triggerCellularDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2 ;
-(void)setDelegate:(id<VSSpeechConnectionDelegate>)arg1 ;
-(void)estimateDurationWithRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)startSynthesisRequest:(id)arg1 ;
-(void)forwardStreamObject:(id)arg1 ;
-(void)getLogToFile:(/*^block*/id)arg1 ;
-(oneway void)cleanUnusedAssets:(/*^block*/id)arg1 ;
-(id)_remoteObject;
-(void)_connectionInvalidated;
-(void)prewarmIfNeededWithRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_remoteObjectWithErrorHandler:(/*^block*/id)arg1 ;
-(void)getVoiceResourceForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cachePresynthesizedAudioRequest:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)invokeDaemon:(/*^block*/id)arg1 ;
-(void)getLocalVoiceAssetsForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)cancelDownloads:(/*^block*/id)arg1 ;
-(void)setLogToFile:(BOOL)arg1 ;
-(void)stopPresynthesizedAudioRequest;
-(void)startPresynthesizedAudioRequest:(id)arg1 ;
-(void)dealloc;
-(void)setAutoDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2 ;
@end

