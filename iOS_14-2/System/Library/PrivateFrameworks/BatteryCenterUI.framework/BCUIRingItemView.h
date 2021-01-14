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
@class NSArray, UIImage, NSString, BCUIChargeRing, UILabel, NSNumberFormatter, MTVisualStylingProvider;

@interface BCUIRingItemView : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying> {

	BCUIChargeRing* _chargeRing;
	UILabel* _chargeLabel;
	NSNumberFormatter* _percentChargeFormatter;
	MTVisualStylingProvider* _visualStylingProvider;
	NSString* _contentSizeCategory;
	BOOL _empty;
	id<UIViewControllerTransitionCoordinator> _transitionCoordinator;
	long long _ringItemViewStyle;

}

@property (assign,nonatomic) long long ringItemViewStyle;                                                         //@synthesize ringItemViewStyle=_ringItemViewStyle - In the implementation block
@property (assign,nonatomic) double ringLineWidth; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long percentCharge; 
@property (assign,getter=isCharging,nonatomic) BOOL charging; 
@property (assign,getter=isLowCharge,nonatomic) BOOL lowCharge; 
@property (assign,getter=isLowPowerModeEnabled,nonatomic) BOOL lowPowerModeEnabled; 
@property (nonatomic,retain) UIImage * glyph; 
@property (nonatomic,copy) NSString * name; 
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                                           //@synthesize empty=_empty - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerTransitionCoordinator> transitionCoordinator;              //@synthesize transitionCoordinator=_transitionCoordinator - In the implementation block
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(UIImage *)glyph;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(NSArray *)requiredVisualStyleCategories;
-(BOOL)isLowPowerModeEnabled;
-(void)didMoveToSuperview;
-(void)setGlyph:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id<UIViewControllerTransitionCoordinator>)transitionCoordinator;
-(void)setPercentCharge:(long long)arg1 ;
-(BOOL)isEmpty;
-(BOOL)isCharging;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCharging:(BOOL)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(void)setTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
-(long long)percentCharge;
-(void)setRingLineWidth:(double)arg1 ;
-(void)setRingItemViewStyle:(long long)arg1 ;
-(double)ringLineWidth;
-(id)_chargeRing;
-(BOOL)isLowCharge;
-(void)setLowCharge:(BOOL)arg1 ;
-(void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg1 ;
-(id)_effectiveContentSizeCategoryForTraitCollection:(id)arg1 ;
-(void)_configureChargeLabelForStyle:(long long)arg1 ;
-(void)_updateFontForChargeLabelForStyle:(long long)arg1 ;
-(id)_lazyPercentChargeFormatter;
-(BOOL)_isPercentSymbolEnabledForRingItemStyle:(long long)arg1 andContentSizeCategory:(id)arg2 ;
-(id)_percentChargeString:(long long)arg1 ;
-(CGSize)_sizeForChargeRingWithStyle:(long long)arg1 inBounds:(CGRect)arg2 scale:(double)arg3 ;
-(CGSize)_sizeForChargeLabel:(id)arg1 withStyle:(long long)arg2 inBounds:(CGRect)arg3 scale:(double)arg4 ;
-(CGRect)_frameForChargeRingWithSize:(CGSize)arg1 chargeLabelSize:(CGSize)arg2 style:(long long)arg3 inBounds:(CGRect)arg4 scale:(double)arg5 ;
-(CGRect)_frameForChargeLabelWithSize:(CGSize)arg1 baseLineOffsetFromBoundsTop:(double)arg2 chargeRingSize:(CGSize)arg3 style:(long long)arg4 inBounds:(CGRect)arg5 scale:(double)arg6 ;
-(id)_visualStylingProviderForCategory:(long long)arg1 ;
-(void)_stopAutomaticallyUpdatingVisualStyling;
-(void)_beginAutomaticallyUpdatingChargeLabelVisualStyling;
-(long long)ringItemViewStyle;
@end

