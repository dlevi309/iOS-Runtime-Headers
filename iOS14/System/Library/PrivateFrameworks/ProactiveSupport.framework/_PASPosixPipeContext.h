/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

