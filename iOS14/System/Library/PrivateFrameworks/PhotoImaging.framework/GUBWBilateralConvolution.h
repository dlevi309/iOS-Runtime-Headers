/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

@interface GUBWBilateralConvolution : CIFilter {

	CIImage* _inputImage;
	NSArray* _inputPoints;
	NSArray* _inputWeights;
	NSNumber* _inputEdgeDetail;
	NSNumber* _inputBorder;

}

@property (retain) CIImage * inputImage;                    //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) NSArray * inputPoints;                   //@synthesize inputPoints=_inputPoints - In the implementation block
@property (retain) NSArray * inputWeights;                  //@synthesize inputWeights=_inputWeights - In the implementation block
@property (retain) NSNumber * inputEdgeDetail;              //@synthesize inputEdgeDetail=_inputEdgeDetail - In the implementation block
@property (retain) NSNumber * inputBorder;                  //@synthesize inputBorder=_inputBorder - In the implementation block
+(id)BWBilateralKernels;
+(id)bilateralLoop2Kernel;
+(id)bilateralLoop5Kernel;
+(id)bilateralLoop11Kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSArray *)inputWeights;
-(void)setInputWeights:(NSArray *)arg1 ;
-(NSArray *)inputPoints;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputPoints:(NSArray *)arg1 ;
-(NSNumber *)inputEdgeDetail;
-(void)setInputEdgeDetail:(NSNumber *)arg1 ;
-(CGRect)bilateralROI:(long long)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)doBilateralLoop:(id)arg1 points:(id)arg2 weights:(id)arg3 slope:(id)arg4 ;
-(NSNumber *)inputBorder;
-(void)setInputBorder:(NSNumber *)arg1 ;
@end

