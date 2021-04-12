/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject, _ANEDeviceController;

@interface _ANEProgramForEvaluation : NSObject {

	char _queueDepth;
	NSObject*<OS_dispatch_queue> _q;
	_ANEDeviceController* _controller;
	unsigned long long _programHandle;
	unsigned long long _intermediateBufferHandle;
	NSObject*<OS_dispatch_semaphore> _requestsInFlight;
	long long _currentAsyncRequestsInFlight;

}

@property (q,nonatomic,readonly) NSObject*<OS_dispatch_queue> q;                               //@synthesize q=_q - In the implementation block
@property (nonatomic,readonly) _ANEDeviceController * controller;                              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic) unsigned long long programHandle;                                 //@synthesize programHandle=_programHandle - In the implementation block
@property (assign,nonatomic) unsigned long long intermediateBufferHandle;                      //@synthesize intermediateBufferHandle=_intermediateBufferHandle - In the implementation block
@property (nonatomic,readonly) char queueDepth;                                                //@synthesize queueDepth=_queueDepth - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> requestsInFlight;              //@synthesize requestsInFlight=_requestsInFlight - In the implementation block
@property (assign,nonatomic) long long currentAsyncRequestsInFlight;                           //@synthesize currentAsyncRequestsInFlight=_currentAsyncRequestsInFlight - In the implementation block
+(id)new;
+(id)programWithHandle:(unsigned long long)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(char)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSObject*<OS_dispatch_queue>)q;
-(_ANEDeviceController *)controller;
-(id)initWithHandle:(unsigned long long)arg1 intermediateBufferHandle:(unsigned long long)arg2 queueDepth:(char)arg3 ;
-(unsigned long long)programHandle;
-(unsigned long long)intermediateBufferHandle;
-(char)queueDepth;
-(NSObject*<OS_dispatch_semaphore>)requestsInFlight;
-(long long)currentAsyncRequestsInFlight;
-(void)setCurrentAsyncRequestsInFlight:(long long)arg1 ;
-(BOOL)processRequest:(id)arg1 qos:(unsigned)arg2 qIndex:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)setProgramHandle:(unsigned long long)arg1 ;
-(void)setIntermediateBufferHandle:(unsigned long long)arg1 ;
@end

