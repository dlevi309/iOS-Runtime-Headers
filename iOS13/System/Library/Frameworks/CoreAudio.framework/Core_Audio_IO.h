/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
*/


@protocol Core_Audio_IO
@required
-(void)handle_io_message:(unsigned)arg1 with:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stop_before_io_device_change:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)start_after_io_device_change:(unsigned)arg1;

@end

