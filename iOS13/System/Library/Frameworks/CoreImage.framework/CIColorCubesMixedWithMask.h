/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData;

@interface CIColorCubesMixedWithMask : CIFilter {

	CIImage* inputImage;
	CIImage* inputMaskImage;
	NSNumber* inputCubeDimension;
	NSData* inputCube0Data;
	NSData* inputCube1Data;
	id inputColorSpace;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputMaskImage; 
@property (nonatomic,retain) NSNumber * inputCubeDimension; 
@property (nonatomic,copy) NSData * inputCube0Data; 
@property (nonatomic,copy) NSData * inputCube1Data; 
@property (nonatomic,retain) id inputColorSpace; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(BOOL)_checkInputs;
-(NSNumber *)inputCubeDimension;
-(void)setInputCubeDimension:(NSNumber *)arg1 ;
-(id)inputColorSpace;
-(void)setInputColorSpace:(id)arg1 ;
-(NSData *)inputCube0Data;
-(void)setInputCube0Data:(NSData *)arg1 ;
-(NSData *)inputCube1Data;
-(void)setInputCube1Data:(NSData *)arg1 ;
@end

