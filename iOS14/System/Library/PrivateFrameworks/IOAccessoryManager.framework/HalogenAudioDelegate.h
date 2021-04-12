/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
*/


@protocol HalogenAudioDelegate <NSObject>
@required
-(int)recordCallBackFunc:(unsigned*)arg1 AudioTimeStamp:(const AudioTimeStamp*)arg2 busNum:(unsigned)arg3 numFrames:(unsigned)arg4 AudioBufferList:(AudioBufferList*)arg5;
-(int)playbackCallBackFunc:(unsigned*)arg1 AudioTimeStamp:(const AudioTimeStamp*)arg2 busNum:(unsigned)arg3 numFrames:(unsigned)arg4 AudioBufferList:(AudioBufferList*)arg5;

@end

