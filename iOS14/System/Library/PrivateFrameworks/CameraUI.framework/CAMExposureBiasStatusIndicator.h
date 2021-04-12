/*
* Generated on Thursday, January 14, 2021 at 2:26:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMControlStatusIndicator.h>

@class UILabel, CAMExposureBiasStatusIndicatorTickMarksView, UIView;

@interface CAMExposureBiasStatusIndicator : CAMControlStatusIndicator {

	BOOL _exposureValueVisible;
	double _exposureBiasValue;
	double _shadowClipping;
	double _highlightClipping;
	UILabel* __exposureLabel;
	CAMExposureBiasStatusIndicatorTickMarksView* __ticksView;
	UIView* __shadowClippingTick;
	UIView* __highlightClippingTick;

}

@property (nonatomic,readonly) UILabel * _exposureLabel;                                              //@synthesize _exposureLabel=__exposureLabel - In the implementation block
@property (nonatomic,readonly) CAMExposureBiasStatusIndicatorTickMarksView * _ticksView;              //@synthesize _ticksView=__ticksView - In the implementation block
@property (nonatomic,readonly) UIView * _shadowClippingTick;                                          //@synthesize _shadowClippingTick=__shadowClippingTick - In the implementation block
@property (nonatomic,readonly) UIView * _highlightClippingTick;                                       //@synthesize _highlightClippingTick=__highlightClippingTick - In the implementation block
@property (assign,nonatomic) double exposureBiasValue;                                                //@synthesize exposureBiasValue=_exposureBiasValue - In the implementation block
@property (assign,getter=isExposureValueVisible,nonatomic) BOOL exposureValueVisible;                 //@synthesize exposureValueVisible=_exposureValueVisible - In the implementation block
@property (assign,nonatomic) double shadowClipping;                                                   //@synthesize shadowClipping=_shadowClipping - In the implementation block
@property (assign,nonatomic) double highlightClipping;                                                //@synthesize highlightClipping=_highlightClipping - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)init;
-(BOOL)shouldUseOutline;
-(id)imageNameForCurrentState;
-(void)layoutSubviews;
-(double)exposureBiasValue;
-(void)setExposureBiasValue:(double)arg1 ;
-(double)shadowClipping;
-(double)highlightClipping;
-(void)setExposureValueVisible:(BOOL)arg1 ;
-(void)setShadowClipping:(double)arg1 ;
-(void)setHighlightClipping:(double)arg1 ;
-(BOOL)supportsOrientations;
-(CAMExposureBiasStatusIndicatorTickMarksView *)_ticksView;
-(void)_updateExposureLabel;
-(void)_updateTicks;
-(UILabel *)_exposureLabel;
-(BOOL)isExposureValueVisible;
-(double)_horizontalExposureLabelOffset;
-(void)_layoutShadowClippingTick;
-(void)_layoutHighlightClippingTick;
-(CGRect)_clippingTickFrameForClipping:(double)arg1 leftAligned:(BOOL)arg2 ;
-(UIView *)_shadowClippingTick;
-(UIView *)_highlightClippingTick;
-(double)_clippingTickAlphaForClipping:(double)arg1 ;
-(void)_updateShadowClippingTickAlpha;
-(void)_updateHighlightClippingTickAlpha;
@end

