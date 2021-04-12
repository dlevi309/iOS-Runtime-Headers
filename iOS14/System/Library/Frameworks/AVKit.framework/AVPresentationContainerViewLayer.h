/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <QuartzCore/CALayer.h>

@class AVPresentationContainerViewAppearanceProxy;

@interface AVPresentationContainerViewLayer : CALayer {

	BOOL _wantsAppearanceConfigValues;
	AVPresentationContainerViewAppearanceProxy* _appearanceProxy;

}

@property (nonatomic,readonly) AVPresentationContainerViewAppearanceProxy * appearanceProxy;              //@synthesize appearanceProxy=_appearanceProxy - In the implementation block
@property (assign,nonatomic) BOOL wantsAppearanceConfigValues;                                            //@synthesize wantsAppearanceConfigValues=_wantsAppearanceConfigValues - In the implementation block
-(void)setMasksToBounds:(BOOL)arg1 ;
-(unsigned long long)maskedCorners;
-(double)cornerRadius;
-(BOOL)masksToBounds;
-(AVPresentationContainerViewAppearanceProxy *)appearanceProxy;
-(void)setWantsAppearanceConfigValues:(BOOL)arg1 ;
-(BOOL)wantsAppearanceConfigValues;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(id)cornerCurve;
-(BOOL)continuousCorners;
-(void)setCornerCurve:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)setContinuousCorners:(BOOL)arg1 ;
@end

