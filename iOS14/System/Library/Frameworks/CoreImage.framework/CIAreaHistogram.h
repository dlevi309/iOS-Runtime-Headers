/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIAreaHistogram : CIFilter {

	CIImage* inputImage;
	CIVector* inputExtent;
	NSNumber* inputScale;
	NSNumber* inputCount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputCount; 
+(id)customAttributes;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(id)outputData;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(IRect)_netExtent;
-(BOOL)_inputsAreOK;
-(id)outputImageMPS;
-(id)outputImageNonMPS;
-(NSNumber *)inputCount;
-(void)setInputCount:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

