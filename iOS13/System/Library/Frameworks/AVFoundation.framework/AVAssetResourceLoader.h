/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
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
-(id)init;
-(void)dealloc;
-(id<AVAssetResourceLoaderDelegate>)delegate;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)asset;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(id)stateQueue;
-(void)cancelLoading;
-(void)setURLSession:(NSURLSession *)arg1 ;
-(id<NSURLSessionDataDelegate>)URLSessionDataDelegate;
-(NSOperationQueue *)URLSessionDataDelegateQueue;
-(NSURLSession *)URLSession;
-(id)URLRequestHelper;
-(id)initWithURLRequestHelper:(id)arg1 asset:(id)arg2 remoteCustomURLHandlerContext:(id)arg3 ;
-(void)_setContentKeySessionCustomURLHandler:(OpaqueFigCustomURLHandlerRef)arg1 ;
-(BOOL)preloadsEligibleContentKeys;
-(id)initWithURLRequestHelper:(id)arg1 asset:(id)arg2 ;
-(void)_setDelegateOnStateQueue:(id)arg1 ;
-(id)_getDelegateOnStateQueue;
-(void)_performDelegateCallbackSynchronouslyIfCurrentDelegateQueueIsQueue:(id)arg1 delegateCallbackBlock:(/*^block*/id)arg2 ;
-(void)_performDelegateSelector:(SEL)arg1 withObject:(id)arg2 representingNewRequest:(BOOL)arg3 key:(id)arg4 fallbackHandler:(/*^block*/id)arg5 ;
-(void)_cancelRequestWithKey:(id)arg1 fallbackHandler:(/*^block*/id)arg2 ;
-(void)_poseAuthenticationChallengeWithKey:(id)arg1 challenge:(id)arg2 fallbackHandler:(/*^block*/id)arg3 ;
-(void)_issueLoadingRequestWithKey:(id)arg1 loadingRequest:(id)arg2 isRenewalRequest:(BOOL)arg3 fallbackHandler:(/*^block*/id)arg4 ;
-(OpaqueFigCustomURLHandlerRef)_authHandler;
-(OpaqueFigCustomURLHandlerRef)_customURLHandler;
-(OpaqueFigCustomURLLoaderRef)_customURLLoader;
-(void)_cancelRequest:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 ;
-(void)_poseAuthenticationChallengeWithRequestInfo:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 challenge:(id)arg3 ;
-(void)_noteFinishingOfRequest:(id)arg1 ;
-(void)_handleRequest:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 willHandleRequest:(BOOL*)arg3 ;
-(OpaqueFigCustomURLHandlerRef)_contentKeySessionCustomURLHandler;
-(void)setPreloadsEligibleContentKeys:(BOOL)arg1 ;
-(void)_sendAuthResponseForChallenge:(id)arg1 disposition:(long long)arg2 credential:(id)arg3 error:(id)arg4 ;
-(void)cacheContentInformation:(id)arg1 forURL:(id)arg2 ;
-(id)cachedContentInformationForURL:(id)arg1 ;
-(id)remoteCustomURLHandlerContextForPID:(int)arg1 ;
@end

