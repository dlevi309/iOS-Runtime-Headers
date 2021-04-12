/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNDetectContoursRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _detectsDarkOnLight;
	BOOL _inHierarchy;
	BOOL _forceUseInputCVPixelBufferDirectly;
	float _contrastAdjustment;
	unsigned long long _maximumImageDimension;

}

@property (assign,nonatomic) float contrastAdjustment;                              //@synthesize contrastAdjustment=_contrastAdjustment - In the implementation block
@property (assign,nonatomic) BOOL detectsDarkOnLight;                               //@synthesize detectsDarkOnLight=_detectsDarkOnLight - In the implementation block
@property (assign,nonatomic) unsigned long long maximumImageDimension;              //@synthesize maximumImageDimension=_maximumImageDimension - In the implementation block
@property (assign,nonatomic) BOOL inHierarchy;                                      //@synthesize inHierarchy=_inHierarchy - In the implementation block
@property (assign,nonatomic) BOOL forceUseInputCVPixelBufferDirectly;               //@synthesize forceUseInputCVPixelBufferDirectly=_forceUseInputCVPixelBufferDirectly - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(float)contrastAdjustment;
-(void)setContrastAdjustment:(float)arg1 ;
-(BOOL)detectsDarkOnLight;
-(void)setDetectsDarkOnLight:(BOOL)arg1 ;
-(unsigned long long)maximumImageDimension;
-(void)setMaximumImageDimension:(unsigned long long)arg1 ;
-(BOOL)inHierarchy;
-(void)setInHierarchy:(BOOL)arg1 ;
-(BOOL)forceUseInputCVPixelBufferDirectly;
-(void)setForceUseInputCVPixelBufferDirectly:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

