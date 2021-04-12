/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FigCaptureMovieFileRecordingSettings, NSURL, NSArray, BWStats, NSString;

@interface BWIrisMovieInfo : NSObject <NSCopying> {

	FigCaptureMovieFileRecordingSettings* _settings;
	NSURL* _outputMovieURL;
	NSURL* _temporaryMovieURL;
	NSURL* _spatialOverCaptureMasterMovieURL;
	NSURL* _spatialOverCaptureTemporaryMovieURL;
	NSURL* _spatialOverCaptureOutputMovieURL;
	BOOL _spatialOverCaptureExpected;
	SCD_Struct_BW2 _stillImageCaptureTime;
	SCD_Struct_BW2 _stillImageCaptureHostTime;
	double _stillImageCaptureAbsoluteStartTime;
	int _stillImageCaptureType;
	BOOL _isMomentCaptureMovieRecording;
	SCD_Struct_BW2 _momentCaptureMovieRecordingMasterEndTime;
	CGSize _nonDestructiveCropSize;
	SCD_Struct_BW2 _movieStartTime;
	SCD_Struct_BW2 _movieEndTime;
	SCD_Struct_BW2 _movieTrimStartTime;
	SCD_Struct_BW2 _movieTrimEndTime;
	SCD_Struct_BW2 _beginTrimMasterPTS;
	SCD_Struct_BW2 _audioOffset;
	SCD_Struct_BW2 _stillTimeOffsetToVideoPrerollStartInMilliseconds;
	SCD_Struct_BW2 _stillTimeOffsetToVideoPrerollStopInMilliseconds;
	SCD_Struct_BW2 _stillTimeOffsetToAudioPrerollStartInMilliseconds;
	SCD_Struct_BW2 _stillTimeOffsetToAudioPrerollStopInMilliseconds;
	SCD_Struct_BW2 _masterMovieStartTime;
	NSURL* _masterMovieURL;
	BOOL _finalReferenceMovie;
	BOOL _stillImageEncoderKeyFrameEmitted;
	BOOL _stillImageVISKeyFrameTagged;
	BOOL _finalEnqueuedIrisRequest;
	BOOL _isOverlappingRequest;
	BOOL _originalPhotoRecording;
	unsigned _requestedSDOFVariants;
	NSURL* _temporaryURLForSDOFOriginalMovie;
	NSURL* _outputURLForSDOFOriginalMovie;
	NSArray* _movieLevelMetadataForSDOFOriginalMovie;
	BOOL _vitalityScoreValid;
	float _vitalityScore;
	unsigned _vitalityScoringVersion;
	BWStats* _stagingNodeOverallVideoFrameReceptionStats;
	BWStats* _stagingNodeValveActiveVideoFrameReceptionStats;
	BWStats* _fileCoordinatorToWriterMovingWindowLatencyStats;
	SCD_Struct_BW2 _stillTimeOffsetToVideoPrerollStartTime;
	SCD_Struct_BW2 _stillTimeOffsetToVideoPrerollStopTime;
	SCD_Struct_BW2 _stillTimeOffsetToAudioPrerollStartTime;
	SCD_Struct_BW2 _stillTimeOffsetToAudioPrerollStopTime;

}

