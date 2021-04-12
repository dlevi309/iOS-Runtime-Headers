/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenterUI.framework/BatteryCenterUI
*/

#import <BatteryCenterUI/BatteryCenterUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>
#import <libobjc.A.dylib/BCUIBatteryDeviceDisplaying.h>

@protocol UIViewControllerTransitionCoordinator;
@class BCUIRingView, BCUIRingCapShadow, UIImageView, CABackdropLayer, MTVisualStylingProvider, UIImage, NSArray, NSString;

@interface BCUIChargeRing : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying> {

	BCUIRingView* _baseRing;
	BCUIRingView* _chargeRing;
	BCUIRingCapShadow* _ringCapShadow;
	UIImageView* _boltMaskImageView;
	UIImageView* _boltImageView;
	CABackdropLayer* _captureBackdrop;
	UIImageView* _glyphImageView;
	MTVisualStylingProvider* _visualStylingProvider;
	MTVisualStylingProvider* _baseRingVisualStylingProvider;
	BOOL _lowCharge;
	BOOL _charging;
	BOOL _lowPowerModeEnabled;
	double _lineWidth;
	long long _percentCharge;
	UIImage* _glyph;
	id<UIViewControllerTransitionCoordinator> _transitionCoordinator;

}

@property (assign,nonatomic) double lineWidth;                                                                    //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long percentCharge;                                                             //@synthesize percentCharge=_percentCharge - In the implementation block
@property (assign,getter=isCharging,nonatomic) BOOL charging;                                                     //@synthesize charging=_charging - In the implementation block
@property (assign,getter=isLowCharge,nonatomic) BOOL lowCharge;                                                   //@synthesize lowCharge=_lowCharge - In the implementation block
@property (assign,getter=isLowPowerModeEnabled,nonatomic) BOOL lowPowerModeEnabled;                               //@synthesize lowPowerModeEnabled=_lowPowerModeEnabled - In the implementation block
@property (nonatomic,retain) UIImage * glyph;                                                                     //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (assign,getter=isEmpty,nonatomic) BOOL empty; 
@property (assign,nonatomic,__weak) id<UIViewControllerTransitionCoordinator> transitionCoordinator;              //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
-(void)setLineWidth:(double)arg1 ;
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(double)lineWidth;
-(UIImage *)glyph;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(NSArray *)requiredVisualStyleCategories;
-(id)_glyphImageView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(BOOL)isLowPowerModeEnabled;
-(void)didMoveToSuperview;
-(void)setGlyph:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<UIViewControllerTransitionCoordinator>)transitionCoordinator;
-(void)setPercentCharge:(long long)arg1 ;
-(BOOL)isCharging;
-(void)setCharging:(BOOL)arg1 ;
-(void)setTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
-(long long)percentCharge;
-(id)_chargeRing;
-(BOOL)isLowCharge;
-(void)setLowCharge:(BOOL)arg1 ;
-(void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg1 ;
-(id)_visualStylingProviderForCategory:(long long)arg1 ;
-(id)_baseRing;
-(void)_updateVisualStylingForBaseRingIfNecessary;
-(void)_configureRingCapShadowIfNecessary;
-(BOOL)_shouldShowRingCapShadow;
-(void)_configureBoltMaskImageViewIfNecessary;
-(void)_configureBoltImageViewIfNecessary;
-(void)_updateVisualStylingForBolt;
-(void)_configureCaptureBackdropIfNecessary;
-(void)_stopAutomaticallyUpdatingVisualStylingForCategory:(long long)arg1 ;
-(void)_beginAutomaticallyUpdatingVisualStylingForCategory:(long long)arg1 ;
-(BOOL)_isPastThresholdForRingCapShadow;
-(void)_beginAutomaticallyUpdatingPrimaryVisualStylingForView:(id)arg1 observerBlock:(/*^block*/id)arg2 ;
-(id)_ringVisualStylingProvider;
@end

