/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
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

