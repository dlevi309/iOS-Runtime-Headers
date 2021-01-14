/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVisualProvider_iOS.h>
#import <UIKitCore/_UIStatusBarRegionCursorInsetProvider.h>

@class NSDictionary, NSLayoutConstraint, _UIStatusBarDisplayItemPlacement, _UIStatusBar, NSString;

@interface _UIStatusBarVisualProvider_Pad : _UIStatusBarVisualProvider_iOS <_UIStatusBarRegionCursorInsetProvider> {

	NSDictionary* _orderedDisplayItemPlacements;
	NSLayoutConstraint* _trailingRegionLeadingAnchorConstraint;
	NSLayoutConstraint* _leadingRegionTrailingAnchorConstraint;
	_UIStatusBarDisplayItemPlacement* _datePlacement;
	_UIStatusBarDisplayItemPlacement* _timePlacement;

}

@property (nonatomic,retain) NSDictionary * orderedDisplayItemPlacements;                             //@synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingRegionLeadingAnchorConstraint;              //@synthesize trailingRegionLeadingAnchorConstraint=_trailingRegionLeadingAnchorConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingRegionTrailingAnchorConstraint;              //@synthesize leadingRegionTrailingAnchorConstraint=_leadingRegionTrailingAnchorConstraint - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * datePlacement;                        //@synthesize datePlacement=_datePlacement - In the implementation block
@property (nonatomic,retain) _UIStatusBarDisplayItemPlacement * timePlacement;                        //@synthesize timePlacement=_timePlacement - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar; 
@property (nonatomic,readonly) BOOL supportsIndirectPointerTouchActions; 
@property (nonatomic,readonly) BOOL canFixupDisplayItemAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(NSDirectionalEdgeInsets)edgeInsets;
+(CGSize)smallPillSize;
+(CGSize)pillSize;
+(double)height;
+(id)pillSmallFont;
+(Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2 ;
+(BOOL)regionCursorIsPill;
+(UIEdgeInsets)regionCursorInsets;
+(id)pillFont;
+(double)regionCursorCornerRadius;
+(id)normalFont;
+(double)baselineOffset;
+(NSDirectionalEdgeInsets)expandedEdgeInsets;
+(double)regionSpacing;
+(id)expandedFont;
-(void)itemCreated:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg1 ;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(void)sizeUpdatedFromSize:(CGSize)arg1 ;
-(void)avoidanceFrameUpdatedFromFrame:(CGRect)arg1 ;
-(void)statusBarEnabledPartsUpdated;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)datePlacement;
-(BOOL)_updateDateAndTimePlacements;
-(void)_updateConstraintsForAvoidanceFrame:(CGRect)arg1 ;
-(double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2 ;
-(double)airplaneSpeedForAnimationType:(long long)arg1 ;
-(double)airplaneShouldFadeForAnimationType:(long long)arg1 ;
-(NSLayoutConstraint *)trailingRegionLeadingAnchorConstraint;
-(void)setTrailingRegionLeadingAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDatePlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(NSLayoutConstraint *)leadingRegionTrailingAnchorConstraint;
-(void)setTimePlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(void)setLeadingRegionTrailingAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)timePlacement;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1 ;
-(void)setOrderedDisplayItemPlacements:(NSDictionary *)arg1 ;
-(id)setupInContainerView:(id)arg1 ;
-(void)_dateTimePreferencesUpdated;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3 ;
-(NSDictionary *)orderedDisplayItemPlacements;
-(void)dealloc;
@end

