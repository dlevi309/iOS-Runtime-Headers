/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReference, NSMutableArray, NSArray, NSString, NSDictionary;

@interface AVCaptureMovieFileOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* recordingDelegatesArray;
	NSMutableArray* connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
	SCD_Struct_AV0 movieFragmentInterval;
	NSArray* metadata;
	NSArray* availableVideoCodecs;
	NSString* videoCodec;
	NSDictionary* videoCompressionProperties;
	BOOL sendLastVideoPreviewFrame;
	BOOL recording;
	BOOL paused;
	NSString* bravoCameraSelectionBehaviorForRecording;
	ct_green_tea_logger_sRef greenTeaLogger;

}
-(id)init;
-(void)dealloc;
@end

