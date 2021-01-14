/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVisualProvider_Phone.h>
#import <UIKitCore/_UIStatusBarCellularItemTypeStringProvider.h>

@class NSDictionary, _UIStatusBarDisplayItemPlacementGroup, NSLayoutConstraint, _UIStatusBarCellularItem, _UIStatusBarRegionAxisStackingLayout, _UIStatusBarRegionAxisCenteringLayout, NSString;

@interface _UIStatusBarVisualProvider_LegacyPhone : _UIStatusBarVisualProvider_Phone <_UIStatusBarCellularItemTypeStringProvider> {

	NSDictionary* _orderedDisplayItemPlacements;
	_UIStatusBarDisplayItemPlacementGroup* _lowerWifiGroup;
	NSLayoutConstraint* _backgroundHeightConstraint;
	_UIStatusBarCellularItem* _condensedCellularItem;
	NSLayoutConstraint* _leadingTopConstraint;
	NSLayoutConstraint* _leadingHeightConstraint;
	_UIStatusBarRegionAxisStackingLayout* _leadingHorizontalLayout;
	NSLayoutConstraint* _centerTopConstraint;
	NSLayoutConstraint* _centerHeightConstraint;
	_UIStatusBarRegionAxisCenteringLayout* _centerHorizontalLayout;
	NSLayoutConstraint* _trailingTopConstraint;
	NSLayoutConstraint* _trailingHeightConstraint;
	_UIStatusBarRegionAxisStackingLayout* _trailingHorizontalLayout;
	NSLayoutConstraint* _expandedLeadingBottomConstraint;
	NSLayoutConstraint* _expandedTrailingBottomConstraint;

}

@property (nonatomic,retain) NSDictionary * orderedDisplayItemPlacements;                                  //@synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacementGroup * lowerWifiGroup;                       //@synthesize lowerWifiGroup=_lowerWifiGroup - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * backgroundHeightConstraint;                              //@synthesize backgroundHeightConstraint=_backgroundHeightConstraint - In the implementation block
@property (nonatomic,retain) _UIStatusBarCellularItem * condensedCellularItem;                             //@synthesize condensedCellularItem=_condensedCellularItem - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingTopConstraint;                                    //@synthesize leadingTopConstraint=_leadingTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingHeightConstraint;                                 //@synthesize leadingHeightConstraint=_leadingHeightConstraint - In the implementation block
@property (nonatomic,retain) _UIStatusBarRegionAxisStackingLayout * leadingHorizontalLayout;               //@synthesize leadingHorizontalLayout=_leadingHorizontalLayout - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * centerTopConstraint;                                     //@synthesize centerTopConstraint=_centerTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * centerHeightConstraint;                                  //@synthesize centerHeightConstraint=_centerHeightConstraint - In the implementation block
@property (nonatomic,retain) _UIStatusBarRegionAxisCenteringLayout * centerHorizontalLayout;               //@synthesize centerHorizontalLayout=_centerHorizontalLayout - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingTopConstraint;                                   //@synthesize trailingTopConstraint=_trailingTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingHeightConstraint;                                //@synthesize trailingHeightConstraint=_trailingHeightConstraint - In the implementation block
@property (nonatomic,retain) _UIStatusBarRegionAxisStackingLayout * trailingHorizontalLayout;              //@synthesize trailingHorizontalLayout=_trailingHorizontalLayout - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * expandedLeadingBottomConstraint;                         //@synthesize expandedLeadingBottomConstraint=_expandedLeadingBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * expandedTrailingBottomConstraint;                        //@synthesize expandedTrailingBottomConstraint=_expandedTrailingBottomConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(NSDirectionalEdgeInsets)edgeInsets;
+(CGSize)smallPillSize;
+(CGSize)pillSize;
+(double)height;
+(id)pillFont;
+(id)normalFont;
+(double)baselineOffset;
+(CGSize)intrinsicLockScreenContentSizeForOrientation:(long long)arg1 ;
+(BOOL)wantsExpandedLeadingPlacements;
+(id)timeFont;
+(double)dualLineExpandedBaselineOffset;
+(double)regionSpacing;
+(id)expandedFont;
+(double)expandedBaselineOffset;
+(double)lowerExpandedBaselineOffset;
+(double)_heightExpanded:(BOOL)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(void)itemCreated:(id)arg1 ;
-(_UIStatusBarRegionAxisCenteringLayout *)centerHorizontalLayout;
-(_UIStatusBarCellularItem *)condensedCellularItem;
-(void)dataUpdated:(id)arg1 ;
-(void)setTrailingTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLeadingHorizontalLayout:(_UIStatusBarRegionAxisStackingLayout *)arg1 ;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg1 ;
-(_UIStatusBarRegionAxisStackingLayout *)leadingHorizontalLayout;
-(id)_animationForSingleLineDualCarrier;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(void)setTrailingHorizontalLayout:(_UIStatusBarRegionAxisStackingLayout *)arg1 ;
-(NSLayoutConstraint *)centerTopConstraint;
-(void)setCenterHorizontalLayout:(_UIStatusBarRegionAxisCenteringLayout *)arg1 ;
-(id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3 ;
-(void)statusBarRegionsUpdated;
-(void)setLeadingHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)orientationUpdatedFromOrientation:(long long)arg1 ;
-(_UIStatusBarRegionAxisStackingLayout *)trailingHorizontalLayout;
-(_UIStatusBarDisplayItemPlacementGroup *)lowerWifiGroup;
-(void)setExpandedTrailingBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateLowerRegionsWithData:(id)arg1 ;
-(void)setOnLockScreen:(BOOL)arg1 ;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1 ;
-(void)setTrailingHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)centerHeightConstraint;
-(NSLayoutConstraint *)backgroundHeightConstraint;
-(NSLayoutConstraint *)leadingTopConstraint;
-(void)setOrderedDisplayItemPlacements:(NSDictionary *)arg1 ;
-(void)_updateBackgroundHeight;
-(void)setCenterHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCenterTopConstraint:(NSLayoutConstraint *)arg1 ;
-(id)setupInContainerView:(id)arg1 ;
-(NSLayoutConstraint *)expandedTrailingBottomConstraint;
-(id)stringForCellularType:(long long)arg1 condensed:(BOOL)arg2 ;
-(void)setExpandedLeadingBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)trailingHeightConstraint;
-(NSLayoutConstraint *)expandedLeadingBottomConstraint;
-(void)updateDataForService:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(void)setCondensedCellularItem:(_UIStatusBarCellularItem *)arg1 ;
-(NSLayoutConstraint *)leadingHeightConstraint;
-(NSLayoutConstraint *)trailingTopConstraint;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(void)setBackgroundHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3 ;
-(void)_updateLockScreenSizing;
-(id)_backgroundActivityDetailRemovalAnimation;
-(void)_updateExpandedTrailingRegion;
-(void)setLeadingTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSDictionary *)orderedDisplayItemPlacements;
-(void)setLowerWifiGroup:(_UIStatusBarDisplayItemPlacementGroup *)arg1 ;
-(double)effectiveHeight;
-(void)updateDataForBackgroundActivity:(id)arg1 ;
@end

