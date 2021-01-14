/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
*/

#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol PBSessionRequesterDelegate;
@class NSURL, NSOperationQueue, NSURLSession, NSURLSessionTask, NSMutableData, PBDataReader, NSMutableArray, NSDictionary, NSMutableDictionary, NSString, NSArray;

@interface PBSessionRequester : NSObject <NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate> {

	NSURL* _URL;
	id<PBSessionRequesterDelegate> _delegate;
	NSOperationQueue* _delegateQueue;
	NSURLSession* _session;
	NSURLSessionTask* _currentTask;
	NSOperationQueue* _sessionDelegateQ;
	NSMutableData* _data;
	PBDataReader* _dataReader;
	unsigned long long _lastGoodDataOffset;
	unsigned long long _uploadPayloadSize;
	unsigned long long _downloadPayloadSize;
	unsigned long long _timeRequestSent;
	unsigned long long _timeResponseReceived;
	long long _responseStatusCode;
	NSMutableArray* _requests;
	NSMutableArray* _responses;
	NSMutableArray* _internalRequests;
	NSMutableArray* _internalResponses;
	NSDictionary* _httpResponseHeaders;
	NSMutableDictionary* _httpRequestHeaders;
	double _timeoutSeconds;
	NSString* _logRequestToFile;
	NSString* _logResponseToFile;
	BOOL _didNotifyRequestCompleted;
	NSArray* _clientCertificates;
	NSDictionary* _connectionProperties;
	BOOL _shouldHandleCookies;
	NSString* _apsRelayTopic;
	unsigned long long _nwActivityDomain;
	unsigned long long _nwActivityLabel;
	struct {
		unsigned ignoresResponse : 1;
		unsigned loading : 1;
		unsigned needsCancel : 1;
		unsigned responseStatusSet : 1;
		unsigned parsedResponseHeader : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned delegateDidFinish : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidFailWithError : 1;
		unsigned paused : 1;
		unsigned resuming : 1;
	}  _flags;

}

@property (nonatomic,retain) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (__weak,readonly) id<PBSessionRequesterDelegate> delegate; 
@property (nonatomic,retain) NSURLSession * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * currentTask;                        //@synthesize currentTask=_currentTask - In the implementation block
@property (assign,nonatomic) BOOL ignoresResponse; 
@property (nonatomic,retain) NSString * logRequestToFile;                           //@synthesize logRequestToFile=_logRequestToFile - In the implementation block
@property (nonatomic,retain) NSString * logResponseToFile;                          //@synthesize logResponseToFile=_logResponseToFile - In the implementation block
@property (nonatomic,readonly) NSArray * requests; 
@property (nonatomic,readonly) unsigned long long uploadPayloadSize;                //@synthesize uploadPayloadSize=_uploadPayloadSize - In the implementation block
@property (nonatomic,readonly) unsigned long long downloadPayloadSize;              //@synthesize downloadPayloadSize=_downloadPayloadSize - In the implementation block
@property (nonatomic,readonly) unsigned long long requestResponseTime; 
@property (nonatomic,copy) NSString * apsRelayTopic;                                //@synthesize apsRelayTopic=_apsRelayTopic - In the implementation block
@property (assign,nonatomic) unsigned long long nwActivityDomain;                   //@synthesize nwActivityDomain=_nwActivityDomain - In the implementation block
@property (assign,nonatomic) unsigned long long nwActivityLabel;                    //@synthesize nwActivityLabel=_nwActivityLabel - In the implementation block
@property (assign,nonatomic) double timeoutSeconds;                                 //@synthesize timeoutSeconds=_timeoutSeconds - In the implementation block
@property (nonatomic,retain) NSArray * clientCertificates;                          //@synthesize clientCertificates=_clientCertificates - In the implementation block
@property (nonatomic,copy) NSDictionary * httpRequestHeaders; 
@property (nonatomic,retain) NSDictionary * httpResponseHeaders;                    //@synthesize httpResponseHeaders=_httpResponseHeaders - In the implementation block
@property (assign,nonatomic) BOOL shouldHandleCookies;                              //@synthesize shouldHandleCookies=_shouldHandleCookies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)usesEncodedMessages;
-(double)timeoutSeconds;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<PBSessionRequesterDelegate>)delegate;
-(void)start;
-(void)pause;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)shouldHandleCookies;
-(unsigned long long)nwActivityLabel;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSURLSession *)session;
-(NSArray *)requests;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(unsigned long long)requestResponseTime;
-(NSArray *)clientCertificates;
-(void)setClientCertificates:(NSArray *)arg1 ;
-(void)setCurrentTask:(NSURLSessionTask *)arg1 ;
-(NSURL *)URL;
-(void)setTimeoutSeconds:(double)arg1 ;
-(void)addRequest:(id)arg1 ;
-(void)clearRequests;
-(NSURLSessionTask *)currentTask;
-(void)cancel;
-(void)resume;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(BOOL)ignoresResponse;
-(void)setIgnoresResponse:(BOOL)arg1 ;
-(void)setNeedsCancel;
-(id)responseForRequest:(id)arg1 ;
-(id)internalRequests;
-(void)addInternalRequest:(id)arg1 ;
-(id)responseForInternalRequest:(id)arg1 ;
-(NSString *)apsRelayTopic;
-(void)handleResponse:(id)arg1 forInternalRequest:(id)arg2 ;
-(NSDictionary *)httpRequestHeaders;
-(void)setHttpRequestHeaders:(NSDictionary *)arg1 ;
-(void)setHttpRequestHeader:(id)arg1 forKey:(id)arg2 ;
-(id)requestPreamble;
-(void)writeRequest:(id)arg1 into:(id)arg2 ;
-(void)cancelWithErrorCode:(long long)arg1 ;
-(BOOL)readResponsePreamble:(id)arg1 ;
-(id)tryReadResponseData:(id)arg1 forRequest:(id)arg2 forResponseClass:(Class)arg3 ;
-(void)encodeRequestData:(id)arg1 startRequestCallback:(/*^block*/id)arg2 ;
-(id)decodeResponseData:(id)arg1 ;
-(id)newMutableURLRequestWithURL:(id)arg1 ;
-(id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 ;
-(id)newSessionWithDelegate:(id)arg1 delegateQueue:(id)arg2 connectionProperties:(id)arg3 ;
-(id)newSessionTaskOnSession:(id)arg1 withURLRequest:(id)arg2 ;
-(void)startWithConnectionProperties:(id)arg1 ;
-(NSDictionary *)httpResponseHeaders;
-(void)setHttpResponseHeaders:(NSDictionary *)arg1 ;
-(NSString *)logRequestToFile;
-(void)setLogRequestToFile:(NSString *)arg1 ;
-(NSString *)logResponseToFile;
-(void)setLogResponseToFile:(NSString *)arg1 ;
-(unsigned long long)uploadPayloadSize;
-(unsigned long long)downloadPayloadSize;
-(void)setShouldHandleCookies:(BOOL)arg1 ;
-(void)setApsRelayTopic:(NSString *)arg1 ;
-(unsigned long long)nwActivityDomain;
-(void)setNwActivityDomain:(unsigned long long)arg1 ;
-(void)setNwActivityLabel:(unsigned long long)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
@end

