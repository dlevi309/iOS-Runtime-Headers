/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIButton, UILabel, UIVisualEffectView, UIVisualEffect, NSString;

@interface CKNavigationButtonView : UIView {

	BOOL _wantsLongPress;
	BOOL _buttonEnabled;
	BOOL _wantsVibrancy;
	/*^block*/id _buttonTappedCallback;
	/*^block*/id _buttonLongPressCallback;
	long long _joinButtonStyle;
	UIImage* _image;
	UIImage* _defaultImage;
	UIImage* _disabledImage;
	UIButton* _imageButton;
	UILabel* _textLabel;
	UIVisualEffectView* _vibrancyView;
	UIVisualEffect* _vibrancyEffect;
	UIVisualEffect* _disabledVibrancyEffect;
	NSString* _text;

}

@property (assign,nonatomic) BOOL wantsLongPress;                                    //@synthesize wantsLongPress=_wantsLongPress - In the implementation block
@property (nonatomic,retain) UIImage * image;                                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * defaultImage;                                 //@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,retain) UIImage * disabledImage;                                //@synthesize disabledImage=_disabledImage - In the implementation block
@property (nonatomic,retain) UIButton * imageButton;                                 //@synthesize imageButton=_imageButton - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                    //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrancyView;                      //@synthesize vibrancyView=_vibrancyView - In the implementation block
@property (nonatomic,retain) UIVisualEffect * vibrancyEffect;                        //@synthesize vibrancyEffect=_vibrancyEffect - In the implementation block
@property (nonatomic,retain) UIVisualEffect * disabledVibrancyEffect;                //@synthesize disabledVibrancyEffect=_disabledVibrancyEffect - In the implementation block
@property (nonatomic,copy) NSString * text;                                          //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) id buttonTappedCallback;                                  //@synthesize buttonTappedCallback=_buttonTappedCallback - In the implementation block
@property (nonatomic,copy) id buttonLongPressCallback;                               //@synthesize buttonLongPressCallback=_buttonLongPressCallback - In the implementation block
@property (assign,nonatomic) long long joinButtonStyle;                              //@synthesize joinButtonStyle=_joinButtonStyle - In the implementation block
@property (assign,getter=isButtonEnabled,nonatomic) BOOL buttonEnabled;              //@synthesize buttonEnabled=_buttonEnabled - In the implementation block
@property (assign,nonatomic) BOOL wantsVibrancy;                                     //@synthesize wantsVibrancy=_wantsVibrancy - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(UIButton *)imageButton;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setButtonEnabled:(BOOL)arg1 ;
-(UIImage *)defaultImage;
-(UIVisualEffectView *)vibrancyView;
-(void)setVibrancyView:(UIVisualEffectView *)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(void)setWantsVibrancy:(BOOL)arg1 ;
-(void)setButtonTappedCallback:(id)arg1 ;
-(void)setButtonLongPressCallback:(id)arg1 ;
-(void)setJoinButtonStyle:(long long)arg1 ;
-(BOOL)wantsVibrancy;
-(id)initWithImage:(id)arg1 disabledImage:(id)arg2 text:(id)arg3 wantsLongPress:(BOOL)arg4 ;
-(id)initWithImage:(id)arg1 text:(id)arg2 wantsLongPress:(BOOL)arg3 ;
-(long long)joinButtonStyle;
-(void)setWantsLongPress:(BOOL)arg1 ;
-(void)setVibrancyEffect:(UIVisualEffect *)arg1 ;
-(void)setDefaultImage:(UIImage *)arg1 ;
-(void)_setupImageButton;
-(void)setImageButton:(UIButton *)arg1 ;
-(BOOL)wantsLongPress;
-(void)_buttonLongPressed:(id)arg1 ;
-(BOOL)isButtonEnabled;
-(UIImage *)disabledImage;
-(id)buttonTappedCallback;
-(id)buttonLongPressCallback;
-(UIVisualEffect *)disabledVibrancyEffect;
-(UIVisualEffect *)vibrancyEffect;
-(void)setDisabledVibrancyEffect:(UIVisualEffect *)arg1 ;
-(void)setDisabledImage:(UIImage *)arg1 ;
@end

