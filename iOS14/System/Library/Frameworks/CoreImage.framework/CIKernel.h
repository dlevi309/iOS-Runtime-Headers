/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)redEyeMetalKernelWithFunctionName:(id)arg1 fromMetalLibraryURL:(id)arg2 outputPixelFormat:(int)arg3 error:(id*)arg4 ;
+(id)redEyeMetalKernelWithFunctionName:(id)arg1 fromMetalLibraryURL:(id)arg2 error:(id*)arg3 ;
+(id)SDOFV3MetalKernelNamed:(id)arg1 ;
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
+(id)kernelNamesFromMetalLibraryData:(id)arg1 ;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 outputGroupSize:(CGSize)arg3 error:(id*)arg4 ;
+(id)colorMatrixBiasKernel;
+(id)kernelWithFunctionName:(id)arg1 fromMetalLibraryData:(id)arg2 constants:(id)arg3 error:(id*)arg4 ;
-(BOOL)_isValidOutputPixelFormat:(int)arg1 ;
-(SEL)ROISelector;
-(id)_initWithReflection:(CIKernelReflection*)arg1 ;
-(void*)_internalRepresentation;
-(id)parameters;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(BOOL)canReduceOutputChannels;
-(CGSize)outputGroupSize;
-(id)initWithString:(id)arg1 ;
-(void)finalize;
-(void)setCanReduceOutputChannels:(BOOL)arg1 ;
-(void)setPreservesRange:(BOOL)arg1 ;
-(id)init;
-(void)setROISelector:(SEL)arg1 ;
-(id)_initWithInternalRepresentation:(void*)arg1 ;
-(id)_initWithReflection:(CIKernelReflection*)arg1 constants:(id)arg2 constantTypes:(id)arg3 ;
-(id)debugDescription;
-(NSString *)name;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(int)_outputFormatUsingDictionary:(id)arg1 andKernel:(Kernel*)arg2 ;
-(id)description;
-(void)setOutputGroupSize:(CGSize)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(BOOL)perservesAlpha;
-(BOOL)preservesRange;
-(id)_initWithString:(id)arg1 andMetalLibrary:(id)arg2 usingCruftCompatibility:(BOOL)arg3 ;
-(id)_initWithString:(id)arg1 usingCruftCompatibility:(BOOL)arg2 ;
-(void)dealloc;
@end

