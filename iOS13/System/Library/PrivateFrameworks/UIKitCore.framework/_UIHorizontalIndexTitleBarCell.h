/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(_UIFocusFastScrollingIndexBarEntry *)entry;
-(void)updateForEntry:(id)arg1 ;
-(void)_updateColors;
-(void)setEntry:(_UIFocusFastScrollingIndexBarEntry *)arg1 ;
-(UIView *)roundedCornersBackground;
-(BOOL)_isAnotherIndexTitleCellFocused;
-(void)setRoundedCornersBackground:(UIView *)arg1 ;
@end

