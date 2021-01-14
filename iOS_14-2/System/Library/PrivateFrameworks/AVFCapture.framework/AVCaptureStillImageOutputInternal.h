/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSMutableArray, NSDictionary;

@interface AVCaptureStillImageOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* stillImageRequests;
	BOOL squareCropEnabled;
	CGSize previewImageSize;
	unsigned imageDataFormatType;
	float jpegQuality;
	BOOL jpegQualitySpecified;
	BOOL noiseReductionEnabled;
	NSDictionary* outputSettings;
	BOOL isCapturingPhoto;
	BOOL SISSupported;
	BOOL SISEnabled;
	BOOL SISActive;
	BOOL highResStillEnabled;
	unsigned shutterSoundID;
	SCD_Struct_AV29 preparedBracket;
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

