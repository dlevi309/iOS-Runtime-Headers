/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


#import <AVFoundation/AVFoundation-Structs.h>
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
@property (assign,nonatomic) SCD_Struct_AV7 requestedTimeToleranceBefore; 
@property (assign,nonatomic) SCD_Struct_AV7 requestedTimeToleranceAfter; 
+(id)assetImageGeneratorWithAsset:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(CGSize)maximumSize;
-(AVAsset *)asset;
-(void)setMaximumSize:(CGSize)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(void)setAppliesPreferredTrackTransform:(BOOL)arg1 ;
-(CGImageRef)copyCGImageAtTime:(SCD_Struct_AV7)arg1 actualTime:(SCD_Struct_AV7*)arg2 error:(id*)arg3 ;
-(void)setApertureMode:(NSString *)arg1 ;
-(void)setRequestedTimeToleranceBefore:(SCD_Struct_AV7)arg1 ;
-(void)setRequestedTimeToleranceAfter:(SCD_Struct_AV7)arg1 ;
-(void)_serverDied;
-(BOOL)appliesPreferredTrackTransform;
-(NSString *)apertureMode;
-(SCD_Struct_AV7)requestedTimeToleranceBefore;
-(SCD_Struct_AV7)requestedTimeToleranceAfter;
-(AVVideoComposition *)videoComposition;
-(id)_NSErrorForError:(int)arg1 ;
-(CGSize)_scaledSizeForRenderSize:(CGSize)arg1 ;
-(id)_videoSettingWithSize:(CGSize)arg1 ;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(id)_makeAutoreleasedAssetReader;
-(CGImageRef)_copyCGImageAtTime:(SCD_Struct_AV7)arg1 usingAssetReader:(id)arg2 error:(id*)arg3 ;
-(id)_optionsDictionary;
-(BOOL)_ensureFigAssetImageGeneratorReturningError:(id*)arg1 ;
-(id<AVVideoCompositing>)customVideoCompositor;
-(id)_requestWithRequestID:(id)arg1 ;
-(void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelAllCGImageGeneration;
-(void)_didGenerateCGImage:(id)arg1 ;
-(void)_failedToGenerateCGImage:(id)arg1 ;
@end

