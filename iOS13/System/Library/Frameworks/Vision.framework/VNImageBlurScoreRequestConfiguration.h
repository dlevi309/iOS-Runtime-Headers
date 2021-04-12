/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)maximumIntermediateSideLength;
-(void)setMaximumIntermediateSideLength:(unsigned long long)arg1 ;
-(unsigned long long)blurDeterminationMethod;
-(void)setBlurDeterminationMethod:(unsigned long long)arg1 ;
@end

