/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <libobjc.A.dylib/HSIOHIDManagerInterface.h>

@interface HSHIDManager : NSObject <HSIOHIDManagerInterface> {

	IOHIDManagerRef _managerRef;
	BOOL _active;
	BOOL _cancelled;
	/*^block*/id _deviceEnumeratedCallback;
	/*^block*/id _deviceRemovedCallback;

}

@property (nonatomic,copy) id deviceEnumeratedCallback;              //@synthesize deviceEnumeratedCallback=_deviceEnumeratedCallback - In the implementation block
@property (nonatomic,copy) id deviceRemovedCallback;                 //@synthesize deviceRemovedCallback=_deviceRemovedCallback - In the implementation block
-(id)devices;
-(id)init;
-(BOOL)open:(id*)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(CFStringRef)arg2 ;
-(id)valueForProperty:(CFStringRef)arg1 ;
-(void)dealloc;
-(BOOL)close:(id*)arg1 ;
-(void)scheduleWithRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2 ;
-(void)unscheduleFromRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2 ;
-(void)setDeviceRemovedCallback:(id)arg1 ;
-(id)deviceRemovedCallback;
-(id)initWithManagerRef:(IOHIDManagerRef)arg1 ;
-(void)enumerateDevicesMatching:(id)arg1 ;
-(void)setDeviceEnumeratedCallback:(id)arg1 ;
-(id)deviceEnumeratedCallback;
@end

