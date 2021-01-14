/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSString, NSArray;

@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSString* inputCameraModel;
	NSArray* inputCorrectionInfo;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSString * inputCameraModel; 
@property (nonatomic,copy) NSArray * inputCorrectionInfo; 
-(NSString *)inputCameraModel;
-(void)setInputCameraModel:(NSString *)arg1 ;
-(NSArray *)inputCorrectionInfo;
-(void)setInputCorrectionInfo:(NSArray *)arg1 ;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(void)setDefaults;
-(id)outputImage;
-(CIImage *)inputImage;
@end

