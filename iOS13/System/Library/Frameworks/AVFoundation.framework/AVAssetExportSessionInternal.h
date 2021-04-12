/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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

