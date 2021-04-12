/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GameCenterUI.BaseCollectionReusableView.h>

@class _TtC12GameCenterUI16DynamicTypeLabel, UIView, NSString;

@interface GameCenterUI.TitleHeaderView : GameCenterUI.BaseCollectionReusableView {

	 titleLabel;
	 detailLabel;
	 accessoryView;
	 accessory;
	 accessoryAction;
	 separatorLineView;
	 separatorInset;
	 allowsAccessibilityLayouts;
	 avoidanceRegion;

}

@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * titleLabel; 
@property (retain,nonatomic) UIView * accessoryView; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (readonly,nonatomic) _TtC12GameCenterUI16DynamicTypeLabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) UIView * accessibilityAccessoryView; 
-(_TtC12GameCenterUI16DynamicTypeLabel *)titleLabel;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)accessoryView;
-(_TtC12GameCenterUI16DynamicTypeLabel *)accessibilityTitleLabel;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)prepareForReuse;
-(void)didTapWithAccessoryView:(id)arg1 ;
-(void)layoutSubviews;
-(UIView *)accessibilityAccessoryView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_disableRasterizeInAnimations;
@end

