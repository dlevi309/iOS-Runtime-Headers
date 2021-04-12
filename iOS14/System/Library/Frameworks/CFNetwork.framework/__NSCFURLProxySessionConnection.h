/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/__NSCFURLSessionConnection.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionDelegate_Internal.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate_Internal.h>

@class NSURLSessionTask, NSCachedURLResponse, NSURLRequest, NSArray, NSString;

@interface __NSCFURLProxySessionConnection : __NSCFURLSessionConnection <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDelegate_Internal, NSURLSessionDataDelegate_Internal> {

	NSURLSessionTask* _proxyTask;
	NSURLSessionTask* _cacheTask;
	BOOL _shouldCancelOnCacheTaskCompletion;
	BOOL _clientWantsCacheOnly;
	BOOL _completedLocalCacheLookup;
	BOOL _requestIsUncacheable;
	BOOL _handledNeedNewBodyStream;
	NSCachedURLResponse* _cachedResponseForConditionalRequest;
	NSURLRequest* _conditionalRequest;
	NSArray* _cachedResponseDataArray;
	NSString* _originalUploadFilePath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)suspend;
-(void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setPriorityHint:(float)arg1 incremental:(BOOL)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setPoolPriority:(long long)arg1 ;
-(void)expectedProgressTargetChanged;
-(void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(void)setIsDownload:(BOOL)arg1 ;
-(void)cancel;
-(void)resume;
-(void)dealloc;
@end

