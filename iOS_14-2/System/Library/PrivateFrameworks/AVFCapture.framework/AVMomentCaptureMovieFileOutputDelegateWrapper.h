/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/

#import <AVFCapture/AVCaptureFileOutputDelegateWrapper.h>

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
-(NSString *)videoCodecType;
-(void)setResolvedSettings:(AVMomentCaptureMovieRecordingResolvedSettings *)arg1 ;
-(AVMomentCaptureMovieRecordingResolvedSettings *)resolvedSettings;
-(id)initWithSettings:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(NSURL *)spatialOverCaptureMovieFileURL;
-(NSArray *)spatialOverCaptureMovieMetadata;
-(BOOL)didFinishWritingMovieCallbackFired;
-(void)setDidFinishWritingMovieCallbackFired:(BOOL)arg1 ;
-(BOOL)didFinishWritingSpatialOverCaptureMovieCallbackFired;
-(void)setDidFinishWritingSpatialOverCaptureMovieCallbackFired:(BOOL)arg1 ;
-(void)dealloc;
@end

