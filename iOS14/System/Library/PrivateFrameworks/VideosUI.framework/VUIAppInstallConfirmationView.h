/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIAppInstallLockup, UILabel, VUIBuyButtonLockup, NSLayoutConstraint, NSString, UIButton;

@interface VUIAppInstallConfirmationView : UIView {

	BOOL _didLayout;
	VUIAppInstallLockup* _lockupView;
	UILabel* _imageSubtitleView;
	VUIBuyButtonLockup* _buyLockup;
	UILabel* _titleView;
	UILabel* _messageView;
	NSLayoutConstraint* _buttonHeightConstraint;
	NSString* _title;
	NSString* _message;
	UIButton* _actionButton;
	UIButton* _cancelButton;
	UIButton* _appStoreButton;
	UIButton* _secondaryLinkButton;

}

@property (nonatomic,retain) VUIAppInstallLockup * lockupView;              //@synthesize lockupView=_lockupView - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                       //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                       //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * appStoreButton;                     //@synthesize appStoreButton=_appStoreButton - In the implementation block
@property (nonatomic,retain) UIButton * secondaryLinkButton;                //@synthesize secondaryLinkButton=_secondaryLinkButton - In the implementation block
+(CGSize)iconSize;
-(void)setMessage:(NSString *)arg1 ;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(NSString *)message;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAppName:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAppStoreButton:(UIButton *)arg1 ;
-(UIButton *)appStoreButton;
-(void)setAppIcon:(id)arg1 ;
-(void)layoutSubviews;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setIAP:(id)arg1 ;
-(NSString *)title;
-(id)_buttonWithTitleForTV:(id)arg1 textStyle:(id)arg2 ;
-(void)setAgeRating:(id)arg1 ;
-(void)_layoutForTvos;
-(void)_layoutForIos;
-(void)setAppSubtitle:(id)arg1 ;
-(VUIAppInstallLockup *)lockupView;
-(void)setLockupView:(VUIAppInstallLockup *)arg1 ;
-(UIButton *)secondaryLinkButton;
-(void)setSecondaryLinkButton:(UIButton *)arg1 ;
@end

