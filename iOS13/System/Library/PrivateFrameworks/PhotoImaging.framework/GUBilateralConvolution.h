/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

@interface GUBilateralConvolution : CIFilter {

	CIImage* _inputImage;
	NSArray* _inputPoints;
	NSArray* _inputWeights;
	NSNumber* _inputEdgeDetail;
	NSNumber* _inputVersion;

}

@property (retain) CIImage * inputImage;                    //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) NSArray * inputPoints;                   //@synthesize inputPoints=_inputPoints - In the implementation block
@property (retain) NSArray * inputWeights;                  //@synthesize inputWeights=_inputWeights - In the implementation block
@property (retain) NSNumber * inputEdgeDetail;              //@synthesize inputEdgeDetail=_inputEdgeDetail - In the implementation block
@property (retain) NSNumber * inputVersion;                 //@synthesize inputVersion=_inputVersion - In the implementation block
+(id)bilateralKernels;
+(id)RGBToLabKernels;
+(id)bilateralAdd1Kernel;
+(id)bilateralAdd2Kernel;
+(id)bilateralAdd3Kernel;
+(id)bilateralAdd4Kernel;
+(id)bilateralAdd5Kernel;
+(id)bilateralAdd6Kernel;
+(id)bilateralAdd7Kernel;
+(id)bilateralAdd8Kernel;
+(id)bilateralAdd9Kernel;
+(id)bilateralFinalizeKernel;
+(id)RGBToLabKernel;
+(id)LabToRGBKernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSArray *)inputWeights;
-(void)setInputWeights:(NSArray *)arg1 ;
-(unsigned long long)samplesPerPass;
-(NSArray *)inputPoints;
-(NSNumber *)inputVersion;
-(void)setInputPoints:(NSArray *)arg1 ;
-(CGRect)boundsForPointArray:(id)arg1 ;
-(CGRect)enlargedBounds:(CGRect)arg1 withPoints:(id)arg2 ;
-(CGRect)bilateralAddROI:(long long)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)doBilateralPass:(id)arg1 points:(id)arg2 weights:(id)arg3 sums:(id)arg4 slope:(id)arg5 ;
-(NSNumber *)inputEdgeDetail;
-(void)setInputEdgeDetail:(NSNumber *)arg1 ;
-(void)setInputVersion:(NSNumber *)arg1 ;
@end

