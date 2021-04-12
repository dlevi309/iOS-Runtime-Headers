/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(BOOL)_checkInputs;
-(NSNumber *)inputCubeDimension;
-(void)setInputCubeDimension:(NSNumber *)arg1 ;
-(id)inputColorSpace;
-(NSData *)inputCube0Data;
-(void)setInputColorSpace:(id)arg1 ;
-(void)setInputCube0Data:(NSData *)arg1 ;
-(NSData *)inputCube1Data;
-(void)setInputCube1Data:(NSData *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

