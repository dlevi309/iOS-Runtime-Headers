/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/


#import <IOGPU/IOGPU-Structs.h>
@interface IOGPUMTLEvent : NSObject {

	_IOGPUDevice* _deviceRef;
	unsigned _eventName;
	unsigned long long _globalTraceObjectID;

}
-(id)initWithDevice:(_IOGPUDevice*)arg1 ;
-(void)dealloc;
-(unsigned)_encodeIOGPUKernelSignalEventCommandArgs:(IOGPUKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)_encodeIOGPUKernelWaitEventCommandArgs:(IOGPUKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
@end

