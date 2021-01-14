/*
* Generated on Thursday, January 14, 2021 at 2:29:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
*/

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDDeviceClass.h>

@interface IOHIDObsoleteDeviceClass : IOHIDDeviceClass {

	IOHIDDeviceInterface122* _interface;
	IONotificationPortRef _notifyPort;
	unsigned _notification;
	/*function pointer*/void* _removalCallback;
	void* _removalTarget;
	void* _removalRefcon;
	/*function pointer*/void* _reportCallback;
	void* _reportCallbackTarget;
	void* _reportCallbackRefcon;

}
-(id)init;
-(void)dealloc;
-(int)queryInterface:(SCD_Struct_IO0)arg1 outInterface:(void*)arg2 ;
-(int)start:(id)arg1 service:(unsigned)arg2 ;
-(int)getElementValue:(unsigned)arg1 value:(IOHIDEventStruct*)arg2 options:(unsigned)arg3 ;
-(int)setRemovalCallback:(/*function pointer*/void*)arg1 removalTarget:(void*)arg2 removalRefcon:(void*)arg3 ;
-(int)setElementValue:(unsigned)arg1 value:(IOHIDEventStruct*)arg2 ;
-(IOHIDQueueInterface*)allocQueue;
-(IOHIDOutputTransactionInterface*)allocOutputTransaction;
-(int)copyMatchingElements:(CFDictionaryRef)arg1 element:(const _CFArray*)arg2 ;
-(int)setInterruptReportHandlerCallback:(void*)arg1 reportBufferSize:(unsigned)arg2 callback:(/*function pointer*/void*)arg3 callbackTarget:(void*)arg4 callbackRefcon:(void*)arg5 ;
@end

