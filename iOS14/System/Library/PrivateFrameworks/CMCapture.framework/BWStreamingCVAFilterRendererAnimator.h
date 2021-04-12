/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class BWRamp;

@interface BWStreamingCVAFilterRendererAnimator : NSObject {

	SCD_Struct_BW92 _currentFrame;
	int _mostRecentEffectStatus;
	BWRamp* _simulatedApertureRamp;
	float _defaultSimulatedAperture;

}

@property (getter=isDepthAvailable,nonatomic,readonly) BOOL depthAvailable; 
+(void)initialize;
-(id)init;
-(BOOL)isDepthAvailable;
-(id)initWithEffectStatus:(int)arg1 videoPipelineDevice:(unsigned long long)arg2 ;
-(void)_resetSimulatedApertureRampWithEffectStatus:(int)arg1 clientSuppliedSimulatedAperture:(float)arg2 ;
-(SCD_Struct_BW92*)simulateNextFrameWithEffectStatus:(int)arg1 portraitStability:(float)arg2 clientSuppliedSimulatedAperture:(float)arg3 ;
-(void)dealloc;
@end

