/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/SSURLSessionManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSNumber, SSBag, NSData, SSURLRequestProperties, NSString, NSURLCache, SSAuthenticationContext, NSMutableData, ISDataProvider, NSCountedSet, SSMutableURLRequestProperties, NSURLResponse, SSURLSessionManager, NSURLSessionTask, NSURLRequest, NSObject, SSHTTPArchive, ISURLRequestPerformance, NSArray;

@interface ISURLOperation : ISOperation <SSURLSessionManagerDelegate> {

	SSAuthenticationContext* _authenticationContext;
	NSMutableData* _dataBuffer;
	ISDataProvider* _dataProvider;
	long long _networkRetryCount;
	NSCountedSet* _redirectURLs;
	SSMutableURLRequestProperties* _requestProperties;
	NSURLResponse* _response;
	BOOL _shouldSetCookies;
	SSURLSessionManager* _urlSessionManager;
	NSURLSessionTask* _urlSessionTask;
	BOOL _usesPrivateCookieStore;
	NSURLRequest* _activeURLRequest;
	NSObject*<OS_dispatch_queue> _dataBufferAccessQueue;
	SSHTTPArchive* _httpArchive;
	ISURLRequestPerformance* _performanceMetrics;
	BOOL _loadsHTTPFailures;
	BOOL _uploadProgressRequested;
	NSString* _logKey;
	NSArray* _passThroughErrors;
	NSNumber* __accountDSIDOverride;

}

