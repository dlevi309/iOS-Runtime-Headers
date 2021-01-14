/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVMomentCaptureMovieRecordingResolvedSettings, NSURL, NSArray, NSString;

@interface AVMomentCaptureMovie : NSObject {

	AVMomentCaptureMovieRecordingResolvedSettings* _resolvedSettings;
	NSURL* _outputFileURL;
	NSURL* _debugMetadataSidecarFileURL;
	CVBufferRef _previewPixelBuffer;
	SCD_Struct_AV0 _duration;
	NSArray* _movieMetadata;
	NSString* _overCaptureGroupIdentifier;
	BOOL _hasOverCapture;

}

@property (nonatomic,readonly) AVMomentCaptureMovieRecordingResolvedSettings * resolvedSettings;              //@synthesize resolvedSettings=_resolvedSettings - In the implementation block
@property (nonatomic,readonly) NSURL * outputFileURL;                                                         //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (nonatomic,readonly) NSURL * debugMetadataSidecarFileURL;                                           //@synthesize debugMetadataSidecarFileURL=_debugMetadataSidecarFileURL - In the implementation block
@property (nonatomic,readonly) CVBufferRef previewPixelBuffer;                                                //@synthesize previewPixelBuffer=_previewPixelBuffer - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV0 duration;                                                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSArray * movieMetadata;                                                       //@synthesize movieMetadata=_movieMetadata - In the implementation block
+(id)movieWithResolvedSettings:(id)arg1 outputFileURL:(id)arg2 movieMetadata:(id)arg3 ;
-(id)debugDescription;
-(CVBufferRef)previewPixelBuffer;
-(NSURL *)outputFileURL;
-(id)description;
-(id)_initWithResolvedSettings:(id)arg1 outputFileURL:(id)arg2 movieMetadata:(id)arg3 ;
-(void)_setDuration:(SCD_Struct_AV0)arg1 ;
-(NSURL *)debugMetadataSidecarFileURL;
-(AVMomentCaptureMovieRecordingResolvedSettings *)resolvedSettings;
-(NSArray *)movieMetadata;
-(SCD_Struct_AV0)duration;
-(void)_setDebugMetadataSidecarFileURL:(id)arg1 ;
-(void)_setPreviewPixelBuffer:(CVBufferRef)arg1 ;
-(void)dealloc;
@end

