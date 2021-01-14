/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/JXURLConnectionOperation.h>

@protocol JXHTTPOperationDelegate, JXHTTPRequestBody, OS_dispatch_queue;
@class NSObject, NSString, NSURLAuthenticationChallenge, NSURLCredential, NSArray, NSNumber, NSDate, NSURL, NSDictionary;

@interface JXHTTPOperation : JXURLConnectionOperation {

	BOOL _useCredentialStorage;
	BOOL _trustAllHosts;
	BOOL _updatesNetworkActivityIndicator;
	BOOL _performsBlocksOnMainQueue;
	NSObject*<JXHTTPOperationDelegate> _delegate;
	NSObject*<JXHTTPRequestBody> _requestBody;
	NSString* _uniqueString;
	NSString* _responseDataFilePath;
	id _userObject;
	NSURLAuthenticationChallenge* _authenticationChallenge;
	NSURLCredential* _credential;
	NSArray* _trustedHosts;
	NSString* _username;
	NSString* _password;
	NSNumber* _downloadProgress;
	NSNumber* _uploadProgress;
	NSDate* _startDate;
	NSDate* _finishDate;
	/*^block*/id _willStartBlock;
	/*^block*/id _willNeedNewBodyStreamBlock;
	/*^block*/id _willSendRequestForAuthenticationChallengeBlock;
	/*^block*/id _didStartBlock;
	/*^block*/id _didReceiveResponseBlock;
	/*^block*/id _didReceiveDataBlock;
	/*^block*/id _didSendDataBlock;
	/*^block*/id _didFinishLoadingBlock;
	/*^block*/id _didFailBlock;
	/*^block*/id _willCacheResponseBlock;
	/*^block*/id _willSendRequestRedirectBlock;
	NSObject*<OS_dispatch_queue> _blockQueue;

}

