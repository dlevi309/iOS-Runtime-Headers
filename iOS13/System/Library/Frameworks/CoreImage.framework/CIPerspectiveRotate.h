/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)computeCameraIntrinsics;
-(float3x3)outputTransform;
-(NSNumber *)inputFocalLength;
-(void)setInputFocalLength:(NSNumber *)arg1 ;
-(NSNumber *)inputPitch;
-(void)setInputPitch:(NSNumber *)arg1 ;
-(NSNumber *)inputYaw;
-(void)setInputYaw:(NSNumber *)arg1 ;
-(NSNumber *)inputRoll;
-(void)setInputRoll:(NSNumber *)arg1 ;
@end

