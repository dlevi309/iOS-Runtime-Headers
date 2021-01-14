/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@class AVAssetResourceLoaderInternal, NSString, NSOperationQueue, NSURLSession;

@interface AVAssetResourceLoader : NSObject <NSURLAuthenticationChallengeSender> {

	AVAssetResourceLoaderInternal* _resourceLoader;

}

@property (assign,nonatomic) BOOL preloadsEligibleContentKeys; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSURLSessionDataDelegate> URLSessionDataDelegate; 
@property (nonatomic,readonly) NSOperationQueue * URLSessionDataDelegateQueue; 
@property (nonatomic,retain) NSURLSession * URLSession; 
@property (nonatomic,__weak,readonly) id<AVAssetResourceLoaderDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
-(void)cancelLoading;
-(id)init;
-(id<AVAssetResourceLoaderDelegate>)delegate;
-(id)asset;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(NSURLSession *)URLSession;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(OpaqueFigCustomURLHandlerRef)_authHandler;
-(BOOL)preloadsEligibleContentKeys;
-(OpaqueFigCustomURLHandlerRef)_customURLHandler;
-(id)initWithURLRequestHelper:(id)arg1 asset:(id)arg2 ;
-(void)_setDelegateOnStateQueue:(id)arg1 ;
-(id)_getDelegateOnStateQueue;
-(void)_cancelRequestWithKey:(id)arg1 fallbackHandler:(/*^block*/id)arg2 ;
-(void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg1 delegateCallbackBlock:(/*^block*/id)arg2 ;
-(void)_performDelegateSelector:(SEL)arg1 withObject:(id)arg2 representingNewRequest:(BOOL)arg3 key:(id)arg4 fallbackHandler:(/*^block*/id)arg5 ;
-(OpaqueFigCustomURLLoaderRef)_customURLLoader;
-(void)_poseAuthenticationChallengeWithKey:(id)arg1 challenge:(id)arg2 fallbackHandler:(/*^block*/id)arg3 ;
-(void)_cancelRequest:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 ;
-(void)_handleRequest:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 willHandleRequest:(BOOL*)arg3 ;
-(void)_issueLoadingRequestWithKey:(id)arg1 loadingRequest:(id)arg2 isRenewalRequest:(BOOL)arg3 fallbackHandler:(/*^block*/id)arg4 ;
-(id<NSURLSessionDataDelegate>)URLSessionDataDelegate;
-(void)_poseAuthenticationChallengeWithRequestInfo:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 challenge:(id)arg3 ;
-(void)_noteFinishingOfRequest:(id)arg1 ;
-(OpaqueFigCustomURLHandlerRef)_contentKeySessionCustomURLHandler;
-(void)setPreloadsEligibleContentKeys:(BOOL)arg1 ;
-(void)cacheContentInformation:(id)arg1 forURL:(id)arg2 ;
-(void)_sendAuthResponseForChallenge:(id)arg1 disposition:(long long)arg2 credential:(id)arg3 error:(id)arg4 ;
-(id)cachedContentInformationForURL:(id)arg1 ;
-(NSOperationQueue *)URLSessionDataDelegateQueue;
-(id)remoteCustomURLHandlerContextForPID:(int)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(id)URLRequestHelper;
-(id)initWithURLRequestHelper:(id)arg1 asset:(id)arg2 remoteCustomURLHandlerContext:(id)arg3 ;
-(void)_setContentKeySessionCustomURLHandler:(OpaqueFigCustomURLHandlerRef)arg1 ;
-(id)stateQueue;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)dealloc;
@end

