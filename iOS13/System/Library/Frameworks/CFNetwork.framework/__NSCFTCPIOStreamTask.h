/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFURLSessionTask.h>

@protocol OS_dispatch_queue;
@class NSData, NSMutableArray, CFNetworkTimer, __NSCFURLLocalStreamTaskWorkWrite, __NSCFURLLocalStreamTaskWorkRead, NSObject;

@interface __NSCFTCPIOStreamTask : __NSCFURLSessionTask {

	/*^block*/id _disavow;
	shared_ptr<TCPIO_EstablishBase>* _establish;
	shared_ptr<TransportConnectionObjCPP>* _ios;
	unsigned char _captureStreamsUponCompletion;
	unsigned char _secure;
	NSData* __initialDataPayload;
	shared_ptr<HTTPProtocol>* _httpProtocol;
	NSMutableArray* _pendingWork;
	NSMutableArray* _completedSuspendedWork;
	BOOL _doingWorkOnThisQueue;
	int _connectionState;
	BOOL _goneSecure;
	BOOL _streamsCaptured;
	SCD_Struct_NS26 _readError;
	BOOL _readInProgress;
	BOOL _readClosed;
	SCD_Struct_NS26 _writeError;
	BOOL _writeEOF;
	BOOL _writeInProgress;
	BOOL _writeClosed;
	BOOL _receivedServerTrustChallenge;
	BOOL _receivedEof;
	CFNetworkTimer* _writeTimer;
	CFNetworkTimer* _readTimer;
	__NSCFURLLocalStreamTaskWorkWrite* _currentWriteTask;
	__NSCFURLLocalStreamTaskWorkRead* _currentReadTask;
	NSObject*<OS_dispatch_queue> _workQueueForStreamTask;

}

@property (copy) NSData * _initialDataPayload;                                                  //@synthesize _initialDataPayload=__initialDataPayload - In the implementation block
@property (nonatomic,retain) __NSCFURLLocalStreamTaskWorkWrite * currentWriteTask;              //@synthesize currentWriteTask=_currentWriteTask - In the implementation block
@property (nonatomic,retain) __NSCFURLLocalStreamTaskWorkRead * currentReadTask;                //@synthesize currentReadTask=_currentReadTask - In the implementation block
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)cancel;
-(id)workQueue;
-(void)_onqueue_checkForCompletion;
-(void)_onSessionQueue_disavow;
-(void)_onqueue_cancel;
-(void)_onqueue_suspend;
-(void)_onqueue_resume;
-(void)_onqueue_adjustPoolPriority;
-(void)_onqueue_adjustLoadingPoolPriority;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(void)_task_onqueue_didFinish;
-(id)initWithTask:(id)arg1 connection:(shared_ptr<TransportConnection>*)arg2 extraBytes:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(id)initWithHost:(id)arg1 port:(long long)arg2 taskGroup:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(shared_ptr<TransportConnectionObjCPP>*)ios;
-(void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)captureStreams;
-(void)closeWrite;
-(void)closeRead;
-(void)copyStreamProperty:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startSecureConnection;
-(void)stopSecureConnection;
-(void)_onqueue_stopSecureConnection;
-(void)_onqueue_startSecureConnection;
-(void)_onqueue_closeRead;
-(void)_onqueue_closeWrite;
-(void)_onqueue_captureStreams;
-(void)_onqueue_addBlockOp:(/*^block*/id)arg1 description:(const char*)arg2 ;
-(void)_onqueue_addBlockOp:(/*^block*/id)arg1 description:(const char*)arg2 shouldWaitForTls:(BOOL)arg3 ;
-(BOOL)shouldDoWorkConsideringTlsState;
-(void)_onqueue_ioTick;
-(void)_onqueue_timeoutOccured;
-(void)_onqueue_callbackCompletedWork;
-(void)_onqueue_processWriteWork:(id)arg1 ;
-(void)_onqueue_processReadWork:(id)arg1 ;
-(id)_onqueue_errorOrCancelError;
-(BOOL)_onqueue_usingProxy;
-(void)_onqueue_preConnectionConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_needServerTrust:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_needClientCert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_dealWithSessionClientCertAuth:(long long)arg1 credential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_onqueue_postConnectConfiguration:(id)arg1 parameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_onqueue_setTransportConnection:(shared_ptr<TransportConnection>*)arg1 ;
-(void)_onqueue_tlsCompletion;
-(void)_onqueue_tlsDisabled;
-(void)_onqueue_cleanUpConnectionEstablishmentState;
-(void)_onqueue_connectionEstablishedWithError:(SCD_Struct_NS26)arg1 callbackReferent:(id)arg2 ;
-(NSData *)_initialDataPayload;
-(void)set_initialDataPayload:(NSData *)arg1 ;
-(__NSCFURLLocalStreamTaskWorkWrite *)currentWriteTask;
-(void)setCurrentWriteTask:(__NSCFURLLocalStreamTaskWorkWrite *)arg1 ;
-(__NSCFURLLocalStreamTaskWorkRead *)currentReadTask;
-(void)setCurrentReadTask:(__NSCFURLLocalStreamTaskWorkRead *)arg1 ;
@end

