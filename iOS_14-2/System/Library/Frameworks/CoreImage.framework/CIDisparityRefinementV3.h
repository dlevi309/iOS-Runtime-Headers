/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class NSNumber, CIImage, NSDictionary;

@interface CIDisparityRefinementV3 : CIFilter {

	NSNumber* inputScale;
	CIImage* inputImage;
	CIImage* inputMainImage;
	CIImage* inputMatteImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputDraftMode;

}

@property (copy) NSNumber * inputScale; 
@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputMainImage; 
@property (retain) CIImage * inputMatteImage; 
@property (retain) NSDictionary * inputTuningParameters; 
@property (nonatomic,retain) NSNumber * inputDraftMode; 
+(id)customAttributes;
-(NSNumber *)inputDraftMode;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(id)alphaImageForMainImage:(id)arg1 disparity:(id)arg2 ;
-(void)setInputMainImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(id)outputImage;
-(CIImage *)inputMatteImage;
-(CIImage *)inputImage;
-(CIImage *)inputMainImage;
@end

