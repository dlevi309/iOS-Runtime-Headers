/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface BWVideoOrientationMetadataNode : BWNode {

	OpaqueCMClockRef _clock;
	OpaqueCMClockRef _masterClock;
	int _videoOrientation;
	BOOL _videoMirrored;
	int _sourcePosition;
	opaqueCMFormatDescriptionRef _boxedMetadataFormatDescription;
	unsigned _localIDOfOrientationMetadata;
	BOOL _recordVideoOrientationAndMirroringChanges;
	BOOL _recording;
	int _exifOrientation;
	OpaqueCMBlockBuffer* _bbufCache[8];
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(OpaqueCMClockRef)masterClock;
-(void)setMasterClock:(OpaqueCMClockRef)arg1 ;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(int)sourcePosition;
-(void)updateVideoOrientation:(int)arg1 ;
-(void)updateVideoMirrored:(BOOL)arg1 ;
-(void)setSourcePosition:(int)arg1 ;
-(void)_releaseCachedBBufs;
-(void)_determineExifOrientation;
-(void)_emitBufferForNewStateIfRecording;
-(void)_emitValidatedVideoOrientationSampleBufferForBoxedFormatOutputAtTime:(SCD_Struct_BW2)arg1 ;
@end

