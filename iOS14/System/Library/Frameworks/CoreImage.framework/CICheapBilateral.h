/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CICheapBilateral : CIFilter {

	CIImage* inputImage;
	CIImage* inputSource;
	NSNumber* inputSigmaSpace;
	NSNumber* inputSigmaRange;

}

@property (nonatomic,retain) CIImage * inputSource; 
@property (nonatomic,retain) NSNumber * inputSigmaSpace; 
@property (nonatomic,retain) NSNumber * inputSigmaRange; 
+(id)customAttributes;
-(CIImage *)inputSource;
-(void)setInputSource:(CIImage *)arg1 ;
-(NSNumber *)inputSigmaSpace;
-(void)setInputSigmaSpace:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaRange;
-(void)setInputSigmaRange:(NSNumber *)arg1 ;
-(id)outputImage;
@end

