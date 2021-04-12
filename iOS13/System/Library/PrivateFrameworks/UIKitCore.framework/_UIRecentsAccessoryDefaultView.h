/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface _UIRecentsAccessoryDefaultView : UIView {

	UILabel* _titleLabel;
	UILabel* _subheadLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subheadLabel;              //@synthesize subheadLabel=_subheadLabel - In the implementation block
-(id)init;
-(CGSize)intrinsicContentSize;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_updateLabelTextColors;
-(UILabel *)subheadLabel;
-(void)setSubheadLabel:(UILabel *)arg1 ;
@end

