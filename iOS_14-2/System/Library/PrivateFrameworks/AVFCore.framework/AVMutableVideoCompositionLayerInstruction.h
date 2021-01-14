/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVVideoCompositionLayerInstruction.h>

@class AVMutableVideoCompositionLayerInstructionInternal;

@interface AVMutableVideoCompositionLayerInstruction : AVVideoCompositionLayerInstruction {

	AVMutableVideoCompositionLayerInstructionInternal* _mutableLayerInstruction;

}

@property (assign,nonatomic) int trackID; 
+(id)videoCompositionLayerInstruction;
+(id)videoCompositionLayerInstructionWithAssetTrack:(id)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setOpacity:(float)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setCropRectangle:(CGRect)arg1 atTime:(SCD_Struct_AV6)arg2 ;
-(void)setTransformRampFromStartTransform:(CGAffineTransform)arg1 toEndTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setOpacityRampFromStartOpacity:(float)arg1 toEndOpacity:(float)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(void)setCropRectangleRampFromStartCropRectangle:(CGRect)arg1 toEndCropRectangle:(CGRect)arg2 timeRange:(SCD_Struct_AV7)arg3 ;
-(int)trackID;
-(void)setTrackID:(int)arg1 ;
@end

