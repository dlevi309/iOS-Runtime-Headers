/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPerspectiveRotate : CIFilter {

	float3x3 K;
	float3x3 invK;
	CIImage* inputImage;
	NSNumber* inputFocalLength;
	NSNumber* inputPitch;
	NSNumber* inputYaw;
	NSNumber* inputRoll;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputFocalLength; 
@property (nonatomic,copy) NSNumber * inputPitch; 
@property (nonatomic,copy) NSNumber * inputYaw; 
@property (nonatomic,copy) NSNumber * inputRoll; 
@property (nonatomic,readonly) float3x3 outputTransform; 
+(id)customAttributes;
-(NSNumber *)inputRoll;
-(NSNumber *)inputPitch;
-(void)computeCameraIntrinsics;
-(float3x3)outputTransform;
-(NSNumber *)inputFocalLength;
-(void)setInputFocalLength:(NSNumber *)arg1 ;
-(NSNumber *)inputYaw;
-(void)setInputPitch:(NSNumber *)arg1 ;
-(void)setInputYaw:(NSNumber *)arg1 ;
-(void)setInputRoll:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

