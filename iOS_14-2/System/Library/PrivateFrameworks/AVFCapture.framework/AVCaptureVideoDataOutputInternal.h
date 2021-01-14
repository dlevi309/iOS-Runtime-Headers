/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSDictionary, NSArray, AVCaptureDataOutputDelegateCallbackHelper;

@interface AVCaptureVideoDataOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSDictionary* videoSettings;
	NSDictionary* clientVideoSettings;
	SCD_Struct_AV0 deprecatedMinFrameDuration;
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

