/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setDefaults;
-(BOOL)_isIdentity;
-(NSString *)inputCameraModel;
-(void)setInputCameraModel:(NSString *)arg1 ;
-(NSDictionary *)inputCorrectionInfo;
-(void)setInputCorrectionInfo:(NSDictionary *)arg1 ;
@end

