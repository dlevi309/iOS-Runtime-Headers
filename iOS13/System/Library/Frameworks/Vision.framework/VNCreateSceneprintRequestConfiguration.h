/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNCreateSceneprintRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _returnAllResults;
	BOOL _useCenterTileOnly;
	unsigned long long _imageCropAndScaleOption;

}

@property (assign,nonatomic) BOOL returnAllResults;                                   //@synthesize returnAllResults=_returnAllResults - In the implementation block
@property (assign,nonatomic) BOOL useCenterTileOnly;                                  //@synthesize useCenterTileOnly=_useCenterTileOnly - In the implementation block
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption;              //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(BOOL)returnAllResults;
-(void)setReturnAllResults:(BOOL)arg1 ;
-(BOOL)useCenterTileOnly;
-(void)setUseCenterTileOnly:(BOOL)arg1 ;
@end

