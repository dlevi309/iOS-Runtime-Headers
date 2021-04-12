/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PISmartColorFilterHDR : CIFilter {

	CIImage* inputImage;
	NSNumber* inputVibrancy;
	NSNumber* inputContrast;
	NSNumber* inputCast;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputVibrancy; 
@property (nonatomic,retain) NSNumber * inputContrast; 
@property (nonatomic,retain) NSNumber * inputCast; 
+(id)customAttributes;
-(id)_kernelCPos;
-(id)_kernelV_lt1;
-(id)_kernelV_gt1;
-(id)_kernelCNeg;
-(id)_kernelCast;
-(NSNumber *)inputVibrancy;
-(void)setInputVibrancy:(NSNumber *)arg1 ;
-(NSNumber *)inputCast;
-(void)setInputCast:(NSNumber *)arg1 ;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputContrast;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

