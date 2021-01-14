/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIButton, UIImage, UIImageView, UILabel, UIVisualEffectView, UIVisualEffect, NSString;

@interface CKNavigationButtonView : UIButton {

	BOOL _wantsVibrancy;
	BOOL _wantsLongPress;
	long long _joinButtonStyle;
	UIButton* _imageButton;
	UIImage* _image;
	UIImage* _defaultImage;
	UIImage* _disabledImage;
	UIImageView* _iconImageView;
	UILabel* _textLabel;
	UIVisualEffectView* _vibrancyView;
	UIVisualEffect* _vibrancyEffect;
	UIVisualEffect* _disabledVibrancyEffect;
	NSString* _text;

}

@property (assign,nonatomic) BOOL wantsLongPress;                                  //@synthesize wantsLongPress=_wantsLongPress - In the implementation block
@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * defaultImage;                               //@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,retain) UIImage * disabledImage;                              //@synthesize disabledImage=_disabledImage - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                          //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                  //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrancyView;                    //@synthesize vibrancyView=_vibrancyView - In the implementation block
@property (nonatomic,retain) UIVisualEffect * vibrancyEffect;                      //@synthesize vibrancyEffect=_vibrancyEffect - In the implementation block
@property (nonatomic,retain) UIVisualEffect * disabledVibrancyEffect;              //@synthesize disabledVibrancyEffect=_disabledVibrancyEffect - In the implementation block
@property (nonatomic,copy) NSString * text;                                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long joinButtonStyle;                            //@synthesize joinButtonStyle=_joinButtonStyle - In the implementation block
@property (assign,nonatomic) BOOL wantsVibrancy;                                   //@synthesize wantsVibrancy=_wantsVibrancy - In the implementation block
@property (nonatomic,readonly) UIButton * imageButton;                             //@synthesize imageButton=_imageButton - In the implementation block
-(UIImageView *)iconImageView;
-(CGSize)intrinsicContentSize;
-(void)setImage:(UIImage *)arg1 ;
-(BOOL)wantsVibrancy;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setWantsLongPress:(BOOL)arg1 ;
-(void)setDefaultImage:(UIImage *)arg1 ;
-(void)_setupIconImageView;
-(id)_imageForCurrentState;
-(UIImage *)disabledImage;
-(UIVisualEffect *)disabledVibrancyEffect;
-(UIVisualEffect *)vibrancyEffect;
-(void)setDisabledVibrancyEffect:(UIVisualEffect *)arg1 ;
-(BOOL)wantsLongPress;
-(void)setDisabledImage:(UIImage *)arg1 ;
-(UIImage *)defaultImage;
-(UIImage *)image;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setJoinButtonStyle:(long long)arg1 ;
-(UIVisualEffectView *)vibrancyView;
-(void)setVibrancyView:(UIVisualEffectView *)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setVibrancyEffect:(UIVisualEffect *)arg1 ;
-(long long)joinButtonStyle;
-(id)initWithImage:(id)arg1 disabledImage:(id)arg2 text:(id)arg3 wantsLongPress:(BOOL)arg4 ;
-(id)initWithImage:(id)arg1 text:(id)arg2 wantsLongPress:(BOOL)arg3 ;
-(UILabel *)textLabel;
-(void)setWantsVibrancy:(BOOL)arg1 ;
-(UIButton *)imageButton;
@end

