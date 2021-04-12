/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


@protocol MTLDebugCommandEncoder <MTLCommandEncoder>
@optional
-(void)stopCapture;
-(void)startCapture;
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

@required
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2;
-(void)kprintf:(id)arg1;
-(void)IOLog:(id)arg1;

@end

