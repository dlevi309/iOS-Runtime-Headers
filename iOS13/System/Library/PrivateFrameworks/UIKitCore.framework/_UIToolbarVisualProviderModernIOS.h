/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIToolbarVisualProvider.h>
#import <UIKitCore/_UIBarButtonItemViewOwner.h>
#import <UIKitCore/_UIBarAppearanceChangeObserver.h>

@class _UIBarBackground, _UIBarBackgroundLayout, UIView, _UIToolbarContentView, NSString;

@interface _UIToolbarVisualProviderModernIOS : _UIToolbarVisualProvider <_UIBarButtonItemViewOwner, _UIBarAppearanceChangeObserver> {

	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayout* _backgroundViewLayout;
	UIView* _customBackgroundView;
	_UIToolbarContentView* _contentView;
	long long _itemDistribution;
	BOOL _useModernAppearance;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)_updateContentView;
-(void)appearance:(id)arg1 categoriesChanged:(long long)arg2 ;
-(void)setCustomBackgroundView:(id)arg1 ;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg1 ;
-(void)setItemDistribution:(long long)arg1 ;
-(long long)itemDistribution;
-(void)_itemDidChangeSecondaryActions:(id)arg1 ;
-(void)_itemDidChangeSecondaryActionState:(id)arg1 ;
-(id)appearanceObserver;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)updateBackgroundGroupName;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(BOOL)useModernAppearance;
-(void)_updateBackgroundModern;
-(CGRect)backgroundFrame;
-(id)currentBackgroundView;
-(void)updateBarForStyle:(long long)arg1 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(BOOL)toolbarIsSmall;
-(void)updateBarBackgroundSize;
-(void)updateBarBackground;
-(void)updateAppearance;
-(id)_currentCustomBackground;
-(void)_setViewOwnersAndUpdateContentViewForItems:(id)arg1 withOldItems:(id)arg2 animated:(BOOL)arg3 ;
-(CGRect)_backgroundFrame;
-(void)_updateBackgroundLegacyForPosition:(long long)arg1 ;
@end

