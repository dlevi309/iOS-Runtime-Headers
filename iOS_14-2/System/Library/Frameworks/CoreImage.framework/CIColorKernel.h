/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIKernel.h>

@interface CIColorKernel : CIKernel

@property (assign,nonatomic) BOOL perservesAlpha; 
+(id)SDOFV3MetalKernelNamed:(id)arg1 ;
+(id)kernelWithString:(id)arg1 ;
+(id)SDOFV2MetalKernelNamed:(id)arg1 ;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(BOOL)canReduceOutputChannels;
-(id)initWithString:(id)arg1 ;
-(void)setCanReduceOutputChannels:(BOOL)arg1 ;
-(void)setPreservesRange:(BOOL)arg1 ;
-(id)_initWithReflection:(CIKernelReflection*)arg1 constants:(id)arg2 constantTypes:(id)arg3 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(id)applyWithExtent:(CGRect)arg1 arguments:(id)arg2 ;
-(id)applyWithExtent:(CGRect)arg1 arguments:(id)arg2 options:(id)arg3 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(BOOL)perservesAlpha;
-(BOOL)preservesRange;
@end

