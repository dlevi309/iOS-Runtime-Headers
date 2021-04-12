/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSXPCConnectionDelegate.h>
#import <libobjc.A.dylib/CSAudioStreamProvidingDelegate.h>

@protocol CSAudioStreamProviding, CSTriggerInfoProviding;
@class CSXPCConnection, CSAudioStream, NSDictionary, CSAudioRecordContext, NSString;

@interface CSAudioStreamProvidingProxy : NSObject <CSXPCConnectionDelegate, CSAudioStreamProvidingDelegate> {

	id<CSAudioStreamProviding> _audioStreamProviding;
	id<CSTriggerInfoProviding> _triggerInfoProviding;
	CSXPCConnection* _xpcConnection;
	unsigned long long _streamClientType;
	CSAudioStream* _audioStream;
	NSDictionary* _lastVoiceTriggerInfo;
	NSDictionary* _lastRTSTriggerInfo;
	CSAudioRecordContext* _recordContext;
	NSString* _recordEventUUID;

}

@property (nonatomic,retain) CSAudioStream * audioStream;                                                                                 //@synthesize audioStream=_audioStream - In the implementation block
@property (copy) NSDictionary * lastVoiceTriggerInfo;                                                                                     //@synthesize lastVoiceTriggerInfo=_lastVoiceTriggerInfo - In the implementation block
@property (copy) NSDictionary * lastRTSTriggerInfo;                                                                                       //@synthesize lastRTSTriggerInfo=_lastRTSTriggerInfo - In the implementation block
@property (nonatomic,retain) CSAudioRecordContext * recordContext;                                                                        //@synthesize recordContext=_recordContext - In the implementation block
@property (nonatomic,retain) NSString * recordEventUUID;                                                                                  //@synthesize recordEventUUID=_recordEventUUID - In the implementation block
@property (assign,setter=setAudioStreamProvidingForProxy:,nonatomic,__weak) id<CSAudioStreamProviding> audioStreamProviding;              //@synthesize audioStreamProviding=_audioStreamProviding - In the implementation block
@property (assign,nonatomic,__weak) id<CSTriggerInfoProviding> triggerInfoProviding;                                                      //@synthesize triggerInfoProviding=_triggerInfoProviding - In the implementation block
@property (assign,nonatomic,__weak) CSXPCConnection * xpcConnection;                                                                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) unsigned long long streamClientType;                                                                         //@synthesize streamClientType=_streamClientType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CSXPCConnection *)xpcConnection;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)setXpcConnection:(CSXPCConnection *)arg1 ;
-(CSAudioStream *)audioStream;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2 ;
-(void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(void)CSXPCConnectionReceivedClientError:(id)arg1 clientError:(id)arg2 client:(id)arg3 ;
-(void)setRecordContext:(CSAudioRecordContext *)arg1 ;
-(CSAudioRecordContext *)recordContext;
-(void)_setAllowMixableAudioWhileRecording:(BOOL)arg1 ;
-(void)_handleSetCurrentConextMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(void)_handleAudioStreamRequestMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(void)_handleAudioStreamPrepareMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(void)_handleStartAudioStreamMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(void)_handleStopAudioStreamMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(void)_handleVoiceTriggerInfoMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(void)_handleIsRecordingMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(void)_handleRecordRouteMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(void)_handleRecordDeviceInfo:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(void)_handleRecordSettings:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(void)_handleIsNarrowband:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(void)_handlePlaybackRouteMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3 ;
-(id<CSAudioStreamProviding>)audioStreamProviding;
-(void)_sendReply:(id)arg1 client:(id)arg2 result:(BOOL)arg3 error:(id)arg4 ;
-(void)setLastVoiceTriggerInfo:(NSDictionary *)arg1 ;
-(void)setLastRTSTriggerInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)lastVoiceTriggerInfo;
-(NSDictionary *)lastRTSTriggerInfo;
-(void)_sendDelegateMessageToClient:(id)arg1 ;
-(void)setAudioStreamProvidingForProxy:(id)arg1 ;
-(void)setInitialContext:(id)arg1 ;
-(id<CSTriggerInfoProviding>)triggerInfoProviding;
-(void)setTriggerInfoProviding:(id<CSTriggerInfoProviding>)arg1 ;
-(unsigned long long)streamClientType;
-(void)setStreamClientType:(unsigned long long)arg1 ;
-(NSString *)recordEventUUID;
-(void)setRecordEventUUID:(NSString *)arg1 ;
@end

