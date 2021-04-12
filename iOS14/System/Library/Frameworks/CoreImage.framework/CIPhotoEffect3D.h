/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPhotoEffect3D : CIFilter {

	CIImage* inputImage;
	CIImage* inputDepthMap;
	NSNumber* inputThreshold;
	NSNumber* inputGrainAmount;
	NSNumber* inputScale;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputDepthMap; 
@property (nonatomic,retain) NSNumber * inputThreshold; 
@property (nonatomic,retain) NSNumber * inputGrainAmount; 
@property (nonatomic,retain) NSNumber * inputScale; 
+(id)customAttributes;
-(id)cubeName;
-(int)_maxVersionBG;
-(id)cubeColorSpaceName;
-(id)backgroundCubeName;
-(id)applyCubeWithName:(id)arg1 toImage:(id)arg2 ;
-(id)_CIPhotoEffectDepthBlend;
-(CIImage *)inputDepthMap;
-(id)backgroundCubePath;
-(void)setInputDepthMap:(CIImage *)arg1 ;
-(NSNumber *)inputGrainAmount;
-(void)setInputGrainAmount:(NSNumber *)arg1 ;
-(id)init;
-(int)_defaultVersion;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)cubePath;
-(void)setDefaults;
-(NSNumber *)inputThreshold;
-(void)setInputThreshold:(NSNumber *)arg1 ;
-(int)_maxVersion;
-(id)outputImage;
-(CIImage *)inputImage;
@end

