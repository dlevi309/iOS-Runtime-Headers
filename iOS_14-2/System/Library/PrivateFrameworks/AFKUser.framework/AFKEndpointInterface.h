/*
* Generated on Thursday, January 14, 2021 at 2:27:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AFKUser.framework/AFKUser
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_mach;
#import <AFKUser/AFKUser-Structs.h>
@class NSObject, NSMutableDictionary;

@interface AFKEndpointInterface : NSObject {

	unsigned _service;
	unsigned _connect;
	NSObject*<OS_dispatch_queue> _queue;
	IONotificationPortRef _asyncPort;
	NSObject*<OS_dispatch_source> _source;
	unsigned _state;
	NSMutableDictionary* _properties;
	/*^block*/id _responseHandler;
	/*^block*/id _reportHandler;
	/*^block*/id _commandHandler;
	/*^block*/id _eventHandler;
	IODataQueueMemory* _dataQueue;
	unsigned long long _dataQueueSize;
	unsigned _dataQueuePort;
	NSObject*<OS_dispatch_mach> _dataQueueMachChannel;
	unsigned long long _regID;

}
+(id)withService:(unsigned)arg1 ;
+(id)withService:(unsigned)arg1 properties:(id)arg2 ;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(id)initWithService:(unsigned)arg1 ;
-(void)activate;
-(void)_cancel;
-(void)setResponseHandler:(/*^block*/id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setCommandHandler:(/*^block*/id)arg1 ;
-(void)setReportHandler:(/*^block*/id)arg1 ;
-(void)asyncCallback:(AsyncContext*)arg1 result:(int)arg2 bufferSize:(unsigned long long)arg3 ;
-(int)enqueueCommand:(unsigned)arg1 timestamp:(unsigned long long)arg2 inputBuffer:(const void*)arg3 inputBufferSize:(unsigned long long)arg4 outputPayloadSize:(unsigned long long)arg5 context:(void*)arg6 options:(unsigned)arg7 ;
-(int)enqueueCommand:(unsigned)arg1 inputBuffer:(const void*)arg2 inputBufferSize:(unsigned long long)arg3 outputPayloadSize:(unsigned long long)arg4 context:(void*)arg5 options:(unsigned)arg6 ;
-(int)enqueueReport:(unsigned)arg1 timestamp:(unsigned long long)arg2 inputBuffer:(const void*)arg3 inputBufferSize:(unsigned long long)arg4 options:(unsigned)arg5 ;
-(int)enqueueReport:(unsigned)arg1 inputBuffer:(const void*)arg2 inputBufferSize:(unsigned long long)arg3 options:(unsigned)arg4 ;
-(int)enqueueResponseForContext:(void*)arg1 status:(int)arg2 timestamp:(unsigned long long)arg3 outputBuffer:(void*)arg4 outputBufferSize:(unsigned long long)arg5 options:(unsigned)arg6 ;
-(int)enqueueResponseForContext:(void*)arg1 status:(int)arg2 outputBuffer:(void*)arg3 outputBufferSize:(unsigned long long)arg4 options:(unsigned)arg5 ;
-(void)dequeueDataMessage;
-(int)startSession:(BOOL)arg1 ;
@end

