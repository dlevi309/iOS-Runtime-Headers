/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, AVCaptureSession, AVCaptureConnection, NSObject, CALayer, AVWeakReference, NSArray;

@interface AVCaptureVideoPreviewLayerInternal : NSObject {

	NSString* sinkID;
	AVCaptureSession* session;
	AVCaptureConnection* connection;
	OpaqueFigCaptureSessionRef figCaptureSession;
	NSObject*<OS_dispatch_queue> figCaptureSessionSyncQueue;
	CALayer* sublayer;
	CGSize sensorSize;
	NSString* sensorToPreviewVTScalingMode;
	unsigned imageQueueSlot;
	CGSize previewSize;
	double previewRotationDegrees;
	NSString* gravity;
	BOOL disableActions;
	AVWeakReference* weakReference;
	BOOL isPreviewing;
	long long orientation;
	BOOL automaticallyAdjustsMirroring;
	BOOL mirrored;
	BOOL isPresentationLayer;
	BOOL visible;
	BOOL isPaused;
	BOOL chromaNoiseReductionEnabled;
	int changeSeed;
	CGAffineTransform captureDeviceTransform;
	double rollAdjustment;
	BOOL depthDataDeliverySupported;
	BOOL depthDataDeliveryEnabled;
	BOOL filterRenderingEnabled;
	BOOL unoptimizedFilterRenderingEnabled;
	NSArray* videoPreviewFilters;
	double oddScreenWidth;
	double oddScreenScale;

}
@end

