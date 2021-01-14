/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NURenderJob.h>

@class NSArray;

@interface PIVideoReframeRenderJob : NURenderJob {

	NSArray* _keyframes;
	double _confidence;
	SCD_Struct_PI6 _stabCropRect;

}

@property (nonatomic,copy,readonly) NSArray * keyframes;                 //@synthesize keyframes=_keyframes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_PI6 stabCropRect;              //@synthesize stabCropRect=_stabCropRect - In the implementation block
@property (nonatomic,readonly) double confidence;                        //@synthesize confidence=_confidence - In the implementation block
-(double)confidence;
-(NSArray *)keyframes;
-(SCD_Struct_PI6)stabCropRect;
-(id)result;
-(BOOL)prepare:(out id*)arg1 ;
-(BOOL)wantsRenderStage;
-(BOOL)wantsCompleteStage;
-(id)scalePolicy;
-(BOOL)wantsOutputVideo;
-(void)_writeDiagnosticFilesForReframer:(id)arg1 metadata:(id)arg2 ;
-(BOOL)_createStabilizedKeyframesFromReframer:(id)arg1 videoTrack:(id)arg2 viewRect:(SCD_Struct_PI6)arg3 timedMetadata:(id)arg4 error:(out id*)arg5 ;
-(BOOL)_createKeyframesFromReframer:(id)arg1 videoTrack:(id)arg2 viewRect:(SCD_Struct_PI6)arg3 timedMetadata:(id)arg4 error:(out id*)arg5 ;
@end

