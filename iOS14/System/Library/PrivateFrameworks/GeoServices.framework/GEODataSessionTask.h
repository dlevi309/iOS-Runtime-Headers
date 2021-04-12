/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>
#import <libobjc.A.dylib/GEODataSessionTask.h>
@class NSData, NSURL, NSError, NSString, GEOClientMetrics;


@protocol GEODataSessionTask <NSObject>
@property (nonatomic,readonly) NSData * receivedData; 
@property (nonatomic,copy,readonly) NSURL * downloadedFileURL; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) BOOL protocolBufferHasPreamble; 
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (nonatomic,readonly) BOOL failedDueToCancel; 
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
@property (nonatomic,readonly) id<NSObject> parsedResponse; 
@property (nonatomic,readonly) unsigned long long requestedMultipathServiceType; 
@property (nonatomic,readonly) BOOL mptcpNegotiated; 
@property (nonatomic,readonly) BOOL receivedRNFNotification; 
@required
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(id<NSObject>)parsedResponse;
-(BOOL)receivedRNFNotification;
-(BOOL)failedDueToCancel;
-(NSData *)receivedData;
-(BOOL)protocolBufferHasPreamble;
-(GEOClientMetrics *)clientMetrics;
-(unsigned long long)incomingPayloadSize;
-(NSURL *)downloadedFileURL;
-(BOOL)mptcpNegotiated;
-(void)start;
-(NSString *)remoteAddressAndPort;
-(NSError *)error;
-(unsigned long long)outgoingPayloadSize;
-(unsigned long long)requestedMultipathServiceType;
-(void)cancel;

@end


@protocol GEODataSessionTaskDelegate, OS_dispatch_queue, OS_os_activity, GEODataSessionTask;
@class NSData, NSURL, NSError, NSString, GEOClientMetrics, GEODataSession, NSObject, GEODataURLSessionTask;

@interface GEODataSessionTask : NSObject <GEODataSessionTaskDelegate, GEODataSessionTask> {

	id<GEODataSessionTaskDelegate> _delegate;
	GEODataSession* _session;
	NSObject*<OS_dispatch_queue> _sessionIsolation;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_os_activity> _activity;
	id<GEODataSessionTask> _completedSubtask;
	GEODataURLSessionTask* _urlTask;
	SCD_Struct_GE91 _requestKind;
	double _startTime;
	double _endTime;
	BOOL _didStart;
	BOOL _willSendRequestDelegateCalled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * entityTag; 
@property (nonatomic,readonly) NSData * receivedData; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (nonatomic,readonly) long long responseSource; 
@property (nonatomic,readonly) BOOL protocolBufferHasPreamble; 
@property (nonatomic,readonly) NSURL * originalRequestURL; 
@property (nonatomic,readonly) double elapsedTime; 
@property (nonatomic,readonly) double loadTime; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sessionIsolation;                 //@synthesize sessionIsolation=_sessionIsolation - In the implementation block
@property (assign,nonatomic,__weak) id<GEODataSessionTaskDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) GEODataSession * session;                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) GEODataURLSessionTask * urlTask;                                 //@synthesize urlTask=_urlTask - In the implementation block
@property (nonatomic,retain) id<GEODataSessionTask> completedSubtask;                         //@synthesize completedSubtask=_completedSubtask - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_activity> activity;                            //@synthesize activity=_activity - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE91 requestKind;                                   //@synthesize requestKind=_requestKind - In the implementation block
@property (assign) float priority; 
@property (nonatomic,copy,readonly) NSURL * downloadedFileURL; 
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) BOOL failedDueToCancel; 
@property (nonatomic,readonly) id<GEORequestCounterTicket> requestCounterTicket; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
@property (nonatomic,readonly) id<NSObject> parsedResponse; 
@property (nonatomic,readonly) unsigned long long requestedMultipathServiceType; 
@property (nonatomic,readonly) BOOL mptcpNegotiated; 
@property (nonatomic,readonly) BOOL receivedRNFNotification; 
-(double)loadTime;
-(double)loadTimeIncludingTask:(id)arg1 ;
-(id<GEORequestCounterTicket>)requestCounterTicket;
-(id<NSObject>)parsedResponse;
-(NSURL *)originalRequestURL;
-(BOOL)receivedRNFNotification;
-(BOOL)failedDueToCancel;
-(NSData *)receivedData;
-(NSObject*<OS_dispatch_queue>)sessionIsolation;
-(BOOL)validateTileResponse:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)protocolBufferHasPreamble;
-(NSString *)entityTag;
-(BOOL)didValidateEntityTagForData:(id*)arg1 entityTag:(id*)arg2 ;
-(GEOClientMetrics *)clientMetrics;
-(unsigned long long)incomingPayloadSize;
-(NSURL *)downloadedFileURL;
-(GEODataURLSessionTask *)urlTask;
-(BOOL)mptcpNegotiated;
-(id<GEODataSessionTaskDelegate>)delegate;
-(void)start;
-(NSObject*<OS_os_activity>)activity;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(BOOL)validateTransportWithError:(id*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)remoteAddressAndPort;
-(GEODataSession *)session;
-(void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSError *)error;
-(unsigned long long)outgoingPayloadSize;
-(BOOL)getHeaderValue:(id*)arg1 forField:(id)arg2 ;
-(void)setDelegate:(id<GEODataSessionTaskDelegate>)arg1 ;
-(double)elapsedTime;
-(long long)responseSource;
-(NSString *)description;
-(void)setCompletedSubtask:(id<GEODataSessionTask>)arg1 ;
-(unsigned long long)requestedMultipathServiceType;
-(void)setSession:(GEODataSession *)arg1 ;
-(SCD_Struct_GE91)requestKind;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id<GEODataSessionTask>)completedSubtask;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 requestKind:(SCD_Struct_GE91)arg4 requestCounterTicket:(id)arg5 ;
-(void)_didCompleteSubtask:(id)arg1 ;
-(void)cancel;
-(float)priority;
-(void)setUrlTask:(GEODataURLSessionTask *)arg1 ;
-(void)setPriority:(float)arg1 ;
@end

