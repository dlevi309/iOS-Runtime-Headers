/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setCornerRadius:(double)arg1 ;
-(void)setMasksToBounds:(BOOL)arg1 ;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(void)setCornerCurve:(id)arg1 ;
-(double)cornerRadius;
-(id)cornerCurve;
-(BOOL)masksToBounds;
-(unsigned long long)maskedCorners;
-(void)setContinuousCorners:(BOOL)arg1 ;
-(BOOL)continuousCorners;
-(AVPresentationContainerViewAppearanceProxy *)appearanceProxy;
-(void)setWantsAppearanceConfigValues:(BOOL)arg1 ;
-(BOOL)wantsAppearanceConfigValues;
@end

