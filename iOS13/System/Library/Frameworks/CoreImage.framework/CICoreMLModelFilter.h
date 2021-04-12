/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, MLModel, NSNumber;

@interface CICoreMLModelFilter : CIFilter {

	CIImage* inputImage;
	MLModel* inputModel;
	NSNumber* inputHeadIndex;
	NSNumber* inputSoftmaxNormalization;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) MLModel * inputModel; 
@property (nonatomic,retain) NSNumber * inputHeadIndex; 
@property (nonatomic,retain) NSNumber * inputSoftmaxNormalization; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(MLModel *)inputModel;
-(void)setInputModel:(MLModel *)arg1 ;
-(NSNumber *)inputHeadIndex;
-(void)setInputHeadIndex:(NSNumber *)arg1 ;
-(NSNumber *)inputSoftmaxNormalization;
-(void)setInputSoftmaxNormalization:(NSNumber *)arg1 ;
@end

