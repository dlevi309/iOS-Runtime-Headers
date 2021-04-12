/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVVideoComposition, NSArray, AVMetadataItemFilter;

@interface AVAssetExportSessionInternal : NSObject {

	OpaqueFigAssetExportSessionRef figExportSession;
	AVAsset* asset;
	AVAudioMix* audioMix;
	void* figVideoCompositor;
	AVCustomVideoCompositorSession* customVideoCompositorSession;
	AVVideoComposition* videoComposition;
	NSArray* metadata;
	AVMetadataItemFilter* metadataItemFilter;
	/*^block*/id handler;

}
@end

