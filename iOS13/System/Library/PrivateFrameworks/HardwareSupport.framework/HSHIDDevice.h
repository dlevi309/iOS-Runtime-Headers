/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <libobjc.A.dylib/HSIOHIDDeviceInterface.h>

@class NSString;

@interface HSHIDDevice : NSObject <HSIOHIDDeviceInterface> {

	unsigned char _reportCallbackBuffer[16384];
	BOOL _active;
	BOOL _cancelled;
	IOHIDDeviceRef _deviceRef;
	/*^block*/id _deviceRemovedCallback;
	/*^block*/id _inputReportCallback;

}

@property (assign,nonatomic) IOHIDDeviceRef deviceRef;              //@synthesize deviceRef=_deviceRef - In the implementation block
@property (nonatomic,copy) id deviceRemovedCallback;                //@synthesize deviceRemovedCallback=_deviceRemovedCallback - In the implementation block
@property (nonatomic,copy) id inputReportCallback;                  //@synthesize inputReportCallback=_inputReportCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)valueForProperty:(CFStringRef)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(CFStringRef)arg2 ;
-(id)initWithService:(unsigned)arg1 ;
-(IOHIDDeviceRef)deviceRef;
-(BOOL)open:(id*)arg1 ;
-(BOOL)close:(id*)arg1 ;
-(void)setDeviceRef:(IOHIDDeviceRef)arg1 ;
-(id)initWithDeviceRef:(IOHIDDeviceRef)arg1 ;
-(BOOL)_setReportWithID:(long long)arg1 type:(int)arg2 data:(id)arg3 error:(id*)arg4 ;
-(BOOL)setOutputReportWithID:(long long)arg1 data:(id)arg2 error:(id*)arg3 ;
-(BOOL)setFeatureReportWithID:(long long)arg1 data:(id)arg2 error:(id*)arg3 ;
-(id)featureReportWithID:(long long)arg1 error:(id*)arg2 ;
-(void)scheduleWithRunLoop:(CFRunLoopRef)arg1 mode:(const CFStringRef)arg2 ;
-(void)unscheduleFromRunLoop:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)setDeviceRemovedCallback:(id)arg1 ;
-(void)setInputReportCallback:(id)arg1 ;
-(id)deviceRemovedCallback;
-(id)inputReportCallback;
@end

