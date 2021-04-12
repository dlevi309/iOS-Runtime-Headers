/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray, AVRunLoopCondition;

@interface AVAssetReaderOutputInternal : NSObject {

	AVWeakReference* weakReference;
	BOOL alwaysCopiesSampleData;
	BOOL supportsRandomAccess;
	NSArray* currentTimeRanges;
	AVWeakReference* weakReferenceToAssetReader;
	OpaqueFigAssetReaderRef figAssetReader;
	int extractionID;
	AVRunLoopCondition* sampleBufferAvailabilityCondition;
	BOOL currentConfigurationIsFinal;
	BOOL extractionCompleteForCurrentConfiguration;
	int finished;
	BOOL maximizePowerEfficiency;

}
@end

