/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarCellularItem.h>

@class _UIStatusBarDualCellularSignalView, _UIStatusBarMultilineStringView, _UIStatusBarStringView;

@interface _UIStatusBarCellularCondensedItem : _UIStatusBarCellularItem {

	BOOL _reducesFontSize;
	_UIStatusBarDualCellularSignalView* _dualSignalView;
	_UIStatusBarMultilineStringView* _dualNameView;
	_UIStatusBarStringView* _dualSingleLineNameView;
	_UIStatusBarStringView* _dualSingleLineNameAndTypeView;

}

@property (nonatomic,retain) _UIStatusBarDualCellularSignalView * dualSignalView;                 //@synthesize dualSignalView=_dualSignalView - In the implementation block
@property (nonatomic,retain) _UIStatusBarMultilineStringView * dualNameView;                      //@synthesize dualNameView=_dualNameView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * dualSingleLineNameView;                     //@synthesize dualSingleLineNameView=_dualSingleLineNameView - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * dualSingleLineNameAndTypeView;              //@synthesize dualSingleLineNameAndTypeView=_dualSingleLineNameAndTypeView - In the implementation block
@property (assign,nonatomic) BOOL reducesFontSize;                                                //@synthesize reducesFontSize=_reducesFontSize - In the implementation block
+(id)dualSignalStrengthDisplayIdentifier;
+(id)dualNameDisplayIdentifier;
+(id)dualSingleLineNameDisplayIdentifier;
+(id)dualSingleLineNameAndTypeDisplayIdentifier;
+(id)groupWithHighPriority:(long long)arg1 lowPriority:(long long)arg2 typeClass:(Class)arg3 allowDualNetwork:(BOOL)arg4 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(id)dependentEntryKeys;
-(id)initWithIdentifier:(id)arg1 statusBar:(id)arg2 ;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(id)entryForDisplayItemWithIdentifier:(id)arg1 ;
-(id)_stringForCellularType:(long long)arg1 ;
-(BOOL)_showCallFowardingForEntry:(id)arg1 ;
-(void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2 ;
-(void)setReducesFontSize:(BOOL)arg1 ;
-(_UIStatusBarDualCellularSignalView *)dualSignalView;
-(id)_singleCellularEntryMatching:(/*^block*/id)arg1 ;
-(_UIStatusBarMultilineStringView *)dualNameView;
-(_UIStatusBarStringView *)dualSingleLineNameView;
-(_UIStatusBarStringView *)dualSingleLineNameAndTypeView;
-(id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double*)arg3 ;
-(void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2 ;
-(void)_create_dualSignalView;
-(void)_create_dualNameView;
-(void)_create_dualSingleLineNameView;
-(void)_create_dualSingleLineNameAndTypeView;
-(BOOL)reducesFontSize;
-(void)setDualSignalView:(_UIStatusBarDualCellularSignalView *)arg1 ;
-(void)setDualNameView:(_UIStatusBarMultilineStringView *)arg1 ;
-(void)setDualSingleLineNameView:(_UIStatusBarStringView *)arg1 ;
-(void)setDualSingleLineNameAndTypeView:(_UIStatusBarStringView *)arg1 ;
@end

