/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/FigCaptureStillImageSettings.h>

@class FigCaptureMovieFileRecordingSettings, NSURL, NSArray;

@interface FigCaptureIrisStillImageSettings : FigCaptureStillImageSettings {

	int _movieMode;
	FigCaptureMovieFileRecordingSettings* _movieRecordingSettings;
	NSURL* _movieURLForOriginalImage;
	NSArray* _movieLevelMetadataForOriginalImage;
	NSURL* _spatialOverCaptureMovieURLForOriginalImage;
	NSArray* _spatialOverCaptureMovieLevelMetadataForOriginalImage;
	CGSize _nonDestructiveCropSize;

}

@property (assign,nonatomic) int movieMode;                                                             //@synthesize movieMode=_movieMode - In the implementation block
@property (nonatomic,copy) FigCaptureMovieFileRecordingSettings * movieRecordingSettings;               //@synthesize movieRecordingSettings=_movieRecordingSettings - In the implementation block
@property (nonatomic,copy) NSURL * movieURLForOriginalImage;                                            //@synthesize movieURLForOriginalImage=_movieURLForOriginalImage - In the implementation block
@property (nonatomic,copy) NSArray * movieLevelMetadataForOriginalImage;                                //@synthesize movieLevelMetadataForOriginalImage=_movieLevelMetadataForOriginalImage - In the implementation block
@property (nonatomic,copy) NSURL * spatialOverCaptureMovieURLForOriginalImage;                          //@synthesize spatialOverCaptureMovieURLForOriginalImage=_spatialOverCaptureMovieURLForOriginalImage - In the implementation block
@property (nonatomic,copy) NSArray * spatialOverCaptureMovieLevelMetadataForOriginalImage;              //@synthesize spatialOverCaptureMovieLevelMetadataForOriginalImage=_spatialOverCaptureMovieLevelMetadataForOriginalImage - In the implementation block
@property (assign,nonatomic) CGSize nonDestructiveCropSize;                                             //@synthesize nonDestructiveCropSize=_nonDestructiveCropSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNonDestructiveCropSize:(CGSize)arg1 ;
-(void)setMovieURLForOriginalImage:(NSURL *)arg1 ;
-(CGSize)nonDestructiveCropSize;
-(void)setMovieMode:(int)arg1 ;
-(NSArray *)movieLevelMetadataForOriginalImage;
-(void)encodeWithCoder:(id)arg1 ;
-(FigCaptureMovieFileRecordingSettings *)movieRecordingSettings;
-(NSURL *)movieURLForOriginalImage;
-(NSArray *)spatialOverCaptureMovieLevelMetadataForOriginalImage;
-(void)setMovieRecordingSettings:(FigCaptureMovieFileRecordingSettings *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(int)movieMode;
-(void)setSpatialOverCaptureMovieLevelMetadataForOriginalImage:(NSArray *)arg1 ;
-(void)setSpatialOverCaptureMovieURLForOriginalImage:(NSURL *)arg1 ;
-(void)setMovieLevelMetadataForOriginalImage:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSURL *)spatialOverCaptureMovieURLForOriginalImage;
@end

