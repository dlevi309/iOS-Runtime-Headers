/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/


@protocol VSSpeechServiceDelegate <NSObject>
@required
-(oneway void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3;
-(oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2;
-(oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)arg1 error:(id)arg2;
-(oneway void)speechRequestDidStart;
-(oneway void)speechRequestDidPause;
-(oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3;
-(oneway void)speechRequestMark:(long long)arg1 didStartForRange:(NSRange)arg2;
-(oneway void)presynthesizedAudioRequestDidStart;
-(oneway void)speechRequestDidReceiveTimingInfo:(id)arg1;
-(oneway void)speechRequestSuccessWithInstrumentMetrics:(id)arg1;
-(oneway void)presynthesizedAudioRequestDidStopAtEnd:(BOOL)arg1 error:(id)arg2;
-(oneway void)speechRequestDidContinue;

@end

