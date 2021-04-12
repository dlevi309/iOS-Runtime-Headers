/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/


@protocol AFSpeechServiceDelegate <NSObject>
@required
-(oneway void)speechServiceDidRecognizeTokens:(id)arg1;
-(oneway void)speechServiceDidProcessAudioDuration:(double)arg1;
-(oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1;
-(oneway void)speechServiceDidRecognizePackage:(id)arg1;
-(oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2;

@end

