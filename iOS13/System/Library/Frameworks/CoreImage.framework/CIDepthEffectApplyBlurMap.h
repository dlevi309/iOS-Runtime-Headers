/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSString;

@interface CIDepthEffectApplyBlurMap : CIFilter {

	CIImage* inputImage;
	CIImage* inputBlurMap;
	CIImage* inputMatteImage;
	NSNumber* inputAperture;
	NSNumber* inputLumaNoiseScale;
	NSNumber* inputScale;
	id inputAuxDataMetadata;
	NSString* inputShape;
	NSNumber* inputDraftMode;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputBlurMap; 
@property (retain) CIImage * inputMatteImage; 
@property (nonatomic,copy) NSNumber * inputAperture; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseScale; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) id inputAuxDataMetadata; 
@property (nonatomic,retain) NSString * inputShape; 
@property (nonatomic,retain) NSNumber * inputDraftMode; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputMatteImage;
-(NSNumber *)inputDraftMode;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(NSNumber *)inputLumaNoiseScale;
-(void)setInputLumaNoiseScale:(NSNumber *)arg1 ;
-(NSNumber *)inputAperture;
-(void)setInputAperture:(NSNumber *)arg1 ;
-(NSString *)inputShape;
-(void)setInputShape:(NSString *)arg1 ;
-(id)inputAuxDataMetadata;
-(void)setInputAuxDataMetadata:(id)arg1 ;
-(CIImage *)inputBlurMap;
-(void)setInputBlurMap:(CIImage *)arg1 ;
@end

