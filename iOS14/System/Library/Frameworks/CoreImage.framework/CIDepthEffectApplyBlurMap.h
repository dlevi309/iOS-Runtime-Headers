/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSString;

@interface CIDepthEffectApplyBlurMap : CIFilter {

	CIImage* inputImage;
	CIImage* inputBlurMap;
	CIImage* inputMatteImage;
	CIImage* inputGainMap;
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
@property (retain) CIImage * inputGainMap; 
@property (nonatomic,copy) NSNumber * inputAperture; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseScale; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) id inputAuxDataMetadata; 
@property (nonatomic,retain) NSString * inputShape; 
@property (nonatomic,retain) NSNumber * inputDraftMode; 
+(id)customAttributes;
-(NSNumber *)inputDraftMode;
-(void)setInputDraftMode:(NSNumber *)arg1 ;
-(NSString *)inputShape;
-(NSNumber *)inputAperture;
-(void)setInputMatteImage:(CIImage *)arg1 ;
-(NSNumber *)inputLumaNoiseScale;
-(void)setInputLumaNoiseScale:(NSNumber *)arg1 ;
-(void)setInputAperture:(NSNumber *)arg1 ;
-(void)setInputShape:(NSString *)arg1 ;
-(id)unifiedRenderingOutputImage:(CGImageMetadataRef)arg1 ;
-(CIImage *)inputGainMap;
-(void)setInputGainMap:(CIImage *)arg1 ;
-(id)inputAuxDataMetadata;
-(void)setInputAuxDataMetadata:(id)arg1 ;
-(CIImage *)inputBlurMap;
-(void)setInputBlurMap:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputMatteImage;
-(CIImage *)inputImage;
@end

