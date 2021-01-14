/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class VNClassificationCustomHierarchy;

@interface VNClassifyImageRequestConfiguration : VNImageBasedRequestConfiguration {

	VNClassificationCustomHierarchy* _customHierarchy;
	unsigned long long _maximumLeafObservations;
	unsigned long long _maximumHierarchicalObservations;
	unsigned long long _imageCropAndScaleOption;

}

@property (nonatomic,retain) VNClassificationCustomHierarchy * customHierarchy;               //@synthesize customHierarchy=_customHierarchy - In the implementation block
@property (assign,nonatomic) unsigned long long maximumLeafObservations;                      //@synthesize maximumLeafObservations=_maximumLeafObservations - In the implementation block
@property (assign,nonatomic) unsigned long long maximumHierarchicalObservations;              //@synthesize maximumHierarchicalObservations=_maximumHierarchicalObservations - In the implementation block
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption;                      //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
-(unsigned long long)maximumLeafObservations;
-(void)setMaximumLeafObservations:(unsigned long long)arg1 ;
-(unsigned long long)maximumHierarchicalObservations;
-(void)setMaximumHierarchicalObservations:(unsigned long long)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(VNClassificationCustomHierarchy *)customHierarchy;
-(void)setCustomHierarchy:(VNClassificationCustomHierarchy *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

