/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(BOOL)_checkInputs;
-(id)inputColorSpace;
-(void)setInputColorSpace:(id)arg1 ;
-(id)curvesImage;
-(void)setInputCurvesData:(NSData *)arg1 ;
-(CIVector *)inputCurvesDomain;
-(void)setInputCurvesDomain:(CIVector *)arg1 ;
-(NSData *)inputCurvesData;
@end

