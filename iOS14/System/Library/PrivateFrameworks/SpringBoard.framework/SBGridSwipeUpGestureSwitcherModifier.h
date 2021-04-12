/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>

@class SBDismissSiriSwitcherModifier;

@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier {

	CGPoint _translation;
	BOOL _isApplyingContentViewScaleToSwitcherViewBounds;
	SBDismissSiriSwitcherModifier* _dismissSiriModifier;

}
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(long long)homeScreenBackdropBlurType;
-(id)visibleAppLayouts;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(long long)wallpaperStyle;
-(double)contentViewScale;
-(CGPoint)scrollViewContentOffset;
-(void)didMoveToParentModifier:(id)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(void)_applyPrototypeSettings;
-(CGRect)switcherViewBounds;
-(id)handleGestureEvent:(id)arg1 ;
-(id)initWithGestureID:(id)arg1 ;
-(void)_performBlockByApplyContentViewScaleToSwitcherViewBounds:(/*^block*/id)arg1 ;
-(long long)finalResponseForGestureEvent:(id)arg1 ;
@end

