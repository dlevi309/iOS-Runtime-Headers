/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSProgress, NSMutableArray, NSMutableDictionary, NSObject, ICRequestContext, NSData, ICURLResponseHandler, NSURLRequest, NSURLSessionTask, NSURLResponse, NSMutableData, NSURL, NSError, NSDictionary, NSString, ICURLPerformanceMetrics;

@interface ICURLRequest : NSObject <NSProgressReporting> {

	NSMutableArray* _observers;
	NSMutableDictionary* _maxRetryCounts;
	NSMutableDictionary* _retryCounts;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _observerQueue;
	BOOL _prioritize;
	BOOL _cancelOnHTTPErrors;
	NSProgress* _progress;
	ICRequestContext* _requestContext;
	unsigned long long _redirectCount;
	double _retryDelay;
	long long _requestState;
	NSData* _resumeData;
	ICURLResponseHandler* _responseHandler;
	NSURLRequest* _urlRequest;
	NSURLSessionTask* _task;
	long long _type;
	NSObject*<OS_dispatch_semaphore> _waitSemaphore;
	NSURLRequest* _currentURLRequest;
	NSURLResponse* _urlResponse;
	NSMutableData* _responseData;
	NSURL* _responseDataURL;
	NSError* _error;
	NSDictionary* _avDownloadOptions;
	long long _handlingType;
	NSString* _retryReason;
	double _startTime;
	double _lastUpdateTime;
	double _lastProgressUpdateTime;
	ICURLPerformanceMetrics* _performanceMetrics;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSURLRequest * urlRequest;                                                //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * task;                                                    //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) long long type;                                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> waitSemaphore;                             //@synthesize waitSemaphore=_waitSemaphore - In the implementation block
@property (nonatomic,retain) NSURLRequest * currentURLRequest;                                           //@synthesize currentURLRequest=_currentURLRequest - In the implementation block
@property (nonatomic,retain) NSURLResponse * urlResponse;                                                //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,retain) NSMutableData * responseData;                                               //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,retain) NSURL * responseDataURL;                                                    //@synthesize responseDataURL=_responseDataURL - In the implementation block
@property (nonatomic,retain) NSError * error;                                                            //@synthesize error=_error - In the implementation block
@property (setter=setAVDownloadOptions:,nonatomic,retain) NSDictionary * avDownloadOptions;              //@synthesize avDownloadOptions=_avDownloadOptions - In the implementation block
@property (assign,nonatomic) long long handlingType;                                                     //@synthesize handlingType=_handlingType - In the implementation block
@property (nonatomic,retain) NSString * retryReason;                                                     //@synthesize retryReason=_retryReason - In the implementation block
@property (nonatomic,readonly) unsigned long long retryCount; 
@property (assign,nonatomic) double startTime;                                                           //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double lastUpdateTime;                                                      //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (assign,nonatomic) double lastProgressUpdateTime;                                              //@synthesize lastProgressUpdateTime=_lastProgressUpdateTime - In the implementation block
@property (nonatomic,retain) ICURLPerformanceMetrics * performanceMetrics;                               //@synthesize performanceMetrics=_performanceMetrics - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                                      //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL prioritize;                                                            //@synthesize prioritize=_prioritize - In the implementation block
@property (assign,nonatomic) BOOL cancelOnHTTPErrors;                                                    //@synthesize cancelOnHTTPErrors=_cancelOnHTTPErrors - In the implementation block
@property (assign,nonatomic) unsigned long long maxRetryCount; 
@property (nonatomic,copy,readonly) ICRequestContext * requestContext;                                   //@synthesize requestContext=_requestContext - In the implementation block
@property (assign,nonatomic) unsigned long long redirectCount;                                           //@synthesize redirectCount=_redirectCount - In the implementation block
@property (assign,nonatomic) double retryDelay;                                                          //@synthesize retryDelay=_retryDelay - In the implementation block
@property (assign,nonatomic) long long requestState;                                                     //@synthesize requestState=_requestState - In the implementation block
@property (nonatomic,copy,readonly) NSData * resumeData;                                                 //@synthesize resumeData=_resumeData - In the implementation block
@property (nonatomic,retain) ICURLResponseHandler * responseHandler;                                     //@synthesize responseHandler=_responseHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_responseHandlerClass;
+(Class)_responseClass;
+(unsigned long long)_defaultMaxRetryCountForReason:(id)arg1 ;
-(void)setHandlingType:(long long)arg1 ;
-(NSString *)retryReason;
-(void)addObserver:(id)arg1 ;
-(id)initWithURL:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3 ;
-(void)updateState:(long long)arg1 ;
-(void)setRequestState:(long long)arg1 ;
-(NSURLSessionTask *)task;
-(long long)requestState;
-(NSProgress *)progress;
-(unsigned long long)retryCount;
-(BOOL)cancelOnHTTPErrors;
-(NSData *)resumeData;
-(void)setCompletionHandler:(id)arg1 ;
-(double)lastProgressUpdateTime;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3 ;
-(void)setPrioritize:(BOOL)arg1 ;
-(NSURLRequest *)currentURLRequest;
-(double)lastUpdateTime;
-(void)setPerformanceMetrics:(ICURLPerformanceMetrics *)arg1 ;
-(NSURLRequest *)urlRequest;
-(unsigned long long)_maxRetryCountForReason:(id)arg1 ;
-(void)_incrementRetryCountForReason:(id)arg1 ;
-(void)setCancelOnHTTPErrors:(BOOL)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(NSURL *)responseDataURL;
-(void)setMaxRetryCount:(unsigned long long)arg1 ;
-(void)setRetryDelay:(double)arg1 ;
-(void)_setMaxRetryCount:(unsigned long long)arg1 forReason:(id)arg2 ;
-(BOOL)prioritize;
-(ICRequestContext *)requestContext;
-(void)setTask:(NSURLSessionTask *)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)completionHandler;
-(void)setError:(NSError *)arg1 ;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(ICURLResponseHandler *)responseHandler;
-(NSDictionary *)avDownloadOptions;
-(void)setUrlResponse:(NSURLResponse *)arg1 ;
-(void)setResponseDataURL:(NSURL *)arg1 ;
-(NSError *)error;
-(id)initWithURL:(id)arg1 requestContext:(id)arg2 ;
-(unsigned long long)_retryCountForReason:(id)arg1 ;
-(void)setRedirectCount:(unsigned long long)arg1 ;
-(NSURLResponse *)urlResponse;
-(double)retryDelay;
-(NSObject*<OS_dispatch_semaphore>)waitSemaphore;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 ;
-(void)setAVDownloadOptions:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)maxRetryCount;
-(void)_ensureValidRetryReason:(id)arg1 ;
-(NSMutableData *)responseData;
-(ICURLPerformanceMetrics *)performanceMetrics;
-(void)setLastProgressUpdateTime:(double)arg1 ;
-(void)setCurrentURLRequest:(NSURLRequest *)arg1 ;
-(void)setWaitSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(unsigned long long)redirectCount;
-(void)setResponseHandler:(ICURLResponseHandler *)arg1 ;
-(void)setLastUpdateTime:(double)arg1 ;
-(void)setRetryReason:(NSString *)arg1 ;
-(long long)handlingType;
-(void)buildURLRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(long long)type;
-(double)startTime;
-(void)dealloc;
@end

