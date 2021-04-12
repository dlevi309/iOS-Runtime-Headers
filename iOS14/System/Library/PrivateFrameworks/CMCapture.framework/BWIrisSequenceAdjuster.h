/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray, BWMotionDataPreserver;

@interface BWIrisSequenceAdjuster : NSObject {

	NSMutableArray* _discontinuities;
	SCD_Struct_BW8 _firstIrisAudioOffset;
	NSMutableArray* _interleavingQueues;
	SCD_Struct_BW8 _nextAdjustedVideoTime;
	unsigned* _mediaTypes;
	NSMutableArray* _timeSkews;
	SCD_Struct_BW8 _masterMovieOriginalStartTime;
	SCD_Struct_BW8 _previewFrameDuration;
	SCD_Struct_BW8 _lastVideoAdjustedTime;
	BWMotionDataPreserver* _motionDataPreserver;
	int _audioOffsetForOriginalStillImageTimeMaximumFrameLatency;

}

@property (assign,nonatomic) int audioOffsetForOriginalStillImageTimeMaximumFrameLatency;              //@synthesize audioOffsetForOriginalStillImageTimeMaximumFrameLatency=_audioOffsetForOriginalStillImageTimeMaximumFrameLatency - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 masterMovieOriginalStartTime; 
@property (readonly) BOOL readyToReleaseAudio; 
+(void)initialize;
-(SCD_Struct_BW8)audioOffsetForOriginalStillImageTime:(SCD_Struct_BW8)arg1 ;
-(id)_timeSkewsDescription;
-(opaqueCMSampleBufferRef)dequeueAndRetainAdjustedSampleBufferForMediaTypeWithIndex:(long long)arg1 ;
-(SCD_Struct_BW8)_adjustedTimeForVideoBufferWithTime:(SCD_Struct_BW8)arg1 ;
-(void)adjustMovieInfoTimes:(id)arg1 ;
-(long long)_indexOfTime:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW8)adjustedTimeForStillImageTime:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW8)_adjustedTimeForMetadataBufferWithTime:(SCD_Struct_BW8)arg1 ;
-(BOOL)_getPreviousTimeSkewOut:(id*)arg1 andNextTimeSkewOut:(id*)arg2 forTime:(SCD_Struct_BW8)arg3 ;
-(SCD_Struct_BW8)adjustedTimeForTime:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW8)masterMovieOriginalStartTime;
-(SCD_Struct_BW8)_originalDurationForVideoBufferWithTime:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW8)_audioOffsetForOriginalStillImageTime:(SCD_Struct_BW8)arg1 adjustedStillImageTime:(SCD_Struct_BW8)arg2 ;
-(int)audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
-(void)enqueueVideoBufferTime:(SCD_Struct_BW8)arg1 nativeTime:(SCD_Struct_BW8)arg2 isBracketFrame:(BOOL)arg3 isSISFrame:(BOOL)arg4 ;
-(void)reset;
-(void)setMasterMovieOriginalStartTime:(SCD_Struct_BW8)arg1 ;
-(void)setAudioOffsetForOriginalStillImageTimeMaximumFrameLatency:(int)arg1 ;
-(SCD_Struct_BW8)_adjustedTimeForAudioBufferWithTime:(SCD_Struct_BW8)arg1 ;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 forMediaTypeWithIndex:(long long)arg2 ;
-(id)initWithMediaTypes:(id)arg1 visMotionMetadataPreloadingEnabled:(BOOL)arg2 ;
-(void)_adjustTimesInAudioInterleavingQueues;
-(BOOL)readyToReleaseAudio;
-(void)dealloc;
@end

