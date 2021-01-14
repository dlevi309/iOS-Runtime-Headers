/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/


@protocol HSIOHIDManagerInterface
@required
-(id)devices;
-(BOOL)open:(id*)arg1;
-(BOOL)setValue:(id)arg1 forProperty:(const CFStringRef)arg2;
-(id)valueForProperty:(const CFStringRef)arg1;
-(BOOL)close:(id*)arg1;
-(void)scheduleWithRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2;
-(void)unscheduleFromRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2;
-(void)setDeviceRemovedCallback:(/*^block*/id)arg1;
-(void)enumerateDevicesMatching:(id)arg1;
-(void)setDeviceEnumeratedCallback:(/*^block*/id)arg1;

@end

