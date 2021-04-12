/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarCellularItem.h>

@class _UIStatusBarDualCellularSignalView, _UIStatusBarMultilineStringView, _UIStatusBarStringView, _UIStatusBarCellularNetworkTypeView;

@interface _UIStatusBarCellularCondensedItem : _UIStatusBarCellularItem {

	BOOL _reducesFontSize;
	_UIStatusBarDualCellularSignalView* _dualSignalView;
	_UIStatusBarMultilineStringView* _dualNameView;
	_UIStatusBarStringView* _dualSingleLineNameView;
	_UIStatusBarStringView* _dualSingleLineNameAndTypeView;
	_UIStatusBarCellularNetworkTypeView* _animatedNetworkTypeView;

}

@property (nonatomic,retain) _UIStatusBarDualCellularSignalView * dualSignalView;                        //@synthesize dualSignalView=_dualSignalView - In the implementation block
@property (nonatomic,retain) _UIStatusBarMultilineStringView * dualNameView;                             //@synthesize dualNameView=_dualNameView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * dualSingleLineNameView;                            //@synthesize dualSingleLineNameView=_dualSingleLineNameView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * dualSingleLineNameAndTypeView;                     //@synthesize dualSingleLineNameAndTypeView=_dualSingleLineNameAndTypeView - In the implementation block
@property (nonatomic,retain) _UIStatusBarCellularNetworkTypeView * animatedNetworkTypeView;              //@synthesize animatedNetworkTypeView=_animatedNetworkTypeView - In the implementation block
@property (assign,nonatomic) BOOL reducesFontSize;                                                       //@synthesize reducesFontSize=_reducesFontSize - In the implementation block
+(id)dualSingleLineNameAndTypeDisplayIdentifier;
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(BOOL)arg4 ;
+(id)dualSignalStrengthDisplayIdentifier;
+(id)animatedTypeDisplayIdentifier;
+(id)dualSingleLineNameDisplayIdentifier;
+(id)dualNameDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)dependentEntryKeys;
-(void)_create_animatedNetworkTypeView;
-(BOOL)reducesFontSize;
-(void)_create_dualSignalView;
-(_UIStatusBarStringView *)dualSingleLineNameAndTypeView;
-(void)setReducesFontSize:(BOOL)arg1 ;
-(void)setDualNameView:(_UIStatusBarMultilineStringView *)arg1 ;
-(void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2 ;
-(_UIStatusBarDualCellularSignalView *)dualSignalView;
-(BOOL)_animateServiceType:(long long)arg1 prefixLength:(long long*)arg2 currentType:(long long)arg3 ;
-(id)viewForIdentifier:(id)arg1 ;
-(void)setAnimatedNetworkTypeView:(_UIStatusBarCellularNetworkTypeView *)arg1 ;
-(void)setDualSignalView:(_UIStatusBarDualCellularSignalView *)arg1 ;
-(_UIStatusBarMultilineStringView *)dualNameView;
-(BOOL)_showCallFowardingForEntry:(id)arg1 ;
-(void)setDualSingleLineNameView:(_UIStatusBarStringView *)arg1 ;
-(_UIStatusBarCellularNetworkTypeView *)animatedNetworkTypeView;
-(void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2 ;
-(void)_create_dualSingleLineNameAndTypeView;
-(id)initWithIdentifier:(id)arg1 statusBar:(id)arg2 ;
-(id)entryForDisplayItemWithIdentifier:(id)arg1 ;
-(void)_create_dualSingleLineNameView;
-(id)_stringForCellularType:(long long)arg1 ;
-(void)_create_dualNameView;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(id)_singleCellularEntryMatching:(/*^block*/id)arg1 ;
-(id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double*)arg3 ;
-(void)setDualSingleLineNameAndTypeView:(_UIStatusBarStringView *)arg1 ;
-(_UIStatusBarStringView *)dualSingleLineNameView;
-(NSRange)_nonCondensedFontRangeForEntry:(id)arg1 ;
@end

