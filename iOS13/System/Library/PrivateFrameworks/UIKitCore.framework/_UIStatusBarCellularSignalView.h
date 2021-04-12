/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarSignalView.h>

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView {

	BOOL _needsCycleAnimationUpdate;
	_UIStatusBarCycleAnimation* _cycleAnimation;

}

@property (assign,nonatomic) BOOL needsCycleAnimationUpdate;                           //@synthesize needsCycleAnimationUpdate=_needsCycleAnimationUpdate - In the implementation block
@property (nonatomic,retain) _UIStatusBarCycleAnimation * cycleAnimation;              //@synthesize cycleAnimation=_cycleAnimation - In the implementation block
+(double)_barWidthForIconSize:(long long)arg1 ;
+(double)_heightForNormalBarAtIndex:(long long)arg1 iconSize:(long long)arg2 ;
+(double)_barCornerRadiusForIconSize:(long long)arg1 ;
+(double)_interspaceForIconSize:(long long)arg1 ;
+(CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id)accessibilityHUDRepresentation;
-(_UIStatusBarCycleAnimation *)cycleAnimation;
-(void)setCycleAnimation:(_UIStatusBarCycleAnimation *)arg1 ;
-(double)_heightForBarAtIndex:(long long)arg1 mode:(long long)arg2 ;
-(void)_updateBars;
-(void)_setNeedsUpdateCycleAnimation;
-(void)_updateCycleAnimationNow;
-(double)_heightForBarAtIndex:(long long)arg1 ;
-(void)_updateActiveBars;
-(void)_updateCycleAnimationIfNeeded;
-(void)_colorsDidChange;
-(void)_iconSizeDidChange;
-(void)_updateFromMode:(long long)arg1 ;
-(BOOL)needsCycleAnimationUpdate;
-(void)setNeedsCycleAnimationUpdate:(BOOL)arg1 ;
@end

