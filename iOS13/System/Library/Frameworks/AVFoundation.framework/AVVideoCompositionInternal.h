/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVVideoCompositionInternal : NSObject {

	unsigned long long changeSeed;
	NSString* builtInCompositorName;
	Class customCompositorClass;
	SCD_Struct_AV7 frameDuration;
	int sourceTrackIDForFrameTiming;
	CGSize renderSize;
	float renderScale;
	NSString* colorPrimaries;
	NSString* colorYCbCrMatrix;
	NSString* colorTransferFunction;
	NSArray* instructions;
	BOOL auxiliaryTrackLayerSetLast;
	AVVideoCompositionCoreAnimationTool* animationTool;

}
@end

