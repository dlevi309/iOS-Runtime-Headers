/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetImageGeneratorInternal, AVAsset, NSString, AVVideoComposition;

@interface AVAssetImageGenerator : NSObject {

	AVAssetImageGeneratorInternal* _priv;

}

@property (nonatomic,readonly) AVAsset * asset; 
@property (assign,nonatomic) BOOL appliesPreferredTrackTransform; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (nonatomic,copy) NSString * apertureMode; 
@property (nonatomic,copy) AVVideoComposition * videoComposition; 
@property (nonatomic,readonly) id<AVVideoCompositing> customVideoCompositor; 
@property (assign,nonatomic) SCD_Struct_AV6 requestedTimeToleranceBefore; 
@property (assign,nonatomic) SCD_Struct_AV6 requestedTimeToleranceAfter; 
+(id)assetImageGeneratorWithAsset:(id)arg1 ;
-(void)_serverDied;
-(id)init;
-(CGSize)maximumSize;
-(AVAsset *)asset;
-(void)setAppliesPreferredTrackTransform:(BOOL)arg1 ;
-(CGImageRef)copyCGImageAtTime:(SCD_Struct_AV6)arg1 actualTime:(SCD_Struct_AV6*)arg2 error:(id*)arg3 ;
-(id)initWithAsset:(id)arg1 ;
-(NSString *)apertureMode;
-(AVVideoComposition *)videoComposition;
-(BOOL)appliesPreferredTrackTransform;
-(SCD_Struct_AV6)requestedTimeToleranceBefore;
-(SCD_Struct_AV6)requestedTimeToleranceAfter;
-(BOOL)prefersStandardDynamicRange;
-(id)_NSErrorForError:(int)arg1 ;
-(CGSize)_scaledSizeForRenderSize:(CGSize)arg1 ;
-(id)_videoSettingWithSize:(CGSize)arg1 ;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(id)_makeAutoreleasedAssetReader;
-(id)_optionsDictionary;
-(CGImageRef)_copyCGImageAtTime:(SCD_Struct_AV6)arg1 usingAssetReader:(id)arg2 error:(id*)arg3 ;
-(id<AVVideoCompositing>)customVideoCompositor;
-(BOOL)_ensureFigAssetImageGeneratorAllowingSynchronousPropertyLoad:(BOOL)arg1 error:(id*)arg2 ;
-(id)_requestWithRequestID:(id)arg1 ;
-(void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelAllCGImageGeneration;
-(void)setPrefersStandardDynamicRange:(BOOL)arg1 ;
-(void)setApertureMode:(NSString *)arg1 ;
-(void)setRequestedTimeToleranceBefore:(SCD_Struct_AV6)arg1 ;
-(void)setRequestedTimeToleranceAfter:(SCD_Struct_AV6)arg1 ;
-(void)_didGenerateCGImage:(id)arg1 ;
-(void)_failedToGenerateCGImage:(id)arg1 ;
-(void)setMaximumSize:(CGSize)arg1 ;
-(void)dealloc;
@end

