/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSessionTask.h>
#import <libobjc.A.dylib/GEODataSessionUpdatableTask.h>

@protocol GEODataSessionTaskDelegate, OS_dispatch_queue, OS_os_activity, OS_voucher, NSObject;
@class NSError, GEODataRequest, NSObject, NSURLSessionTask, NSData, NSMutableData, NSURLSessionTaskMetrics, NSDate, NSString, NSURL, NSHTTPURLResponse, NSURLRequest, GEOClientMetrics;

@interface GEODataURLSessionTask : NSObject <GEODataSessionTask, GEODataSessionUpdatableTask> {

	id<GEODataSessionTaskDelegate> _delegate;
	GEODataRequest* _request;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _sessionIsolation;
	NSURLSessionTask* _backingTask;
	NSError* _nonBackingTaskError;
	NSData* _cachedData;
	NSMutableData* _receivedData;
	NSURLSessionTaskMetrics* _urlTaskMetrics;
	double _startTime;
	double _endTime;
	SCD_Struct_GE94 _requestKind;
	BOOL _mptcpNegotiated;
	BOOL _receivedRNFNotification;
	float _priority;
	unsigned _sessionIdentifier;
	BOOL _backingTaskNeedsResume;
	BOOL _finished;
	unsigned _qos;
	NSObject*<OS_os_activity> _activity;
	NSObject*<OS_voucher> _voucher;
	id<NSObject> _parsedResponse;
	NSDate* _originalStartDate;

}

@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) double loadTime; 
@property (nonatomic,readonly) NSString * entityTag; 
@property (nonatomic,readonly) NSString * contentLengthString; 
@property (nonatomic,readonly) unsigned long long contentLength; 
@property (nonatomic,readonly) BOOL failedDueToCancel; 
@property (nonatomic,readonly) long long HTTPStatusCode; 
@property (nonatomic,readonly) NSURL * originalRequestURL; 
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity;                            //@synthesize activity=_activity - In the implementation block
@property (nonatomic,__weak,readonly) id<GEODataSessionTaskDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy) NSData * cachedData;                                               //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,readonly) GEODataRequest * request;                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) double startTime;                                              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) BOOL finished;                                                 //@synthesize finished=_finished - In the implementation block
@property (nonatomic,readonly) NSURLSessionTask * backingTask;                                //@synthesize backingTask=_backingTask - In the implementation block
@property (assign,nonatomic) unsigned sessionIdentifier;                                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL receivedRNFNotification;                                    //@synthesize receivedRNFNotification=_receivedRNFNotification - In the implementation block
@property (nonatomic,readonly) NSData * receivedData; 
@property (nonatomic,readonly) NSHTTPURLResponse * response; 
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,readonly) NSURLRequest * originalURLRequest; 
@property (nonatomic,readonly) SCD_Struct_GE94 requestKind;                                   //@synthesize requestKind=_requestKind - In the implementation block
@property (assign) float priority; 
@property (nonatomic,readonly) BOOL protocolBufferHasPreamble; 
@property (nonatomic,readonly) NSURLSessionTaskMetrics * urlTaskMetrics;                      //@synthesize urlTaskMetrics=_urlTaskMetrics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSURL * downloadedFileURL; 
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
@property (nonatomic,readonly) id<NSObject> parsedResponse; 
@property (nonatomic,readonly) unsigned long long requestedMultipathServiceType; 
@property (nonatomic,readonly) BOOL mptcpNegotiated;                                          //@synthesize mptcpNegotiated=_mptcpNegotiated - In the implementation block
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<GEODataSessionTaskDelegate>)delegate;
-(NSError *)error;
-(void)cancel;
-(void)start;
-(void)setError:(NSError *)arg1 ;
-(BOOL)finished;
-(NSObject*<OS_os_activity>)activity;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(void)_start;
-(GEODataRequest *)request;
-(NSHTTPURLResponse *)response;
-(NSData *)receivedData;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(double)startTime;
-(unsigned)sessionIdentifier;
-(double)elapsedTime;
-(void)setSessionIdentifier:(unsigned)arg1 ;
-(NSData *)cachedData;
-(NSURL *)downloadedFileURL;
-(unsigned long long)contentLength;
-(GEOClientMetrics *)clientMetrics;
-(BOOL)validateTileResponse:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)validateNonEmptyResponseWithError:(id*)arg1 ;
-(NSURL *)originalRequestURL;
-(BOOL)validateContentLengthWithError:(id*)arg1 ;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(id<NSObject>)parsedResponse;
-(BOOL)protocolBufferHasPreamble;
-(unsigned long long)incomingPayloadSize;
-(unsigned long long)outgoingPayloadSize;
-(NSString *)remoteAddressAndPort;
-(BOOL)failedDueToCancel;
-(unsigned long long)requestedMultipathServiceType;
-(BOOL)mptcpNegotiated;
-(BOOL)receivedRNFNotification;
-(SCD_Struct_GE94)requestKind;
-(BOOL)didValidateEntityTagForData:(id*)arg1 entityTag:(id*)arg2 ;
-(long long)HTTPStatusCode;
-(NSString *)entityTag;
-(double)loadTime;
-(double)loadTimeIncludingTask:(id)arg1 ;
-(void)setCachedData:(NSData *)arg1 ;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(SCD_Struct_GE94)arg4 priority:(float)arg5 ;
-(void)setReceivedRNFNotification:(BOOL)arg1 ;
-(void)_prepareForRestart;
-(id)createURLSessionTaskWithSession:(id)arg1 request:(id)arg2 ;
-(void)dataSession:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)didReceiveResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)didReceiveData:(id)arg1 ;
-(void)dataSession:(id)arg1 taskDidCompleteWithError:(id)arg2 ;
-(void)didCollectMetrics:(id)arg1 ;
-(NSURLSessionTask *)backingTask;
-(void)delegateAsync:(/*^block*/id)arg1 ;
-(void)setParsedResponse:(id<NSObject>)arg1 ;
-(NSURLRequest *)originalURLRequest;
-(void)notifyDelegateWithSession:(id)arg1 ;
-(NSURLSessionTaskMetrics *)urlTaskMetrics;
-(id)createURLRequest;
-(id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2 ;
-(void)updateRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)contentLengthString;
@end

