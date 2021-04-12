/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoCompositionInstruction.h>

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {

	AVMutableVideoCompositionInstructionInternal* _mutableInstruction;

}

@property (assign,nonatomic) SCD_Struct_AV8 timeRange; 
@property (nonatomic,retain) CGColorRef backgroundColor; 
@property (nonatomic,copy) NSArray * layerInstructions; 
@property (assign,nonatomic) BOOL enablePostProcessing; 
+(id)videoCompositionInstruction;
-(CGColorRef)backgroundColor;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV8)arg1 ;
-(SCD_Struct_AV8)timeRange;
-(NSArray *)layerInstructions;
-(BOOL)enablePostProcessing;
-(void)setEnablePostProcessing:(BOOL)arg1 ;
-(void)setLayerInstructions:(NSArray *)arg1 ;
@end

