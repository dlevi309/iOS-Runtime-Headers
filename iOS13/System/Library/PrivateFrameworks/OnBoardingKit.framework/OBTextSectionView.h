/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <UIKitCore/UIStackView.h>

@class UILabel;

@interface OBTextSectionView : UIStackView {

	UILabel* _headerLabel;
	UILabel* _contentLabel;

}

@property (nonatomic,retain) UILabel * headerLabel;               //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * contentLabel;              //@synthesize contentLabel=_contentLabel - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithHeader:(id)arg1 content:(id)arg2 ;
-(void)addAccessoryButton:(id)arg1 ;
-(id)_headerFont;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)setContentLabel:(UILabel *)arg1 ;
-(UILabel *)contentLabel;
-(id)_contentFont;
@end

