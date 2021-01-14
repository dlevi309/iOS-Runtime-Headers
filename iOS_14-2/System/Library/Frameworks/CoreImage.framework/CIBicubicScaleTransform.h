/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBicubicScaleTransform : CIFilter {

	CIImage* inputImage;
	NSNumber* inputScale;
	NSNumber* inputAspectRatio;
	NSNumber* inputB;
	NSNumber* inputC;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputAspectRatio; 
@property (nonatomic,retain) NSNumber * inputB; 
@property (nonatomic,retain) NSNumber * inputC; 
+(id)customAttributes;
-(NSNumber *)inputB;
-(NSNumber *)inputC;
-(void)setInputB:(NSNumber *)arg1 ;
-(void)setInputC:(NSNumber *)arg1 ;
-(vec2)_scale;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputAspectRatio;
-(id)outputImage;
-(void)setInputAspectRatio:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
@end

