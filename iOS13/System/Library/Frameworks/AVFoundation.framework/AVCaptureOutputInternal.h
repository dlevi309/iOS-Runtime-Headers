/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject, AVCaptureSession, NSString, NSMutableArray;

@interface AVCaptureOutputInternal : NSObject {

	NSObject*<OS_dispatch_queue> figCaptureSessionSyncQueue;
	OpaqueFigCaptureSessionRef figCaptureSession;
	AVCaptureSession* session;
	NSString* sinkID;
	NSMutableArray* connections;
	int changeSeed;
	CGAffineTransform metadataTransform;
	double rollAdjustment;
	BOOL physicallyMirrorsVideo;

}
-(id)init;
-(void)dealloc;
@end

