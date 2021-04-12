/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIKernel.h>

@interface CIWarpKernel : CIKernel

@property (assign,nonatomic) BOOL perservesAlpha; 
@property (assign,nonatomic) BOOL preservesRange; 
+(id)kernelWithString:(id)arg1 ;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(BOOL)canReduceOutputChannels;
-(id)initWithString:(id)arg1 ;
-(void)setCanReduceOutputChannels:(BOOL)arg1 ;
-(void)setPreservesRange:(BOOL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 inputImage:(id)arg3 arguments:(id)arg4 options:(id)arg5 ;
-(id)_initWithReflection:(CIKernelReflection*)arg1 constants:(id)arg2 constantTypes:(id)arg3 ;
-(id)generateMainFromWarpKernel:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(id)generateGeneralKernelFromWarpKernel:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(BOOL)perservesAlpha;
-(id)makeGridImage:(CGRect)arg1 nx:(int)arg2 ny:(int)arg3 ;
-(BOOL)preservesRange;
-(CGRect)autogenerateROI:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 arguments:(id)arg3 extent:(CGRect)arg4 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 inputImage:(id)arg3 arguments:(id)arg4 ;
@end

