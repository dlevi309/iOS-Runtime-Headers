/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@protocol AVAudioRecorderDelegate <NSObject>
@optional
-(void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)audioRecorderEndInterruption:(id)arg1;
-(void)audioRecorderEndInterruption:(id)arg1 withOptions:(unsigned long long)arg2;
-(void)audioRecorderEndInterruption:(id)arg1 withFlags:(unsigned long long)arg2;
-(void)audioRecorderBeginInterruption:(id)arg1;
-(void)audioRecorderDidFinishRecording:(id)arg1 successfully:(BOOL)arg2;

@end

