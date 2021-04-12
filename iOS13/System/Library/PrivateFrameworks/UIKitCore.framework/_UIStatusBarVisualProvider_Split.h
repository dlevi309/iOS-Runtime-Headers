/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVisualProvider_Phone.h>
#import <UIKitCore/_UIStatusBarCellularItemTypeStringProvider.h>

@class NSDictionary, _UIStatusBarDisplayItemPlacement, _UIStatusBarDisplayItemPlacementGroup, UILayoutGuide, NSLayoutConstraint, NSTimer, NSString;

@interface _UIStatusBarVisualProvider_Split : _UIStatusBarVisualProvider_Phone <_UIStatusBarCellularItemTypeStringProvider> {

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
+(double)height;
+(double)cornerRadius;
+(CGSize)pillSize;
+(id)smallFont;
+(CGSize)intrinsicContentSizeForOrientation:(long long)arg1 ;
+(Class)visualProviderSubclassForScreen:(id)arg1 ;
+(id)normalFont;
+(id)expandedFont;
+(double)lowerExpandedBaselineOffset;
+(CGSize)smallPillSize;
+(id)pillFont;
+(NSDirectionalEdgeInsets)expandedEdgeInsets;
+(id)pillSmallFont;
+(double)referenceWidth;
+(double)referenceScale;
+(double)leadingPillInset;
+(double)leadingCenteringEdgeInset;
+(double)baseIconScale;
+(CGSize)notchSize;
+(double)baselineBottomInset;
+(NSDirectionalEdgeInsets)_edgeInsetsFromCenteringEdgeInset:(double)arg1 trailing:(BOOL)arg2 ;
+(double)trailingCenteringEdgeInset;
+(NSDirectionalEdgeInsets)leadingEdgeInsets;
+(double)leadingItemSpacing;
+(double)leadingPillSpacing;
+(double)pillCenteringEdgeInset;
+(NSDirectionalEdgeInsets)trailingEdgeInsets;
+(id)emphasizedFont;
+(double)bottomLeadingWidth;
+(double)leadingSmallPillSpacing;
+(double)condensedPointSizeForCellularType:(long long)arg1 defaultPointSize:(double)arg2 baselineOffset:(double*)arg3 ;
+(double)bottomLeadingTopOffset;
+(double)notchBottomCornerRadius;
+(double)notchTopCornerRadius;
-(void)dealloc;
-(void)setExpanded:(BOOL)arg1 ;
-(id)stringForCellularType:(long long)arg1 condensed:(BOOL)arg2 ;
-(id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3 ;
-(id)setupInContainerView:(id)arg1 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(void)orientationUpdatedFromOrientation:(long long)arg1 ;
-(void)styleUpdatedFromStyle:(long long)arg1 ;
-(id)willUpdateWithData:(id)arg1 ;
-(id)region:(id)arg1 willSetDisplayItems:(id)arg2 ;
-(void)dataUpdated:(id)arg1 ;
-(void)statusBarRegionsUpdated;
-(void)itemCreated:(id)arg1 ;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg1 ;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg1 ;
-(BOOL)canFixupDisplayItemAttributes;
-(NSDictionary *)orderedDisplayItemPlacements;
-(void)setOrderedDisplayItemPlacements:(NSDictionary *)arg1 ;
-(void)_updateLowerRegionsWithData:(id)arg1 ;
-(void)_updateExpandedTrailingRegion;
-(void)updateDataForService:(id)arg1 ;
-(_UIStatusBarDisplayItemPlacementGroup *)lowerWifiGroup;
-(void)setLowerWifiGroup:(_UIStatusBarDisplayItemPlacementGroup *)arg1 ;
-(NSLayoutConstraint *)expandedTrailingBottomConstraint;
-(void)setExpandedTrailingBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2 ;
-(double)airplaneSpeedForAnimationType:(long long)arg1 ;
-(double)airplaneShouldFadeForAnimationType:(long long)arg1 ;
-(id)animationForBackgroundActivityPillWithDuration:(double)arg1 scale:(double)arg2 ;
-(void)setCutoutLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)cutoutLayoutGuide;
-(void)setMainRegionsLayoutGuide:(UILayoutGuide *)arg1 ;
-(UILayoutGuide *)mainRegionsLayoutGuide;
-(void)_updateDataForBatteryCharging:(id)arg1 ;
-(void)_updateDataForSystemUpdates:(id)arg1 ;
-(void)_updateSystemNavigationWithData:(id)arg1 ;
-(BOOL)delayedSystemUpdateData;
-(void)setDelayedSystemUpdateData:(BOOL)arg1 ;
-(id)_systemUpdateDelayedDataIdentifiers;
-(void)_resumeSystemUpdateData;
-(id)_additionAnimationForBatteryCharging;
-(BOOL)_shouldShowSystemUpdateForDisplayItemWithIdentifier:(id)arg1 ;
-(id)_systemUpdateAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(id)_removalAnimationForBatteryCharging;
-(void)updateDataForSystemNavigation:(id)arg1 ;
-(double)airplaneObstacleFadeOutDuration;
-(id)animationForAirplaneMode;
-(void)_collapseBattery;
-(void)_stopBatteryCollapseTimer;
-(CGAffineTransform)_collapseChargingBoltTransformForDisplayItem:(id)arg1 ;
-(CGAffineTransform)_expandedChargingBoltTransformForDisplayItem:(id)arg1 ;
-(void)setBatteryExpansionTimer:(NSTimer *)arg1 ;
-(void)_resetBattery;
-(void)_disableSystemUpdates;
-(NSTimer *)systemUpdatesTimer;
-(void)setSystemUpdatesTimer:(NSTimer *)arg1 ;
-(void)_delaySystemUpdateData;
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
@end

