/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_contentFont;
-(id)_headerFont;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)contentLabel;
-(void)setContentLabel:(UILabel *)arg1 ;
-(id)initWithHeader:(id)arg1 content:(id)arg2 ;
-(void)addAccessoryButton:(id)arg1 ;
@end

