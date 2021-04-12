/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSURLRequest, NSURLResponse, __CFN_ConnectionMetrics, NSDictionary, __CFN_TaskMetrics, __CFN_SessionMetrics;

@interface __CFN_TransactionMetrics : NSObject <NSSecureCoding> {

	BOOL _scheduledOriginLoad;
	BOOL _firstOnConnection;
	BOOL _pushed;
	BOOL _APSRelayAttempted;
	BOOL _APSRelaySucceeded;
	NSUUID* _UUID;
	NSURLRequest* _request;
	NSURLRequest* _transferredRequest;
	NSURLResponse* _cachedResponse;
	NSURLResponse* _lastResponse;
	__CFN_ConnectionMetrics* _connectionMetrics;
	long long _requestHeaderSize;
	long long _requestBodySize;
	long long _requestBodyTransferSize;
	long long _responseHeaderSize;
	long long _responseBodySize;
	long long _responseBodyTransferSize;
	double _beginTime;
	double _endTime;
	double _cacheLookupBeginTime;
	double _cacheLookupEndTime;
	double _requestBeginTime;
	double _requestEndTime;
	double _responseBeginTime;
	double _responseEndTime;
	unsigned long long _endReason;
	long long _schedulingTier;
	NSDictionary* _tcpInfoBegin;
	NSDictionary* _tcpInfoEnd;
	NSDictionary* _subflowCountsBegin;
	NSDictionary* _subflowCountsEnd;
	long long _options;
	__CFN_TaskMetrics* _taskMetrics;
	__CFN_SessionMetrics* _sessionMetrics;
	long long _lastResponseHeaderSize;
	long long _lastResponseBodySize;
	long long _lastResponseBodyTransferSize;

}

