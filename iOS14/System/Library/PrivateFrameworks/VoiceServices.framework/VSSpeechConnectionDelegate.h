/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@protocol VSSpeechConnectionDelegate
@required
-(void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 error:(id)arg4;
-(void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
-(void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
-(void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
-(void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(NSRange)arg4;
-(void)connection:(id)arg1 speechRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3;
-(void)connection:(id)arg1 speechRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
-(void)connection:(id)arg1 synthesisRequest:(id)arg2 didFinishWithInstrumentMetrics:(id)arg3 error:(id)arg4;
-(void)connection:(id)arg1 presynthesizedAudioRequestDidStart:(id)arg2;
-(void)connection:(id)arg1 invalidatedWithError:(id)arg2;
-(void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3 error:(id)arg4;

@end

