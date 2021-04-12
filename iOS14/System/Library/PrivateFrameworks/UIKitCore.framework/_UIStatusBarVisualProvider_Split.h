/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVisualProvider_Phone.h>
#import <UIKitCore/_UIStatusBarCellularItemTypeStringProvider.h>
#import <UIKitCore/_UIStatusBarFixedWidthVisualProvider.h>

@class NSDictionary, _UIStatusBarDisplayItemPlacement, _UIStatusBarDisplayItemPlacementGroup, UILayoutGuide, NSLayoutConstraint, NSTimer, NSString, _UIStatusBar;

@interface _UIStatusBarVisualProvider_Split : _UIStatusBarVisualProvider_Phone <_UIStatusBarCellularItemTypeStringProvider, _UIStatusBarFixedWidthVisualProvider> {

	BOOL _delayedSystemUpdateData;
	NSDictionary* _orderedDisplayItemPlacements;
	_UIStatusBarDisplayItemPlacement* _serviceNamePlacement;
	_UIStatusBarDisplayItemPlacement* _dualServiceNamePlacement;
	_UIStatusBarDisplayItemPlacementGroup* _lowerWifiGroup;
	_UIStatusBarDisplayItemPlacement* _batteryChargingPlacement;
	UILayoutGuide* _cutoutLayoutGuide;
	UILayoutGuide* _mainRegionsLayoutGuide;
	NSLayoutConstraint* _leadingBottomConstraint;
	NSLayoutConstraint* _expandedLeadingLowerTopConstraint;
	NSLayoutConstraint* _expandedTrailingBottomConstraint;
	NSTimer* _systemUpdatesTimer;
	NSTimer* _batteryExpansionTimer;
	NSTimer* _airplaneModeIgnoreChangesTimer;

}

