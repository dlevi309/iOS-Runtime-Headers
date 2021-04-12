/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVAsset, NSMutableArray, NSMutableSet, NSError, NSObject;

@interface AVAssetReaderInternal : NSObject {

	AVWeakReference* weakReference;
	AVAsset* asset;
	OpaqueFigAssetReaderRef figAssetReader;
	SCD_Struct_AV8 timeRange;
	BOOL readSingleSample;
	NSMutableArray* outputs;
	NSMutableSet* outputFinishedCallbackInvokers;
	long long status;
	NSError* error;
	NSError* errorThatOccurredBeforeStartReading;
	NSObject*<OS_dispatch_queue> statusReadWriteQueue;

}
@end

