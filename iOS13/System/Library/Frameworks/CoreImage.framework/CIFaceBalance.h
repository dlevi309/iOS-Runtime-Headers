/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSNumber;

@interface CIFaceBalance : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSNumber* inputOrigI;
	NSNumber* inputOrigQ;
	NSNumber* inputStrength;
	NSNumber* inputWarmth;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputOrigI; 
@property (nonatomic,retain) NSNumber * inputOrigQ; 
@property (nonatomic,retain) NSNumber * inputStrength; 
@property (nonatomic,retain) NSNumber * inputWarmth; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(BOOL)_isIdentity;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputWarmth;
-(void)setInputWarmth:(NSNumber *)arg1 ;
-(void)setInputOrigI:(NSNumber *)arg1 ;
-(void)setInputOrigQ:(NSNumber *)arg1 ;
-(NSNumber *)inputOrigI;
-(NSNumber *)inputOrigQ;
@end

