/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NS25 _readError;
	NSData* _writeBuffer;
	BOOL _writeSignaled;
	BOOL _writeEOF;
	BOOL _deliveredConnectionEstablished;
	SCD_Struct_NS25 _writeError;
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
-(void)setTaskDescription:(NSString *)arg1 ;
-(id)_boundInterfaceIdentifier;
-(NSURLRequest *)currentRequest;
-(void)startSecureConnection;
-(void)closeRead;
-(BOOL)_goneSecure;
-(void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)closeWrite;
-(void)captureStreams;
-(id)workQueue;
-(void)_task_onqueue_didFinish;
-(void)suspend;
-(long long)countOfBytesClientExpectsToReceive;
-(void)setCountOfBytesClientExpectsToReceive:(long long)arg1 ;
-(NSURLRequest *)originalRequest;
-(void)setCountOfBytesExpectedToReceive:(long long)arg1 ;
-(NSData *)_initialDataPayload;
-(void)setCountOfBytesClientExpectsToSend:(long long)arg1 ;
-(void)set_legacySocketStreamProperties:(id)arg1 ;
-(id)_effectiveConfiguration;
-(long long)computeAdjustedPoolPriority;
-(id)initWithNetService:(id)arg1 taskGroup:(id)arg2 disavow:(/*^block*/id)arg3 ;
-(NSString *)taskDescription;
-(void)set_allowsCellularOverride:(int)arg1 ;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(long long)countOfBytesClientExpectsToSend;
-(id)_legacySocketStreamProperties;
-(void)set_expectedWorkload:(long long)arg1 ;
-(void)setCountOfBytesReceived:(long long)arg1 ;
-(void)set_boundInterfaceIdentifier:(id)arg1 ;
-(void)set_allowsExpensiveOverride:(int)arg1 ;
-(void)set_allowsConstrainedOverride:(int)arg1 ;
-(void)_onSessionQueue_disavow;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(id)_initWithExistingTask:(id)arg1 disavow:(/*^block*/id)arg2 ;
-(void)set_timeWindowDelay:(double)arg1 ;
-(int)_allowsConstrainedOverride;
-(void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(long long)countOfBytesExpectedToSend;
-(void)set_disallowCellular:(BOOL)arg1 ;
-(void)set_networkServiceType:(int)arg1 ;
-(void)_onqueue_resume;
-(void)set_timeWindowDuration:(double)arg1 ;
-(void)_adoptEffectiveConfiguration:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(int)_allowsCellularOverride;
-(NSError *)error;
-(void)set_TCPConnectionMetadata:(NSData *)arg1 ;
-(void)copyStreamProperty:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)description;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(CFDictionaryRef)_copySocketStreamProperties;
-(NSURLResponse *)response;
-(long long)countOfBytesSent;
-(double)_timeWindowDelay;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(unsigned long long)taskIdentifier;
-(id)initWithHost:(id)arg1 port:(long long)arg2 taskGroup:(id)arg3 disavow:(/*^block*/id)arg4 ;
-(int)_allowsExpensiveOverride;
-(void)setState:(long long)arg1 ;
-(void)stopSecureConnection;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(long long)state;
-(long long)_expectedWorkload;
-(void)set_initialDataPayload:(NSData *)arg1 ;
-(BOOL)_disallowCellular;
-(long long)countOfBytesExpectedToReceive;
-(long long)countOfBytesReceived;
-(double)_timeWindowDuration;
-(NSUUID *)_uniqueIdentifier;
-(void)cancel;
-(void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resume;
-(float)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_cacheOnly;
-(void)setPriority:(float)arg1 ;
-(NSData *)_TCPConnectionMetadata;
-(int)_networkServiceType;
-(void)dealloc;
@end

