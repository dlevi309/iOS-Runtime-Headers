/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector, CIFilter;

@interface CIKeystoneCorrection : CIFilter {

	float3x3 K;
	float3x3 invK;
	float pitch;
	float yaw;
	float roll;
	CIImage* inputImage;
	NSNumber* inputFocalLength;
	CIVector* inputTopLeft;
	CIVector* inputTopRight;
	CIVector* inputBottomRight;
	CIVector* inputBottomLeft;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputFocalLength; 
@property (nonatomic,copy) CIVector * inputTopLeft; 
@property (nonatomic,copy) CIVector * inputTopRight; 
@property (nonatomic,copy) CIVector * inputBottomRight; 
@property (nonatomic,copy) CIVector * inputBottomLeft; 
@property (nonatomic,readonly) float3x3 outputTransform; 
@property (nonatomic,readonly) CIFilter * outputRotationFilter; 
+(id)customAttributes;
-(CIVector *)inputTopLeft;
-(void)setInputTopLeft:(CIVector *)arg1 ;
-(CIVector *)inputTopRight;
-(void)setInputTopRight:(CIVector *)arg1 ;
-(CIVector *)inputBottomRight;
-(void)setInputBottomRight:(CIVector *)arg1 ;
-(CIVector *)inputBottomLeft;
-(void)setInputBottomLeft:(CIVector *)arg1 ;
-(void)computeCameraIntrinsics;
-(float3x3)outputTransform;
-(NSNumber *)inputFocalLength;
-(void)setInputFocalLength:(NSNumber *)arg1 ;
-(void)computeRotation;
-(CIFilter *)outputRotationFilter;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

