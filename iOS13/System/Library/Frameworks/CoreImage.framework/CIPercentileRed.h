/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPercentileRed : CIFilter {

	CIImage* inputImage;
	NSNumber* inputPercentile;
	NSNumber* inputCount;
	NSNumber* inputScale;
	NSNumber* inputNormalize;
	NSNumber* inputClip;
	NSNumber* inputHard;

}

@property (nonatomic,retain) NSNumber * inputPercentile; 
@property (nonatomic,retain) NSNumber * inputCount; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputNormalize; 
@property (nonatomic,retain) NSNumber * inputClip; 
@property (nonatomic,retain) NSNumber * inputHard; 
+(id)customAttributes;
-(id)outputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputCount;
-(void)setInputCount:(NSNumber *)arg1 ;
-(NSNumber *)inputPercentile;
-(void)setInputPercentile:(NSNumber *)arg1 ;
-(NSNumber *)inputNormalize;
-(void)setInputNormalize:(NSNumber *)arg1 ;
-(NSNumber *)inputClip;
-(void)setInputClip:(NSNumber *)arg1 ;
-(NSNumber *)inputHard;
-(void)setInputHard:(NSNumber *)arg1 ;
@end

