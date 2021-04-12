/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIHighlightShadowAdjust : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputShadowAmount;
	NSNumber* inputHighlightAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputShadowAmount; 
@property (nonatomic,retain) NSNumber * inputHighlightAmount; 
+(id)customAttributes;
-(int)_defaultVersion;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(void)setDefaults;
-(int)_maxVersion;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)_kernelSnoB_v0;
-(id)_kernelSHnoB_v0;
-(id)_kernelSH_v0;
-(id)_kernelSHnoB_v1;
-(id)_kernelSH_v1;
-(id)_kernelSHnoB_v2;
-(id)_kernelSH_v2;
-(void)setInputShadowAmount:(NSNumber *)arg1 ;
-(void)setInputHighlightAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputShadowAmount;
-(NSNumber *)inputHighlightAmount;
@end

