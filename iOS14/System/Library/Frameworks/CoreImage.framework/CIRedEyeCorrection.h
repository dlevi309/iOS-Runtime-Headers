/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSString, NSDictionary;

@interface CIRedEyeCorrection : CIFilter {

	CIImage* inputImage;
	NSString* inputCameraModel;
	NSDictionary* inputCorrectionInfo;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSString * inputCameraModel; 
@property (nonatomic,copy) NSDictionary * inputCorrectionInfo; 
-(NSString *)inputCameraModel;
-(void)setInputCameraModel:(NSString *)arg1 ;
-(NSDictionary *)inputCorrectionInfo;
-(void)setInputCorrectionInfo:(NSDictionary *)arg1 ;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setDefaults;
-(id)outputImage;
-(CIImage *)inputImage;
@end

