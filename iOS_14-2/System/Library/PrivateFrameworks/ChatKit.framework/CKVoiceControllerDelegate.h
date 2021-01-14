/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKVoiceControllerDelegate <NSObject>
@required
-(void)voiceControllerDidDetectStartpoint:(id)arg1;
-(void)voiceControllerDidStartRecording:(id)arg1;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
-(void)voiceControllerDidFinishRecording:(id)arg1 successfully:(BOOL)arg2;
-(void)voiceController:(id)arg1 didUpdateAveragePower:(float)arg2;

@end

