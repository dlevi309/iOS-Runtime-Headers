/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSMutableArray, NSArray, NSString, NSDictionary;

@interface AVCaptureMovieFileOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* recordingDelegatesArray;
	NSMutableArray* connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
	SCD_Struct_AV7 movieFragmentInterval;
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

