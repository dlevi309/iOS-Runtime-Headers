/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
*/

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDQueueClass.h>

@interface IOHIDObsoleteQueueClass : IOHIDQueueClass {

	IOHIDQueueInterface* _interface;
	/*function pointer*/void* _eventCallback;
	void* _eventCallbackTarget;
	void* _eventCallbackRefcon;

}
-(void)dealloc;
-(id)initWithDevice:(id)arg1 ;
-(int)queryInterface:(SCD_Struct_IO0)arg1 outInterface:(void*)arg2 ;
-(int)getNextEvent:(IOHIDEventStruct*)arg1 ;
-(int)setEventCallout:(/*function pointer*/void*)arg1 callbackTarget:(void*)arg2 callbackRefcon:(void*)arg3 ;
@end

