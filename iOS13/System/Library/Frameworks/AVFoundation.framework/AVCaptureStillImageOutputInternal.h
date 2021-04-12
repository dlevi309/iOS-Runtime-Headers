/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSMutableArray, NSDictionary;

@interface AVCaptureStillImageOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* stillImageRequests;
	BOOL squareCropEnabled;
	CGSize previewImageSize;
	unsigned imageDataFormatType;
	float jpegQuality;
	BOOL jpegQualitySpecified;
	long long HDRCaptureMode;
	BOOL EV0CaptureEnabled;
	BOOL noiseReductionEnabled;
	BOOL suspendsVideoProcessingDuringCapture;
	NSDictionary* outputSettings;
	BOOL isCapturingPhoto;
	BOOL rawCaptureEnabled;
	BOOL SISSupported;
	BOOL SISEnabled;
	BOOL SISActive;
	BOOL highResStillEnabled;
	unsigned shutterSoundID;
	SCD_Struct_AV54 preparedBracket;
	NSMutableArray* prepareRequests;
	unsigned long long maxBracketedCaptureCount;
	BOOL lensStabilizationDuringBracketedCaptureSupported;
	BOOL lensStabilizationDuringBracketedCaptureEnabled;
	BOOL bravoImageFusionSupported;
	ct_green_tea_logger_sRef greenTeaLogger;

}
-(id)init;
-(void)dealloc;
@end

