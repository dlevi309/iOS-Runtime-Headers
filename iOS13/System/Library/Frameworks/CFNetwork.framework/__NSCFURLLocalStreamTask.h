/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionStreamTask.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSObject, NSData, NSString, NSError, NSURLRequest, NSURLResponse, NSDictionary, NSUUID;

@interface __NSCFURLLocalStreamTask : NSURLSessionStreamTask {

	BaseSocketStreamClient* _socketStreamClient;
	NSMutableArray* _extraWork;
	int _connectionState;
	NSObject*<OS_dispatch_queue> _workQueueForStreamTask;
	CFReadStreamRef _readStream;
	CFWriteStreamRef _writeStream;
	NSMutableArray* _pendingWork;
	BOOL _doingWorkOnThisQueue;
	NSData* _readBuffer;
	BOOL _readSignaled;
	BOOL _readEOF;
	SCD_Struct_NS26 _readError;
	NSData* _writeBuffer;
	BOOL _writeSignaled;
	BOOL _writeEOF;
	BOOL _deliveredConnectionEstablished;
	SCD_Struct_NS26 _writeError;
	long long _writeBufferAlreadyWrittenForNextWrite;
	NSMutableArray* _finalizationQueue;
	NSMutableArray* _afterConnectQueue;
	unsigned long long _taskIdentifier;
	long long _state;
	NSString* _taskDescription;
	NSError* _error;
	long long _countOfBytesReceived;
	long long _countOfBytesSent;
	BOOL _goneSecure;
	NSObject*<OS_dispatch_source> _tickerTimeoutTimer;
	/*^block*/id _disavow;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	long long _countOfBytesClientExpectsToSend;
	long long _countOfBytesClientExpectsToReceive;
	long long _countOfBytesExpectedToSend;
	long long _countOfBytesExpectedToReceive;
	long long _expectedWorkload;
	double _timeWindowDelay;
	double _timeWindowDuration;
	double startTime;
	long long _priorityValue;
	double _loadingPriorityValue;
	NSString* _boundInterfaceIdentifier;
	BOOL _disallowCellular;
	int _allowsExpensiveOverride;
	int _allowsConstrainedOverride;
	int _allowsCellularOverride;
	int _networkServiceType;
	NSDictionary* _legacySocketStreamProperties;
	BOOL _betterRouteDiscovered;
	NSData* __TCPConnectionMetadata;
	NSData* __initialDataPayload;
	BOOL _didIssueCancel;
	NSUUID* _uniqueIdentifier;
	float priority;

}