@property (nonatomic,retain) NSDictionary * orderedDisplayItemPlacements;                              //@synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * serviceNamePlacement;                  //@synthesize serviceNamePlacement=_serviceNamePlacement - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * dualServiceNamePlacement;              //@synthesize dualServiceNamePlacement=_dualServiceNamePlacement - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacementGroup * lowerWifiGroup;                   //@synthesize lowerWifiGroup=_lowerWifiGroup - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * batteryChargingPlacement;              //@synthesize batteryChargingPlacement=_batteryChargingPlacement - In the implementation block
@property (nonatomic,retain) UILayoutGuide * cutoutLayoutGuide;                                        //@synthesize cutoutLayoutGuide=_cutoutLayoutGuide - In the implementation block
@property (nonatomic,retain) UILayoutGuide * mainRegionsLayoutGuide;                                   //@synthesize mainRegionsLayoutGuide=_mainRegionsLayoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingBottomConstraint;                             //@synthesize leadingBottomConstraint=_leadingBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * expandedLeadingLowerTopConstraint;                   //@synthesize expandedLeadingLowerTopConstraint=_expandedLeadingLowerTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * expandedTrailingBottomConstraint;                    //@synthesize expandedTrailingBottomConstraint=_expandedTrailingBottomConstraint - In the implementation block
@property (nonatomic,retain) NSTimer * systemUpdatesTimer;                                             //@synthesize systemUpdatesTimer=_systemUpdatesTimer - In the implementation block
@property (nonatomic,retain) NSTimer * batteryExpansionTimer;                                          //@synthesize batteryExpansionTimer=_batteryExpansionTimer - In the implementation block
@property (nonatomic,retain) NSTimer * airplaneModeIgnoreChangesTimer;                                 //@synthesize airplaneModeIgnoreChangesTimer=_airplaneModeIgnoreChangesTimer - In the implementation block
@property (assign,nonatomic) BOOL delayedSystemUpdateData;                                             //@synthesize delayedSystemUpdateData=_delayedSystemUpdateData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar; 
@property (nonatomic,readonly) BOOL supportsIndirectPointerTouchActions; 
@property (nonatomic,readonly) BOOL canFixupDisplayItemAttributes; 
+(CGSize)smallPillSize;
+(CGSize)pillSize;
+(CGSize)intrinsicContentSizeForOrientation:(long long)arg1 ;
+(double)height;
+(id)smallFont;
+(id)pillSmallFont;
+(Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2 ;
+(id)pillFont;
+(double)cornerRadius;
+(double)nativeDisplayWidth;
+(Class)defaultFallbackVisualProviderSubclass;
+(double)referenceScale;
+(double)leadingPillInset;
+(double)leadingCenteringEdgeInset;
+(double)normalIconScale;
+(double)expandedIconScale;
+(long long)normalIconSize;
+(double)referenceWidth;
+(double)baselineBottomInset;
+(NSDirectionalEdgeInsets)_edgeInsetsFromCenteringEdgeInset:(double)arg1 trailing:(BOOL)arg2 ;
+(double)trailingCenteringEdgeInset;
+(NSDirectionalEdgeInsets)leadingEdgeInsets;
+(double)leadingItemSpacing;
+(double)leadingPillSpacing;
+(double)pillCenteringEdgeInset;
+(NSDirectionalEdgeInsets)trailingEdgeInsets;
+(id)systemUpdateFont;
+(double)bottomLeadingSpace;
+(double)bottomLeadingBaseline;
+(double)bottomLeadingWidth;
+(double)leadingSmallPillSpacing;
+(BOOL)supportsAnimatedCellularNetworkType;
+(long long)expandedIconSize;
+(double)condensedPointSizeForCellularType:(long long)arg1 defaultPointSize:(double)arg2 baselineOffset:(double*)arg3 ;
+(double)bottomLeadingTopOffset;
+(double)notchBottomCornerRadius;
+(double)notchTopCornerRadius;
+(id)normalFont;
+(NSDirectionalEdgeInsets)expandedEdgeInsets;
+(CGSize)notchSize;
+(id)expandedFont;
+(id)emphasizedFont;
+(double)lowerExpandedBaselineOffset;
-(void)setExpanded:(BOOL)arg1 ;
-(void)itemCreated:(id)arg1 ;
-(void)dataUpdated:(id)arg1 ;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg1 ;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3 ;
-(void)styleUpdatedFromStyle:(long long)arg1 ;
-(id)willUpdateWithData:(id)arg1 ;
-(void)statusBarRegionsUpdated;
-(id)region:(id)arg1 willSetDisplayItems:(id)arg2 ;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg1 ;
-(BOOL)canFixupDisplayItemAttributes;
-(void)orientationUpdatedFromOrientation:(long long)arg1 ;
-(double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2 ;
-(double)airplaneSpeedForAnimationType:(long long)arg1 ;
-(double)airplaneShouldFadeForAnimationType:(long long)arg1 ;
-(_UIStatusBarDisplayItemPlacementGroup *)lowerWifiGroup;
-(id)animationForBackgroundActivityPillWithDuration:(double)arg1 scale:(double)arg2 ;
-(void)_resetBattery;
-(void)setCutoutLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)cutoutLayoutGuide;
-(void)setMainRegionsLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setExpandedTrailingBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(UILayoutGuide *)mainRegionsLayoutGuide;
-(void)_collapseBattery;
-(void)_updateDataForBatteryCharging:(id)arg1 ;
-(void)_updateDataForSystemUpdates:(id)arg1 ;
-(void)_updateSystemNavigationWithData:(id)arg1 ;
-(BOOL)delayedSystemUpdateData;
-(void)setDelayedSystemUpdateData:(BOOL)arg1 ;
-(id)_systemUpdateDelayedDataIdentifiers;
-(void)_resumeSystemUpdateData;
-(id)_additionAnimationForBatteryCharging;
-(void)_updateLowerRegionsWithData:(id)arg1 ;
-(BOOL)_shouldShowSystemUpdateForDisplayItemWithIdentifier:(id)arg1 ;
-(id)_systemUpdateAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(NSTimer *)systemUpdatesTimer;
-(id)_removalAnimationForBatteryCharging;
-(void)updateDataForSystemNavigation:(id)arg1 ;
-(double)airplaneObstacleFadeOutDuration;
-(id)animationForAirplaneMode;
-(void)_stopBatteryCollapseTimer;
-(CGAffineTransform)_collapseChargingBoltTransformForDisplayItem:(id)arg1 ;
-(void)_disableSystemUpdates;
-(CGAffineTransform)_expandedChargingBoltTransformForDisplayItem:(id)arg1 ;
-(void)setSystemUpdatesTimer:(NSTimer *)arg1 ;
-(void)setBatteryExpansionTimer:(NSTimer *)arg1 ;
-(void)_delaySystemUpdateData;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1 ;
-(id)defaultAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)serviceNamePlacement;
-(void)setServiceNamePlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)dualServiceNamePlacement;
-(void)setDualServiceNamePlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)batteryChargingPlacement;
-(void)setBatteryChargingPlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(NSLayoutConstraint *)leadingBottomConstraint;
-(void)setLeadingBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)expandedLeadingLowerTopConstraint;
-(void)setExpandedLeadingLowerTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSTimer *)batteryExpansionTimer;
-(NSTimer *)airplaneModeIgnoreChangesTimer;
-(void)setAirplaneModeIgnoreChangesTimer:(NSTimer *)arg1 ;
-(void)setOrderedDisplayItemPlacements:(NSDictionary *)arg1 ;
-(id)setupInContainerView:(id)arg1 ;
-(NSLayoutConstraint *)expandedTrailingBottomConstraint;
-(id)stringForCellularType:(long long)arg1 condensed:(BOOL)arg2 ;
-(void)updateDataForService:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(void)_updateExpandedTrailingRegion;
-(NSDictionary *)orderedDisplayItemPlacements;
-(void)setLowerWifiGroup:(_UIStatusBarDisplayItemPlacementGroup *)arg1 ;
-(void)dealloc;
@end

