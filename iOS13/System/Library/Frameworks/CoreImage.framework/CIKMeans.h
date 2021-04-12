/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)outputImage;
-(NSNumber *)inputCount;
-(void)setInputCount:(NSNumber *)arg1 ;
-(NSNumber *)inputPasses;
-(NSNumber *)inputPerceptual;
-(void)setInputPerceptual:(NSNumber *)arg1 ;
-(id)_combine:(id)arg1 ;
-(id)_kernelKmeans;
-(id)defuse:(id)arg1 seed:(int)arg2 ;
-(void)setInputPasses:(NSNumber *)arg1 ;
-(CIImage *)inputMeans;
-(void)setInputMeans:(CIImage *)arg1 ;
@end

