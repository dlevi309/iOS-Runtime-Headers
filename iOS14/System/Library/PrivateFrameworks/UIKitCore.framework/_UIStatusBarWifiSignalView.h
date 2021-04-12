/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarSignalView.h>

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarWifiSignalView : _UIStatusBarSignalView {

	BOOL _needsCycleAnimationUpdate;
	_UIStatusBarCycleAnimation* _cycleAnimation;

}

@property (assign,nonatomic) BOOL needsCycleAnimationUpdate;                           //@synthesize needsCycleAnimationUpdate=_needsCycleAnimationUpdate - In the implementation block
@property (nonatomic,retain) _UIStatusBarCycleAnimation * cycleAnimation;              //@synthesize cycleAnimation=_cycleAnimation - In the implementation block
+(CGSize)_intrinsicContentSizeForNumberOfBars:(long long)arg1 iconSize:(long long)arg2 ;
+(double)_barThicknessAtIndex:(unsigned long long)arg1 iconSize:(long long)arg2 ;
+(double)_interspaceForIconSize:(long long)arg1 ;
+(double)_totalWidthForIconSize:(long long)arg1 ;
+(id)_barImageWithSize:(CGSize)arg1 forScale:(double)arg2 distance:(double)arg3 angle:(double)arg4 centerPoint:(CGPoint)arg5 cornerRadius:(double)arg6 thickness:(double)arg7 ;
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
-(double)_barCornerRadius;
-(void)_colorsDidChange;
-(_UIStatusBarCycleAnimation *)cycleAnimation;
-(void)_updateActiveBars;
-(void)_updateCycleAnimationNow;
-(void)setNeedsCycleAnimationUpdate:(BOOL)arg1 ;
-(id)accessibilityHUDRepresentation;
@end

