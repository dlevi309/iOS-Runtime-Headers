/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_log;
@class AFKEndpointInterface, NSObject;

@interface CBAPEndpoint : NSObject {

	AFKEndpointInterface* _endpoint;
	NSObject*<OS_dispatch_queue> _epQueue;
	NSObject*<OS_dispatch_semaphore> _dispatchSignal;
	unsigned _service;
	id _responseObj;
	BOOL _status;
	unsigned _timeoutCount;
	NSObject*<OS_os_log> _logHandle;

}
-(id)initWithServiceName:(id)arg1 ;
-(void)dealloc;
-(unsigned)findDCPServiceWithName:(id)arg1 ;
-(void)handleResponse:(void*)arg1 bufferSize:(unsigned long long)arg2 res:(int)arg3 ;
-(BOOL)setProperty:(id)arg1 property:(id)arg2 ;
-(id)copyProperty:(id)arg1 ;
-(BOOL)sendCommand:(int)arg1 inputBuffer:(const void*)arg2 inputBufferSize:(unsigned long long)arg3 ;
@end

