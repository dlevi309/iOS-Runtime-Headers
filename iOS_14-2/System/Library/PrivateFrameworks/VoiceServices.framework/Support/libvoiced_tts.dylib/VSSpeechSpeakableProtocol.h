/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@protocol VSSpeechSpeakableProtocol <VSSpeechTaskProtocol>
@optional
-(id)request;
-(id)voiceKey;
-(id)instrumentMetrics;
-(void)reportTimingInfo;
-(void)reportInstrumentMetrics;
-(void)reportSpeechStart;
-(id)audioPowerProvider;

@required
-(BOOL)isSpeaking;

@end

