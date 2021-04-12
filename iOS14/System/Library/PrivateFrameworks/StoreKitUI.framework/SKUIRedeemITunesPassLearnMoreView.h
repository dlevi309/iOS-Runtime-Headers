/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIControl *)button;
-(NSString *)buttonTitle;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(UIImage *)headerImage;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)setExplanationString:(NSString *)arg1 ;
-(NSString *)explanationString;
@end

