/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@class NSString;

@interface CIKernel : NSObject {

	void* _priv;

}

@property (assign,nonatomic) BOOL perservesAlpha; 
@property (assign,nonatomic) BOOL canReduceOutputChannels; 
@property (assign,nonatomic) BOOL preservesRange; 
@property (assign,nonatomic) CGSize outputGroupSize; 
@property (readonly) NSString * name; 
+(id)kernelWithString:(id)arg1 ;
+(id)redEyeMetalKernelWithFunctionName:(id)arg1 outputPixelFormat:(int)arg2 error:(id*)arg3 ;
+(id)redEyeMetalKernelWithFunctionName:(id)arg1 error:(id*)arg2 ;
+(id)SDOFV2MetalKernelNamed:(id)arg1 ;
+(id)allocForType:(int)arg1 ;
+(id)kernelsWithString:(id)arg1 andMetalLibrary:(id)arg2 messageLog:(id)arg3 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)kernelsWithString:(id)arg1 fromMetalLibraryData:(id)arg2 ;
+(id)kernelsWithString:(id)arg1 messageLog:(id)arg2 ;
+(id)kernelsWithString:(id)arg1 ;
+(id)kernelWithString:(id)arg1 fromMetalLibraryData:(id)arg2 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 error:(id*)arg3 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputPixelFormat:(int)arg3 error:(id*)arg4 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputGroupSize:(CGSize)arg3 error:(id*)arg4 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 constants:(id)arg3 error:(id*)arg4 ;
+(id)colorMatrixBiasKernel;
+(id)redEyeMetalKernelWithFunctionName:(id)arg1 fromMetalLibraryURL:(id)arg2 outputPixelFormat:(int)arg3 error:(id*)arg4 ;
+(id)redEyeMetalKernelWithFunctionName:(id)arg1 fromMetalLibraryURL:(id)arg2 error:(id*)arg3 ;
+(id)SDOFV3MetalKernelNamed:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)finalize;
-(id)initWithString:(id)arg1 ;
-(id)parameters;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(void)setCanReduceOutputChannels:(BOOL)arg1 ;
-(void*)_internalRepresentation;
-(void)setPreservesRange:(BOOL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(id)_initWithInternalRepresentation:(void*)arg1 ;
-(BOOL)canReduceOutputChannels;
-(SEL)ROISelector;
-(id)_initWithReflection:(CIKernelReflection*)arg1 ;
-(id)_initWithString:(id)arg1 andMetalLibrary:(id)arg2 usingCruftCompatibility:(BOOL)arg3 ;
-(id)_initWithReflection:(CIKernelReflection*)arg1 constants:(id)arg2 ;
-(id)_initWithString:(id)arg1 usingCruftCompatibility:(BOOL)arg2 ;
-(BOOL)_isValidOutputPixelFormat:(int)arg1 ;
-(int)_outputFormatUsingDictionary:(id)arg1 andKernel:(Kernel*)arg2 ;
-(BOOL)perservesAlpha;
-(BOOL)preservesRange;
-(CGSize)outputGroupSize;
-(void)setOutputGroupSize:(CGSize)arg1 ;
-(void)setROISelector:(SEL)arg1 ;
@end

