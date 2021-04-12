/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)devices;
-(id)valueForProperty:(CFStringRef)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(CFStringRef)arg2 ;
-(BOOL)open:(id*)arg1 ;
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

