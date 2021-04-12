/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSHTTPURLResponse, NSError, NSURLResponse, NSMutableData, NSURLSession, NSObject, NSURLSessionConfiguration, NSString;

@interface AppSSOUnitTester : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	BOOL _takeRedirect;
	BOOL _receivedChallenge;
	BOOL _doNotProvideCreds;
	NSHTTPURLResponse* _redirectResponse;
	NSError* _completionError;
	NSURLResponse* _response;
	NSMutableData* _responseData;
	NSURLSession* _session;
	NSObject*<OS_dispatch_semaphore> _sema;
	NSURLSessionConfiguration* _config;

}

@property (assign) BOOL takeRedirect;                                       //@synthesize takeRedirect=_takeRedirect - In the implementation block
@property (assign) BOOL receivedChallenge;                                  //@synthesize receivedChallenge=_receivedChallenge - In the implementation block
@property (assign) BOOL doNotProvideCreds;                                  //@synthesize doNotProvideCreds=_doNotProvideCreds - In the implementation block
@property (copy) NSHTTPURLResponse * redirectResponse;                      //@synthesize redirectResponse=_redirectResponse - In the implementation block
@property (copy) NSError * completionError;                                 //@synthesize completionError=_completionError - In the implementation block
@property (copy) NSURLResponse * response;                                  //@synthesize response=_response - In the implementation block
@property (retain) NSMutableData * responseData;                            //@synthesize responseData=_responseData - In the implementation block
@property (copy) NSURLSession * session;                                    //@synthesize session=_session - In the implementation block
@property (copy) NSObject*<OS_dispatch_semaphore> sema;                     //@synthesize sema=_sema - In the implementation block
@property (nonatomic,copy) NSURLSessionConfiguration * config;              //@synthesize config=_config - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURLSessionConfiguration *)config;
-(void)setConfig:(NSURLSessionConfiguration *)arg1 ;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLResponse *)response;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)startTaskWithSemaphore:(id)arg1 request:(id)arg2 ;
-(void)setconfig:(id)arg1 ;
-(BOOL)takeRedirect;
-(void)setTakeRedirect:(BOOL)arg1 ;
-(BOOL)receivedChallenge;
-(void)setReceivedChallenge:(BOOL)arg1 ;
-(BOOL)doNotProvideCreds;
-(void)setDoNotProvideCreds:(BOOL)arg1 ;
-(NSHTTPURLResponse *)redirectResponse;
-(void)setRedirectResponse:(NSHTTPURLResponse *)arg1 ;
-(NSError *)completionError;
-(void)setCompletionError:(NSError *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)sema;
-(void)setSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

