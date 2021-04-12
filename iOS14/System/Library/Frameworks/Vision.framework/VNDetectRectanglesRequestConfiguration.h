/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNDetectRectanglesRequestConfiguration : VNImageBasedRequestConfiguration {

	float _minimumAspectRatio;
	float _maximumAspectRatio;
	float _quadratureTolerance;
	float _minimumSize;
	float _minimumConfidence;
	unsigned long long _requiredVersion;
	unsigned long long _maximumObservations;

}

@property (assign,nonatomic) unsigned long long requiredVersion;                  //@synthesize requiredVersion=_requiredVersion - In the implementation block
@property (assign,nonatomic) float minimumAspectRatio;                            //@synthesize minimumAspectRatio=_minimumAspectRatio - In the implementation block
@property (assign,nonatomic) float maximumAspectRatio;                            //@synthesize maximumAspectRatio=_maximumAspectRatio - In the implementation block
@property (assign,nonatomic) float quadratureTolerance;                           //@synthesize quadratureTolerance=_quadratureTolerance - In the implementation block
@property (assign,nonatomic) float minimumSize;                                   //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) float minimumConfidence;                             //@synthesize minimumConfidence=_minimumConfidence - In the implementation block
@property (assign,nonatomic) unsigned long long maximumObservations;              //@synthesize maximumObservations=_maximumObservations - In the implementation block
-(void)setMinimumConfidence:(float)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setMinimumSize:(float)arg1 ;
-(void)setRequiredVersion:(unsigned long long)arg1 ;
-(void)setMinimumAspectRatio:(float)arg1 ;
-(void)setMaximumAspectRatio:(float)arg1 ;
-(float)minimumSize;
-(void)setQuadratureTolerance:(float)arg1 ;
-(float)minimumAspectRatio;
-(float)maximumAspectRatio;
-(float)quadratureTolerance;
-(void)setMaximumObservations:(unsigned long long)arg1 ;
-(float)minimumConfidence;
-(unsigned long long)maximumObservations;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)requiredVersion;
@end

