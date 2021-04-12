/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol AMSURLHandling, AMSResponseDecoding, AMSRequestEncoding;
@class NSURLSessionConfiguration, AMSURLDelegateProxy, NSOperationQueue, NSURLSession, AMSURLSecurityPolicy, NSString;

@interface AMSURLSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	NSURLSessionConfiguration* _configuration;
	AMSURLDelegateProxy* _delegateProxy;
	NSOperationQueue* _delegateQueue;
	id<AMSURLHandling> _protocolHandler;
	id<AMSResponseDecoding> _responseDecoder;
	NSURLSession* _session;
	BOOL _invalidated;
	id<AMSRequestEncoding> _requestEncoder;
	AMSURLSecurityPolicy* _securityPolicy;

}

@property (nonatomic,retain) AMSURLDelegateProxy * delegateProxy;                                           //@synthesize delegateProxy=_delegateProxy - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                                              //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,retain) AMSURLSecurityPolicy * securityPolicy;                                         //@synthesize securityPolicy=_securityPolicy - In the implementation block
@property (nonatomic,readonly) NSURLSessionConfiguration * configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<NSURLSessionDelegate><AMSURLProtocolDelegate> delegate; 
@property (nonatomic,readonly) NSOperationQueue * delegateQueue;                                            //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) id<AMSURLHandling> protocolHandler;                                            //@synthesize protocolHandler=_protocolHandler - In the implementation block
@property (nonatomic,retain) id<AMSRequestEncoding> requestEncoder;                                         //@synthesize requestEncoder=_requestEncoder - In the implementation block
@property (nonatomic,retain) id<AMSResponseDecoding> responseDecoder;                                       //@synthesize responseDecoder=_responseDecoder - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                                                      //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultSession;
+(id)sharedAuthKitSession;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(AMSURLSecurityPolicy *)securityPolicy;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setResponseDecoder:(id<AMSResponseDecoding>)arg1 ;
-(id<AMSURLHandling>)protocolHandler;
-(id)dataTaskPromiseWithRequest:(id)arg1 ;
-(id)init;
-(BOOL)invalidated;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)delegate;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setProtocolHandler:(id<AMSURLHandling>)arg1 ;
-(void)setSecurityPolicy:(AMSURLSecurityPolicy *)arg1 ;
-(id)_handleURLAction:(id)arg1 task:(id)arg2 error:(id*)arg3 ;
-(void)_retryTask:(id)arg1 action:(id)arg2 error:(id*)arg3 ;
-(id<AMSRequestEncoding>)requestEncoder;
-(NSURLSession *)session;
-(void)setInvalidated:(BOOL)arg1 ;
-(id)_prepareRequest:(id)arg1 properties:(id)arg2 error:(id*)arg3 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDelegate:(id<NSURLSessionDelegate><AMSURLProtocolDelegate>)arg1 ;
-(void)setDelegateProxy:(AMSURLDelegateProxy *)arg1 ;
-(NSURLSessionConfiguration *)configuration;
-(id)_formatError:(id)arg1 task:(id)arg2 decodedObject:(id)arg3 ;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(NSOperationQueue *)delegateQueue;
-(id<AMSResponseDecoding>)responseDecoder;
-(void)invalidateAndCancel;
-(void)_completeTask:(id)arg1 decodedObject:(id)arg2 error:(id)arg3 ;
-(void)finishTasksAndInvalidate;
-(id)_createSharedDataForTask:(id)arg1 properties:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)dataTaskPromiseWithRequestPromise:(id)arg1 ;
-(AMSURLDelegateProxy *)delegateProxy;
-(void)dealloc;
-(void)setRequestEncoder:(id<AMSRequestEncoding>)arg1 ;
@end

