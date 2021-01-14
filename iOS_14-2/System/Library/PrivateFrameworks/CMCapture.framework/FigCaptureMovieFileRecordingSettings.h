/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureRecordingSettings.h>

@class NSDictionary, NSArray, NSURL;

@interface FigCaptureMovieFileRecordingSettings : FigCaptureRecordingSettings {

	NSDictionary* _videoSettings;
	NSDictionary* _audioSettings;
	BOOL _videoMirrored;
	int _videoOrientation;
	BOOL _recordVideoOrientationAndMirroringChanges;
	SCD_Struct_BW8 _movieFragmentInterval;
	NSArray* _movieLevelMetadata;
	BOOL _sendPreviewIOSurface;
	BOOL _irisRecording;
	BOOL _debugMetadataSidecarFileEnabled;
	int _bravoCameraSelectionBehavior;
	BOOL _irisMovieRecording;
	NSURL* _spatialOverCaptureMovieURL;
	NSArray* _spatialOverCaptureMovieLevelMetadata;
	unsigned long long _movieStartTimeOverride;

}

@property (nonatomic,copy) NSDictionary * videoSettings;                                       //@synthesize videoSettings=_videoSettings - In the implementation block
@property (nonatomic,copy) NSDictionary * audioSettings;                                       //@synthesize audioSettings=_audioSettings - In the implementation block
@property (assign,nonatomic) BOOL videoMirrored;                                               //@synthesize videoMirrored=_videoMirrored - In the implementation block
@property (assign,nonatomic) int videoOrientation;                                             //@synthesize videoOrientation=_videoOrientation - In the implementation block
@property (assign,nonatomic) BOOL recordVideoOrientationAndMirroringChanges;                   //@synthesize recordVideoOrientationAndMirroringChanges=_recordVideoOrientationAndMirroringChanges - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 movieFragmentInterval;                             //@synthesize movieFragmentInterval=_movieFragmentInterval - In the implementation block
@property (nonatomic,copy) NSArray * movieLevelMetadata;                                       //@synthesize movieLevelMetadata=_movieLevelMetadata - In the implementation block
@property (assign,nonatomic) BOOL sendPreviewIOSurface;                                        //@synthesize sendPreviewIOSurface=_sendPreviewIOSurface - In the implementation block
@property (assign,getter=isIrisRecording,nonatomic) BOOL irisRecording;                        //@synthesize irisRecording=_irisRecording - In the implementation block
@property (assign,nonatomic) BOOL debugMetadataSidecarFileEnabled;                             //@synthesize debugMetadataSidecarFileEnabled=_debugMetadataSidecarFileEnabled - In the implementation block
@property (assign,nonatomic) int bravoCameraSelectionBehavior;                                 //@synthesize bravoCameraSelectionBehavior=_bravoCameraSelectionBehavior - In the implementation block
@property (assign,getter=isIrisMovieRecording,nonatomic) BOOL irisMovieRecording;              //@synthesize irisMovieRecording=_irisMovieRecording - In the implementation block
@property (nonatomic,copy) NSURL * spatialOverCaptureMovieURL;                                 //@synthesize spatialOverCaptureMovieURL=_spatialOverCaptureMovieURL - In the implementation block
@property (nonatomic,copy) NSArray * spatialOverCaptureMovieLevelMetadata;                     //@synthesize spatialOverCaptureMovieLevelMetadata=_spatialOverCaptureMovieLevelMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long movieStartTimeOverride;                        //@synthesize movieStartTimeOverride=_movieStartTimeOverride - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)audioSettings;
-(NSDictionary *)videoSettings;
-(id)init;
-(void)setVideoMirrored:(BOOL)arg1 ;
-(int)videoOrientation;
-(void)setDebugMetadataSidecarFileEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(int)bravoCameraSelectionBehavior;
-(NSArray *)movieLevelMetadata;
-(void)setVideoOrientation:(int)arg1 ;
-(unsigned long long)movieStartTimeOverride;
-(BOOL)debugMetadataSidecarFileEnabled;
-(void)setMovieStartTimeOverride:(unsigned long long)arg1 ;
-(void)setIrisRecording:(BOOL)arg1 ;
-(void)setIrisMovieRecording:(BOOL)arg1 ;
-(void)setVideoSettings:(NSDictionary *)arg1 ;
-(NSArray *)spatialOverCaptureMovieLevelMetadata;
-(BOOL)isIrisMovieRecording;
-(void)setMovieFragmentInterval:(SCD_Struct_BW8)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBravoCameraSelectionBehavior:(int)arg1 ;
-(BOOL)isIrisRecording;
-(BOOL)sendPreviewIOSurface;
-(NSURL *)spatialOverCaptureMovieURL;
-(SCD_Struct_BW8)movieFragmentInterval;
-(void)setMovieLevelMetadata:(NSArray *)arg1 ;
-(BOOL)videoMirrored;
-(BOOL)recordVideoOrientationAndMirroringChanges;
-(void)setAudioSettings:(NSDictionary *)arg1 ;
-(void)setSendPreviewIOSurface:(BOOL)arg1 ;
-(void)setRecordVideoOrientationAndMirroringChanges:(BOOL)arg1 ;
-(void)setSpatialOverCaptureMovieURL:(NSURL *)arg1 ;
-(void)setSpatialOverCaptureMovieLevelMetadata:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

