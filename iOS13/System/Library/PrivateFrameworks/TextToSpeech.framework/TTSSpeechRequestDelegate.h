/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
*/


@protocol TTSSpeechRequestDelegate <NSObject>
@required
-(oneway void)speechRequestDidStart:(id)arg1 forService:(id)arg2;
-(oneway void)speechRequestDidPause:(id)arg1 forService:(id)arg2;
-(oneway void)speechRequestDidContinue:(id)arg1 forService:(id)arg2;
-(oneway void)speechRequest:(id)arg1 withMark:(long long)arg2 didStartForRange:(NSRange)arg3 forService:(id)arg4;
-(oneway void)speechRequest:(id)arg1 didStopWithSuccess:(BOOL)arg2 phonemesSpoken:(id)arg3 forService:(id)arg4 error:(id)arg5;
-(oneway void)speechRequest:(id)arg1 didSynthesizeSilentlyToURL:(id)arg2;

@end

