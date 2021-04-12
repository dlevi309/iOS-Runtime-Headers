/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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

