/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarVisualProvider_iOS.h>
#import <UIKitCore/_UIStatusBarRegionCursorInsetProvider.h>

@class NSDictionary, NSLayoutConstraint, _UIStatusBarDisplayItemPlacement, NSString, _UIStatusBar;

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar; 
@property (nonatomic,readonly) BOOL supportsIndirectPointerTouchActions; 
@property (nonatomic,readonly) BOOL canFixupDisplayItemAttributes; 
+(double)height;
+(double)baselineOffset;
+(NSDirectionalEdgeInsets)edgeInsets;
+(CGSize)pillSize;
+(Class)visualProviderSubclassForScreen:(id)arg1 ;
+(double)regionSpacing;
+(id)normalFont;
+(id)expandedFont;
+(CGSize)smallPillSize;
+(id)pillFont;
+(NSDirectionalEdgeInsets)expandedEdgeInsets;
+(id)pillSmallFont;
+(UIEdgeInsets)regionCursorInsets;
+(BOOL)regionCursorIsPill;
+(double)regionCursorCornerRadius;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)setupInContainerView:(id)arg1 ;
-(id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1 ;
-(id)styleAttributesForStyle:(long long)arg1 ;
-(void)avoidanceFrameUpdatedFromFrame:(CGRect)arg1 ;
-(void)sizeUpdatedFromSize:(CGSize)arg1 ;
-(void)itemCreated:(id)arg1 ;
-(id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1 ;
-(void)actionable:(id)arg1 highlighted:(BOOL)arg2 initialPress:(BOOL)arg3 ;
-(id)regionIdentifiersForPartWithIdentifier:(id)arg1 ;
-(id)displayItemIdentifiersForPartWithIdentifier:(id)arg1 ;
-(NSDictionary *)orderedDisplayItemPlacements;
-(void)setOrderedDisplayItemPlacements:(NSDictionary *)arg1 ;
-(BOOL)_updateDateAndTimePlacements;
-(void)_updateConstraintsForAvoidanceFrame:(CGRect)arg1 ;
-(void)_dateTimePreferencesUpdated;
-(double)airplaneTravelOffsetInProposedPartWithIdentifier:(id*)arg1 animationType:(long long)arg2 ;
-(double)airplaneSpeedForAnimationType:(long long)arg1 ;
-(double)airplaneShouldFadeForAnimationType:(long long)arg1 ;
-(NSLayoutConstraint *)trailingRegionLeadingAnchorConstraint;
-(void)setTrailingRegionLeadingAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leadingRegionTrailingAnchorConstraint;
-(void)setLeadingRegionTrailingAnchorConstraint:(NSLayoutConstraint *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)datePlacement;
-(void)setDatePlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
-(_UIStatusBarDisplayItemPlacement *)timePlacement;
-(void)setTimePlacement:(_UIStatusBarDisplayItemPlacement *)arg1 ;
@end

