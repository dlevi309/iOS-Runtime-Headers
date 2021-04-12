/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@protocol OS_dispatch_queue;
#import <AVFCapture/AVFCapture-Structs.h>
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

