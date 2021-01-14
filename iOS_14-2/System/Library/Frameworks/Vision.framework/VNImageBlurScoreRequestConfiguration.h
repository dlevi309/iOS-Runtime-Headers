/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNImageBlurScoreRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _maximumIntermediateSideLength;
	unsigned long long _blurDeterminationMethod;

}

@property (assign,nonatomic) unsigned long long maximumIntermediateSideLength;              //@synthesize maximumIntermediateSideLength=_maximumIntermediateSideLength - In the implementation block
@property (assign,nonatomic) unsigned long long blurDeterminationMethod;                    //@synthesize blurDeterminationMethod=_blurDeterminationMethod - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setBlurDeterminationMethod:(unsigned long long)arg1 ;
-(void)setMaximumIntermediateSideLength:(unsigned long long)arg1 ;
-(unsigned long long)maximumIntermediateSideLength;
-(unsigned long long)blurDeterminationMethod;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

