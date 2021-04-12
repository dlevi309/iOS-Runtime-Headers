/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(BOOL)_isIdentity;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(CIImage *)inputMask;
-(void)setInputMask:(CIImage *)arg1 ;
-(id)_kernelD2;
-(id)downTwo:(id)arg1 ;
-(id)upCubic:(id)arg1 scale:(float)arg2 ;
-(id)_kernelCombine;
@end

