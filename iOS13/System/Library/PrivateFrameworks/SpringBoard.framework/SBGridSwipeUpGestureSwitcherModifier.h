/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>

@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier {

	CGPoint _translation;

}
-(id)handleGestureEvent:(id)arg1 ;
-(double)contentViewScale;
-(long long)wallpaperStyle;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(long long)backdropBlurType;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(unsigned long long)numberOfAppLayoutsToCacheSnapshots;
-(NSRange)fullSizeSnapshotsRange;
-(void)didMoveToParentModifier:(id)arg1 ;
-(void)_applyPrototypeSettings;
-(long long)finalActionForGestureEvent:(id)arg1 ;
@end

