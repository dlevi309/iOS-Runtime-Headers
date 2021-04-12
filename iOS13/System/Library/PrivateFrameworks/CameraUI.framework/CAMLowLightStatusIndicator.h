/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CAMControlStatusIndicator.h>

@interface CAMLowLightStatusIndicator : CAMControlStatusIndicator {

	BOOL _lowLightDisabled;
	double _duration;
	long long _lowLightMode;

}

@property (assign,nonatomic) double duration;                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long lowLightMode;                                       //@synthesize lowLightMode=_lowLightMode - In the implementation block
@property (assign,getter=isLowLightDisabled,nonatomic) BOOL lowLightDisabled;              //@synthesize lowLightDisabled=_lowLightDisabled - In the implementation block
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)valueText;
-(id)imageNameForCurrentState;
-(long long)lowLightMode;
-(BOOL)isLowLightDisabled;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)setLowLightMode:(long long)arg1 ;
-(void)setLowLightDisabled:(BOOL)arg1 ;
-(BOOL)shouldShowOutlineForCurrentState;
-(BOOL)shouldFillOutlineForCurrentState;
-(BOOL)canShowValue;
@end

