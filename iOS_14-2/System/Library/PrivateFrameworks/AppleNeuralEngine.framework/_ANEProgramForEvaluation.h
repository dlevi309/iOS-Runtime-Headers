/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
*/


@protocol OS_dispatch_semaphore;
@class _ANEDeviceController, NSObject;

@interface _ANEProgramForEvaluation : NSObject {

	char _queueDepth;
	_ANEDeviceController* _controller;
	unsigned long long _programHandle;
	unsigned long long _intermediateBufferHandle;
	NSObject*<OS_dispatch_semaphore> _requestsInFlight;
	long long _currentAsyncRequestsInFlight;

}

@property (nonatomic,readonly) _ANEDeviceController * controller;                              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) unsigned long long programHandle;                                 //@synthesize programHandle=_programHandle - In the implementation block
@property (assign,nonatomic) unsigned long long intermediateBufferHandle;                      //@synthesize intermediateBufferHandle=_intermediateBufferHandle - In the implementation block
@property (nonatomic,readonly) char queueDepth;                                                //@synthesize queueDepth=_queueDepth - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> requestsInFlight;              //@synthesize requestsInFlight=_requestsInFlight - In the implementation block
@property (assign,nonatomic) long long currentAsyncRequestsInFlight;                           //@synthesize currentAsyncRequestsInFlight=_currentAsyncRequestsInFlight - In the implementation block
+(id)new;
+(id)programWithHandle:(unsigned long long)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(char)arg3 ;
-(id)init;
-(id)description;
-(_ANEDeviceController *)controller;
-(unsigned long long)intermediateBufferHandle;
-(void)dealloc;
-(id)initWithHandle:(unsigned long long)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(char)arg3 ;
-(unsigned long long)programHandle;
-(char)queueDepth;
-(NSObject*<OS_dispatch_semaphore>)requestsInFlight;
-(long long)currentAsyncRequestsInFlight;
-(void)setCurrentAsyncRequestsInFlight:(long long)arg1 ;
-(BOOL)processRequest:(id)arg1 qos:(unsigned)arg2 qIndex:(unsigned long long)arg3 modelStringID:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(void)setProgramHandle:(unsigned long long)arg1 ;
-(void)setIntermediateBufferHandle:(unsigned long long)arg1 ;
@end