@property (setter=_setAccountDSIDOverride:,nonatomic,retain) NSNumber * _accountDSIDOverride;                            //@synthesize _accountDSIDOverride=__accountDSIDOverride - In the implementation block
@property (setter=_setActiveURLRequest:,retain) NSURLRequest * _activeURLRequest; 
@property (setter=_setLoadsHTTPFailures:,getter=_loadsHTTPFailures) BOOL _loadsHTTPFailures;                             //@synthesize loadsHTTPFailures=_loadsHTTPFailures - In the implementation block
@property (setter=_setUsesPrivateCookieStore:,getter=_usesPrivateCookieStore) BOOL _usesPrivateCookieStore;              //@synthesize usesPrivateCookieStore=_usesPrivateCookieStore - In the implementation block
@property (retain) NSURLResponse * response;                                                                             //@synthesize response=_response - In the implementation block
@property (readonly) SSHTTPArchive * HTTPArchive; 
@property (readonly) ISURLRequestPerformance * performanceMetrics; 
@property (setter=_setShouldSetCookies:,getter=_shouldSetCookies) BOOL _shouldSetCookies;                                //@synthesize shouldSetCookies=_shouldSetCookies - In the implementation block
@property (assign) BOOL tracksPerformanceMetrics; 
@property (assign,getter=isUploadProgressRequested,nonatomic) BOOL uploadProgressRequested;                              //@synthesize uploadProgressRequested=_uploadProgressRequested - In the implementation block
@property (copy,readonly) NSURLRequest * activeURLRequest;                                                               //@synthesize activeURLRequest=_activeURLRequest - In the implementation block
@property (__weak) id<ISURLOperationDelegate> delegate; 
@property (retain) ISDataProvider * dataProvider;                                                                        //@synthesize dataProvider=_dataProvider - In the implementation block
@property (retain) SSAuthenticationContext * authenticationContext;                                                      //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (retain) NSString * logKey;                                                                                    //@synthesize logKey=_logKey - In the implementation block
@property (nonatomic,retain) NSArray * passThroughErrors;                                                                //@synthesize passThroughErrors=_passThroughErrors - In the implementation block
@property (copy) SSURLRequestProperties * requestProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSessionDuration; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentage; 
@property (nonatomic,readonly) NSNumber * metricsLoadURLSamplingPercentageCachedResponses; 
@property (nonatomic,readonly) SSBag * bag; 
@property (nonatomic,readonly) BOOL isURLBagRequest; 
@property (nonatomic,readonly) NSData * rawResponseData; 
@property (nonatomic,readonly) BOOL shouldDisableCellular; 
@property (nonatomic,readonly) BOOL shouldRequireCellular; 
@property (nonatomic,readonly) BOOL shouldSetCookies; 
@property (nonatomic,readonly) NSData * sourceAppAuditTokenData; 
@property (nonatomic,readonly) NSString * sourceAppBundleID; 
@property (nonatomic,readonly) NSURLCache * URLCache; 
@property (nonatomic,readonly) NSString * URLCacheID; 
+(CFURLCacheRef)sharedCFURLCache;
+(id)copyUserAgent;
+(CFURLStorageSessionRef)_sharedCacheStorageSession;
-(id)init;
-(void)dealloc;
-(void)run;
-(void)setRequest:(id)arg1 ;
-(id)request;
-(NSURLResponse *)response;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(id)_accountIdentifier;
-(NSURLCache *)URLCache;
-(void)_sendResponseToDelegate:(id)arg1 ;
-(void)_run;
-(void)_updateProgress;
-(void)setDataProvider:(ISDataProvider *)arg1 ;
-(ISDataProvider *)dataProvider;
-(void)setRequestProperties:(SSURLRequestProperties *)arg1 ;
-(NSString *)logKey;
-(void)setLogKey:(NSString *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)_retry;
-(NSNumber *)metricsLoadURLSessionDuration;
-(NSNumber *)metricsLoadURLSamplingPercentage;
-(NSNumber *)metricsLoadURLSamplingPercentageCachedResponses;
-(void)_stopIfCancelled;
-(id)URLSession:(id)arg1 task:(id)arg2 decodedDataForResponseData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithEvent:(id)arg3 error:(id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCreatingHTTPArchive:(id)arg3 ;
-(NSData *)rawResponseData;
-(SSURLRequestProperties *)requestProperties;
-(BOOL)shouldDisableCellular;
-(BOOL)shouldRequireCellular;
-(BOOL)shouldSetCookies;
-(NSData *)sourceAppAuditTokenData;
-(NSString *)sourceAppBundleID;
-(NSString *)URLCacheID;
-(id)_requestProperties;
-(BOOL)_shouldSetCookies;
-(NSURLRequest *)activeURLRequest;
-(void)_setUsesPrivateCookieStore:(BOOL)arg1 ;
-(ISURLRequestPerformance *)performanceMetrics;
-(void)setPassThroughErrors:(NSArray *)arg1 ;
-(void)setTracksPerformanceMetrics:(BOOL)arg1 ;
-(id)_activeURL;
-(id)newRequestWithURL:(id)arg1 ;
-(id)_errorWithDomain:(id)arg1 code:(long long)arg2 ;
-(NSURLRequest *)_activeURLRequest;
-(id)_stringForCachePolicy:(unsigned long long)arg1 ;
-(void)handleResponse:(id)arg1 ;
-(id)initWithSessionManager:(id)arg1 ;
-(id)_copyAuthenticationContext;
-(id)_sanitizedURLForURL:(id)arg1 ;
-(id)_copyQueryStringDictionaryForRedirect:(id)arg1 ;
-(void)_setActiveURLRequest:(id)arg1 ;
-(BOOL)_usesPrivateCookieStore;
-(id)_decodedDataForData:(id)arg1 ;
-(void)_handleFinishedLoading;
-(id)_sanitizedDescriptionForObject:(id)arg1 ;
-(id)_errorWithDefaultStringsForError:(id)arg1 ;
-(void)_stopConnection;
-(long long)_defaultAuthChallengeDispositionForChallenge:(id)arg1 ;
-(BOOL)isUploadProgressRequested;
-(id)_sanitizedStringForString:(id)arg1 ;
-(BOOL)_shouldFollowRedirectWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)_handleRedirectRequest:(id)arg1 response:(id)arg2 ;
-(void)_handleReceivedData:(id)arg1 ;
-(void)_handleReceivedResponse:(id)arg1 ;
-(NSNumber *)_accountDSIDOverride;
-(BOOL)_processResponseData:(id)arg1 error:(id*)arg2 ;
-(void)_logResponseBody:(id)arg1 ;
-(void)_sendOutputToDelegate:(id)arg1 ;
-(BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2 ;
-(BOOL)_isPassThroughStatus:(long long)arg1 ;
-(BOOL)_loadsHTTPFailures;
-(void)_sendContentLengthToDelegate:(long long)arg1 ;
-(BOOL)_validateContentLength:(long long)arg1 error:(id*)arg2 ;
-(void)_willSendRequest:(id)arg1 ;
-(NSArray *)passThroughErrors;
-(void)_sendRequestToDelegate:(id)arg1 ;
-(void)_logRequest:(id)arg1 ;
-(BOOL)_runRequestWithURL:(id)arg1 dataConnectionServiceType:(CFStringRef)arg2 ;
-(BOOL)_isExternalURL:(id)arg1 ;
-(BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2 ;
-(SSHTTPArchive *)HTTPArchive;
-(BOOL)tracksPerformanceMetrics;
-(id)_copyConnectionPropertiesWithDataConnectionServiceType:(CFStringRef)arg1 ;
-(void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)_setLoadsHTTPFailures:(BOOL)arg1 ;
-(void)_setShouldSetCookies:(BOOL)arg1 ;
-(void)setUploadProgressRequested:(BOOL)arg1 ;
-(void)_setAccountDSIDOverride:(id)arg1 ;
@end

