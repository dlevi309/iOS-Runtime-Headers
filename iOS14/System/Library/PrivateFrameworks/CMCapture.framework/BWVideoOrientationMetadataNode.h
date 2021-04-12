/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWNode.h>

@protocol OS_dispatch_queue;
@class BWVideoOrientationTimeMachine, NSObject;

@interface BWVideoOrientationMetadataNode : BWNode {

	OpaqueCMClockRef _clock;
	OpaqueCMClockRef _masterClock;
	int _videoOrientation;
	BOOL _videoMirrored;
	int _sourcePosition;
	opaqueCMFormatDescriptionRef _boxedMetadataFormatDescription;
	unsigned _localIDOfOrientationMetadata;
	BOOL _recordVideoOrientationAndMirroringChanges;
	BOOL _physicalMirroringForMovieRecordingEnabled;
	BOOL _flipMetadataHorizontally;
	BOOL _recording;
	int _exifOrientation;
	OpaqueCMBlockBuffer* _bbufCache[8];
	BWVideoOrientationTimeMachine* _videoOrientationTimeMachine;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;

}

@property (nonatomic,readonly) BWVideoOrientationTimeMachine * videoOrientationTimeMachine; 
+(void)initialize;
-(OpaqueCMClockRef)masterClock;
-(int)sourcePosition;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(id)nodeSubType;
-(void)_releaseCachedBBufs;
-(id)init;
-(void)setSourcePosition:(int)arg1 ;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(void)updateVideoOrientation:(int)arg1 ;
-(BOOL)physicalMirroringForMovieRecordingEnabled;
-(void)setPhysicalMirroringForMovieRecordingEnabled:(BOOL)arg1 ;
-(void)updateVideoMirrored:(BOOL)arg1 ;
-(void)_determineExifOrientation;
-(BWVideoOrientationTimeMachine *)videoOrientationTimeMachine;
-(void)_emitValidatedVideoOrientationSampleBufferForBoxedFormatOutputAtTime:(SCD_Struct_BW8)arg1 ;
-(void)_emitBufferForNewStateIfRecording;
-(void)dealloc;
@end

