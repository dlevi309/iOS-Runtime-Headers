/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)titleLabel;
-(id)init;
-(UIImageView *)imageView;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(UIStackView *)labelStackView;
-(UILabel *)descriptionLabel;
@end

