/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
@class AVAssetInspectorLoader, AVAssetClientURLRequestHelper, AVAssetCustomURLBridgeForNSURLProtocol, AVAssetCustomURLAuthentication, NSURL, NSArray, AVAssetResourceLoader, AVDispatchOnce, AVAssetCache, NSObject, NSDictionary, AVWeakReference;

@interface AVURLAssetInternal : NSObject {

	AVAssetInspectorLoader* loader;
	AVAssetClientURLRequestHelper* URLRequestHelper;
	AVAssetCustomURLBridgeForNSURLProtocol* customURLBridgeForNSURLProtocol;
	AVAssetCustomURLAuthentication* customURLAuthenticationUsingKeychain;
	NSURL* URL;
	NSArray* tracks;
	AVAssetResourceLoader* resourceLoader;
	AVDispatchOnce* makeOneResourceLoaderOnly;
	AVAssetCache* assetCache;
	AVDispatchOnce* makeOneAssetDownloadCacheOnly;
	NSObject*<OS_dispatch_queue> tracksAccessQueue;
	NSDictionary* initializationOptions;
	BOOL hasInstanceIdentifierMapping;
	AVWeakReference* sessionReference;

}
@end

