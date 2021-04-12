/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSDictionary, NSArray, AVCaptureDataOutputDelegateCallbackHelper;

@interface AVCaptureVideoDataOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSDictionary* videoSettings;
	NSDictionary* clientVideoSettings;
	SCD_Struct_AV7 deprecatedMinFrameDuration;
	BOOL alwaysDiscardsLateVideoFrames;
	BOOL automaticallyConfiguresOutputBufferDimensions;
	BOOL deliversPreviewSizedOutputBuffers;
	BOOL videoSettingsDimensionsOverrideEnabled;
	NSArray* availableVideoCVPixelFormatTypes;
	AVCaptureDataOutputDelegateCallbackHelper* delegateCallbackHelper;

}
-(id)init;
-(void)dealloc;
@end

