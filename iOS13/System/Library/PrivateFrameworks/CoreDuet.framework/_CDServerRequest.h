/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@class NSOperationQueue, NSURLSession, NSMutableURLRequest, NSHTTPURLResponse, NSMutableData, NSString;

@interface _CDServerRequest : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate> {

	/*^block*/id _responseHandler;
	NSOperationQueue* _sessionQueue;
	NSURLSession* _session;
	NSMutableURLRequest* _request;
	NSHTTPURLResponse* _httpResponse;
	NSMutableData* _responseData;

}

@property (copy) id responseHandler;                                //@synthesize responseHandler=_responseHandler - In the implementation block
@property (retain) NSOperationQueue * sessionQueue;                 //@synthesize sessionQueue=_sessionQueue - In the implementation block
@property (retain) NSURLSession * session;                          //@synthesize session=_session - In the implementation block
@property (retain) NSMutableURLRequest * request;                   //@synthesize request=_request - In the implementation block
@property (retain) NSHTTPURLResponse * httpResponse;                //@synthesize httpResponse=_httpResponse - In the implementation block
@property (retain) NSMutableData * responseData;                    //@synthesize responseData=_responseData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addHTTPIfModifiedSinceToHeaders:(id)arg1 date:(id)arg2 ;
+(id)getHTTPModifiedSinceFromHeaders:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(id)startDataTaskWithURI:(id)arg1 headers:(id)arg2 timeoutInterval:(double)arg3 responseHandler:(/*^block*/id)arg4 ;
-(NSOperationQueue *)sessionQueue;
-(id)_requestForMethod:(id)arg1 URI:(id)arg2 queryItems:(id)arg3 headers:(id)arg4 body:(id)arg5 timeoutInterval:(double)arg6 ;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(NSMutableURLRequest *)request;
-(id)_newDefaultSession;
-(id)responseHandler;
-(void)setHttpResponse:(NSHTTPURLResponse *)arg1 ;
-(NSHTTPURLResponse *)httpResponse;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(id)startDownloadTaskWithURI:(id)arg1 headers:(id)arg2 timeoutInterval:(double)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setSessionQueue:(NSOperationQueue *)arg1 ;
@end

