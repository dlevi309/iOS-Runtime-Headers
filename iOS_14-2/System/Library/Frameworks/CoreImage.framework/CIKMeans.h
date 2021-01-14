/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIReductionFilter.h>

@class CIImage, NSNumber;

@interface CIKMeans : CIReductionFilter {

	CIImage* inputMeans;
	NSNumber* inputCount;
	NSNumber* inputPasses;
	NSNumber* inputPerceptual;

}

@property (nonatomic,retain) CIImage * inputMeans; 
@property (nonatomic,copy) NSNumber * inputCount; 
@property (nonatomic,copy) NSNumber * inputPasses; 
@property (nonatomic,copy) NSNumber * inputPerceptual; 
+(id)customAttributes;
-(id)_combine:(id)arg1 ;
-(id)_kernelKmeans;
-(id)defuse:(id)arg1 seed:(int)arg2 ;
-(void)setInputPasses:(NSNumber *)arg1 ;
-(CIImage *)inputMeans;
-(void)setInputMeans:(CIImage *)arg1 ;
-(NSNumber *)inputPasses;
-(NSNumber *)inputPerceptual;
-(void)setInputPerceptual:(NSNumber *)arg1 ;
-(NSNumber *)inputCount;
-(void)setInputCount:(NSNumber *)arg1 ;
-(id)outputImage;
@end

