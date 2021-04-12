/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class BWRamp;

@interface BWStreamingCVAFilterRendererAnimator : NSObject {

	SCD_Struct_BW121 _currentFrame;
	int _mostRecentEffectStatus;
	BWRamp* _simulatedApertureRamp;
	float _defaultSimulatedAperture;

}

@property (getter=isDepthAvailable,nonatomic,readonly) BOOL depthAvailable; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)initWithEffectStatus:(int)arg1 videoPipelineDevice:(unsigned long long)arg2 ;
-(BOOL)isDepthAvailable;
-(SCD_Struct_BW121*)simulateNextFrameWithEffectStatus:(int)arg1 portraitStability:(float)arg2 clientSuppliedSimulatedAperture:(float)arg3 ;
-(void)_resetSimulatedApertureRampWithEffectStatus:(int)arg1 clientSuppliedSimulatedAperture:(float)arg2 ;
@end

