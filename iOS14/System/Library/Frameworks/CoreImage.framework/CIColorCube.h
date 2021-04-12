/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSData;

@interface CIColorCube : CIFilter {

	CIImage* inputImage;
	NSNumber* inputCubeDimension;
	NSData* inputCubeData;
	CIImage* _cubeImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputCubeDimension; 
@property (nonatomic,copy) NSData * inputCubeData; 
+(id)customAttributes;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(BOOL)_checkInputs;
-(id)_kernelOpaque;
-(NSData *)inputCubeData;
-(void)setInputCubeData:(NSData *)arg1 ;
-(NSNumber *)inputCubeDimension;
-(void)setInputCubeDimension:(NSNumber *)arg1 ;
-(id)cubeImage;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)dealloc;
@end

