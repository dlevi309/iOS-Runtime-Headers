/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@protocol AVAudioPlayerDelegate <NSObject>
@optional
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)audioPlayerBeginInterruption:(id)arg1;
-(void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)audioPlayerEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
-(void)audioPlayerEndInterruption:(id)arg1;

@end