@property (nonatomic,retain) NSURL * outputMovieURL;                                                             //@synthesize outputMovieURL=_outputMovieURL - In the implementation block
@property (nonatomic,retain) NSURL * spatialOverCaptureOutputMovieURL;                                           //@synthesize spatialOverCaptureOutputMovieURL=_spatialOverCaptureOutputMovieURL - In the implementation block
@property (assign,getter=isOriginalPhotoRecording,nonatomic) BOOL originalPhotoRecording;                        //@synthesize originalPhotoRecording=_originalPhotoRecording - In the implementation block
@property (nonatomic,readonly) FigCaptureMovieFileRecordingSettings * settings;                                  //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 stillImageCaptureTime;                                               //@synthesize stillImageCaptureTime=_stillImageCaptureTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 stillImageCaptureHostTime;                                         //@synthesize stillImageCaptureHostTime=_stillImageCaptureHostTime - In the implementation block
@property (nonatomic,readonly) double stillImageCaptureAbsoluteStartTime;                                        //@synthesize stillImageCaptureAbsoluteStartTime=_stillImageCaptureAbsoluteStartTime - In the implementation block
@property (nonatomic,readonly) int stillImageCaptureType;                                                        //@synthesize stillImageCaptureType=_stillImageCaptureType - In the implementation block
@property (assign,getter=isMomentCaptureMovieRecording,nonatomic) BOOL momentCaptureMovieRecording;              //@synthesize isMomentCaptureMovieRecording=_isMomentCaptureMovieRecording - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 momentCaptureMovieRecordingMasterEndTime;                            //@synthesize momentCaptureMovieRecordingMasterEndTime=_momentCaptureMovieRecordingMasterEndTime - In the implementation block
@property (assign,nonatomic) CGSize nonDestructiveCropSize;                                                      //@synthesize nonDestructiveCropSize=_nonDestructiveCropSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 movieStartTime;                                                      //@synthesize movieStartTime=_movieStartTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 movieEndTime;                                                        //@synthesize movieEndTime=_movieEndTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 movieTrimStartTime;                                                  //@synthesize movieTrimStartTime=_movieTrimStartTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 movieTrimEndTime;                                                    //@synthesize movieTrimEndTime=_movieTrimEndTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 beginTrimMasterPTS;                                                  //@synthesize beginTrimMasterPTS=_beginTrimMasterPTS - In the implementation block
@property (nonatomic,readonly) BOOL containsTrims; 
@property (assign,nonatomic) SCD_Struct_BW2 masterMovieStartTime;                                                //@synthesize masterMovieStartTime=_masterMovieStartTime - In the implementation block
@property (nonatomic,retain) NSURL * masterMovieURL;                                                             //@synthesize masterMovieURL=_masterMovieURL - In the implementation block
@property (nonatomic,retain) NSURL * temporaryMovieURL;                                                          //@synthesize temporaryMovieURL=_temporaryMovieURL - In the implementation block
@property (nonatomic,retain) NSURL * spatialOverCaptureMasterMovieURL;                                           //@synthesize spatialOverCaptureMasterMovieURL=_spatialOverCaptureMasterMovieURL - In the implementation block
@property (nonatomic,retain) NSURL * spatialOverCaptureTemporaryMovieURL;                                        //@synthesize spatialOverCaptureTemporaryMovieURL=_spatialOverCaptureTemporaryMovieURL - In the implementation block
@property (assign,nonatomic) BOOL spatialOverCaptureExpected;                                                    //@synthesize spatialOverCaptureExpected=_spatialOverCaptureExpected - In the implementation block
@property (assign,getter=isFinalReferenceMovie,nonatomic) BOOL finalReferenceMovie;                              //@synthesize finalReferenceMovie=_finalReferenceMovie - In the implementation block
@property (assign,nonatomic) BOOL stillImageEncoderKeyFrameEmitted;                                              //@synthesize stillImageEncoderKeyFrameEmitted=_stillImageEncoderKeyFrameEmitted - In the implementation block
@property (assign,nonatomic) BOOL stillImageVISKeyFrameTagged;                                                   //@synthesize stillImageVISKeyFrameTagged=_stillImageVISKeyFrameTagged - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 audioOffset;                                                         //@synthesize audioOffset=_audioOffset - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 stillTimeOffsetToVideoPrerollStartTime;                              //@synthesize stillTimeOffsetToVideoPrerollStartTime=_stillTimeOffsetToVideoPrerollStartTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 stillTimeOffsetToVideoPrerollStopTime;                               //@synthesize stillTimeOffsetToVideoPrerollStopTime=_stillTimeOffsetToVideoPrerollStopTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 stillTimeOffsetToAudioPrerollStartTime;                              //@synthesize stillTimeOffsetToAudioPrerollStartTime=_stillTimeOffsetToAudioPrerollStartTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW2 stillTimeOffsetToAudioPrerollStopTime;                               //@synthesize stillTimeOffsetToAudioPrerollStopTime=_stillTimeOffsetToAudioPrerollStopTime - In the implementation block
@property (assign,getter=isFinalEnqueuedIrisRequest,nonatomic) BOOL finalEnqueuedIrisRequest;                    //@synthesize finalEnqueuedIrisRequest=_finalEnqueuedIrisRequest - In the implementation block
@property (assign,nonatomic) BOOL isOverlappingRequest;                                                          //@synthesize isOverlappingRequest=_isOverlappingRequest - In the implementation block
@property (nonatomic,readonly) int numberOfRequestedVariants; 
@property (assign,nonatomic) unsigned requestedSDOFVariants;                                                     //@synthesize requestedSDOFVariants=_requestedSDOFVariants - In the implementation block
@property (nonatomic,copy) NSURL * temporaryURLForSDOFOriginalMovie;                                             //@synthesize temporaryURLForSDOFOriginalMovie=_temporaryURLForSDOFOriginalMovie - In the implementation block
@property (nonatomic,copy) NSURL * outputURLForSDOFOriginalMovie;                                                //@synthesize outputURLForSDOFOriginalMovie=_outputURLForSDOFOriginalMovie - In the implementation block
@property (nonatomic,copy) NSArray * movieLevelMetadataForSDOFOriginalMovie;                                     //@synthesize movieLevelMetadataForSDOFOriginalMovie=_movieLevelMetadataForSDOFOriginalMovie - In the implementation block
@property (assign,getter=isVitalityScoreValid,nonatomic) BOOL vitalityScoreValid;                                //@synthesize vitalityScoreValid=_vitalityScoreValid - In the implementation block
@property (assign,nonatomic) float vitalityScore;                                                                //@synthesize vitalityScore=_vitalityScore - In the implementation block
@property (assign,nonatomic) unsigned vitalityScoringVersion;                                                    //@synthesize vitalityScoringVersion=_vitalityScoringVersion - In the implementation block
@property (nonatomic,readonly) NSString * livePhotoMetadataStillImageKeyFrameSettingsID; 
@property (nonatomic,copy) BWStats * stagingNodeOverallVideoFrameReceptionStats;                                 //@synthesize stagingNodeOverallVideoFrameReceptionStats=_stagingNodeOverallVideoFrameReceptionStats - In the implementation block
@property (nonatomic,copy) BWStats * stagingNodeValveActiveVideoFrameReceptionStats;                             //@synthesize stagingNodeValveActiveVideoFrameReceptionStats=_stagingNodeValveActiveVideoFrameReceptionStats - In the implementation block
@property (nonatomic,copy) BWStats * fileCoordinatorToWriterMovingWindowLatencyStats;                            //@synthesize fileCoordinatorToWriterMovingWindowLatencyStats=_fileCoordinatorToWriterMovingWindowLatencyStats - In the implementation block
+(id)livePhotoMetadataStillImageKeyFrameSettingsIDForSettingsID:(long long)arg1 isOriginalPhotoRecording:(BOOL)arg2 ;
+(id)irisMovieInfoWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(SCD_Struct_BW2)arg2 stillImageCaptureHostTime:(SCD_Struct_BW2)arg3 stillImageCaptureAbsoluteStartTime:(double)arg4 stillImageCaptureType:(int)arg5 originalPhotoRecording:(BOOL)arg6 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FigCaptureMovieFileRecordingSettings *)settings;
-(double)stillImageCaptureAbsoluteStartTime;
-(void)setNonDestructiveCropSize:(CGSize)arg1 ;
-(CGSize)nonDestructiveCropSize;
-(SCD_Struct_BW2)movieTrimStartTime;
-(SCD_Struct_BW2)movieStartTime;
-(SCD_Struct_BW2)movieTrimEndTime;
-(SCD_Struct_BW2)stillImageCaptureTime;
-(id)_initWithFigCaptureMovieFileRecordingSettings:(id)arg1 stillImageCaptureTime:(SCD_Struct_BW2)arg2 stillImageCaptureHostTime:(SCD_Struct_BW2)arg3 stillImageCaptureAbsoluteStartTime:(double)arg4 stillImageCaptureType:(int)arg5 originalPhotoRecording:(BOOL)arg6 ;
-(int)numberOfRequestedVariants;
-(void)setRequestedSDOFVariants:(unsigned)arg1 ;
-(void)setOriginalPhotoRecording:(BOOL)arg1 ;
-(void)setFinalEnqueuedIrisRequest:(BOOL)arg1 ;
-(void)setFinalReferenceMovie:(BOOL)arg1 ;
-(NSURL *)outputURLForSDOFOriginalMovie;
-(void)setOutputMovieURL:(NSURL *)arg1 ;
-(NSURL *)temporaryURLForSDOFOriginalMovie;
-(void)setTemporaryMovieURL:(NSURL *)arg1 ;
-(NSArray *)movieLevelMetadataForSDOFOriginalMovie;
-(void)setMovieLevelMetadataForSDOFOriginalMovie:(NSArray *)arg1 ;
-(void)setOutputURLForSDOFOriginalMovie:(NSURL *)arg1 ;
-(void)setTemporaryURLForSDOFOriginalMovie:(NSURL *)arg1 ;
-(NSURL *)spatialOverCaptureOutputMovieURL;
-(NSURL *)spatialOverCaptureTemporaryMovieURL;
-(NSURL *)spatialOverCaptureMasterMovieURL;
-(void)setMasterMovieURL:(NSURL *)arg1 ;
-(NSURL *)outputMovieURL;
-(NSURL *)temporaryMovieURL;
-(void)setSpatialOverCaptureOutputMovieURL:(NSURL *)arg1 ;
-(void)setSpatialOverCaptureTemporaryMovieURL:(NSURL *)arg1 ;
-(void)setSpatialOverCaptureMasterMovieURL:(NSURL *)arg1 ;
-(BOOL)spatialOverCaptureExpected;
-(void)setSpatialOverCaptureExpected:(BOOL)arg1 ;
-(BOOL)isMomentCaptureMovieRecording;
-(void)setMomentCaptureMovieRecording:(BOOL)arg1 ;
-(SCD_Struct_BW2)momentCaptureMovieRecordingMasterEndTime;
-(void)setMomentCaptureMovieRecordingMasterEndTime:(SCD_Struct_BW2)arg1 ;
-(void)setMovieStartTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)movieEndTime;
-(void)setMovieEndTime:(SCD_Struct_BW2)arg1 ;
-(void)setMovieTrimStartTime:(SCD_Struct_BW2)arg1 ;
-(void)setMovieTrimEndTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)beginTrimMasterPTS;
-(void)setBeginTrimMasterPTS:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)audioOffset;
-(void)setAudioOffset:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)stillTimeOffsetToVideoPrerollStartTime;
-(void)setStillTimeOffsetToVideoPrerollStartTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)stillTimeOffsetToVideoPrerollStopTime;
-(void)setStillTimeOffsetToVideoPrerollStopTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)stillTimeOffsetToAudioPrerollStartTime;
-(void)setStillTimeOffsetToAudioPrerollStartTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)stillTimeOffsetToAudioPrerollStopTime;
-(void)setStillTimeOffsetToAudioPrerollStopTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)masterMovieStartTime;
-(void)setMasterMovieStartTime:(SCD_Struct_BW2)arg1 ;
-(NSURL *)masterMovieURL;
-(BOOL)isFinalReferenceMovie;
-(BOOL)stillImageEncoderKeyFrameEmitted;
-(void)setStillImageEncoderKeyFrameEmitted:(BOOL)arg1 ;
-(BOOL)stillImageVISKeyFrameTagged;
-(void)setStillImageVISKeyFrameTagged:(BOOL)arg1 ;
-(BOOL)isFinalEnqueuedIrisRequest;
-(BOOL)isOverlappingRequest;
-(void)setIsOverlappingRequest:(BOOL)arg1 ;
-(unsigned)requestedSDOFVariants;
-(BOOL)isVitalityScoreValid;
-(void)setVitalityScoreValid:(BOOL)arg1 ;
-(float)vitalityScore;
-(void)setVitalityScore:(float)arg1 ;
-(unsigned)vitalityScoringVersion;
-(void)setVitalityScoringVersion:(unsigned)arg1 ;
-(BWStats *)stagingNodeOverallVideoFrameReceptionStats;
-(void)setStagingNodeOverallVideoFrameReceptionStats:(BWStats *)arg1 ;
-(BWStats *)stagingNodeValveActiveVideoFrameReceptionStats;
-(void)setStagingNodeValveActiveVideoFrameReceptionStats:(BWStats *)arg1 ;
-(BWStats *)fileCoordinatorToWriterMovingWindowLatencyStats;
-(void)setFileCoordinatorToWriterMovingWindowLatencyStats:(BWStats *)arg1 ;
-(void)setMomentCaptureRecordingStillImageCaptureHostTimeOverride:(SCD_Struct_BW2)arg1 stillImageCaptureTimeOverride:(SCD_Struct_BW2)arg2 ;
-(BOOL)containsTrims;
-(id)copyMovieInfosForRequestedSDOFVariants;
-(id)copySpatialOverCaptureVariant;
-(NSString *)livePhotoMetadataStillImageKeyFrameSettingsID;
-(void)setStillImageCaptureTime:(SCD_Struct_BW2)arg1 ;
-(SCD_Struct_BW2)stillImageCaptureHostTime;
-(int)stillImageCaptureType;
-(BOOL)isOriginalPhotoRecording;
@end

