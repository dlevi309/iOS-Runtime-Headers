/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateBarBackgroundSize;
-(BOOL)useModernAppearance;
-(void)updateBarBackground;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(void)updateAppearance;
-(CGRect)backgroundFrame;
-(void)appearance:(id)arg1 categoriesChanged:(long long)arg2 ;
-(long long)itemDistribution;
-(id)currentBackgroundView;
-(void)setItemDistribution:(long long)arg1 ;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
-(void)setUseModernAppearance:(BOOL)arg1 ;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(BOOL)toolbarIsSmall;
-(void)_itemDidChangeEnabledState:(id)arg1 ;
-(void)updateBarForStyle:(long long)arg1 ;
-(void)setCustomBackgroundView:(id)arg1 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(void)_updateBackgroundModern;
-(id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2 ;
-(void)_setViewOwnersAndUpdateContentViewForItems:(id)arg1 withOldItems:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateBackgroundLegacyForPosition:(long long)arg1 ;
-(void)layoutSubviews;
-(id)_currentCustomBackground;
-(void)updateArchivedSubviews:(id)arg1 ;
-(void)_updateContentView;
-(void)prepare;
-(void)updateBackgroundGroupName;
-(id)appearanceObserver;
-(CGRect)_backgroundFrame;
@end

