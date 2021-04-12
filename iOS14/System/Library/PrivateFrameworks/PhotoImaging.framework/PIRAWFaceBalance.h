/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIRAWFaceBalance : CIFilter {

	CIImage* _inputImage;
	double _inputOrigI;
	double _inputOrigQ;
	double _inputStrength;
	double _inputWarmth;

}

@property (nonatomic,retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
@property (assign,nonatomic) double inputOrigI;                 //@synthesize inputOrigI=_inputOrigI - In the implementation block
@property (assign,nonatomic) double inputOrigQ;                 //@synthesize inputOrigQ=_inputOrigQ - In the implementation block
@property (assign,nonatomic) double inputStrength;              //@synthesize inputStrength=_inputStrength - In the implementation block
@property (assign,nonatomic) double inputWarmth;                //@synthesize inputWarmth=_inputWarmth - In the implementation block
+(CGColorSpaceRef)linearWideGamutColorSpace;
+(id)faceBalanceKernels;
-(void)setInputImage:(CIImage *)arg1 ;
-(double)inputStrength;
-(void)setInputStrength:(double)arg1 ;
-(double)inputWarmth;
-(void)setInputWarmth:(double)arg1 ;
-(double)inputOrigI;
-(double)inputOrigQ;
-(void)setInputOrigI:(double)arg1 ;
-(void)setInputOrigQ:(double)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

