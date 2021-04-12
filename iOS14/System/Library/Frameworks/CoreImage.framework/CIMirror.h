/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIMirror : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	NSNumber* inputAngle;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) NSNumber * inputAngle; 
+(id)customAttributes;
-(void)setInputPoint:(CIVector *)arg1 ;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAngle;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(CIVector *)inputPoint;
-(Rectangle)computeDOD:(vec2)arg1 tst:(vec3)arg2 off:(vec4)arg3 mtx:(vec4)arg4 ;
@end

