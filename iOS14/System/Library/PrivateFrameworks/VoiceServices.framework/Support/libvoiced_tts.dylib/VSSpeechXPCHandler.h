/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/VSSpeechXPCServiceProtocol.h>
#import <libobjc.A.dylib/VSSpeechServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSString, NSObject, AFAudioPowerUpdater;

@interface VSSpeechXPCHandler : NSObject <VSSpeechXPCServiceProtocol, VSSpeechServiceDelegate> {

	NSXPCConnection* _connection;
	NSString* _connectionIdentifier;
	NSObject*<OS_dispatch_queue> _audioPowerUpdateQueue;
	AFAudioPowerUpdater* _audioPowerUpdater;

}

@property (nonatomic,retain) NSString * connectionIdentifier;                                 //@synthesize connectionIdentifier=_connectionIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> audioPowerUpdateQueue;              //@synthesize audioPowerUpdateQueue=_audioPowerUpdateQueue - In the implementation block
@property (nonatomic,retain) AFAudioPowerUpdater * audioPowerUpdater;                         //@synthesize audioPowerUpdater=_audioPowerUpdater - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)killDaemon;
-(id)_delegate;
-(oneway void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3 ;
-(void)setConnectionIdentifier:(NSString *)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2 ;
-(oneway void)updateWithConnectionIdentifier:(id)arg1 ;
-(oneway void)endAudioPowerUpdate;
-(oneway void)getSpeechIsActiveReply:(/*^block*/id)arg1 ;
-(oneway void)pauseSpeechRequestAtMark:(long long)arg1 ;
-(oneway void)continueSpeechRequest;
-(oneway void)getVoiceNamesForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)arg1 error:(id)arg2 ;
-(oneway void)beginAudioPowerUpdateWithReply:(/*^block*/id)arg1 ;
-(oneway void)speechRequestDidStart;
-(oneway void)getAutoDownloadedVoiceAssetsWithClientID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)getTTSServerVoicesWithFilter:(id)arg1 reply:(/*^block*/id)arg2 ;
-(AFAudioPowerUpdater *)audioPowerUpdater;
-(oneway void)speechRequestDidPause;
-(oneway void)triggerCellularDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2 ;
-(BOOL)isSpeaking;
-(oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(NSString *)connectionIdentifier;
-(oneway void)estimateDurationWithRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(/*^block*/id)arg5 ;
-(void)setAudioPowerUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(oneway void)startSynthesisRequest:(id)arg1 ;
-(oneway void)forwardStreamObject:(id)arg1 ;
-(oneway void)getLogToFile:(/*^block*/id)arg1 ;
-(oneway void)getLocalVoiceResourcesReply:(/*^block*/id)arg1 ;
-(oneway void)cleanUnusedAssets:(/*^block*/id)arg1 ;
-(oneway void)startSpeechRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)getFootprintsForVoiceName:(id)arg1 languageCode:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)performLanguageFallBackIfNeededWithRequest:(id)arg1 ;
-(oneway void)prewarmIfNeededWithRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)getVoiceResourceForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)cachePresynthesizedAudioRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)audioPowerUpdateQueue;
-(oneway void)getSpeechIsActiveForConnectionReply:(/*^block*/id)arg1 ;
-(oneway void)speechRequestMark:(long long)arg1 didStartForRange:(NSRange)arg2 ;
-(oneway void)invokeDaemon:(/*^block*/id)arg1 ;
-(oneway void)queryPhaticCapabilityWithRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(oneway void)cancelDownloads:(/*^block*/id)arg1 ;
-(oneway void)setLogToFile:(BOOL)arg1 ;
-(oneway void)stopPresynthesizedAudioRequest;
-(oneway void)presynthesizedAudioRequestDidStart;
-(oneway void)speechRequestDidReceiveTimingInfo:(id)arg1 ;
-(oneway void)speechRequestSuccessWithInstrumentMetrics:(id)arg1 ;
-(oneway void)startPresynthesizedAudioRequest:(id)arg1 ;
-(oneway void)stopSpeechRequestAtMark:(long long)arg1 ;
-(void)preprocessRequestBeforeSynthesis:(id)arg1 ;
-(oneway void)presynthesizedAudioRequestDidStopAtEnd:(BOOL)arg1 error:(id)arg2 ;
-(oneway void)speechRequestDidContinue;
-(void)setAudioPowerUpdater:(AFAudioPowerUpdater *)arg1 ;
-(void)dealloc;
-(oneway void)setAutoDownloadedVoiceAssets:(id)arg1 withClientID:(id)arg2 ;
-(oneway void)getLocalVoicesForLanguage:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

