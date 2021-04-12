/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKVoiceControllerDelegate <NSObject>
@required
-(void)voiceControllerDidDetectStartpoint:(id)arg1;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
-(void)voiceControllerDidStartRecording:(id)arg1;
-(void)voiceControllerDidFinishRecording:(id)arg1 successfully:(BOOL)arg2;
-(void)voiceController:(id)arg1 didUpdateAveragePower:(float)arg2;

@end

