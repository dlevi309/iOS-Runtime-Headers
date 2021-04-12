/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIAreaRedCentroid.h>

@class CIImage, NSNumber;

@interface CIAreaRedRadialCentroid : CIAreaRedCentroid {

	CIImage* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputRadialMode;
	NSNumber* inputMinWeight;

}

@property (nonatomic,retain) CIImage * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputRadialMode; 
@property (nonatomic,retain) NSNumber * inputMinWeight; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(CIImage *)inputCenter;
-(void)setInputCenter:(CIImage *)arg1 ;
-(id)_kernelCenter;
-(id)_kernelDisk;
-(id)_kernelGaussian;
-(NSNumber *)inputRadialMode;
-(void)setInputRadialMode:(NSNumber *)arg1 ;
-(NSNumber *)inputMinWeight;
-(void)setInputMinWeight:(NSNumber *)arg1 ;
@end

