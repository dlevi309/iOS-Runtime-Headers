/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
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
	SCD_Struct_AV0 videoMinFrameDuration;
	SCD_Struct_AV0 videoMaxFrameDuration;
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
	NSArray* supportedVideoMirroringMethodsForMovieRecording;
	long long videoMirroringMethodForMovieRecording;

}
@end