@property (readonly) NSDictionary * legacyStaticMetrics; 
@property (assign,nonatomic,__weak) __CFN_TaskMetrics * taskMetrics;                   //@synthesize taskMetrics=_taskMetrics - In the implementation block
@property (nonatomic,retain) __CFN_SessionMetrics * sessionMetrics;                    //@synthesize sessionMetrics=_sessionMetrics - In the implementation block
@property (assign,nonatomic) long long lastResponseHeaderSize;                         //@synthesize lastResponseHeaderSize=_lastResponseHeaderSize - In the implementation block
@property (assign,nonatomic) long long lastResponseBodySize;                           //@synthesize lastResponseBodySize=_lastResponseBodySize - In the implementation block
@property (assign,nonatomic) long long lastResponseBodyTransferSize;                   //@synthesize lastResponseBodyTransferSize=_lastResponseBodyTransferSize - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                                            //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSURLRequest * request;                                   //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLRequest * transferredRequest;                        //@synthesize transferredRequest=_transferredRequest - In the implementation block
@property (nonatomic,retain) NSURLResponse * cachedResponse;                           //@synthesize cachedResponse=_cachedResponse - In the implementation block
@property (nonatomic,retain) NSURLResponse * lastResponse;                             //@synthesize lastResponse=_lastResponse - In the implementation block
@property (nonatomic,retain) __CFN_ConnectionMetrics * connectionMetrics;              //@synthesize connectionMetrics=_connectionMetrics - In the implementation block
@property (assign,nonatomic) BOOL scheduledOriginLoad;                                 //@synthesize scheduledOriginLoad=_scheduledOriginLoad - In the implementation block
@property (assign,nonatomic) BOOL firstOnConnection;                                   //@synthesize firstOnConnection=_firstOnConnection - In the implementation block
@property (assign,nonatomic) long long requestHeaderSize;                              //@synthesize requestHeaderSize=_requestHeaderSize - In the implementation block
@property (assign,nonatomic) long long requestBodySize;                                //@synthesize requestBodySize=_requestBodySize - In the implementation block
@property (assign,nonatomic) long long requestBodyTransferSize;                        //@synthesize requestBodyTransferSize=_requestBodyTransferSize - In the implementation block
@property (assign,nonatomic) long long responseHeaderSize;                             //@synthesize responseHeaderSize=_responseHeaderSize - In the implementation block
@property (assign,nonatomic) long long responseBodySize;                               //@synthesize responseBodySize=_responseBodySize - In the implementation block
@property (assign,nonatomic) long long responseBodyTransferSize;                       //@synthesize responseBodyTransferSize=_responseBodyTransferSize - In the implementation block
@property (assign,nonatomic) double beginTime;                                         //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic) double endTime;                                           //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) double cacheLookupBeginTime;                              //@synthesize cacheLookupBeginTime=_cacheLookupBeginTime - In the implementation block
@property (assign,nonatomic) double cacheLookupEndTime;                                //@synthesize cacheLookupEndTime=_cacheLookupEndTime - In the implementation block
@property (assign,nonatomic) double requestBeginTime;                                  //@synthesize requestBeginTime=_requestBeginTime - In the implementation block
@property (assign,nonatomic) double requestEndTime;                                    //@synthesize requestEndTime=_requestEndTime - In the implementation block
@property (assign,nonatomic) double responseBeginTime;                                 //@synthesize responseBeginTime=_responseBeginTime - In the implementation block
@property (assign,nonatomic) double responseEndTime;                                   //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (assign,nonatomic) unsigned long long endReason;                             //@synthesize endReason=_endReason - In the implementation block
@property (assign,getter=isPushed,nonatomic) BOOL pushed;                              //@synthesize pushed=_pushed - In the implementation block
@property (assign,nonatomic) long long schedulingTier;                                 //@synthesize schedulingTier=_schedulingTier - In the implementation block
@property (assign,nonatomic) BOOL APSRelayAttempted;                                   //@synthesize APSRelayAttempted=_APSRelayAttempted - In the implementation block
@property (assign,nonatomic) BOOL APSRelaySucceeded;                                   //@synthesize APSRelaySucceeded=_APSRelaySucceeded - In the implementation block
@property (nonatomic,retain) NSDictionary * tcpInfoBegin;                              //@synthesize tcpInfoBegin=_tcpInfoBegin - In the implementation block
@property (nonatomic,retain) NSDictionary * tcpInfoEnd;                                //@synthesize tcpInfoEnd=_tcpInfoEnd - In the implementation block
@property (nonatomic,retain) NSDictionary * subflowCountsBegin;                        //@synthesize subflowCountsBegin=_subflowCountsBegin - In the implementation block
@property (nonatomic,retain) NSDictionary * subflowCountsEnd;                          //@synthesize subflowCountsEnd=_subflowCountsEnd - In the implementation block
@property (assign,nonatomic) long long options;                                        //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nstatCountsFromTCPInfo:(id)arg1 ;
-(long long)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(NSURLRequest *)request;
-(void)setAPSRelaySucceeded:(BOOL)arg1 ;
-(void)setRequestBeginTime:(double)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(void)setAPSRelayAttempted:(BOOL)arg1 ;
-(void)requestEnd;
-(void)setRequestEndTime:(double)arg1 ;
-(void)setResponseBeginTime:(double)arg1 ;
-(void)importLegacyStaticMetricsFromAPSRelay:(id)arg1 ;
-(long long)requestHeaderSize;
-(long long)requestBodyTransferSize;
-(void)setRequestBodyTransferSize:(long long)arg1 ;
-(void)setRequestHeaderSize:(long long)arg1 ;
-(id)initWithRequest:(id)arg1 taskMetrics:(id)arg2 sessionMetrics:(id)arg3 ;
-(void)cacheLookupBegin;
-(void)cacheLookupEnd:(CFCachedURLResponseRef)arg1 ;
-(void)originLoad;
-(void)connectionCreate:(shared_ptr<TransportConnection>*)arg1 ;
-(void)requestBeginOnConnection:(id)arg1 ;
-(void)requestHeaderEnd;
-(void)requestBody:(id)arg1 ;
-(void)responseBegin;
-(void)responseHeaderEnd:(id)arg1 ;
-(void)responseBody:(CFDataRef)arg1 ;
-(void)responseEnd;
-(void)end:(unsigned long long)arg1 ;
-(NSURLRequest *)transferredRequest;
-(void)setTransferredRequest:(NSURLRequest *)arg1 ;
-(NSURLResponse *)cachedResponse;
-(void)setCachedResponse:(NSURLResponse *)arg1 ;
-(NSURLResponse *)lastResponse;
-(void)setLastResponse:(NSURLResponse *)arg1 ;
-(__CFN_ConnectionMetrics *)connectionMetrics;
-(void)setConnectionMetrics:(__CFN_ConnectionMetrics *)arg1 ;
-(BOOL)scheduledOriginLoad;
-(void)setScheduledOriginLoad:(BOOL)arg1 ;
-(BOOL)firstOnConnection;
-(void)setFirstOnConnection:(BOOL)arg1 ;
-(long long)requestBodySize;
-(void)setRequestBodySize:(long long)arg1 ;
-(long long)responseHeaderSize;
-(void)setResponseHeaderSize:(long long)arg1 ;
-(long long)responseBodySize;
-(void)setResponseBodySize:(long long)arg1 ;
-(long long)responseBodyTransferSize;
-(void)setResponseBodyTransferSize:(long long)arg1 ;
-(double)beginTime;
-(void)setBeginTime:(double)arg1 ;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(double)cacheLookupBeginTime;
-(void)setCacheLookupBeginTime:(double)arg1 ;
-(double)cacheLookupEndTime;
-(void)setCacheLookupEndTime:(double)arg1 ;
-(double)requestBeginTime;
-(double)requestEndTime;
-(double)responseBeginTime;
-(double)responseEndTime;
-(unsigned long long)endReason;
-(void)setEndReason:(unsigned long long)arg1 ;
-(BOOL)isPushed;
-(void)setPushed:(BOOL)arg1 ;
-(long long)schedulingTier;
-(void)setSchedulingTier:(long long)arg1 ;
-(BOOL)APSRelayAttempted;
-(BOOL)APSRelaySucceeded;
-(NSDictionary *)tcpInfoBegin;
-(void)setTcpInfoBegin:(NSDictionary *)arg1 ;
-(NSDictionary *)tcpInfoEnd;
-(void)setTcpInfoEnd:(NSDictionary *)arg1 ;
-(NSDictionary *)subflowCountsBegin;
-(void)setSubflowCountsBegin:(NSDictionary *)arg1 ;
-(NSDictionary *)subflowCountsEnd;
-(void)setSubflowCountsEnd:(NSDictionary *)arg1 ;
-(__CFN_TaskMetrics *)taskMetrics;
-(void)setTaskMetrics:(__CFN_TaskMetrics *)arg1 ;
-(__CFN_SessionMetrics *)sessionMetrics;
-(void)setSessionMetrics:(__CFN_SessionMetrics *)arg1 ;
-(long long)lastResponseHeaderSize;
-(void)setLastResponseHeaderSize:(long long)arg1 ;
-(long long)lastResponseBodySize;
-(void)setLastResponseBodySize:(long long)arg1 ;
-(long long)lastResponseBodyTransferSize;
-(void)setLastResponseBodyTransferSize:(long long)arg1 ;
-(NSDictionary *)legacyStaticMetrics;
@end

