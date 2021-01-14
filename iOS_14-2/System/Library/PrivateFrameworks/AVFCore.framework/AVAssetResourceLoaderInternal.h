/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVAssetClientURLRequestHelper, AVWeakReference, NSObject, NSMutableDictionary, NSURLSession, AVAssetCustomURLBridgeForNSURLSession, NSOperationQueue;

@interface AVAssetResourceLoaderInternal : NSObject {

	AVAssetClientURLRequestHelper* URLRequestHelper;
	AVWeakReference* weakReferenceToAsset;
	NSObject*<OS_dispatch_queue> stateQueue;
	AVWeakReference* weakReferenceToDelegate;
	NSObject*<OS_dispatch_queue> delegateQueue;
	OpaqueFigCustomURLLoaderRef customURLLoader;
	OpaqueFigCustomURLHandlerRef customURLHandler;
	OpaqueFigCustomURLHandlerRef authHandler;
	OpaqueFigCustomURLHandlerRef contentKeySessionCustomURLHandler;
	OpaqueFigXPCRemoteClientRef remoteHandlerXPCRemoteClient;
	int loadingCancelled;
	NSMutableDictionary* pendingRequests;
	NSObject*<OS_dispatch_queue> contentInformationCachingQueue;
	NSMutableDictionary* contentInformationCache;
	BOOL preloadsEligibleContentKeys;
	NSURLSession* URLSession;
	AVAssetCustomURLBridgeForNSURLSession* bridgeBetweenHandlerAndSession;
	NSOperationQueue* URLSessionOperationQueue;

}
@end

