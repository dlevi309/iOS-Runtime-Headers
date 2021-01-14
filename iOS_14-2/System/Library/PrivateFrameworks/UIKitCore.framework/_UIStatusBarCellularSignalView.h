/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarSignalView.h>

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView {

	BOOL _needsLargerScale;
	BOOL _needsCycleAnimationUpdate;
	_UIStatusBarCycleAnimation* _cycleAnimation;

}

@property (assign,nonatomic) BOOL needsLargerScale;                                    //@synthesize needsLargerScale=_needsLargerScale - In the implementation block
@property (assign,nonatomic) BOOL needsCycleAnimationUpdate;                           //@synthesize needsCycleAnimationUpdate=_needsCycleAnimationUpdate - In the implementation block
@property (nonatomic,retain) _UIStatusBarCycleAnimation * cycleAnimation;              //@synthesize cycleAnimation=_cycleAnimation - In the implementation block
+(double)_heightForNormalBarAtIndex:(long long)arg1 iconSize:(long long)arg2 ;
+(CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2 ;
+(double)_interspaceForIconSize:(long long)arg1 ;
+(double)_barWidthForIconSize:(long long)arg1 ;
+(double)_barCornerRadiusForIconSize:(long long)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setCycleAnimation:(_UIStatusBarCycleAnimation *)arg1 ;
-(void)_iconSizeDidChange;
-(BOOL)needsCycleAnimationUpdate;
-(void)_updateCycleAnimationIfNeeded;
-(void)_updateFromMode:(long long)arg1 ;
-(void)_setNeedsUpdateCycleAnimation;
-(void)_updateBars;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(double)_heightForBarAtIndex:(long long)arg1 ;
-(void)_colorsDidChange;
-(_UIStatusBarCycleAnimation *)cycleAnimation;
-(double)_heightForBarAtIndex:(long long)arg1 mode:(long long)arg2 ;
-(void)_updateActiveBars;
-(void)_updateCycleAnimationNow;
-(void)setNeedsCycleAnimationUpdate:(BOOL)arg1 ;
-(void)setNeedsLargerScale:(BOOL)arg1 ;
-(BOOL)needsLargerScale;
-(id)accessibilityHUDRepresentation;
@end

