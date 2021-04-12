/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol AVFigRoutingContextOutputDeviceTranslator <NSObject>
@required
-(id)outputDeviceFromRoutingContext:(OpaqueFigRoutingContextRef)arg1;
-(void)setOutputDevice:(id)arg1 withOptions:(const CFDictionaryRef)arg2 onRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4;
-(id)outputDevicesFromRoutingContext:(OpaqueFigRoutingContextRef)arg1;
-(void)setOutputDevices:(id)arg1 withOptions:(const CFDictionaryRef)arg2 onRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4;
-(void)addOutputDevice:(id)arg1 withOptions:(const CFDictionaryRef)arg2 toRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4;
-(void)removeOutputDevice:(id)arg1 withOptions:(const CFDictionaryRef)arg2 fromRoutingContext:(OpaqueFigRoutingContextRef)arg3 completionHandler:(/*^block*/id)arg4;

@end

