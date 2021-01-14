/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@protocol NSObjectNSCopying;
@interface VNCoreMLRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _imageCropAndScaleOption;
	id<NSObject><NSCopying> _modelCachingIdentifier;

}

@property (assign,nonatomic) unsigned long long imageCropAndScaleOption;                //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
@property (nonatomic,copy) id<NSObject><NSCopying> modelCachingIdentifier;              //@synthesize modelCachingIdentifier=_modelCachingIdentifier - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)updateWithPropertiesOfModel:(id)arg1 ;
-(id<NSObject><NSCopying>)modelCachingIdentifier;
-(void)setModelCachingIdentifier:(id<NSObject><NSCopying>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

