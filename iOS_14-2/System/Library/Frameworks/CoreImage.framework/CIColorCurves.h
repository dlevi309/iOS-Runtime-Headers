/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, CIVector;

@interface CIColorCurves : CIFilter {

	CIImage* inputImage;
	NSData* inputCurvesData;
	CIVector* inputCurvesDomain;
	id inputColorSpace;
	CIImage* _curvesImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSData * inputCurvesData; 
@property (nonatomic,retain) CIVector * inputCurvesDomain; 
@property (nonatomic,retain) id inputColorSpace; 
+(id)customAttributes;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(BOOL)_checkInputs;
-(id)inputColorSpace;
-(void)setInputColorSpace:(id)arg1 ;
-(id)curvesImage;
-(CIVector *)inputCurvesDomain;
-(void)setInputCurvesData:(NSData *)arg1 ;
-(void)setInputCurvesDomain:(CIVector *)arg1 ;
-(NSData *)inputCurvesData;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)dealloc;
@end

