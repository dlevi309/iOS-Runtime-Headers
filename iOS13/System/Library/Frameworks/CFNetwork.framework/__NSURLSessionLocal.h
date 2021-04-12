/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/__NSCFURLSession.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate_Internal.h>
#import <libobjc.A.dylib/NSURLSessionSubclass.h>
#import <libobjc.A.dylib/__NSURLSessionTaskGroupForConfiguration.h>

@protocol OS_dispatch_queue;
@class NSURLSessionConfiguration, NSURLSession, NSMutableDictionary, NSMutableArray, NSObject, NSArray, NSString;

@interface __NSURLSessionLocal : __NSCFURLSession <NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate_Internal, NSURLSessionSubclass, __NSURLSessionTaskGroupForConfiguration> {

	unsigned long long _identSeed;
	XTubeManager* _tubeManager;
	NSMutableDictionary* _connectionsToTasks;
	NSMutableArray* _outstandingTasks;
	NSObject*<OS_dispatch_queue> _invalidateQueue;
	/*^block*/id _invalidateCallback;
	const XCookieStorage* _xCookies;
	const XCredentialStorage* _xCreds;
	BOOL _xCookiesInitComplete;
	BOOL _xCredsInitComplete;
	mutex _xCookieStorageInitLock;
	mutex _xCredStorageInitLock;
	NSArray* _localProtocolClassesForDefaultSession;
	BOOL _isInvalid;
	NSURLSessionConfiguration* _proxyConfig;
	NSURLSession* _proxySession;
	NSMutableDictionary* _proxyDelegates;
	BOOL _shouldRecreateProxySession;
	NSURLSession* _sessionForCacheLookups;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak,readonly) NSURLSessionConfiguration * _groupConfiguration; 
@property (__weak,readonly) NSURLSession * _groupSession; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_dataTaskWithTaskForClass:(id)arg1 ;
-(id)_uploadTaskWithTaskForClass:(id)arg1 ;
-(id)_downloadTaskWithTaskForClass:(id)arg1 ;
-(id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg1 assetTitle:(id)arg2 assetArtworkData:(id)arg3 options:(id)arg4 ;
-(id)AVAggregateAssetDownloadTaskForURLAsset:(id)arg1 mediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 ;
-(id)webSocketTaskForRequest:(id)arg1 ;
-(id)webSocketTaskForURL:(id)arg1 protocols:(id)arg2 ;
-(void)_onqueue_flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_completeInvalidation:(BOOL)arg1 ;
-(void)_onqueue_resetStorageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _isWaitingForConnectionWithReason:(long long)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(id)connToTask:(id)arg1 ;
-(Class)sessionConnectionClass:(id)arg1 task:(id)arg2 ;
-(void)replaceTask:(id)arg1 withTask:(id)arg2 ;
-(id)copyTasks;
-(void)addConnectionlessTask:(id)arg1 ;
-(void)removeConnectionlessTask:(id)arg1 ;
-(void)_onqueue_connectUploadTask:(id)arg1 strippedRequest:(id)arg2 bodyStream:(id)arg3 bodyParts:(id)arg4 ;
-(void)_onqueue_canonicalizeTaskAndCreateConnection:(id)arg1 ;
-(void)_onqueue_configureAndCreateConnection:(id)arg1 task:(id)arg2 ;
-(unsigned long long)nextSeed;
-(id)taskForClassInfo:(id)arg1 ;
-(void)_onqueue_invokeInvalidateCallback;
-(void)_onqueue_checkForCompletion;
-(void)_onqueue_invalidateSession:(BOOL)arg1 withQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_flushOrResetStorage:(/*^block*/id)arg1 reset:(unsigned char)arg2 ;
-(void)_useTLSSessionCacheFromSession:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)task:(id)arg1 terminatedConnection:(id)arg2 ;
-(XTubeManager*)_actualTubeManager;
-(CFHSTSPolicyRef)_copyHSTSPolicy;
-(void)_withXURLCache:(/*^block*/id)arg1 ;
-(const XCookieStorage*)_createXCookieStorage0;
-(const XCookieStorage*)_createXCookieStorage;
-(const XCredentialStorage*)_createXCredentialStorage0;
-(const XCredentialStorage*)_createXCredentialStorage;
-(void)_invalidateAllConnections;
-(void)_purgeIdleConnections;
-(void)invalidateUnpurgeableConnectionsForConnectionCacheKey:(HTTPConnectionCacheKey*)arg1 ;
-(id)_createTaskFromOriginalCFURLRequest:(id)arg1 updatedCFURLRequest:(id)arg2 connProps:(CFDictionaryRef)arg3 sockProps:(CFDictionaryRef)arg4 ;
-(const XCookieStorage*)copyBaseStorageForRequest:(id)arg1 ;
-(void)_getCookieHeadersForTask:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(CFStringRef)_withConnectionCache_getCurrentSSLMethodForKey:(const HTTPConnectionCacheKey*)arg1 scheduling:(const CoreSchedulingSet*)arg2 ;
-(void)_withConnectionCache_setCurrentSSLMethod:(CFStringRef)arg1 forKey:(const HTTPConnectionCacheKey*)arg2 scheduling:(const CoreSchedulingSet*)arg3 ;
-(BOOL)_withConnectionCache_enqueueRequest:(const HTTPRequestMessage*)arg1 forProtocol:(MetaConnectionCacheClient*)arg2 scheduling:(const CoreSchedulingSet*)arg3 options:(MetaConnectionOptions)arg4 ;
-(GlueTube*)_withConnectionCache_getPendingTubeForProtocol:(MetaConnectionCacheClient*)arg1 withKey:(const HTTPConnectionCacheKey*)arg2 scheduling:(const CoreSchedulingSet*)arg3 ;
-(id)_protocolClassesForTask:(id)arg1 ;
-(Class)_protocolClassForTask:(id)arg1 ;
-(Class)_protocolClassForTask:(id)arg1 skipAppSSO:(BOOL)arg2 ;
-(Class)_protocolClassForRequest:(id)arg1 ;
-(id)_createCanonicalRequest:(id)arg1 task:(id)arg2 ;
-(id)_createCanonicalRequestForTask:(id)arg1 ;
-(BOOL)_request:(id)arg1 isCacheEquivalentTo:(id)arg2 ;
-(BOOL)_cfurlRequest:(id)arg1 isCacheEquivalentTo:(id)arg2 ;
-(URLProtocol*)_newURLProtocolForTask:(id)arg1 client:(URLProtocolClient*)arg2 protocolClass:(Class)arg3 ;
-(URLProtocol*)_newURLProtocolForTask:(id)arg1 client:(URLProtocolClient*)arg2 ;
-(BOOL)_prependProtocolClassForDefaultSession:(Class)arg1 ;
-(void)_removeProtocolClassForDefaultSession:(Class)arg1 ;
-(id)_proxyDataTaskForRequest:(id)arg1 withDelegate:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(id)_cacheOnlyDataTaskForRequest:(id)arg1 withDelegate:(id)arg2 ;
-(id)_delegateForTask:(id)arg1 ;
-(void)_URLSession:(id)arg1 companionAvailabilityChanged:(BOOL)arg2 ;
-(void)_URLSession:(id)arg1 task:(id)arg2 getAuthHeadersForResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

