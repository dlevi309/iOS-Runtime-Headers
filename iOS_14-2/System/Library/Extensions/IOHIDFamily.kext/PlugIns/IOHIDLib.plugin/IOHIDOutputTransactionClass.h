/*
* Generated on Thursday, January 14, 2021 at 2:29:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
*/

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDTransactionClass.h>

@interface IOHIDOutputTransactionClass : IOHIDTransactionClass {

	IOHIDOutputTransactionInterface* _outputInterface;

}
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(int)queryInterface:(SCD_Struct_IO0)arg1 outInterface:(void*)arg2 ;
-(int)setElementValue:(unsigned)arg1 value:(IOHIDEventStruct*)arg2 options:(unsigned)arg3 ;
-(int)getElementValue:(unsigned)arg1 value:(IOHIDEventStruct*)arg2 options:(unsigned)arg3 ;
@end

