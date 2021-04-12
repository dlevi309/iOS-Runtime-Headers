/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoComposition.h>

@class AVMutableVideoCompositionInternal, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVMutableVideoComposition : AVVideoComposition {

	AVMutableVideoCompositionInternal* _mutableVideoComposition;

}

@property (nonatomic,retain) Class customVideoCompositorClass; 
@property (assign,nonatomic) SCD_Struct_AV7 frameDuration; 
@property (assign,nonatomic) int sourceTrackIDForFrameTiming; 
@property (assign,nonatomic) CGSize renderSize; 
@property (assign,nonatomic) float renderScale; 
@property (nonatomic,copy) NSArray * instructions; 
@property (nonatomic,retain) AVVideoCompositionCoreAnimationTool * animationTool; 
+(id)videoComposition;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2 ;
+(id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(/*^block*/id)arg2 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 prototypeInstruction:(id)arg2 ;
-(NSArray *)instructions;
-(void)setInstructions:(NSArray *)arg1 ;
-(CGSize)renderSize;
-(float)renderScale;
-(SCD_Struct_AV7)frameDuration;
-(int)sourceTrackIDForFrameTiming;
-(AVVideoCompositionCoreAnimationTool *)animationTool;
-(id)builtInCompositorName;
-(id)colorPrimaries;
-(id)colorYCbCrMatrix;
-(id)colorTransferFunction;
-(void)setBuiltInCompositorName:(id)arg1 ;
-(Class)customVideoCompositorClass;
-(void)setCustomVideoCompositorClass:(Class)arg1 ;
-(void)setFrameDuration:(SCD_Struct_AV7)arg1 ;
-(void)setSourceTrackIDForFrameTiming:(int)arg1 ;
-(void)setRenderSize:(CGSize)arg1 ;
-(void)setRenderScale:(float)arg1 ;
-(void)setColorPrimaries:(id)arg1 ;
-(void)setColorYCbCrMatrix:(id)arg1 ;
-(void)setColorTransferFunction:(id)arg1 ;
-(void)setAnimationTool:(AVVideoCompositionCoreAnimationTool *)arg1 ;
@end

