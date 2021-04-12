/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)minimumSize;
-(void)setMinimumSize:(float)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)requiredVersion;
-(void)setRequiredVersion:(unsigned long long)arg1 ;
-(float)minimumAspectRatio;
-(void)setMinimumAspectRatio:(float)arg1 ;
-(float)maximumAspectRatio;
-(void)setMaximumAspectRatio:(float)arg1 ;
-(float)quadratureTolerance;
-(void)setQuadratureTolerance:(float)arg1 ;
-(float)minimumConfidence;
-(void)setMinimumConfidence:(float)arg1 ;
-(unsigned long long)maximumObservations;
-(void)setMaximumObservations:(unsigned long long)arg1 ;
@end

