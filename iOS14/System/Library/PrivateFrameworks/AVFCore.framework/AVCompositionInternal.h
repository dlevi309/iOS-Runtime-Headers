/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
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