@property (copy) NSData * _TCPConnectionMetadata;                             //@synthesize _TCPConnectionMetadata=__TCPConnectionMetadata - In the implementation block
@property (copy) NSData * _initialDataPayload;                                //@synthesize _initialDataPayload=__initialDataPayload - In the implementation block
@property (assign) unsigned long long taskIdentifier;                         //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (copy) NSURLRequest * originalRequest;                              //@synthesize originalRequest=_originalRequest - In the implementation block
@property (copy) NSURLRequest * currentRequest;                               //@synthesize currentRequest=_currentRequest - In the implementation block
@property (copy) NSURLResponse * response;                                    //@synthesize response=_response - In the implementation block
@property (assign) long long countOfBytesClientExpectsToSend;                 //@synthesize countOfBytesClientExpectsToSend=_countOfBytesClientExpectsToSend - In the implementation block
@property (assign) long long countOfBytesClientExpectsToReceive;              //@synthesize countOfBytesClientExpectsToReceive=_countOfBytesClientExpectsToReceive - In the implementation block
@property (assign) long long countOfBytesExpectedToSend;                      //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign) long long countOfBytesExpectedToReceive;                   //@synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive - In the implementation block
@property (assign) long long countOfBytesReceived;                            //@synthesize countOfBytesReceived=_countOfBytesReceived - In the implementation block
@property (assign) long long countOfBytesSent;                                //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
@property (assign) long long state;                                           //@synthesize state=_state - In the implementation block
@property (copy) NSString * taskDescription;                                  //@synthesize taskDescription=_taskDescription - In the implementation block
@property (copy) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (readonly) BOOL _goneSecure;                                        //@synthesize goneSecure=_goneSecure - In the implementation block
@property (assign) double _timeoutIntervalForResource; 
@property (copy,readonly) NSUUID * _uniqueIdentifier;                         //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)resume;
-(void)setError:(NSError *)arg1 ;
-(long long)state;
-(void)suspend;
-(NSUUID *)_uniqueIdentifier;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSURLResponse *)response;
-(unsigned long long)taskIdentifier;
-(NSURLRequest *)originalRequest;
-(id)workQueue;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSURLRequest *)currentRequest;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(void)_onqueue_checkForCompletion;
-(id)_effectiveConfiguration;
-(void)_onSessionQueue_disavow;
-(void)_onqueue_cancel;
-(void)_onqueue_resume;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(void)_task_onqueue_didFinish;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)set_legacySocketStreamProperties:(id)arg1 ;
-(id)_legacySocketStreamProperties;
-(long long)computeAdjustedPoolPriority;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(void)setCountOfBytesReceived:(long long)arg1 ;
-(long long)countOfBytesReceived;
-(void)setCountOfBytesExpectedToReceive:(long long)arg1 ;
-(void)setCountOfBytesClientExpectsToReceive:(long long)arg1 ;
-(long long)countOfBytesClientExpectsToReceive;
-(void)setCountOfBytesClientExpectsToSend:(long long)arg1 ;
-(long long)countOfBytesClientExpectsToSend;
-(void)setTaskDescription:(NSString *)arg1 ;
-(NSString *)taskDescription;
-(CFDictionaryRef)_copySocketStreamProperties;
-(long long)countOfBytesExpectedToReceive;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(void)set_networkServiceType:(int)arg1 ;
-(void)set_boundInterfaceIdentifier:(id)arg1 ;
-(void)set_allowsConstrainedOverride:(int)arg1 ;
-(void)set_allowsExpensiveOverride:(int)arg1 ;
-(void)set_expectedWorkload:(long long)arg1 ;
-(void)set_timeWindowDelay:(double)arg1 ;
-(void)set_timeWindowDuration:(double)arg1 ;
-(long long)countOfBytesExpectedToSend;
-(long long)countOfBytesSent;
-(BOOL)_goneSecure;
-(id)initWithHost:(id)arg1 port:(long long)arg2 taskGroup:(id)arg3 disavow:(/*^block*/id)arg4 ;
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
-(void)_onqueue_captureStreams;
-(void)_onqueue_addBlockOp:(/*^block*/id)arg1 description:(const char*)arg2 ;
-(void)_onqueue_ioTick;
-(BOOL)_onqueue_processWriteWork:(id)arg1 ;
-(BOOL)_onqueue_processReadWork:(id)arg1 ;
-(id)_onqueue_errorOrCancelError;
-(void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_needServerTrust:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_needClientCert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_dealWithSessionClientCertAuth:(long long)arg1 credential:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSData *)_initialDataPayload;
-(void)set_initialDataPayload:(NSData *)arg1 ;
-(NSData *)_TCPConnectionMetadata;
-(void)set_TCPConnectionMetadata:(NSData *)arg1 ;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(id)initWithNetService:(id)arg1 taskGroup:(id)arg2 disavow:(/*^block*/id)arg3 ;
-(BOOL)_cacheOnly;
-(double)_timeWindowDelay;
-(double)_timeWindowDuration;
-(long long)_expectedWorkload;
-(id)_boundInterfaceIdentifier;
-(BOOL)_disallowCellular;
-(int)_allowsExpensiveOverride;
-(int)_allowsConstrainedOverride;
-(int)_allowsCellularOverride;
-(int)_networkServiceType;
-(void)_adoptEffectiveConfiguration:(id)arg1 ;
-(void)_init_setupTimeoutTimer;
-(id)_initCommonWithGroup:(id)arg1 disavow:(/*^block*/id)arg2 ;
-(id)_initWithTaskGroup:(id)arg1 disavow:(/*^block*/id)arg2 ;
-(id)_initWithExistingTask:(id)arg1 disavow:(/*^block*/id)arg2 ;
-(void)adjustConditionalConnectionProperties:(CFDictionaryRef)arg1 ;
-(id)describePending:(id)arg1 ;
-(void)_onqueue_readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_onqueue_writeData:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_onqueue_closeWriteOp;
-(void)_onqueue_closeReadOp;
-(void)_onqueue_preConnectionConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_postConnectConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_onqueue_readStreamEvent:(unsigned long long)arg1 ;
-(BOOL)_onqueue_shufflePendingFor:(Class)arg1 ;
-(void)_onqueue_writeStreamEvent:(unsigned long long)arg1 ;
-(void)_onqueue_readStream:(CFReadStreamRef)arg1 writeStreamAvailable:(CFWriteStreamRef)arg2 ;
-(void)_onqueue_scheduleStreams;
-(void)_onqueue_unscheduleStreams;
-(void)_onqueue_addBlockOpAtHead:(/*^block*/id)arg1 description:(const char*)arg2 ;
-(void)set_disallowCellular:(BOOL)arg1 ;
-(void)set__allowsCellularOverride:(int)arg1 ;
@end

