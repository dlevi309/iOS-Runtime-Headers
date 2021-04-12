/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVCaptureFileOutputDelegateWrapper.h>

@class NSString, NSURL, NSArray, AVMomentCaptureMovieRecordingResolvedSettings;

@interface AVMomentCaptureMovieFileOutputDelegateWrapper : AVCaptureFileOutputDelegateWrapper {

	NSString* _videoCodecType;
	NSURL* _spatialOverCaptureMovieFileURL;
	NSArray* _spatialOverCaptureMovieMetadata;
	AVMomentCaptureMovieRecordingResolvedSettings* _resolvedSettings;
	BOOL _didFinishWritingMovieCallbackFired;
	BOOL _didFinishWritingSpatialOverCaptureMovieCallbackFired;

}

@property (readonly) NSString * videoCodecType;                                                             //@synthesize videoCodecType=_videoCodecType - In the implementation block
@property (readonly) NSURL * spatialOverCaptureMovieFileURL;                                                //@synthesize spatialOverCaptureMovieFileURL=_spatialOverCaptureMovieFileURL - In the implementation block
@property (readonly) NSArray * spatialOverCaptureMovieMetadata;                                             //@synthesize spatialOverCaptureMovieMetadata=_spatialOverCaptureMovieMetadata - In the implementation block
@property (nonatomic,retain) AVMomentCaptureMovieRecordingResolvedSettings * resolvedSettings;              //@synthesize resolvedSettings=_resolvedSettings - In the implementation block
@property (assign,nonatomic) BOOL didFinishWritingMovieCallbackFired;                                       //@synthesize didFinishWritingMovieCallbackFired=_didFinishWritingMovieCallbackFired - In the implementation block
@property (assign,nonatomic) BOOL didFinishWritingSpatialOverCaptureMovieCallbackFired;                     //@synthesize didFinishWritingSpatialOverCaptureMovieCallbackFired=_didFinishWritingSpatialOverCaptureMovieCallbackFired - In the implementation block
+(id)wrapperWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(void)dealloc;
-(NSString *)videoCodecType;
-(AVMomentCaptureMovieRecordingResolvedSettings *)resolvedSettings;
-(void)setResolvedSettings:(AVMomentCaptureMovieRecordingResolvedSettings *)arg1 ;
-(id)initWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(NSURL *)spatialOverCaptureMovieFileURL;
-(NSArray *)spatialOverCaptureMovieMetadata;
-(BOOL)didFinishWritingMovieCallbackFired;
-(void)setDidFinishWritingMovieCallbackFired:(BOOL)arg1 ;
-(BOOL)didFinishWritingSpatialOverCaptureMovieCallbackFired;
-(void)setDidFinishWritingSpatialOverCaptureMovieCallbackFired:(BOOL)arg1 ;
@end

