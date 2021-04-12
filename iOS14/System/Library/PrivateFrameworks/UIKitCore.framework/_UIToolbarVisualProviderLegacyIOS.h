/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIToolbarVisualProvider.h>

@class _UIBarBackground, _UIBarBackgroundLayoutLegacy, UIView;

@interface _UIToolbarVisualProviderLegacyIOS : _UIToolbarVisualProvider {

	_UIBarBackground* _backgroundView;
	_UIBarBackgroundLayoutLegacy* _backgroundViewLayout;
	UIView* _customBackgroundView;

}
-(void)updateBarBackgroundSize;
-(void)updateBarBackground;
-(CGRect)backgroundFrame;
-(void)updateItemsForNewFrame:(id)arg1 ;
-(void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg1 ;
-(void)customViewChangedForButtonItem:(id)arg1 ;
-(id)currentBackgroundView;
-(void)drawBackgroundViewInRect:(CGRect)arg1 ;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(BOOL)toolbarIsSmall;
-(void)updateBarForStyle:(long long)arg1 ;
-(void)setCustomBackgroundView:(id)arg1 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id*)arg2 withHitRects:(id*)arg3 buttonIndexes:(id*)arg4 textButtonIndexes:(id*)arg5 ;
-(void)layoutSubviews;
-(double)_edgeMarginForBorderedItem:(BOOL)arg1 isText:(BOOL)arg2 ;
-(id)_currentCustomBackground;
-(void)_createViewsForItems:(id)arg1 ;
-(id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3 actuallyRepositionButtons:(BOOL)arg4 ;
-(void)updateBackgroundGroupName;
@end

