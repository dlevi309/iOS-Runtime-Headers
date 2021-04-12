/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol NSObjectNSCopying, OS_dispatch_queue;
@class NSString, AVMetadataItemValueRequest, NSError, NSMutableArray, NSObject;

@interface AVLazyValueLoadingMetadataItemInternal : NSObject {

	id<NSObject><NSCopying> value;
	NSString* dataType;
	AVMetadataItemValueRequest* valueRequest;
	/*^block*/id valueLoadingHandler;
	long long valueStatus;
	NSError* valueLoadingError;
	NSMutableArray* loadingCompletionHandlers;
	NSObject*<OS_dispatch_queue> readWriteQueue;

}
@end

