/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol AVAudioRecorderDelegate <NSObject>
@optional
-(void)audioRecorderEndInterruption:(id)arg1;
-(void)audioRecorderEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)audioRecorderEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
-(void)audioRecorderBeginInterruption:(id)arg1;
-(void)audioRecorderDidFinishRecording:(id)arg1 successfully:(BOOL)arg2;
-(void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;

@end

