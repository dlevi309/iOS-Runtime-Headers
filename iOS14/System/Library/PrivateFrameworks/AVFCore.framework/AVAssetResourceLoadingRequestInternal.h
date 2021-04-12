/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, AVDispatchOnce, NSMutableURLRequest, NSURLResponse, NSURLRequest, NSObject, NSMutableData, NSDictionary, AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestor;

@interface AVAssetResourceLoadingRequestInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReference* weakReferenceToResourceLoader;
	OpaqueFigCustomURLLoaderRef customURLLoader;
	OpaqueFigCustomURLHandlerRef customURLHandler;
	CFDictionaryRef requestInfo;
	unsigned long long requestID;
	AVDispatchOnce* responseInfoSentOnceToken;
	NSMutableURLRequest* URLRequest;
	NSURLResponse* response;
	NSURLRequest* redirect;
	NSObject*<OS_dispatch_queue> dataCachingQueue;
	NSMutableData* cachedData;
	NSDictionary* cachedContentInformation;
	AVAssetResourceLoadingContentInformationRequest* contentInformationRequest;
	AVAssetResourceLoadingDataRequest* dataRequest;
	int finished;
	int cancelled;
	int sentContentInfo;
	/*^block*/id streamingKeyRequestCompletionHandler;
	OpaqueFigCPECryptorRef figCryptor;
	AVAssetResourceLoadingRequestor* requestor;
	unsigned long long cryptorKeyRequestID;

}
@end

