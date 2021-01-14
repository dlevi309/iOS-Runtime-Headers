/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol AVAudioPlayerDelegate <NSObject>
@optional
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
-(void)audioPlayerBeginInterruption:(id)arg1;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)audioPlayerEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)audioPlayerEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
-(void)audioPlayerEndInterruption:(id)arg1;

@end

