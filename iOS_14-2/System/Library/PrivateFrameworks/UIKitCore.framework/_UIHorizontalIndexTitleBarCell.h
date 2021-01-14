/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class _UIFocusFastScrollingIndexBarEntry, UILabel, UIView;

@interface _UIHorizontalIndexTitleBarCell : UICollectionViewCell {

	_UIFocusFastScrollingIndexBarEntry* _entry;
	UILabel* _titleLabel;
	UIView* _roundedCornersBackground;

}

@property (nonatomic,retain) _UIFocusFastScrollingIndexBarEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * roundedCornersBackground;                       //@synthesize roundedCornersBackground=_roundedCornersBackground - In the implementation block
+(id)cellFont;
-(UILabel *)titleLabel;
-(void)_updateColors;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)prepareForReuse;
-(_UIFocusFastScrollingIndexBarEntry *)entry;
-(void)setEntry:(_UIFocusFastScrollingIndexBarEntry *)arg1 ;
-(void)updateForEntry:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)roundedCornersBackground;
-(BOOL)_isAnotherIndexTitleCellFocused;
-(void)setRoundedCornersBackground:(UIView *)arg1 ;
@end

