/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSArray;

@interface AVCaptureVideoThumbnailOutputInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReference* delegateWeakReference;
	BOOL didPropagateContents;
	NSArray* filters;
	CGSize thumbnailSize;

}
-(id)init;
-(void)dealloc;
@end

