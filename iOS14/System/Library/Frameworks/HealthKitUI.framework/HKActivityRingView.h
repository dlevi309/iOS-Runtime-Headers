/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class ARUIRingsView, ARUIRenderer, _HKShapeView, HKActivitySummary;

@interface HKActivityRingView : UIView {

	ARUIRingsView* _ringsView;
	ARUIRenderer* _renderer;
	_HKShapeView* _maskView;
	BOOL _shouldBypassApplicationStateChecking;
	HKActivitySummary* _activitySummary;
	double _ringInsetPercentage;
	double _emptyRingAlpha;

}

@property (assign,setter=_setRingInsetPercentage:,getter=_ringInsetPercentage,nonatomic) double ringInsetPercentage;                                                               //@synthesize ringInsetPercentage=_ringInsetPercentage - In the implementation block
@property (assign,setter=_setEmptyRingAlpha:,getter=_emptyRingAlpha,nonatomic) double emptyRingAlpha;                                                                              //@synthesize emptyRingAlpha=_emptyRingAlpha - In the implementation block
@property (assign,setter=_setShouldBypassApplicationStateChecking:,getter=_shouldBypassApplicationStateChecking,nonatomic) BOOL shouldBypassApplicationStateChecking;              //@synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking - In the implementation block
@property (nonatomic,retain) HKActivitySummary * activitySummary;                                                                                                                  //@synthesize activitySummary=_activitySummary - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(HKActivitySummary *)activitySummary;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_snapshotImage;
-(void)setActivitySummary:(HKActivitySummary *)arg1 ;
-(void)setActivitySummary:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setActivityRingViewBackgroundTransparent:(BOOL)arg1 ;
-(void)_setActivityRingViewBackgroundColor:(id)arg1 ;
-(void)_setActivitySummary:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 renderer:(id)arg2 ;
-(double)_ringDiameter;
-(void)_setUpAfterInit;
-(void)_setUpRingsView;
-(void)_updateMaskPath;
-(double)_emptyRingAlpha;
-(void)_updateRingsViewDiameter;
-(void)_updateRingsViewDiameterLegacy;
-(void)_setRingDiameter:(double)arg1 ringInterspacing:(double)arg2 ringThickness:(double)arg3 ;
-(void)_updateAndInterpolateRingsViewDiameterForWidth:(double)arg1 lowerDirective:(id)arg2 higherDirective:(id)arg3 ;
-(void)_setEmptyRingAlpha:(double)arg1 ;
-(void)_setShouldBypassApplicationStateChecking:(BOOL)arg1 ;
-(void)_displayIconsForWheelchairUser:(BOOL)arg1 ;
-(double)_ringInsetPercentage;
-(void)_setRingInsetPercentage:(double)arg1 ;
-(BOOL)_shouldBypassApplicationStateChecking;
@end

