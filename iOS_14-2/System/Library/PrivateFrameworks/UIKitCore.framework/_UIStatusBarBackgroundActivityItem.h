/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarIndicatorItem.h>

@class _UIStatusBarPillView, _UIStatusBarActivityIconView;

@interface _UIStatusBarBackgroundActivityItem : _UIStatusBarIndicatorItem {

	_UIStatusBarPillView* _backgroundView;
	_UIStatusBarActivityIconView* _iconView;

}

@property (nonatomic,retain) _UIStatusBarPillView * backgroundView;                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) _UIStatusBarActivityIconView * iconView;              //@synthesize iconView=_iconView - In the implementation block
+(BOOL)_identifierContainsItemImage:(id)arg1 ;
+(double)_fontSizeAdjustmentForActivityType:(long long)arg1 ;
+(double)_verticalOffsetForActivityType:(long long)arg1 ;
+(id)backgroundDisplayIdentifier;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)indicatorEntryKey;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(id)_imageNameForActivityType:(long long)arg1 ;
-(id)_backgroundActivityViewForIdentifier:(id)arg1 ;
-(id)_backgroundColorForActivityType:(long long)arg1 ;
-(id)_visualEffectForActivityType:(long long)arg1 traitCollection:(id)arg2 ;
-(void)_create_iconView;
-(BOOL)_shouldPulseForActivityType:(long long)arg1 traitCollection:(id)arg2 ;
-(BOOL)_shouldRingForActivityType:(long long)arg1 traitCollection:(id)arg2 ;
-(id)_textLabelForActivityType:(long long)arg1 ;
-(id)_systemImageNameForActivityType:(long long)arg1 ;
-(id)imageView;
-(void)setBackgroundView:(_UIStatusBarPillView *)arg1 ;
-(_UIStatusBarPillView *)backgroundView;
-(void)_create_backgroundView;
-(id)viewForIdentifier:(id)arg1 ;
-(void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)systemImageNameForUpdate:(id)arg1 ;
-(_UIStatusBarActivityIconView *)iconView;
-(void)setIconView:(_UIStatusBarActivityIconView *)arg1 ;
-(id)imageForUpdate:(id)arg1 ;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(id)imageNameForUpdate:(id)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg1 ;
@end

