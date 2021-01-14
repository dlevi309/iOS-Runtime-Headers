/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIMotionBlur : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputAngle;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputAngle; 
+(id)customAttributes;
-(id)_kernel;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAngle;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3 legacyExtent:(CGRect*)arg4 ;
@end

