/*
* Generated on Thursday, January 14, 2021 at 2:29:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Extensions/IOHIDFamily.kext/PlugIns/IOHIDLib.plugin/IOHIDLib
*/

#import <IOHIDLib/IOHIDLib-Structs.h>
#import <IOHIDLib/IOHIDIUnknown2.h>

@interface IOHIDPlugin : IOHIDIUnknown2 {

	IOCFPlugInInterfaceStruct* _plugin;

}
-(id)init;
-(int)stop;
-(void)dealloc;
-(int)probe:(id)arg1 service:(unsigned)arg2 outScore:(int*)arg3 ;
-(int)start:(id)arg1 service:(unsigned)arg2 ;
@end

