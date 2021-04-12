/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSessionTask.h>
#import <libobjc.A.dylib/GEODataSessionUpdatableTask.h>

@protocol GEODataSessionTaskDelegate, OS_dispatch_queue, OS_os_activity, NSObject, OS_voucher;
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
	SCD_Struct_GE91 _requestKind;
	BOOL _mptcpNegotiated;
	BOOL _receivedRNFNotification;
	float _priority;
	unsigned _sessionIdentifier;
	BOOL _backingTaskNeedsResume;
	BOOL _finished;
	unsigned _qos;
	NSObject*<OS_os_activity> _activity;
	id<NSObject> _parsedResponse;
	NSDate* _originalStartDate;
	NSObject*<OS_voucher> _voucher;

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
@property (nonatomic,readonly) SCD_Struct_GE91 requestKind;                                   //@synthesize requestKind=_requestKind - In the implementation block
@property (assign) float priority; 
@property (nonatomic,readonly) BOOL protocolBufferHasPreamble; 
@property (nonatomic,readonly) NSURLSessionTaskMetrics * urlTaskMetrics;                      //@synthesize urlTaskMetrics=_urlTaskMetrics - In the implementation block
@property (nonatomic,copy,readonly) NSURL * downloadedFileURL; 
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
@property (nonatomic,readonly) id<NSObject> parsedResponse; 
@property (nonatomic,readonly) unsigned long long requestedMultipathServiceType; 
@property (nonatomic,readonly) BOOL mptcpNegotiated;                                          //@synthesize mptcpNegotiated=_mptcpNegotiated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)loadTime;
-(NSData *)cachedData;
-(double)loadTimeIncludingTask:(id)arg1 ;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(long long)HTTPStatusCode;
-(id<NSObject>)parsedResponse;
-(NSURL *)originalRequestURL;
-(unsigned long long)contentLength;
-(BOOL)receivedRNFNotification;
-(BOOL)failedDueToCancel;
-(NSData *)receivedData;
-(BOOL)validateTileResponse:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)protocolBufferHasPreamble;
-(NSString *)entityTag;
-(BOOL)didValidateEntityTagForData:(id*)arg1 entityTag:(id*)arg2 ;
-(GEOClientMetrics *)clientMetrics;
-(NSURLSessionTaskMetrics *)urlTaskMetrics;
-(BOOL)validateNonEmptyResponseWithError:(id*)arg1 ;
-(BOOL)finished;
-(unsigned long long)incomingPayloadSize;
-(void)didReceiveResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSURL *)downloadedFileURL;
-(id)init;
-(BOOL)mptcpNegotiated;
-(void)notifyDelegateWithSession:(id)arg1 ;
-(id<GEODataSessionTaskDelegate>)delegate;
-(void)start;
-(NSObject*<OS_os_activity>)activity;
-(void)_prepareForRestart;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(SCD_Struct_GE91)arg4 priority:(float)arg5 ;
-(NSString *)debugDescription;
-(void)_start;
-(NSString *)remoteAddressAndPort;
-(void)setError:(NSError *)arg1 ;
-(NSString *)contentLengthString;
-(NSURLSessionTask *)backingTask;
-(GEODataRequest *)request;
-(NSError *)error;
-(id)createURLRequest;
-(void)setSessionIdentifier:(unsigned)arg1 ;
-(unsigned)sessionIdentifier;
-(BOOL)validateContentLengthWithError:(id*)arg1 ;
-(unsigned long long)outgoingPayloadSize;
-(double)elapsedTime;
-(void)setReceivedRNFNotification:(BOOL)arg1 ;
-(void)setParsedResponse:(id<NSObject>)arg1 ;
-(NSString *)description;
-(unsigned long long)requestedMultipathServiceType;
-(SCD_Struct_GE91)requestKind;
-(id)_createBackingTaskWithRequest:(id)arg1 session:(id)arg2 ;
-(NSHTTPURLResponse *)response;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)didReceiveData:(id)arg1 ;
-(void)dataSession:(id)arg1 willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setCachedData:(NSData *)arg1 ;
-(void)delegateAsync:(/*^block*/id)arg1 ;
-(void)updateRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dataSession:(id)arg1 taskDidCompleteWithError:(id)arg2 ;
-(NSURLRequest *)originalURLRequest;
-(void)cancel;
-(float)priority;
-(double)startTime;
-(id)createURLSessionTaskWithSession:(id)arg1 request:(id)arg2 ;
-(void)didCollectMetrics:(id)arg1 ;
-(void)setPriority:(float)arg1 ;
@end

