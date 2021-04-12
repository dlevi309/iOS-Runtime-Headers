/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@protocol OS_dispatch_queue, OS_dispatch_source, ASDTestFlightServiceExtensionRemoteXPCInterface;
@class NSObject, NSExtension, NSUUID;

@interface ASDTestFlightServiceTransaction : NSObject {

	NSObject*<OS_dispatch_queue> _runQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	double _serviceTime;
	NSObject*<OS_dispatch_source> _serviceTimer;
	double _graceTime;
	NSObject*<OS_dispatch_source> _graceTimer;
	NSExtension* _extension;
	NSUUID* _requestUUID;
	id<ASDTestFlightServiceExtensionRemoteXPCInterface> _remoteContextInterface;
	BOOL _errorBlockCalled;
	/*^block*/id _errorBlock;

}

@property (nonatomic,copy) id errorBlock;              //@synthesize errorBlock=_errorBlock - In the implementation block
-(void)endTransaction;
-(void)setErrorBlock:(id)arg1 ;
-(id)initWithExtension:(id)arg1 queue:(id)arg2 serviceTime:(double)arg3 graceTime:(double)arg4 ;
-(void)beginTransactionWithExecutionBlock:(/*^block*/id)arg1 ;
-(void)_cleanupPostExecution;
-(void)_startTimers;
-(id)extensionIdentifier;
-(id)errorBlock;
-(void)dealloc;
@end

