/*
* Generated on Thursday, January 14, 2021 at 2:29:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(int)queryInterface:(SCD_Struct_IO0)arg1 outInterface:(void*)arg2 ;
-(int)getNextEvent:(IOHIDEventStruct*)arg1 ;
-(int)setEventCallout:(/*function pointer*/void*)arg1 callbackTarget:(void*)arg2 callbackRefcon:(void*)arg3 ;
@end

