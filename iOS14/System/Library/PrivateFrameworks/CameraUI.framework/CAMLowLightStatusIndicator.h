/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDuration:(double)arg1 ;
-(id)imageNameForCurrentState;
-(void)setLowLightMode:(long long)arg1 ;
-(double)duration;
-(long long)lowLightMode;
-(id)valueText;
-(void)setLowLightDisabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)isLowLightDisabled;
-(void)setLowLightDisabled:(BOOL)arg1 ;
-(BOOL)shouldShowOutlineForCurrentState;
-(BOOL)shouldFillOutlineForCurrentState;
-(BOOL)canShowValue;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
@end

