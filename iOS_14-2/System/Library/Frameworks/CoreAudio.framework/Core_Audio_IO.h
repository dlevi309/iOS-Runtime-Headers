/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
*/


@protocol Core_Audio_IO
@required
-(void)handle_io_message:(Device_Token)arg1 with:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stop_before_io_device_change:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)start_after_io_device_change:(unsigned)arg1 reply:(/*^block*/id)arg2;

@end

