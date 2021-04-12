/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFPinnableBanner.h>

@class UIView, NSLayoutConstraint, UIImageView, UILabel, _SFDimmingButton, NSString;

@interface _SFLinkBanner : _SFPinnableBanner {

	UIView* _separator;
	NSLayoutConstraint* _titleTopConstraint;
	NSLayoutConstraint* _messageTopConstraint;
	NSLayoutConstraint* _messageBottomConstraint;
	UIImageView* _icon;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	_SFDimmingButton* _openButton;
	/*^block*/id _openActionHandler;

}

@property (nonatomic,retain) UIImageView * icon;                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                     //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSString * messageLabelText; 
@property (nonatomic,retain) _SFDimmingButton * openButton;              //@synthesize openButton=_openButton - In the implementation block
@property (nonatomic,copy) id openActionHandler;                         //@synthesize openActionHandler=_openActionHandler - In the implementation block
-(void)_open;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)_messageLabelFont;
-(void)setMessageLabelText:(NSString *)arg1 ;
-(NSString *)messageLabelText;
-(void)invalidateBannerLayout;
-(void)setOpenButton:(_SFDimmingButton *)arg1 ;
-(id)openActionHandler;
-(id)init;
-(UIImageView *)icon;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setIcon:(UIImageView *)arg1 ;
-(void)setOpenActionHandler:(id)arg1 ;
-(UILabel *)messageLabel;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_SFDimmingButton *)openButton;
-(void)setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(id)_titleLabelFont;
-(void)contentSizeCategoryDidChange;
@end

