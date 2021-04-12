/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIMaskedVariableBlur : CIFilter {

	CIImage* inputImage;
	CIImage* inputMask;
	NSNumber* inputRadius;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputMask; 
@property (nonatomic,retain) NSNumber * inputRadius; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)downTwo:(id)arg1 ;
-(CIImage *)inputMask;
-(void)setInputMask:(CIImage *)arg1 ;
-(id)outputImage;
-(id)_kernelD2;
-(CIImage *)inputImage;
-(id)upCubic:(id)arg1 scale:(float)arg2 ;
-(id)_kernelCombine;
@end

