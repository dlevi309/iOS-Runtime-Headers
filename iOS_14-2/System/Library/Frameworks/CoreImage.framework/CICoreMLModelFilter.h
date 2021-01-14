/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInputImage:(CIImage *)arg1 ;
-(MLModel *)inputModel;
-(void)setInputModel:(MLModel *)arg1 ;
-(NSNumber *)inputHeadIndex;
-(void)setInputHeadIndex:(NSNumber *)arg1 ;
-(NSNumber *)inputSoftmaxNormalization;
-(void)setInputSoftmaxNormalization:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
@end

