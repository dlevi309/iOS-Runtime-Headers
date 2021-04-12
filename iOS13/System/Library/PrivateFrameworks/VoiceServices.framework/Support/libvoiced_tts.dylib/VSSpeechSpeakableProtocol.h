/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

