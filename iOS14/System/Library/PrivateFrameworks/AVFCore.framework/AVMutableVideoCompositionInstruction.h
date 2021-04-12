/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVVideoCompositionInstruction.h>

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {

	AVMutableVideoCompositionInstructionInternal* _mutableInstruction;

}

@property (assign,nonatomic) SCD_Struct_AV7 timeRange; 
@property (nonatomic,retain) CGColorRef backgroundColor; 
@property (nonatomic,copy) NSArray * layerInstructions; 
@property (assign,nonatomic) BOOL enablePostProcessing; 
+(id)videoCompositionInstruction;
-(BOOL)enablePostProcessing;
-(void)setTimeRange:(SCD_Struct_AV7)arg1 ;
-(NSArray *)layerInstructions;
-(void)setEnablePostProcessing:(BOOL)arg1 ;
-(void)setLayerInstructions:(NSArray *)arg1 ;
-(SCD_Struct_AV7)timeRange;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
@end

