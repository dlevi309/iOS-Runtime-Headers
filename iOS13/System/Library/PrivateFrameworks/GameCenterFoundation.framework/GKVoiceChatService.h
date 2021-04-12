/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@interface GKVoiceChatService : NSObject {

	id _voiceChatService;

}

@property (assign) id<GKVoiceChatClient> client; 
@property (assign,getter=isMicrophoneMuted,nonatomic) BOOL microphoneMuted; 
@property (assign,nonatomic) float remoteParticipantVolume; 
@property (assign,getter=isOutputMeteringEnabled,nonatomic) BOOL outputMeteringEnabled; 
@property (assign,getter=isInputMeteringEnabled,nonatomic) BOOL inputMeteringEnabled; 
@property (readonly) float outputMeterLevel; 
@property (readonly) float inputMeterLevel; 
+(void)initialize;
+(id)defaultVoiceChatService;
+(BOOL)isVoIPAllowed;
-(void)dealloc;
-(id<GKVoiceChatClient>)client;
-(void)setClient:(id<GKVoiceChatClient>)arg1 ;
-(BOOL)isInputMeteringEnabled;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
-(BOOL)isMicrophoneMuted;
-(BOOL)isOutputMeteringEnabled;
-(void)setOutputMeteringEnabled:(BOOL)arg1 ;
-(void)setInputMeteringEnabled:(BOOL)arg1 ;
-(float)outputMeterLevel;
-(float)inputMeterLevel;
-(void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2 ;
-(BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2 ;
-(void)stopVoiceChatWithParticipantID:(id)arg1 ;
-(BOOL)acceptCallID:(long long)arg1 error:(id*)arg2 ;
-(void)denyCallID:(long long)arg1 ;
-(void)receivedData:(id)arg1 fromParticipantID:(id)arg2 ;
-(float)remoteParticipantVolume;
-(void)setRemoteParticipantVolume:(float)arg1 ;
@end

