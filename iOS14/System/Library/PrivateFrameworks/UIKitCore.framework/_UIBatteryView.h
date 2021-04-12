/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UIColor, UILabel, _UIBatteryViewAXHUDImageCacheInfo, CALayer, CAShapeLayer, UIAccessibilityHUDItem, NSString;

@interface _UIBatteryView : UIView <_UIStatusBarDisplayable> {

	BOOL _saverModeActive;
	BOOL _showsInlineChargingIndicator;
	BOOL _showsPercentage;
	UIColor* _fillColor;
	UIColor* _bodyColor;
	UIColor* _pinColor;
	UIColor* _boltColor;
	double _chargePercent;
	long long _chargingState;
	double _lowBatteryChargePercentThreshold;
	long long _iconSize;
	UILabel* _percentageLabel;
	_UIBatteryViewAXHUDImageCacheInfo* _accessibilityHUDImageCacheInfo;
	CALayer* _bodyLayer;
	CALayer* _pinLayer;
	CALayer* _boltMaskLayer;
	CALayer* _boltLayer;
	CALayer* _fillLayer;
	long long _internalSizeCategory;
	double _bodyColorAlpha;
	double _pinColorAlpha;

}

@property (assign,nonatomic) long long iconSize;                                                              //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * bodyShapeLayer; 
@property (nonatomic,readonly) CAShapeLayer * pinShapeLayer; 
@property (nonatomic,readonly) CAShapeLayer * boltMaskShapeLayer; 
@property (nonatomic,readonly) CAShapeLayer * boltShapeLayer; 
@property (nonatomic,retain) UILabel * percentageLabel;                                                       //@synthesize percentageLabel=_percentageLabel - In the implementation block
@property (nonatomic,retain) _UIBatteryViewAXHUDImageCacheInfo * accessibilityHUDImageCacheInfo;              //@synthesize accessibilityHUDImageCacheInfo=_accessibilityHUDImageCacheInfo - In the implementation block
@property (nonatomic,retain) CALayer * bodyLayer;                                                             //@synthesize bodyLayer=_bodyLayer - In the implementation block
@property (nonatomic,retain) CALayer * pinLayer;                                                              //@synthesize pinLayer=_pinLayer - In the implementation block
@property (nonatomic,retain) CALayer * boltMaskLayer;                                                         //@synthesize boltMaskLayer=_boltMaskLayer - In the implementation block
@property (nonatomic,retain) CALayer * boltLayer;                                                             //@synthesize boltLayer=_boltLayer - In the implementation block
@property (nonatomic,retain) CALayer * fillLayer;                                                             //@synthesize fillLayer=_fillLayer - In the implementation block
@property (assign,nonatomic) long long internalSizeCategory;                                                  //@synthesize internalSizeCategory=_internalSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL showsPercentage;                                                            //@synthesize showsPercentage=_showsPercentage - In the implementation block
@property (assign,nonatomic) double bodyColorAlpha;                                                           //@synthesize bodyColorAlpha=_bodyColorAlpha - In the implementation block
@property (assign,nonatomic) double pinColorAlpha;                                                            //@synthesize pinColorAlpha=_pinColorAlpha - In the implementation block
@property (assign,nonatomic) long long sizeCategory; 
@property (assign,nonatomic) double chargePercent;                                                            //@synthesize chargePercent=_chargePercent - In the implementation block
@property (assign,nonatomic) long long chargingState;                                                         //@synthesize chargingState=_chargingState - In the implementation block
@property (assign,nonatomic) BOOL saverModeActive;                                                            //@synthesize saverModeActive=_saverModeActive - In the implementation block
@property (assign,nonatomic) double lowBatteryChargePercentThreshold;                                         //@synthesize lowBatteryChargePercentThreshold=_lowBatteryChargePercentThreshold - In the implementation block
@property (getter=isLowBattery,nonatomic,readonly) BOOL lowBattery; 
@property (assign,nonatomic) BOOL showsInlineChargingIndicator;                                               //@synthesize showsInlineChargingIndicator=_showsInlineChargingIndicator - In the implementation block
@property (nonatomic,copy) UIColor * fillColor;                                                               //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,copy) UIColor * bodyColor;                                                               //@synthesize bodyColor=_bodyColor - In the implementation block
@property (nonatomic,copy) UIColor * pinColor;                                                                //@synthesize pinColor=_pinColor - In the implementation block
@property (nonatomic,copy) UIColor * boltColor;                                                               //@synthesize boltColor=_boltColor - In the implementation block
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)_batterySizeForIconSize:(long long)arg1 ;
+(CGSize)_pinSizeForIconSize:(long long)arg1 ;
+(double)_lineWidthAndInterspaceForIconSize:(long long)arg1 ;
+(CGSize)_statusBarIntrinsicContentSizeForIconSize:(long long)arg1 ;
+(id)_boltBezierPathForSize:(CGSize)arg1 ;
+(id)_pinBezierPathForSize:(CGSize)arg1 complex:(BOOL)arg2 ;
+(id)_boltMaskBezierPath;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)setChargingState:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateFillLayer;
-(void)setChargePercent:(double)arg1 ;
-(void)setShowsPercentage:(BOOL)arg1 ;
-(void)setBodyColorAlpha:(double)arg1 ;
-(void)setPinColorAlpha:(double)arg1 ;
-(void)setShowsInlineChargingIndicator:(BOOL)arg1 ;
-(void)setInternalSizeCategory:(long long)arg1 ;
-(BOOL)saverModeActive;
-(UIColor *)fillColor;
-(void)setSaverModeActive:(BOOL)arg1 ;
-(void)setLowBatteryChargePercentThreshold:(double)arg1 ;
-(CAShapeLayer *)bodyShapeLayer;
-(CAShapeLayer *)boltMaskShapeLayer;
-(CAShapeLayer *)boltShapeLayer;
-(BOOL)_currentlyShowsPercentage;
-(CAShapeLayer *)pinShapeLayer;
-(void)__updateFillLayer;
-(id)_batteryTextColor;
-(void)_updateFillColor;
-(double)chargePercent;
-(double)_insideCornerRadiusForTraitCollection:(id)arg1 ;
-(void)_unflipBoltIfNecessary;
-(void)_notifyWillBeginAnimatingBoltToVisible:(BOOL)arg1 ;
-(void)__resetBoltLayers;
-(void)setPinColor:(UIColor *)arg1 ;
-(void)_notifyDidFinishAnimatingBoltToVisible:(BOOL)arg1 ;
-(void)_updatePercentage;
-(double)lowBatteryChargePercentThreshold;
-(_UIBatteryViewAXHUDImageCacheInfo *)accessibilityHUDImageCacheInfo;
-(void)setAccessibilityHUDImageCacheInfo:(_UIBatteryViewAXHUDImageCacheInfo *)arg1 ;
-(void)setBodyColor:(UIColor *)arg1 ;
-(void)setBoltColor:(UIColor *)arg1 ;
-(id)initWithSizeCategory:(long long)arg1 ;
-(void)_didFinishAnimatingBoltToVisible:(BOOL)arg1 ;
-(BOOL)showsInlineChargingIndicator;
-(UILabel *)percentageLabel;
-(void)setPercentageLabel:(UILabel *)arg1 ;
-(BOOL)showsPercentage;
-(double)bodyColorAlpha;
-(double)pinColorAlpha;
-(double)_batteryBoltSmallScaleFactor;
-(CALayer *)pinLayer;
-(UIColor *)pinColor;
-(long long)iconSize;
-(void)layoutSubviews;
-(void)_createBoltLayersWithSize:(CGSize)arg1 ;
-(CALayer *)bodyLayer;
-(CALayer *)fillLayer;
-(UIColor *)bodyColor;
-(UIColor *)boltColor;
-(CALayer *)boltLayer;
-(void)_updateBodyColors;
-(void)_willBeginAnimatingBoltToVisible:(BOOL)arg1 ;
-(void)setSizeCategory:(long long)arg1 ;
-(void)_createFillLayer;
-(id)initWithCoder:(id)arg1 ;
-(double)_batteryBoltLargeScaleFactor;
-(void)_commonInit;
-(CGRect)_updateBodyLayers;
-(void)_updateBatteryFillColor;
-(void)setPinLayer:(CALayer *)arg1 ;
-(void)setIconSize:(long long)arg1 ;
-(BOOL)_shouldShowBolt;
-(void)setBoltMaskLayer:(CALayer *)arg1 ;
-(CGRect)_bodyRectForTraitCollection:(id)arg1 ;
-(CGSize)_pinSizeForTraitCollection:(id)arg1 ;
-(double)_batteryBoltScaleFactorMultiplier;
-(long long)internalSizeCategory;
-(double)_lineWidthAndInterspaceForTraitCollection:(id)arg1 ;
-(double)_outsideCornerRadiusForTraitCollection:(id)arg1 ;
-(id)_batteryFillColor;
-(CGSize)_batterySizeForTraitCollection:(id)arg1 ;
-(void)_fillLayerFrame:(CGRect*)arg1 cornerRadius:(double*)arg2 ;
-(long long)sizeCategory;
-(void)_updateBolt;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)chargingState;
-(UIAccessibilityHUDItem *)accessibilityHUDRepresentation;
-(void)_updateTransform;
-(void)_createBodyLayers;
-(void)setBodyLayer:(CALayer *)arg1 ;
-(void)setFillLayer:(CALayer *)arg1 ;
-(void)setBoltLayer:(CALayer *)arg1 ;
-(CALayer *)boltMaskLayer;
-(BOOL)isLowBattery;
@end

