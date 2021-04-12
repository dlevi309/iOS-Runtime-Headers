/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CILanczosScaleTransform : CIFilter {

	CIImage* inputImage;
	NSNumber* inputScale;
	NSNumber* inputAspectRatio;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputAspectRatio; 
+(id)customAttributes;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(BOOL)_isIdentity;
-(id)outputImageOldScaleX:(double)arg1 scaleY:(double)arg2 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImageNewScaleX:(double)arg1 scaleY:(double)arg2 ;
-(NSNumber *)inputAspectRatio;
-(id)outputImage;
-(void)setInputAspectRatio:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
@end

