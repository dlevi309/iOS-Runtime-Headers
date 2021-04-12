/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
@class NSObject, AVWeakReference;

@interface AVAssetResourceLoadingDataRequestInternal : NSObject {

	long long requestedOffset;
	long long requestedLength;
	long long currentOffset;
	NSObject*<OS_dispatch_queue> dataResponseQueue;
	BOOL requestsAllDataToEndOfResource;
	BOOL canSupplyIncrementalDataImmediately;
	AVWeakReference* weakReferenceToLoadingRequest;

}
@end

