/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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

