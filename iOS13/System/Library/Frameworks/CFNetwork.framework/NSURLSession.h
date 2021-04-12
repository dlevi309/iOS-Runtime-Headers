/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol NSURLSessionDelegate;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSDictionary, NSURLSessionConfiguration, NSString, NSOperationQueue, NSUUID, NSMutableDictionary, NSMutableSet, __CFN_SessionMetrics;

@interface NSURLSession : NSObject {

	NSDictionary* _atsState_ivar;
	NSURLSessionConfiguration* _local_immutable_configuration_ivar;
	NSString* _sessionDescription_ivar;
	NSOperationQueue* _delegateQueue_ivar;
	id<NSURLSessionDelegate> _delegate_ivar;
	BOOL _isSharedSession_ivar;
	BOOL _invalid_ivar;

}

@property (__weak,readonly) NSURLSessionConfiguration * _local_immutable_configuration; 
@property (readonly) BOOL isBackgroundSession; 
@property (readonly) BOOL _isProxySession; 
@property (__weak,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (readonly) BOOL invalid; 
@property (assign) BOOL _isSharedSession;                                                            //@synthesize isSharedSession_ivar=_isSharedSession_ivar - In the implementation block
@property (__weak,readonly) NSUUID * _uuid; 
@property (copy) NSString * _tlsSessionCachePrefix; 
@property (retain) NSMutableDictionary * _altSvc; 
@property (retain) NSMutableSet * _h2BlacklistedHosts; 
@property (retain) NSMutableDictionary * _coalescing; 
@property (retain) __CFN_SessionMetrics * _metrics; 
@property (readonly) unsigned long long nextSeed; 
@property (retain,readonly) NSOperationQueue * delegateQueue;                                        //@synthesize delegateQueue_ivar=_delegateQueue_ivar - In the implementation block
@property (retain,readonly) id<NSURLSessionDelegate> delegate;                                       //@synthesize delegate_ivar=_delegate_ivar - In the implementation block
@property (copy,readonly) NSURLSessionConfiguration * configuration; 
@property (copy) NSString * sessionDescription;                                                      //@synthesize sessionDescription_ivar=_sessionDescription_ivar - In the implementation block
+(id)new;
+(id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
+(id)sharedSession;
+(id)_sharedSessionForConnection;
+(id)sessionWithConfiguration:(id)arg1 ;
+(id)_errorFromError:(id)arg1 forTask:(id)arg2 ;
+(BOOL)_backgroundServiceAvailable;
+(void)_sendPendingCallbacksForSessionIdentifier:(id)arg1 ;
+(void)_releaseProcessAssertionForSessionIdentifier:(id)arg1 ;
+(void)_getActiveSessionIdentifiersWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)_obliterateAllBackgroundSessionsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)_strictTrustEvaluate:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)_disableAppSSO;
+(void)_setEventDelegate:(id)arg1 queue:(id)arg2 ;
+(void)_setHTTPRewriter:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSURLSessionDelegate>)delegate;
-(id)downloadTaskWithRequest:(id)arg1 ;
-(NSURLSessionConfiguration *)configuration;
-(id)dataTaskWithRequest:(id)arg1 ;
-(void)invalidateAndCancel;
-(void)finishTasksAndInvalidate;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSOperationQueue *)delegateQueue;
-(void)resetWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)uploadTaskWithStreamedRequest:(id)arg1 ;
-(id)_dataTaskWithTaskForClass:(id)arg1 ;
-(id)_uploadTaskWithTaskForClass:(id)arg1 ;
-(id)_downloadTaskWithTaskForClass:(id)arg1 ;
-(void)_useTLSSessionCacheFromSession:(id)arg1 ;
-(void)delegate_companionAvailabilityChanged:(BOOL)arg1 ;
-(BOOL)can_delegate_companionAvailabilityChanged;
-(id)dataTaskWithRequest:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(BOOL)_isSharedSession;
-(NSURLSessionConfiguration *)_local_immutable_configuration;
-(void)finalizeDelegateWithError:(id)arg1 ;
-(void)addDelegateBlock:(/*^block*/id)arg1 ;
-(id)webSocketTaskWithRequest:(id)arg1 ;
-(shared_ptr<NSObject<OS_nw_context> >*)_nwContext;
-(void)delegate_task:(id)arg1 _schemeUpgraded:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_task__schemeUpgraded;
-(void)delegate_task:(id)arg1 needNewBodyStream:(/*^block*/id)arg2 ;
-(BOOL)can_delegate_task_needNewBodyStream;
-(void)delegate_dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_dataTask_didReceiveResponse;
-(void)delegate_task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4 ;
-(BOOL)can_delegate_task_didSendBodyData;
-(void)delegate_needConnectedSocketToHost:(id)arg1 port:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_needConnectedSocket;
-(void)delegate_task:(id)arg1 conditionalRequirementsChanged:(BOOL)arg2 ;
-(BOOL)can_delegate_task_conditionalRequirementsChanged;
-(void)delegate_taskIsWaitingForConnectivity:(id)arg1 ;
-(BOOL)can_delegate_taskIsWaitingForConnectivity;
-(void)delegate_task_isWaitingForConnection:(id)arg1 ;
-(BOOL)can_delegate_task_isWaitingForConnection;
-(void)delegate_task:(id)arg1 isWaitingForConnectionWithReason:(long long)arg2 ;
-(BOOL)can_delegate_task_isWaitingForConnectionWithReason;
-(void)delegate_task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_task_willSendRequestForEstablishedConnection;
-(void)delegate_dataTask:(id)arg1 didReceiveData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_dataTask_didReceiveData;
-(void)delegate_task:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_task_didFinishCollectingMetrics;
-(void)delegate_task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(BOOL)can_delegate_task_didCompleteWithError;
-(void)delegate_dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_dataTask_willCacheResponse;
-(void)delegate_task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_task_didReceiveChallenge;
-(void)delegate_didReceiveChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)can_delegate_didReceiveChallenge;
-(void)delegate_task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)can_delegate_task_willPerformHTTPRedirection;
-(void)delegate_task:(id)arg1 willUseEffectiveConfiguration:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_willUseEffectiveConfiguration;
-(void)delegate_dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_dataTask_didBecomeStreamTask;
-(BOOL)can_delegate_dataTask_didBecomeDownloadTask;
-(void)delegate_dataTask:(id)arg1 didBecomeStreamTask:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isBackgroundSession;
-(void)delegate_downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3 ;
-(BOOL)can_delegate_downloadTask_didResumeAtOffset;
-(void)delegate_downloadTask:(id)arg1 didReceiveResponse:(id)arg2 ;
-(BOOL)can_delegate_downloadTask_didReceiveResponse;
-(void)delegate_downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_downloadTask_didWriteData;
-(BOOL)can_delegate_downloadTask_didFinishDownloadingToURL;
-(void)delegate_downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)delegate_openFileAtPath:(id)arg1 mode:(int)arg2 ;
-(BOOL)can_delegate_openFileAtPath;
-(id)delegate_downloadTaskNeedsDownloadDirectory:(id)arg1 ;
-(BOOL)can_delegate_downloadTaskNeedsDownloadDirectory;
-(id)downloadTaskWithResumeData:(id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)delegate_didFinishEventsForBackgroundURLSession;
-(BOOL)can_delegate_didFinishEventsForBackgroundURLSession;
-(void)delegate_AVAssetDownloadTask:(id)arg1 didReceiveDownloadToken:(unsigned long long)arg2 ;
-(BOOL)can_delegate_AVAssetDownloadTask_didReceiveDownloadToken;
-(void)delegate_willRetryBackgroundDataTask:(id)arg1 withError:(id)arg2 ;
-(BOOL)can_delegate_willRetryBackgroundDataTask;
-(void)delegate_task:(id)arg1 willBeginDelayedRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_task_willBeginDelayedRequest;
-(BOOL)_isProxySession;
-(id)_update_local_configuration:(/*^block*/id)arg1 ;
-(void)delegate_streamTask:(id)arg1 didBecomeInputStream:(id)arg2 outputStream:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)can_delegate_streamTask_didBecomeInputStream_outputStream;
-(void)delegate_writeClosedForStreamTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)can_delegate_writeClosedForStreamTask;
-(void)delegate_readClosedForStreamTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)can_delegate_readClosedForStreamTask;
-(id)streamTaskWithHostName:(id)arg1 port:(long long)arg2 ;
-(void)delegate_task:(id)arg1 isWaitingForConnectionWithError:(id)arg2 ;
-(BOOL)can_delegate_task_isWaitingForConnectionWithError;
-(void)delegate_AVAssetDownloadTask:(id)arg1 willDownloadToURL:(id)arg2 ;
-(BOOL)can_delegate_AVAssetDownloadTask_willDownloadToURL;
-(void)delegate_AVAssetDownloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_AVAssetDownloadTask_didFinishDownloadingToURL;
-(void)delegate_AVAssetDownloadTask:(id)arg1 didResolveMediaSelection:(id)arg2 ;
-(BOOL)can_delegate_AVAssetDownloadTask_didResolveMediaSelection;
-(void)delegate_AVAssetDownloadTask:(id)arg1 didLoadTimeRange:(SCD_Struct_NS47)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(SCD_Struct_NS47)arg4 ;
-(BOOL)can_delegate_AVAssetDownloadTask_didLoadTimeRange;
-(void)delegate_AVAssetDownloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(BOOL)can_delegate_AVAssetDownloadTask_didWriteData;
-(void)delegate_AVAggregateAssetDownloadTask:(id)arg1 didLoadTimeRange:(SCD_Struct_NS47)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(SCD_Struct_NS47)arg4 forMediaSelection:(id)arg5 ;
-(BOOL)can_delegate_AVAggregateAssetDownloadTask_didLoadTimeRange;
-(void)delegate_AVAggregateAssetDownloadTask:(id)arg1 willDownloadToURL:(id)arg2 ;
-(BOOL)can_delegate_AVAggregateAssetDownloadTask_willDownloadToURL;
-(void)delegate_AVAggregateAssetDownloadTask:(id)arg1 didCompleteForMediaSelection:(id)arg2 ;
-(BOOL)can_delegate_AVAggregateAssetDownloadTask_didCompleteForMediaSelection;
-(void)getAllTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 ;
-(CFDictionaryRef)_copyATSState;
-(void)remote_externalAuthenticator_task:(id)arg1 getAuthHeadersForResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)can_delegate_task_actually_didCompleteWithError;
-(BOOL)can_delegate_betterRouteDiscoveredForStreamTask;
-(void)delegate_betterRouteDiscoveredForStreamTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)can_delegate_connectionEstablishedForStreamTask;
-(void)delegate_connectionEstablishedForStreamTask:(id)arg1 ;
-(void)getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)dataTaskWithURL:(id)arg1 ;
-(id)webSocketTaskWithURL:(id)arg1 ;
-(id)webSocketTaskWithURL:(id)arg1 protocols:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_downloadTaskWithRequest:(id)arg1 downloadFilePath:(id)arg2 ;
-(id)downloadTaskWithURL:(id)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithResumeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_AVAssetDownloadTaskWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)assetDownloadTaskWithURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)aggregateAssetDownloadTaskWithURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 ;
-(id)streamTaskWithNetService:(id)arg1 ;
-(id)dataTaskWithHTTPGetRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)dataTaskWithHTTPGetRequest:(id)arg1 ;
-(NSString *)sessionDescription;
-(void)setSessionDescription:(NSString *)arg1 ;
-(void)set_isSharedSession:(BOOL)arg1 ;
@end

