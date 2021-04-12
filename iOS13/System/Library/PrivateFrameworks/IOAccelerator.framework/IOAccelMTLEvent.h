/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IOAccelerator.framework/IOAccelerator
*/


#import <IOAccelerator/IOAccelerator-Structs.h>
@interface IOAccelMTLEvent : NSObject {

	_IOAccelShared* _sharedRef;
	unsigned _eventName;
	unsigned long long _globalTraceObjectID;

}
-(void)dealloc;
-(unsigned)encodeKernelSignalEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 ;
-(unsigned)encodeKernelWaitEventCommandArgs:(IOAccelKernelCommandSignalOrWaitEventArgs*)arg1 value:(unsigned long long)arg2 timeout:(unsigned)arg3 ;
-(id)initWithShared:(_IOAccelShared*)arg1 ;
@end

