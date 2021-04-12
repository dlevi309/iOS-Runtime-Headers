/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSString;

@interface PIRedEye : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputDestinationImage;
	NSArray* _inputCorrectionInfo;
	NSString* _inputCameraModel;

}

@property (nonatomic,retain) CIImage * inputImage;                         //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,retain) CIImage * inputDestinationImage;              //@synthesize inputDestinationImage=_inputDestinationImage - In the implementation block
@property (nonatomic,retain) NSArray * inputCorrectionInfo;                //@synthesize inputCorrectionInfo=_inputCorrectionInfo - In the implementation block
@property (nonatomic,retain) NSString * inputCameraModel;                  //@synthesize inputCameraModel=_inputCameraModel - In the implementation block
-(NSString *)inputCameraModel;
-(void)setInputCameraModel:(NSString *)arg1 ;
-(NSArray *)inputCorrectionInfo;
-(void)setInputCorrectionInfo:(NSArray *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(CIImage *)inputDestinationImage;
-(void)setInputDestinationImage:(CIImage *)arg1 ;
@end

