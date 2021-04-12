/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor, NSNumber;

@interface CIStarShineGenerator : CIFilter {

	CIVector* inputCenter;
	CIColor* inputColor;
	NSNumber* inputRadius;
	NSNumber* inputCrossScale;
	NSNumber* inputCrossAngle;
	NSNumber* inputCrossOpacity;
	NSNumber* inputCrossWidth;
	NSNumber* inputEpsilon;

}

@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputCrossScale; 
@property (nonatomic,retain) NSNumber * inputCrossAngle; 
@property (nonatomic,retain) NSNumber * inputCrossOpacity; 
@property (nonatomic,retain) NSNumber * inputCrossWidth; 
@property (nonatomic,retain) NSNumber * inputEpsilon; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputColor:(CIColor *)arg1 ;
-(NSNumber *)inputEpsilon;
-(void)setInputEpsilon:(NSNumber *)arg1 ;
-(NSNumber *)inputCrossAngle;
-(void)setInputCrossAngle:(NSNumber *)arg1 ;
-(NSNumber *)inputCrossScale;
-(void)setInputCrossScale:(NSNumber *)arg1 ;
-(NSNumber *)inputCrossWidth;
-(void)setInputCrossWidth:(NSNumber *)arg1 ;
-(NSNumber *)inputCrossOpacity;
-(void)setInputCrossOpacity:(NSNumber *)arg1 ;
@end

