/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSMutableArray, AVCaptureDevice, AVWeakReference, AVCaptureInputPort, NSArray, NSString;

@interface AVCaptureConnectionInternal : NSObject {

	NSMutableArray* inputPorts;
	AVCaptureDevice* sourceDevice;
	AVWeakReference* outputWeakReference;
	AVWeakReference* videoPreviewLayerWeakReference;
	BOOL hasActiveObservers;
	BOOL active;
	BOOL enabled;
	int changeSeed;
	AVCaptureInputPort* audioInputPort;
	NSMutableArray* audioChannels;
	NSArray* audioChannelLevels;
	long long lastGetAudioLevelsTime;
	AVCaptureInputPort* videoInputPort;
	AVCaptureInputPort* metadataInputPort;
	AVCaptureInputPort* metadataItemInputPort;
	AVCaptureInputPort* depthDataInputPort;
	AVCaptureInputPort* visionDataInputPort;
	AVCaptureInputPort* pointCloudDataInputPort;
	AVCaptureInputPort* cameraCalibrationDataInputPort;
	BOOL videoMirroringSupported;
	BOOL automaticallyAdjustsVideoMirroring;
	BOOL videoMirrored;
	BOOL videoOrientationSupported;
	long long videoOrientation;
	SCD_Struct_AV7 videoMinFrameDuration;
	SCD_Struct_AV7 videoMaxFrameDuration;
	double videoMaxScaleAndCropFactor;
	double videoScaleAndCropFactor;
	int videoRetainedBufferCountHint;
	long long preferredVideoStabilizationMode;
	BOOL videoStabilizationEnabled;
	long long activeVideoStabilizationMode;
	BOOL hasVideoMinFrameDurationObserver;
	NSString* connectionID;
	BOOL cameraIntrinsicMatrixDeliverySupported;
	BOOL cameraIntrinsicMatrixDeliveryEnabled;
	BOOL livePhotoMetadataWritingEnabled;
	BOOL debugMetadataSidecarFileEnabled;

}
@end

