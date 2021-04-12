/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@interface SBHomeGestureToHomeSwitcherModifier : SBTransitionSwitcherModifier {

	BOOL _showingOrAnimatingCardsForFlyIn;

}
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isHomeScreenContentRequired;
-(long long)homeScreenBackdropBlurType;
-(id)visibleAppLayouts;
-(id)appLayoutsToCacheSnapshots;
-(UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1 ;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(long long)wallpaperStyle;
-(unsigned long long)transactionCompletionOptions;
-(BOOL)isWallpaperRequiredForSwitcher;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)initWithTransitionID:(id)arg1 showingOrAnimatingCardsForFlyIn:(BOOL)arg2 ;
@end

