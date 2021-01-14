/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(NSNumber *)inputClip;
-(NSNumber *)inputHard;
-(NSNumber *)inputPercentile;
-(void)setInputPercentile:(NSNumber *)arg1 ;
-(NSNumber *)inputNormalize;
-(void)setInputNormalize:(NSNumber *)arg1 ;
-(void)setInputClip:(NSNumber *)arg1 ;
-(void)setInputHard:(NSNumber *)arg1 ;
-(NSNumber *)inputCount;
-(void)setInputCount:(NSNumber *)arg1 ;
-(id)outputImage;
@end

