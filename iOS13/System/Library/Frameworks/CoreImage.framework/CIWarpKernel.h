/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIKernel.h>

@interface CIWarpKernel : CIKernel

@property (assign,nonatomic) BOOL perservesAlpha; 
@property (assign,nonatomic) BOOL preservesRange; 
+(id)kernelWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 inputImage:(id)arg3 arguments:(id)arg4 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(void)setCanReduceOutputChannels:(BOOL)arg1 ;
-(void)setPreservesRange:(BOOL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(BOOL)canReduceOutputChannels;
-(id)_initWithReflection:(CIKernelReflection*)arg1 constants:(id)arg2 ;
-(BOOL)perservesAlpha;
-(BOOL)preservesRange;
-(CGRect)autogenerateROI:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 arguments:(id)arg3 extent:(CGRect)arg4 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 inputImage:(id)arg3 arguments:(id)arg4 options:(id)arg5 ;
-(id)generateGeneralKernelFromWarpKernel:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 ;
-(id)generateMainFromWarpKernel:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 ;
-(id)makeGridImage:(CGRect)arg1 nx:(int)arg2 ny:(int)arg3 ;
@end

