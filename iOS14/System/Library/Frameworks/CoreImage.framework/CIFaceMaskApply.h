/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, NSDictionary;

@interface CIFaceMaskApply : CIFilter {

	CIImage* inputImage;
	CIImage* inputParameterImage;
	CIVector* inputFacesCenterX;
	CIVector* inputFacesCenterY;
	CIVector* inputFacesChinX;
	CIVector* inputFacesChinY;
	CIVector* inputK0;
	CIVector* inputK1;
	CIVector* inputK2;
	CIVector* inputK3;
	NSNumber* inputK4;
	NSDictionary* inputTuningParameters;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputParameterImage; 
@property (nonatomic,copy) CIVector * inputFacesCenterX; 
@property (nonatomic,copy) CIVector * inputFacesCenterY; 
@property (nonatomic,copy) CIVector * inputFacesChinX; 
@property (nonatomic,copy) CIVector * inputFacesChinY; 
@property (nonatomic,copy) CIVector * inputK0; 
@property (nonatomic,copy) CIVector * inputK1; 
@property (nonatomic,copy) CIVector * inputK2; 
@property (nonatomic,copy) CIVector * inputK3; 
@property (nonatomic,copy) NSNumber * inputK4; 
@property (nonatomic,copy) NSDictionary * inputTuningParameters; 
+(id)_kernel;
-(CIVector *)inputK0;
-(CIVector *)inputK1;
-(CIVector *)inputK2;
-(CIVector *)inputK3;
-(NSNumber *)inputK4;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputK1:(CIVector *)arg1 ;
-(CIImage *)inputParameterImage;
-(void)setInputParameterImage:(CIImage *)arg1 ;
-(CIVector *)inputFacesCenterX;
-(void)setInputFacesCenterX:(CIVector *)arg1 ;
-(CIVector *)inputFacesCenterY;
-(void)setInputFacesCenterY:(CIVector *)arg1 ;
-(CIVector *)inputFacesChinX;
-(void)setInputFacesChinX:(CIVector *)arg1 ;
-(CIVector *)inputFacesChinY;
-(void)setInputK0:(CIVector *)arg1 ;
-(void)setInputFacesChinY:(CIVector *)arg1 ;
-(void)setInputK2:(CIVector *)arg1 ;
-(void)setInputK3:(CIVector *)arg1 ;
-(void)setInputK4:(NSNumber *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

