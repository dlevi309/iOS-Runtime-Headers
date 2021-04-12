/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, BWMotionDataPreserver;

@interface BWIrisSequenceAdjuster : NSObject {

	NSMutableArray* _discontinuities;
	SCD_Struct_BW2 _firstIrisAudioOffset;
	NSMutableArray* _interleavingQueues;
	SCD_Struct_BW2 _nextAdjustedVideoTime;
	unsigned* _mediaTypes;
	NSMutableArray* _timeSkews;
	SCD_Struct_BW2 _masterMovieOriginalStartTime;
	SCD_Struct_BW2 _previewFrameDuration;
	SCD_Struct_BW2 _lastVideoAdjustedTime;
	BWMotionDataPreserver* _motionDataPreserver;
	int _audioOffsetForOriginalStillImageTimeMaximumFrameLatency;

}

@property (assign,nonatomic) int audioOffsetForOriginalStillImageTimeMaximumFrameLatency;              //@synthesize audioOffsetForOriginalStillImageTimeMaximumFrameLatency=_audioOffsetForOriginalStillImageTimeMaximumFrameLatency - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 masterMovieOriginalStartTime; 
@property (readonly) BOOL readyToReleaseAudio; 
+(void)initialize;
-(void)dealloc;
-(void)reset;
-(SCD_Struct_BW2)_adjustedTimeForAudioBufferWithTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)_adjustedTimeForVideoBufferWithTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)_audioOffsetForOriginalStillImageTime:(SCD_Struct_BW2)arg1 adjustedStillImageTime:(SCD_Struct_BW2)arg2 ;
-(SCD_Struct_BW2)_adjustedTimeForMetadataBufferWithTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)adjustedTimeForTime:(SCD_Struct_BW2)arg1 ;
-(BOOL)_getPreviousTimeSkewOut:(SCD_Struct_BW86*)arg1 andNextTimeSkewOut:(SCD_Struct_BW86*)arg2 forTime:(SCD_Struct_BW2)arg3 ;
-(long long)_indexOfTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)_originalDurationForVideoBufferWithTime:(SCD_Struct_BW2)arg1 ;
-(void)_adjustTimesInAudioInterleavingQueues;
-(id)initWithMediaTypes:(id)arg1 visMotionMetadataPreloadingEnabled:(BOOL)arg2 ;
-(void)enqueueVideoBufferTime:(SCD_Struct_BW2)arg1 nativeTime:(SCD_Struct_BW2)arg2 isBracketFrame:(BOOL)arg3 isSISFrame:(BOOL)arg4 ;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 forMediaTypeWithIndex:(long long)arg2 ;
-(SCD_Struct_BW2)audioOffsetForOriginalStillImageTime:(SCD_Struct_BW2)arg1 ;
-(opaqueCMSampleBufferRef)dequeueAndRetainAdjustedSampleBufferForMediaTypeWithIndex:(long long)arg1 ;
-(void)adjustMovieInfoTimes:(id)arg1 ;
-(SCD_Struct_BW2)adjustedTimeForStillImageTime:(SCD_Struct_BW2)arg1 ;
-(void)setMasterMovieOriginalStartTime:(SCD_Struct_BW2)arg1 ;
-(int)audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
-(SCD_Struct_BW2)masterMovieOriginalStartTime;
-(BOOL)readyToReleaseAudio;
-(id)_timeSkewsDescription;
-(void)setAudioOffsetForOriginalStillImageTimeMaximumFrameLatency:(int)arg1 ;
@end

