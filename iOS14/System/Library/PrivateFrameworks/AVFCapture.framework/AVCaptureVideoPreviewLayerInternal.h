/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@protocol OS_dispatch_queue;
#import <AVFCapture/AVFCapture-Structs.h>
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

