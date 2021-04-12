/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)layoutSubviews;
-(void)setCustomBackgroundView:(id)arg1 ;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(void)updateBackgroundGroupName;
-(CGRect)backgroundFrame;
-(id)currentBackgroundView;
-(void)updateBarForStyle:(long long)arg1 ;
-(void)updateItemsForNewFrame:(id)arg1 ;
-(void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(BOOL)arg3 ;
-(void)customViewChangedForButtonItem:(id)arg1 ;
-(void)positionToolbarButtonsAndResetFontScaleAdjustment:(BOOL)arg1 ;
-(BOOL)toolbarIsSmall;
-(void)updateBarBackgroundSize;
-(void)updateBarBackground;
-(void)drawBackgroundViewInRect:(CGRect)arg1 ;
-(double)_edgeMarginForBorderedItem:(BOOL)arg1 isText:(BOOL)arg2 ;
-(id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(BOOL)arg3 actuallyRepositionButtons:(BOOL)arg4 ;
-(id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id*)arg2 withHitRects:(id*)arg3 buttonIndexes:(id*)arg4 textButtonIndexes:(id*)arg5 ;
-(void)_createViewsForItems:(id)arg1 ;
-(id)_currentCustomBackground;
@end

