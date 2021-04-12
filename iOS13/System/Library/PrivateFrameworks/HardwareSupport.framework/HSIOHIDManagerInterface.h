/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/


@protocol HSIOHIDManagerInterface
@required
-(id)devices;
-(id)valueForProperty:(const CFStringRef)arg1;
-(BOOL)setValue:(id)arg1 forProperty:(const CFStringRef)arg2;
-(BOOL)open:(id*)arg1;
-(BOOL)close:(id*)arg1;
-(void)scheduleWithRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2;
-(void)unscheduleFromRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2;
-(void)setDeviceRemovedCallback:(/*^block*/id)arg1;
-(void)enumerateDevicesMatching:(id)arg1;
-(void)setDeviceEnumeratedCallback:(/*^block*/id)arg1;

@end

