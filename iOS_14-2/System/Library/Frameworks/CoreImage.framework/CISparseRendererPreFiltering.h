/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

@interface CISparseRendererPreFiltering : CIFilter {

	CIImage* inputImage;
	NSDictionary* inputTuningParameters;
	NSNumber* inputApertureScaling;
	NSNumber* inputScale;

}

@property (retain) CIImage * inputImage; 
@property (retain) NSDictionary * inputTuningParameters; 
@property (copy) NSNumber * inputApertureScaling; 
@property (retain) NSNumber * inputScale; 
-(id)outputImage:(id)arg1 horizontal:(BOOL)arg2 width:(double)arg3 ;
-(void)dumpImage:(id)arg1 extent:(CGRect)arg2 prefixFilename:(id)arg3 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_kernel:(BOOL)arg1 ;
-(NSNumber *)inputApertureScaling;
-(void)setInputApertureScaling:(NSNumber *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

