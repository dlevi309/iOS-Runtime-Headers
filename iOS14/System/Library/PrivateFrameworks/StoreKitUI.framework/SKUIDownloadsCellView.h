/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, UIButton, UISlider, NSAttributedString, NSString, UIImage;

@interface SKUIDownloadsCellView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _imageView;
	UIButton* _button;
	UISlider* _progressSlider;
	NSAttributedString* _attributedTitle;
	NSString* _subtitle;
	long long _buttonType;
	BOOL _isPad;

}

@property (nonatomic,retain) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) double progress; 
@property (assign,nonatomic) long long buttonType;                              //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,readonly) UIButton * button;                               //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL isPad;                                        //@synthesize isPad=_isPad - In the implementation block
-(BOOL)isPad;
-(NSAttributedString *)attributedTitle;
-(UIButton *)button;
-(void)setButtonType:(long long)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(double)progress;
-(id)init;
-(void)setIsPad:(BOOL)arg1 ;
-(NSString *)subtitle;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(UIImage *)image;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(long long)buttonType;
@end

