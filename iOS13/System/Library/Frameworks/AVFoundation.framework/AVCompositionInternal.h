/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVDispatchOnce, AVAssetInspectorLoader, AVAssetInspector, NSDictionary, NSMutableArray;

@interface AVCompositionInternal : NSObject {

	OpaqueFigMutableCompositionRef mutableComposition;
	AVDispatchOnce* formatReaderInitializationOnce;
	AVDispatchOnce* assetInspectorInitializationOnce;
	AVDispatchOnce* tracksInitializationOnce;
	OpaqueFigFormatReaderRef formatReader;
	AVAssetInspectorLoader* assetInspectorLoader;
	AVAssetInspector* assetInspector;
	CGSize naturalSize;
	NSDictionary* URLAssetInitializationOptions;
	NSMutableArray* tracks;
	AVDispatchOnce* figAssetInitializationOnce;
	OpaqueFigAssetRef figAsset;

}
@end

