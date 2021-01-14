/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface RedEyeSpecular : CIFilter {

	CIImage* inputImage;
	CIImage* inputSource;
	CIImage* inputSpecularMask;
	NSNumber* inputSpecularThreshold;
	NSNumber* inputSpecIntensity;
	NSNumber* inputDebugFlag;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputSource; 
@property (nonatomic,retain) CIImage * inputSpecularMask; 
@property (nonatomic,retain) NSNumber * inputSpecularThreshold; 
@property (nonatomic,retain) NSNumber * inputSpecIntensity; 
@property (nonatomic,retain) NSNumber * inputDebugFlag; 
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputSource;
-(void)setInputSource:(CIImage *)arg1 ;
-(CIImage *)inputSpecularMask;
-(void)setInputSpecularMask:(CIImage *)arg1 ;
-(NSNumber *)inputSpecularThreshold;
-(void)setInputSpecularThreshold:(NSNumber *)arg1 ;
-(NSNumber *)inputSpecIntensity;
-(void)setInputSpecIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputDebugFlag;
-(void)setInputDebugFlag:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