@property (assign,nonatomic) unsigned long long requestCachePolicy; 
@property (assign,nonatomic) BOOL requestShouldUsePipelining; 
@property (nonatomic,retain) NSURL * requestMainDocumentURL; 
@property (assign,nonatomic) double requestTimeoutInterval; 
@property (assign,nonatomic) unsigned long long requestNetworkServiceType; 
@property (nonatomic,retain) NSURL * requestURL; 
@property (nonatomic,retain) NSDictionary * requestHeaders; 
@property (nonatomic,retain) NSString * requestMethod; 
@property (assign,nonatomic) BOOL requestShouldHandleCookies; 
@property (retain) NSURLAuthenticationChallenge * authenticationChallenge;              //@synthesize authenticationChallenge=_authenticationChallenge - In the implementation block
@property (retain) NSNumber * downloadProgress;                                         //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (retain) NSNumber * uploadProgress;                                           //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (retain) NSString * uniqueString;                                             //@synthesize uniqueString=_uniqueString - In the implementation block
@property (retain) NSDate * startDate;                                                  //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * finishDate;                                                 //@synthesize finishDate=_finishDate - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> blockQueue;                             //@synthesize blockQueue=_blockQueue - In the implementation block
@property (__weak) NSObject*<JXHTTPOperationDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSObject*<JXHTTPRequestBody> requestBody;                            //@synthesize requestBody=_requestBody - In the implementation block
@property (nonatomic,copy) NSString * responseDataFilePath;                             //@synthesize responseDataFilePath=_responseDataFilePath - In the implementation block
@property (retain) id userObject;                                                       //@synthesize userObject=_userObject - In the implementation block
@property (retain) NSURLCredential * credential;                                        //@synthesize credential=_credential - In the implementation block
@property (assign) BOOL useCredentialStorage;                                           //@synthesize useCredentialStorage=_useCredentialStorage - In the implementation block
@property (assign) BOOL trustAllHosts;                                                  //@synthesize trustAllHosts=_trustAllHosts - In the implementation block
@property (copy) NSArray * trustedHosts;                                                //@synthesize trustedHosts=_trustedHosts - In the implementation block
@property (copy) NSString * username;                                                   //@synthesize username=_username - In the implementation block
@property (copy) NSString * password;                                                   //@synthesize password=_password - In the implementation block
@property (assign) BOOL updatesNetworkActivityIndicator;                                //@synthesize updatesNetworkActivityIndicator=_updatesNetworkActivityIndicator - In the implementation block
@property (readonly) double elapsedSeconds; 
@property (assign) BOOL performsBlocksOnMainQueue;                                      //@synthesize performsBlocksOnMainQueue=_performsBlocksOnMainQueue - In the implementation block
@property (copy) id willStartBlock;                                                     //@synthesize willStartBlock=_willStartBlock - In the implementation block
@property (copy) id willNeedNewBodyStreamBlock;                                         //@synthesize willNeedNewBodyStreamBlock=_willNeedNewBodyStreamBlock - In the implementation block
@property (copy) id willSendRequestForAuthenticationChallengeBlock;                     //@synthesize willSendRequestForAuthenticationChallengeBlock=_willSendRequestForAuthenticationChallengeBlock - In the implementation block
@property (copy) id didStartBlock;                                                      //@synthesize didStartBlock=_didStartBlock - In the implementation block
@property (copy) id didReceiveResponseBlock;                                            //@synthesize didReceiveResponseBlock=_didReceiveResponseBlock - In the implementation block
@property (copy) id didReceiveDataBlock;                                                //@synthesize didReceiveDataBlock=_didReceiveDataBlock - In the implementation block
@property (copy) id didSendDataBlock;                                                   //@synthesize didSendDataBlock=_didSendDataBlock - In the implementation block
@property (copy) id didFinishLoadingBlock;                                              //@synthesize didFinishLoadingBlock=_didFinishLoadingBlock - In the implementation block
@property (copy) id didFailBlock;                                                       //@synthesize didFailBlock=_didFailBlock - In the implementation block
@property (copy) id willCacheResponseBlock;                                             //@synthesize willCacheResponseBlock=_willCacheResponseBlock - In the implementation block
@property (copy) id willSendRequestRedirectBlock;                                       //@synthesize willSendRequestRedirectBlock=_willSendRequestRedirectBlock - In the implementation block
+(id)withURLString:(id)arg1 ;
+(id)withURLString:(id)arg1 queryParameters:(id)arg2 ;
-(id)responseMIMEType;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(NSURLCredential *)credential;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)init;
-(BOOL)connectionShouldUseCredentialStorage:(id)arg1 ;
-(NSObject*<JXHTTPOperationDelegate>)delegate;
-(id)userObject;
-(NSDate *)startDate;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setRequestCachePolicy:(unsigned long long)arg1 ;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(long long)responseStatusCode;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)setRequestURL:(NSURL *)arg1 ;
-(NSURLAuthenticationChallenge *)authenticationChallenge;
-(unsigned long long)requestCachePolicy;
-(void)setCredential:(NSURLCredential *)arg1 ;
-(NSString *)password;
-(NSNumber *)downloadProgress;
-(NSString *)username;
-(void)setDelegate:(NSObject*<JXHTTPOperationDelegate>)arg1 ;
-(id)responseData;
-(NSString *)uniqueString;
-(void)main;
-(void)setPassword:(NSString *)arg1 ;
-(NSURL *)requestURL;
-(void)setDownloadProgress:(NSNumber *)arg1 ;
-(id)responseHeaders;
-(double)elapsedSeconds;
-(NSDictionary *)requestHeaders;
-(void)setRequestHeaders:(NSDictionary *)arg1 ;
-(void)setRequestBody:(NSObject*<JXHTTPRequestBody>)arg1 ;
-(void)setRequestMethod:(NSString *)arg1 ;
-(NSString *)requestMethod;
-(NSObject*<JXHTTPRequestBody>)requestBody;
-(void)dealloc;
-(NSNumber *)uploadProgress;
-(double)requestTimeoutInterval;
-(void)setRequestTimeoutInterval:(double)arg1 ;
-(void)setUserObject:(id)arg1 ;
-(void)willFinish;
-(id)responseJSON;
-(id)responseString;
-(void)setUploadProgress:(NSNumber *)arg1 ;
-(void)setAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg1 ;
-(void)performDelegateMethod:(SEL)arg1 ;
-(/*^block*/id)blockForSelector:(SEL)arg1 ;
-(void)setUniqueString:(NSString *)arg1 ;
-(NSDate *)finishDate;
-(void)setFinishDate:(NSDate *)arg1 ;
-(BOOL)performsBlocksOnMainQueue;
-(void)setPerformsBlocksOnMainQueue:(BOOL)arg1 ;
-(id)willStartBlock;
-(void)setWillStartBlock:(id)arg1 ;
-(id)didStartBlock;
-(void)setDidStartBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)blockQueue;
-(void)setBlockQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)requestNetworkServiceType;
-(void)setRequestNetworkServiceType:(unsigned long long)arg1 ;
-(BOOL)requestShouldHandleCookies;
-(void)setRequestShouldHandleCookies:(BOOL)arg1 ;
-(void)addValue:(id)arg1 forRequestHeader:(id)arg2 ;
-(void)setValue:(id)arg1 forRequestHeader:(id)arg2 ;
-(id)responseStatusString;
-(long long)responseExpectedContentLength;
-(id)responseExpectedFileName;
-(id)responseTextEncodingName;
-(id)responseURL;
-(BOOL)requestShouldUsePipelining;
-(void)setRequestShouldUsePipelining:(BOOL)arg1 ;
-(NSURL *)requestMainDocumentURL;
-(void)setRequestMainDocumentURL:(NSURL *)arg1 ;
-(void)finalizeRequestBody;
-(void)setResponseDataFilePath:(NSString *)arg1 ;
-(NSString *)responseDataFilePath;
-(BOOL)useCredentialStorage;
-(void)setUseCredentialStorage:(BOOL)arg1 ;
-(BOOL)trustAllHosts;
-(void)setTrustAllHosts:(BOOL)arg1 ;
-(NSArray *)trustedHosts;
-(void)setTrustedHosts:(NSArray *)arg1 ;
-(BOOL)updatesNetworkActivityIndicator;
-(void)setUpdatesNetworkActivityIndicator:(BOOL)arg1 ;
-(id)willNeedNewBodyStreamBlock;
-(void)setWillNeedNewBodyStreamBlock:(id)arg1 ;
-(id)willSendRequestForAuthenticationChallengeBlock;
-(void)setWillSendRequestForAuthenticationChallengeBlock:(id)arg1 ;
-(id)didReceiveResponseBlock;
-(void)setDidReceiveResponseBlock:(id)arg1 ;
-(id)didReceiveDataBlock;
-(void)setDidReceiveDataBlock:(id)arg1 ;
-(id)didSendDataBlock;
-(void)setDidSendDataBlock:(id)arg1 ;
-(id)didFinishLoadingBlock;
-(void)setDidFinishLoadingBlock:(id)arg1 ;
-(id)didFailBlock;
-(void)setDidFailBlock:(id)arg1 ;
-(id)willCacheResponseBlock;
-(void)setWillCacheResponseBlock:(id)arg1 ;
-(id)willSendRequestRedirectBlock;
-(void)setWillSendRequestRedirectBlock:(id)arg1 ;
@end

