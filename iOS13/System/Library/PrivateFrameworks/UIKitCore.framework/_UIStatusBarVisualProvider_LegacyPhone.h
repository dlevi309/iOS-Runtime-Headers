/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(double)height;
+(double)baselineOffset;
+(NSDirectionalEdgeInsets)edgeInsets;
+(CGSize)pillSize;
+(CGSize)intrinsicLockScreenContentSizeForOrientation:(long long)arg1 ;
+(double)_heightExpanded:(BOOL)arg1 ;
+(double)expandedBaselineOffset;
+(double)regionSpacing;
+(id)normalFont;
+(id)expandedFont;
+(double)lowerExpandedBaselineOffset;
+(CGSize)smallPillSize;
+(id)timeFont;
+(double)dualLineExpandedBaselineOffset;
+(BOOL)wantsExpandedLeadingPlacements;
+(id)pillFont;
-(void)setExpanded:(BOOL)arg1 ;
-(id)stringForCellularType:(long long)arg1 condensed:(BOOL)arg2 ;
-(id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double*)arg3 ;
-(id)setupInContainerView:(id)arg1 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(void)orientationUpdatedFromOrientation:(long long)arg1 ;
-(void)dataUpdated:(id)arg1 ;
-(void)statusBarRegionsUpdated;
-(void)itemCreated:(id)arg1 ;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2 ;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3 ;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg1 ;
-(NSDictionary *)orderedDisplayItemPlacements;
-(void)setOrderedDisplayItemPlacements:(NSDictionary *)arg1 ;
-(void)updateDataForBackgroundActivity:(id)arg1 ;
-(id)_animationForSingleLineDualCarrier;
-(id)_backgroundActivityDetailRemovalAnimation;
-(void)_updateLowerRegionsWithData:(id)arg1 ;
-(void)_updateExpandedTrailingRegion;
-(void)_updateBackgroundHeight;
-(void)updateDataForService:(id)arg1 ;
-(double)effectiveHeight;
-(void)setOnLockScreen:(BOOL)arg1 ;
-(void)_updateLockScreenSizing;
-(_UIStatusBarDisplayItemPlacementGroup *)lowerWifiGroup;
-(void)setLowerWifiGroup:(_UIStatusBarDisplayItemPlacementGroup *)arg1 ;
-(NSLayoutConstraint *)backgroundHeightConstraint;
-(void)setBackgroundHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(_UIStatusBarCellularItem *)condensedCellularItem;
-(void)setCondensedCellularItem:(_UIStatusBarCellularItem *)arg1 ;
-(NSLayoutConstraint *)leadingTopConstraint;
-(void)setLeadingTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leadingHeightConstraint;
-(void)setLeadingHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(_UIStatusBarRegionAxisStackingLayout *)leadingHorizontalLayout;
-(void)setLeadingHorizontalLayout:(_UIStatusBarRegionAxisStackingLayout *)arg1 ;
-(NSLayoutConstraint *)centerTopConstraint;
-(void)setCenterTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)centerHeightConstraint;
-(void)setCenterHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(_UIStatusBarRegionAxisCenteringLayout *)centerHorizontalLayout;
-(void)setCenterHorizontalLayout:(_UIStatusBarRegionAxisCenteringLayout *)arg1 ;
-(NSLayoutConstraint *)trailingTopConstraint;
-(void)setTrailingTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)trailingHeightConstraint;
-(void)setTrailingHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(_UIStatusBarRegionAxisStackingLayout *)trailingHorizontalLayout;
-(void)setTrailingHorizontalLayout:(_UIStatusBarRegionAxisStackingLayout *)arg1 ;
-(NSLayoutConstraint *)expandedLeadingBottomConstraint;
-(void)setExpandedLeadingBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)expandedTrailingBottomConstraint;
-(void)setExpandedTrailingBottomConstraint:(NSLayoutConstraint *)arg1 ;
@end

