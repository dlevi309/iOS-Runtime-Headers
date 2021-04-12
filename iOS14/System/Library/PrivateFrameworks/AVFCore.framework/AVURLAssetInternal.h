/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
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
	BOOL requiresSecurityScopeRelease;
	AVWeakReference* sessionReference;

}
@end

