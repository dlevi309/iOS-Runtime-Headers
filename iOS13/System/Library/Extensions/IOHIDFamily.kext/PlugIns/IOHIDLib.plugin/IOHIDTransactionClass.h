/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
*/

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDIUnknown2.h>

@class NSMutableArray, IOHIDDeviceClass;

@interface IOHIDTransactionClass : IOHIDIUnknown2 {

	IOHIDDeviceTransactionInterface* _interface;
	unsigned _direction;
	NSMutableArray* _elements;
	IOHIDDeviceClass* _device;

}
-(void)dealloc;
-(int)clear;
-(id)device;
-(int)commit;
-(int)setDirection:(unsigned)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(int)addElement:(IOHIDElementRef)arg1 ;
-(int)removeElement:(IOHIDElementRef)arg1 ;
-(void)setDevice:(id)arg1 ;
-(int)queryInterface:(SCD_Struct_IO0)arg1 outInterface:(void*)arg2 ;
-(int)getAsyncEventSource:(const void*)arg1 ;
-(int)getDirection:(unsigned*)arg1 ;
-(int)containsElement:(IOHIDElementRef)arg1 value:(char*)arg2 ;
-(int)setValue:(IOHIDElementRef)arg1 value:(IOHIDValueRef)arg2 options:(unsigned)arg3 ;
-(int)getValue:(IOHIDElementRef)arg1 value:(_IOHIDValue*)arg2 options:(unsigned)arg3 ;
@end

