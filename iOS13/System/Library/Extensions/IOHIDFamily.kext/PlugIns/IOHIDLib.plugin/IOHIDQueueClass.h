/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
*/

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDIUnknown2.h>

@class IOHIDDeviceClass;

@interface IOHIDQueueClass : IOHIDIUnknown2 {

	IOHIDDeviceQueueInterface* _queue;
	IOHIDDeviceClass* _device;
	unsigned _port;
	CFMachPortRef _machPort;
	CFRunLoopSourceRef _runLoopSource;
	IODataQueueMemory* _queueMemory;
	unsigned long long _queueMemorySize;
	BOOL _queueSizeChanged;
	unsigned _lastTail;
	unsigned _depth;
	unsigned long long _queueToken;
	/*function pointer*/void* _valueAvailableCallback;
	void* _valueAvailableContext;
	void* _usageAnalytics;

}
-(void)dealloc;
-(int)stop;
-(int)start;
-(id)initWithDevice:(id)arg1 ;
-(int)setDepth:(unsigned)arg1 ;
-(int)addElement:(IOHIDElementRef)arg1 ;
-(int)removeElement:(IOHIDElementRef)arg1 ;
-(int)queryInterface:(SCD_Struct_IO0)arg1 outInterface:(void*)arg2 ;
-(int)getAsyncEventSource:(const void*)arg1 ;
-(void)mapMemory;
-(void)updateUsageAnalytics;
-(void)unmapMemory;
-(BOOL)setupAnalytics;
-(id)initWithDevice:(id)arg1 port:(unsigned)arg2 source:(CFRunLoopSourceRef)arg3 ;
-(int)getDepth:(unsigned*)arg1 ;
-(int)containsElement:(IOHIDElementRef)arg1 pValue:(char*)arg2 ;
-(int)setValueAvailableCallback:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(int)copyNextValue:(_IOHIDValue*)arg1 ;
-(void)queueCallback:(CFMachPortRef)arg1 msg:(SCD_Struct_IO6*)arg2 size:(long long)arg3 info:(void*)arg4 ;
@end

