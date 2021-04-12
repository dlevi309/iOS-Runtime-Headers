/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIKernel.h>

@interface CIColorKernel : CIKernel

@property (assign,nonatomic) BOOL perservesAlpha; 
+(id)kernelWithString:(id)arg1 ;
+(id)SDOFV2MetalKernelNamed:(id)arg1 ;
+(id)SDOFV3MetalKernelNamed:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 arguments:(id)arg2 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(void)setCanReduceOutputChannels:(BOOL)arg1 ;
-(void)setPreservesRange:(BOOL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 arguments:(id)arg2 options:(id)arg3 ;
-(BOOL)canReduceOutputChannels;
-(id)_initWithReflection:(CIKernelReflection*)arg1 constants:(id)arg2 ;
-(BOOL)perservesAlpha;
-(BOOL)preservesRange;
@end

