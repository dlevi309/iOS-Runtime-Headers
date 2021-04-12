/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNGenerateImageFeaturePrintRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _imageCropAndScaleOption;

}

@property (assign,nonatomic) unsigned long long imageCropAndScaleOption;              //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

