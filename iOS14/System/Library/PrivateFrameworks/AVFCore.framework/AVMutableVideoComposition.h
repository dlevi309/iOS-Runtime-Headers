/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVVideoComposition.h>

@class AVMutableVideoCompositionInternal, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVMutableVideoComposition : AVVideoComposition {

	AVMutableVideoCompositionInternal* _mutableVideoComposition;

}

@property (nonatomic,retain) Class customVideoCompositorClass; 
@property (assign,nonatomic) SCD_Struct_AV6 frameDuration; 
@property (assign,nonatomic) int sourceTrackIDForFrameTiming; 
@property (assign,nonatomic) CGSize renderSize; 
@property (assign,nonatomic) float renderScale; 
@property (nonatomic,copy) NSArray * instructions; 
@property (nonatomic,retain) AVVideoCompositionCoreAnimationTool * animationTool; 
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2 ;
+(id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(/*^block*/id)arg2 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 prototypeInstruction:(id)arg2 ;
+(id)videoComposition;
-(NSArray *)instructions;
-(id)colorYCbCrMatrix;
-(id)colorPrimaries;
-(void)setFrameDuration:(SCD_Struct_AV6)arg1 ;
-(id)builtInCompositorName;
-(id)colorTransferFunction;
-(void)setBuiltInCompositorName:(id)arg1 ;
-(void)setRenderSize:(CGSize)arg1 ;
-(Class)customVideoCompositorClass;
-(void)setCustomVideoCompositorClass:(Class)arg1 ;
-(void)setSourceTrackIDForFrameTiming:(int)arg1 ;
-(void)setRenderScale:(float)arg1 ;
-(void)setColorPrimaries:(id)arg1 ;
-(void)setColorYCbCrMatrix:(id)arg1 ;
-(void)setColorTransferFunction:(id)arg1 ;
-(void)setAnimationTool:(AVVideoCompositionCoreAnimationTool *)arg1 ;
-(void)setInstructions:(NSArray *)arg1 ;
-(float)renderScale;
-(CGSize)renderSize;
-(SCD_Struct_AV6)frameDuration;
-(int)sourceTrackIDForFrameTiming;
-(AVVideoCompositionCoreAnimationTool *)animationTool;
@end

