/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenterUI.framework/BatteryCenterUI
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTVisualStylingRequiring.h>
#import <libobjc.A.dylib/BCUIBatteryDeviceDisplaying.h>

@class UIImageView, UILabel, NSNumberFormatter, BCUIBatteryView, UIView, NSMutableDictionary, NSString, UIImage, NSArray;

@interface BCUIRowView : UIView <MTVisualStylingRequiring, BCUIBatteryDeviceDisplaying> {

	UIImageView* _glyphImageView;
	UILabel* _nameLabel;
	UILabel* _percentChargeLabel;
	NSNumberFormatter* _percentChargeFormatter;
	BCUIBatteryView* _batteryView;
	UIView* _separator;
	NSMutableDictionary* _categoriesToVisualStylingProvider;
	NSString* _contentSizeCategory;
	BOOL _charging;
	BOOL _lowCharge;
	BOOL _lowPowerModeEnabled;
	BOOL _empty;
	long long _percentCharge;
	UIImage* _glyph;
	NSString* _name;

}

@property (assign,getter=isSeparatorVisible,nonatomic) BOOL separatorVisible; 
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
@property (nonatomic,copy) NSString * name;                                                                       //@synthesize name=_name - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                                           //@synthesize empty=_empty - In the implementation block
@property (assign,nonatomic,__weak) id<UIViewControllerTransitionCoordinator> transitionCoordinator; 
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(UIImage *)glyph;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(NSArray *)requiredVisualStyleCategories;
-(BOOL)isLowPowerModeEnabled;
-(BOOL)isSeparatorVisible;
-(void)didMoveToSuperview;
-(NSString *)name;
-(void)setGlyph:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setPercentCharge:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEmpty;
-(void)setSeparatorVisible:(BOOL)arg1 ;
-(BOOL)isCharging;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCharging:(BOOL)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(long long)percentCharge;
-(BOOL)isLowCharge;
-(void)setLowCharge:(BOOL)arg1 ;
-(void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg1 ;
-(id)_effectiveContentSizeCategoryForTraitCollection:(id)arg1 ;
-(id)_lazyPercentChargeFormatter;
-(id)_percentChargeString:(long long)arg1 ;
-(id)_visualStylingProviderForCategory:(long long)arg1 ;
-(void)_stopAutomaticallyUpdatingVisualStylingForCategory:(long long)arg1 ;
-(void)_beginAutomaticallyUpdatingVisualStylingForCategory:(long long)arg1 ;
-(void)_configureSeparatorIfNecessary;
-(void)_configureBatteryViewIfNecessary;
-(void)_configureGlyphImageViewIfNecessary;
-(void)_configurePercentChargeLabelIfNecessary;
-(void)_configureNameLabelIfNecessary;
@end

