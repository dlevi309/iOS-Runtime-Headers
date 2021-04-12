/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoCompositionLayerInstruction.h>

@class AVMutableVideoCompositionLayerInstructionInternal;

@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction {

	AVMutableVideoCompositionLayerInstructionInternal* _mutableLayerInstruction;

}

@property (assign,nonatomic) int trackID; 
+(id)videoCompositionLayerInstructionWithAssetTrack:(id)arg1 ;
+(id)videoCompositionLayerInstruction;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(void)setOpacity:(float)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(void)setCropRectangle:(CGRect)arg1 atTime:(SCD_Struct_AV7)arg2 ;
-(void)setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
-(void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
-(void)setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_AV8)arg3 ;
@end

