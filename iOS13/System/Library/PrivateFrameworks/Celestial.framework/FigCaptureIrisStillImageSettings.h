/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureStillImageSettings.h>

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
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FigCaptureMovieFileRecordingSettings *)movieRecordingSettings;
-(void)setMovieMode:(int)arg1 ;
-(void)setMovieRecordingSettings:(FigCaptureMovieFileRecordingSettings *)arg1 ;
-(void)setMovieURLForOriginalImage:(NSURL *)arg1 ;
-(void)setMovieLevelMetadataForOriginalImage:(NSArray *)arg1 ;
-(void)setSpatialOverCaptureMovieURLForOriginalImage:(NSURL *)arg1 ;
-(void)setSpatialOverCaptureMovieLevelMetadataForOriginalImage:(NSArray *)arg1 ;
-(void)setNonDestructiveCropSize:(CGSize)arg1 ;
-(int)movieMode;
-(NSURL *)movieURLForOriginalImage;
-(NSArray *)movieLevelMetadataForOriginalImage;
-(NSURL *)spatialOverCaptureMovieURLForOriginalImage;
-(NSArray *)spatialOverCaptureMovieLevelMetadataForOriginalImage;
-(CGSize)nonDestructiveCropSize;
@end

