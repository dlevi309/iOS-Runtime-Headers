/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@protocol OS_dispatch_queue, OS_dispatch_io;
@class NSObject, NSFileHandle;

@interface _PASPosixPipeContext : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_io> _readChannel;
	NSFileHandle* _writeHandle;
	BOOL _stop;

}
-(int)setupWithSubprocessFd:(int)arg1 fileActions:(void*)arg2 queue:(id)arg3 group:(id)arg4 readErrno:(int*)arg5 ;
-(void)startReadWithHandler:(/*^block*/id)arg1 ;
@end

