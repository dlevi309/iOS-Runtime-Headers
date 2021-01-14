/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEODataSessionTaskDelegate.h>

@protocol GEODataSessionTask, GEOProtobufSessionTaskDelegate, OS_dispatch_queue;
@class GEOProtobufSession, NSObject, NSError, PBCodable, GEOApplicationAuditToken, GEODataRequestThrottlerToken, NSString, GEOClientMetrics;

@interface GEOProtobufSessionTask : NSObject <GEODataSessionTaskDelegate> {

	Class _responseClass;
	id<GEODataSessionTask> _dataTask;
	GEOProtobufSession* _session;
	id<GEOProtobufSessionTaskDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSError* _error;
	PBCodable* _response;
	unsigned _requestTypeCode;
	SCD_Struct_GE91 _requestKind;
	GEOApplicationAuditToken* _auditToken;
	BOOL _completedAsCancelled;
	GEODataRequestThrottlerToken* _throttleToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL completedAsCancelled; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) PBCodable * response; 
@property (nonatomic,readonly) SCD_Struct_GE91 requestKind; 
@property (nonatomic,readonly) Class responseClass;                                           //@synthesize responseClass=_responseClass - In the implementation block
@property (nonatomic,retain) id<GEODataSessionTask> dataTask;                                 //@synthesize dataTask=_dataTask - In the implementation block
@property (assign,nonatomic,__weak) GEOProtobufSession * session;                             //@synthesize session=_session - In the implementation block
@property (assign,nonatomic,__weak) id<GEOProtobufSessionTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,nonatomic) BOOL completedAsCancelled;                                       //@synthesize completedAsCancelled=_completedAsCancelled - In the implementation block
@property (nonatomic,retain) NSError * error;                                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) PBCodable * response;                                            //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) unsigned requestTypeCode;                                      //@synthesize requestTypeCode=_requestTypeCode - In the implementation block
@property (nonatomic,readonly) unsigned long long outgoingPayloadSize; 
@property (nonatomic,readonly) unsigned long long incomingPayloadSize; 
@property (nonatomic,readonly) NSString * remoteAddressAndPort; 
@property (nonatomic,readonly) GEOClientMetrics * clientMetrics; 
@property (nonatomic,readonly) unsigned long long requestedMultipathServiceType; 
@property (nonatomic,readonly) BOOL mptcpNegotiated; 
@property (nonatomic,readonly) BOOL receivedRNFNotification; 
-(BOOL)receivedRNFNotification;
-(GEOClientMetrics *)clientMetrics;
-(Class)responseClass;
-(unsigned long long)incomingPayloadSize;
-(id)init;
-(BOOL)mptcpNegotiated;
-(id<GEOProtobufSessionTaskDelegate>)delegate;
-(void)start;
-(void)dataSession:(id)arg1 didCompleteTask:(id)arg2 ;
-(void)dataSession:(id)arg1 didCompleteSubtask:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)completedAsCancelled;
-(unsigned)requestTypeCode;
-(BOOL)parsePreambleWithReader:(id)arg1 ;
-(NSString *)debugDescription;
-(NSString *)remoteAddressAndPort;
-(GEOProtobufSession *)session;
-(void)setError:(NSError *)arg1 ;
-(BOOL)parseResponseTypeWithReader:(id)arg1 ;
-(void)dataSession:(id)arg1 willSendRequest:(id)arg2 forTask:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSError *)error;
-(unsigned long long)outgoingPayloadSize;
-(void)setDelegate:(id<GEOProtobufSessionTaskDelegate>)arg1 ;
-(id<GEODataSessionTask>)dataTask;
-(NSString *)description;
-(unsigned long long)requestedMultipathServiceType;
-(void)setSession:(GEOProtobufSession *)arg1 ;
-(SCD_Struct_GE91)requestKind;
-(void)setCompletedAsCancelled:(BOOL)arg1 ;
-(PBCodable *)response;
-(void)setResponse:(PBCodable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)completeWithErrorCode:(long long)arg1 ;
-(id)parseInnerProtobufFromData:(id)arg1 ;
-(BOOL)parseProtocolVersionWithReader:(id)arg1 ;
-(void)setDataTask:(id<GEODataSessionTask>)arg1 ;
-(void)_decodeResponseFromTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancel;
-(id)initWithSession:(id)arg1 requestTypeCode:(unsigned)arg2 responseClass:(Class)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 requestKind:(SCD_Struct_GE91)arg6 auditToken:(id)arg7 throttleToken:(id)arg8 ;
-(void)updateDataRequest:(id)arg1 withNewProtobufRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)parseResponseFromResponseData:(id)arg1 ;
-(void)completeWithCancelled:(BOOL)arg1 error:(id)arg2 response:(id)arg3 ;
@end

