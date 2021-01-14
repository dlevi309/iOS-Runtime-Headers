/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)init;
-(void)willMoveToWindow:(id)arg1 ;
-(UILabel *)subheadLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateLabelTextColors;
-(void)setSubheadLabel:(UILabel *)arg1 ;
@end

