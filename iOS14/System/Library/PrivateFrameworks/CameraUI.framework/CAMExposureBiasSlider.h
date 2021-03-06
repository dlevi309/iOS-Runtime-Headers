/*
* Generated on Thursday, January 14, 2021 at 2:26:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CAMExposureBiasSliderThumb, UIView;

@interface CAMExposureBiasSlider : UIView {

	BOOL _suspendTrackFadeOut;
	float _exposureBiasMin;
	float _exposureBiasMax;
	float _exposureBiasValue;
	CAMExposureBiasSliderThumb* __thumbView;
	UIView* __minTrackView;
	UIView* __maxTrackView;
	UIView* __minTrackMaskView;
	UIView* __maxTrackMaskView;
	double __lastInteractionTime;

}

@property (nonatomic,retain,readonly) CAMExposureBiasSliderThumb * _thumbView;              //@synthesize _thumbView=__thumbView - In the implementation block
@property (nonatomic,retain,readonly) UIView * _minTrackView;                               //@synthesize _minTrackView=__minTrackView - In the implementation block
@property (nonatomic,retain,readonly) UIView * _maxTrackView;                               //@synthesize _maxTrackView=__maxTrackView - In the implementation block
@property (nonatomic,retain,readonly) UIView * _minTrackMaskView;                           //@synthesize _minTrackMaskView=__minTrackMaskView - In the implementation block
@property (nonatomic,retain,readonly) UIView * _maxTrackMaskView;                           //@synthesize _maxTrackMaskView=__maxTrackMaskView - In the implementation block
@property (nonatomic,readonly) double _lastInteractionTime;                                 //@synthesize _lastInteractionTime=__lastInteractionTime - In the implementation block
@property (assign,nonatomic) float exposureBiasMin;                                         //@synthesize exposureBiasMin=_exposureBiasMin - In the implementation block
@property (assign,nonatomic) float exposureBiasMax;                                         //@synthesize exposureBiasMax=_exposureBiasMax - In the implementation block
@property (assign,nonatomic) float exposureBiasValue;                                       //@synthesize exposureBiasValue=_exposureBiasValue - In the implementation block
@property (assign,nonatomic) BOOL suspendTrackFadeOut;                                      //@synthesize suspendTrackFadeOut=_suspendTrackFadeOut - In the implementation block
@property (nonatomic,readonly) double thumbMaxExtension; 
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(CAMExposureBiasSliderThumb *)_thumbView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)exposureBiasValue;
-(void)setExposureBiasValue:(float)arg1 ;
-(UIView *)_minTrackView;
-(UIView *)_maxTrackView;
-(void)setExposureBiasMin:(float)arg1 ;
-(void)setExposureBiasMax:(float)arg1 ;
-(void)_updateForChangedNormalizedExposureValue;
-(void)updateLastInteractionTime;
-(float)_normalizedExposureValue;
-(CGPoint)_sunCenterForNormalizedValue:(float)arg1 ;
-(float)exposureBiasMin;
-(float)exposureBiasMax;
-(void)_cancelDelayedDim;
-(void)_scheduleDelayedDim;
-(void)_animateTrackAlpha:(double)arg1 withDuration:(double)arg2 ;
-(double)_trackAlpha;
-(BOOL)suspendTrackFadeOut;
-(void)_dimTrackForInactivity;
-(double)thumbMaxExtension;
-(void)setSuspendTrackFadeOut:(BOOL)arg1 ;
-(void)forceTrackDimmed;
-(UIView *)_minTrackMaskView;
-(UIView *)_maxTrackMaskView;
-(double)_lastInteractionTime;
@end

