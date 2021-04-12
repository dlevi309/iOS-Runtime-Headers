/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIView.h>

@class UIButton, UILabel, UIImageView, UIControl, NSString, UIImage;

@interface SKUIRedeemITunesPassLearnMoreView : UIView {

	UIButton* _button;
	UILabel* _explanationLabel;
	UIImageView* _headerImageView;

}

@property (nonatomic,readonly) UIControl * button; 
@property (nonatomic,copy) NSString * buttonTitle; 
@property (nonatomic,copy) NSString * explanationString; 
@property (nonatomic,retain) UIImage * headerImage; 
-(void)setBackgroundColor:(id)arg1 ;
-(UIControl *)button;
-(NSString *)buttonTitle;
-(void)layoutSubviews;
-(void)setButtonTitle:(NSString *)arg1 ;
-(UIImage *)headerImage;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(void)setExplanationString:(NSString *)arg1 ;
-(NSString *)explanationString;
@end

