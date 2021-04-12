/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)outputImage;
-(CIImage *)inputImage;
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
@end

