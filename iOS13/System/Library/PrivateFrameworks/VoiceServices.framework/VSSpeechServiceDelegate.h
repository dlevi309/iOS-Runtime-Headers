/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@protocol VSSpeechServiceDelegate <NSObject>
@required
-(oneway void)speechRequestDidStart;
-(oneway void)speechRequestDidPause;
-(oneway void)speechRequestDidContinue;
-(oneway void)speechRequestMark:(long long)arg1 didStartForRange:(NSRange)arg2;
-(oneway void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3;
-(oneway void)speechRequestSuccessWithInstrumentMetrics:(id)arg1;
-(oneway void)speechRequestDidReceiveTimingInfo:(id)arg1;
-(oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2;
-(oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3;
-(oneway void)presynthesizedAudioRequestDidStart;
-(oneway void)presynthesizedAudioRequestDidStopAtEnd:(BOOL)arg1 error:(id)arg2;
-(oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)arg1 error:(id)arg2;

@end

