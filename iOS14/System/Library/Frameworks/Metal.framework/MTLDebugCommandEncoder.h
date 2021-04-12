/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol MTLDebugCommandEncoder <MTLCommandEncoder>
@optional
-(void)startCaptureWithSettings:(const char*)arg1 from:(const char*)arg2;
-(void)startCaptureWithSettings:(const char*)arg1;
-(void)stopCapture:(const char*)arg1;
-(unsigned)getLastStartStopCaptureResult;
-(void)dumpBuffer:(id)arg1 name:(const char*)arg2;
-(void)dumpBuffer:(id)arg1;
-(void)dumpTexture:(id)arg1 name:(const char*)arg2 glMode:(BOOL)arg3;
-(void)dumpTexture:(id)arg1 name:(const char*)arg2;
-(void)dumpTexture:(id)arg1;
-(void)postFinishEvent:(const char*)arg1;
-(void)postFinishEvent;
-(void)startCapture;
-(void)stopCapture;

@required
-(void)IOLog:(id)arg1;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2;
-(void)kprintf:(id)arg1;
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2;

@end

