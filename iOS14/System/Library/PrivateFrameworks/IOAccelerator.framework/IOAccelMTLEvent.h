/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOAccelerator.framework/IOAccelerator
*/


#import <IOAccelerator/IOAccelerator-Structs.h>
@interface IOAccelMTLEvent : NSObject {

	_IOAccelShared* _sharedRef;
	unsigned _eventName;
	unsigned long long _globalTraceObjectID;

}
-(id)initWithShared:(_IOAccelShared*)arg1 ;
-(unsigned)encodeKernelSignalEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(void)dealloc;
@end

