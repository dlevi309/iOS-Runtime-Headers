/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVisualProvider.h>

@class _UIStatusBar, _UIStatusBarDisplayItemPlacementNetworkGroup, NSArray, _UIStatusBarDisplayItemPlacementGroup, _UIStatusBarAnimation, NSString;

@interface _UIStatusBarVisualProvider_iOS : NSObject <_UIStatusBarVisualProvider> {

	BOOL _expanded;
	BOOL _onLockScreen;
	_UIStatusBar* _statusBar;
	_UIStatusBarDisplayItemPlacementNetworkGroup* _expandedNetworkGroup;
	NSArray* _expandedCellularPlacementsAffectedByAirplaneMode;
	NSArray* _expandedLeadingPlacements;
	NSArray* _expandedTrailingPlacements;
	_UIStatusBarDisplayItemPlacementGroup* _secondaryWifiGroup;

}

@property (nonatomic,retain) _UIStatusBarDisplayItemPlacementGroup * secondaryWifiGroup;                         //@synthesize secondaryWifiGroup=_secondaryWifiGroup - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                                      //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL onLockScreen;                                                                  //@synthesize onLockScreen=_onLockScreen - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacementNetworkGroup * expandedNetworkGroup;              //@synthesize expandedNetworkGroup=_expandedNetworkGroup - In the implementation block
@property (nonatomic,readonly) NSArray * expandedCellularPlacementsAffectedByAirplaneMode;                       //@synthesize expandedCellularPlacementsAffectedByAirplaneMode=_expandedCellularPlacementsAffectedByAirplaneMode - In the implementation block
@property (nonatomic,readonly) NSArray * expandedLeadingPlacements;                                              //@synthesize expandedLeadingPlacements=_expandedLeadingPlacements - In the implementation block
@property (nonatomic,readonly) NSArray * expandedTrailingPlacements;                                             //@synthesize expandedTrailingPlacements=_expandedTrailingPlacements - In the implementation block
@property (nonatomic,readonly) _UIStatusBarAnimation * animationForAirplaneMode; 
@property (nonatomic,readonly) double airplaneObstacleFadeOutDuration; 
@property (nonatomic,readonly) double airplaneObstacleFadeInDuration; 
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar;                                                    //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) BOOL supportsIndirectPointerTouchActions; 
@property (nonatomic,readonly) BOOL canFixupDisplayItemAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)itemSpacing;
+(CGSize)intrinsicContentSizeForOrientation:(long long)arg1 ;
+(double)height;
+(Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2 ;
+(double)expandedItemSpacing;
+(double)bluetoothPaddingInset;
+(double)cornerRadius;
+(BOOL)hasCellularCapability;
+(BOOL)wantsExpandedLeadingPlacements;
+(double)regionSpacing;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(_UIStatusBar *)statusBar;
-(id)init;
-(BOOL)expanded;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(BOOL)supportsIndirectPointerTouchActions;
-(void)modeUpdatedFromMode:(long long)arg1 ;
-(id)willUpdateWithData:(id)arg1 ;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg1 ;
-(NSArray *)expandedLeadingPlacements;
-(NSArray *)expandedCellularPlacementsAffectedByAirplaneMode;
-(NSArray *)expandedTrailingPlacements;
-(double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2 ;
-(double)airplaneSpeedForAnimationType:(long long)arg1 ;
-(double)airplaneShouldFadeForAnimationType:(long long)arg1 ;
-(void)updateDataForSystemNavigation:(id)arg1 ;
-(double)airplaneObstacleFadeOutDuration;
-(_UIStatusBarAnimation *)animationForAirplaneMode;
-(void)setOnLockScreen:(BOOL)arg1 ;
-(id)defaultAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(_UIStatusBarDisplayItemPlacementNetworkGroup *)expandedNetworkGroup;
-(void)_createExpandedPlacements;
-(void)_applyToAppearingRegions:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(double)airplaneObstacleFadeInDuration;
-(_UIStatusBarDisplayItemPlacementGroup *)secondaryWifiGroup;
-(void)setSecondaryWifiGroup:(_UIStatusBarDisplayItemPlacementGroup *)arg1 ;
-(id)setupInContainerView:(id)arg1 ;
-(void)updateDataForService:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3 ;
-(BOOL)onLockScreen;
@end

