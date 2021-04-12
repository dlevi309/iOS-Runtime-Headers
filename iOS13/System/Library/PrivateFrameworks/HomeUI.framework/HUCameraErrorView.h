/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIStackView.h>

@class UIImageView, UILabel, UIStackView, NSString;

@interface HUCameraErrorView : UIStackView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIStackView* _labelStackView;

}

@property (nonatomic,readonly) UIImageView * imageView;                   //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UIStackView * labelStackView;              //@synthesize labelStackView=_labelStackView - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * descriptionText; 
-(id)init;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(UILabel *)descriptionLabel;
-(void)setTitleText:(NSString *)arg1 ;
-(UIStackView *)labelStackView;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
@end

