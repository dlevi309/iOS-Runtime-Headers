/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureSession, NSObject;

@interface AVCaptureInputInternal : NSObject {

	AVCaptureSession* session;
	NSObject*<OS_dispatch_queue> figCaptureSessionSyncQueue;
	OpaqueFigCaptureSessionRef figCaptureSession;

}
-(id)init;
-(void)dealloc;
@end

