/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIVibrance : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputAmount; 
+(id)customAttributes;
-(id)_kernelNeg;
-(id)_kernelPos;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

