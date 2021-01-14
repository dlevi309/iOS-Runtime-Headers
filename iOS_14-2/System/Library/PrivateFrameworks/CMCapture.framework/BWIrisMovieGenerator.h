/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray, NSObject, BWIrisStillImageMovieMetadataCache, BWVideoOrientationTimeMachine, BWLimitedGMErrorLogger;

@interface BWIrisMovieGenerator : NSObject {

	BOOL _sourceIsFrontFacingCamera;
	BOOL _sampleReferenceMoviesEnabled;
	SCD_Struct_BW8 _masterMovieDuration;
	OpaqueCMByteStreamRef _byteStream;
	OpaqueFigFormatReaderRef _masterMovieReader;
	BOOL _masterMovieParsingComplete;
	BOOL _vitalInputStreamHasBeenForcedOff;
	int _streamForcedOffErrorCode;
	long long _masterMovieAudioExtractionID;
	SCD_Struct_BW8 _actualMovieStartTime;
	OpaqueFigSimpleMutexRef _movieInfoAndCallbacksMutex;
	NSMutableArray* _movieInfoAndCallbacks;
	int _numberOfPendingReferenceMovies;
	NSObject*<OS_dispatch_queue> _movieGenerationQueue;
	BOOL _suspended;
	BWIrisStillImageMovieMetadataCache* _irisStillImageMovieMetadataCache;
	BWVideoOrientationTimeMachine* _videoOrientationTimeMachine;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;

}

@property (assign) BOOL suspended; 
@property (readonly) int numberOfPendingReferenceMovies; 
@property (assign,nonatomic) SCD_Struct_BW8 actualMovieStartTime;              //@synthesize actualMovieStartTime=_actualMovieStartTime - In the implementation block
@property (assign) BOOL vitalInputStreamHasBeenForcedOff;                      //@synthesize vitalInputStreamHasBeenForcedOff=_vitalInputStreamHasBeenForcedOff - In the implementation block
@property (assign) int streamForcedOffErrorCode;                               //@synthesize streamForcedOffErrorCode=_streamForcedOffErrorCode - In the implementation block
+(void)initialize;
+(BOOL)_addNewMetadataTrackToAssetWriter:(OpaqueFigAssetWriterRef)arg1 forTrackTimeScale:(int)arg2 yieldingTrackID:(int*)arg3 ;
-(BOOL)flush;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)initWithReadableByteStream:(OpaqueCMByteStreamRef)arg1 metadataByteStream:(OpaqueCMByteStreamRef)arg2 forFrontFacingCamera:(BOOL)arg3 sampleReferenceMoviesEnabled:(BOOL)arg4 movieGenerationQueue:(id)arg5 irisStillImageMovieMetadataCache:(id)arg6 videoOrientationTimeMachine:(id)arg7 ;
-(BOOL)_generateIrisMovies:(BOOL)arg1 ;
-(void)_cancelAllPendingIrisMoviesWithError:(int)arg1 ;
-(int)_doIrisMovieParsing:(BOOL)arg1 ;
-(void)_findIrisShortestTrackDuration:(SCD_Struct_BW8*)arg1 audioTrackDuration:(SCD_Struct_BW8*)arg2 flush:(BOOL)arg3 ;
-(BOOL)_generateCompletedIrisMovies:(id)arg1 ;
-(SCD_Struct_BW8)_determineMasterMovieStartTimeForInfo:(id)arg1 ;
-(BOOL)flushAsync;
-(id)_completedMovieInfoAndCallbacksForShortestTrackDuration:(SCD_Struct_BW8)arg1 audioTrackDuration:(SCD_Struct_BW8)arg2 flush:(BOOL)arg3 ;
-(int)_generateRefMovieForInfo:(id)arg1 movieLevelMetadata:(id)arg2 generateMetadataMovie:(BOOL)arg3 ;
-(int)_getAdjustedRefMovieStartTime:(SCD_Struct_BW8)arg1 adjustedRefMovieStartTimeOut:(SCD_Struct_BW8*)arg2 ;
-(int)_getAdjustedRefMovieEndTime:(SCD_Struct_BW8)arg1 adjustedRefMovieEndTimeOut:(SCD_Struct_BW8*)arg2 ;
-(id)initWithReadableByteStream:(OpaqueCMByteStreamRef)arg1 forFrontFacingCamera:(BOOL)arg2 sampleReferenceMoviesEnabled:(BOOL)arg3 movieGenerationQueue:(id)arg4 irisStillImageMovieMetadataCache:(id)arg5 videoOrientationTimeMachine:(id)arg6 ;
-(void)writeMovieWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)parseAdditionalFragments;
-(int)numberOfPendingReferenceMovies;
-(void)updateOverCaptureQualityScoresForMoviesEndingBefore:(SCD_Struct_BW8)arg1 fromMetadataRingBuffer:(id)arg2 ;
-(SCD_Struct_BW8)actualMovieStartTime;
-(void)setActualMovieStartTime:(SCD_Struct_BW8)arg1 ;
-(BOOL)vitalInputStreamHasBeenForcedOff;
-(void)setVitalInputStreamHasBeenForcedOff:(BOOL)arg1 ;
-(int)streamForcedOffErrorCode;
-(void)setStreamForcedOffErrorCode:(int)arg1 ;
-(void)dealloc;
@end

