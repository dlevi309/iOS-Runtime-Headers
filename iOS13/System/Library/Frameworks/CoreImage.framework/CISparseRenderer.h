/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

@interface CISparseRenderer : CIFilter {

	CIImage* inputImage;
	CIImage* inputMatteImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputScale;
	NSNumber* inputApertureScaling;
	NSNumber* inputDraftMode;
	NSNumber* inputAperture;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputMatteImage; 
@property (nonatomic,retain) NSDictionary * inputTuningParameters; 
@property (nonatomic,copy) NSNumber * inputScale; 
@property (nonatomic,copy) NSNumber * inputApertureScaling; 
@property (nonatomic,copy) NSNumber * inputDraftMode; 
@property (nonatomic,copy) NSNumber * inputAperture; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputApertureScaling;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(CIImage *)inputMatteImage;
-(NSNumber *)inputDraftMode;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(NSNumber *)inputAperture;
-(void)setInputAperture:(NSNumber *)arg1 ;
-(id)stepsLUTGenerator;
-(id)baseVecsLUTGenerator;
-(BOOL)_useD2XRenderer;
-(id)stepsLUT:(unsigned)arg1 ;
-(id)baseVecsLUT:(unsigned)arg1 ;
-(id)_lutKernel:(BOOL)arg1 alpha:(BOOL)arg2 ;
-(id)_kernel:(BOOL)arg1 alpha:(BOOL)arg2 ;
-(id)_packageParams:(BOOL)arg1 extent:(CGRect)arg2 image:(id)arg3 haveAlpha:(BOOL)arg4 ;
@end

