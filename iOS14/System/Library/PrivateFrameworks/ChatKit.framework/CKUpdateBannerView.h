/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol CKBannerUpdatesViewDelegate;
@class UITextView, NSDictionary, UIVisualEffectView, CKAvatarView, UIView, UIImageView, UIButton, NSString;

@interface CKUpdateBannerView : UIView <UITextViewDelegate> {

	BOOL _useNamedTitles;
	BOOL _useNamedSubtitles;
	BOOL _inUpdatesMode;
	unsigned long long _style;
	unsigned long long _bannerType;
	UITextView* _titleLabel;
	UITextView* _subtitleLabel;
	double _titleLabelAlignmentX;
	double _avatarViewAlignmentX;
	NSDictionary* _contactMap;
	UIVisualEffectView* _blurView;
	CKAvatarView* _avatarView;
	CKAvatarView* _secondaryAvatarView;
	UIView* _avatarCutoutView;
	UIImageView* _contactsIconView;
	UIButton* _cancelButton;
	id<CKBannerUpdatesViewDelegate> _updatesDelegate;
	UIView* _bottomSeparatorView;
	UIView* _topSeparatorView;

}

@property (assign,nonatomic) unsigned long long style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long bannerType;                                //@synthesize bannerType=_bannerType - In the implementation block
@property (assign,nonatomic) BOOL useNamedTitles;                                          //@synthesize useNamedTitles=_useNamedTitles - In the implementation block
@property (assign,nonatomic) BOOL useNamedSubtitles;                                       //@synthesize useNamedSubtitles=_useNamedSubtitles - In the implementation block
@property (assign,nonatomic) BOOL inUpdatesMode;                                           //@synthesize inUpdatesMode=_inUpdatesMode - In the implementation block
@property (nonatomic,retain) UITextView * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITextView * subtitleLabel;                                   //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) double titleLabelAlignmentX;                                  //@synthesize titleLabelAlignmentX=_titleLabelAlignmentX - In the implementation block
@property (assign,nonatomic) double avatarViewAlignmentX;                                  //@synthesize avatarViewAlignmentX=_avatarViewAlignmentX - In the implementation block
@property (nonatomic,retain) NSDictionary * contactMap;                                    //@synthesize contactMap=_contactMap - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                                //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) CKAvatarView * avatarView;                                    //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) CKAvatarView * secondaryAvatarView;                           //@synthesize secondaryAvatarView=_secondaryAvatarView - In the implementation block
@property (nonatomic,retain) UIView * avatarCutoutView;                                    //@synthesize avatarCutoutView=_avatarCutoutView - In the implementation block
@property (nonatomic,retain) UIImageView * contactsIconView;                               //@synthesize contactsIconView=_contactsIconView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic) id<CKBannerUpdatesViewDelegate> updatesDelegate;              //@synthesize updatesDelegate=_updatesDelegate - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparatorView;                                 //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (nonatomic,retain) UIView * topSeparatorView;                                    //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITextView *)titleLabel;
-(UIButton *)cancelButton;
-(void)setSubtitleLabel:(UITextView *)arg1 ;
-(void)setTitleLabel:(UITextView *)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(unsigned long long)bannerType;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 useNamedTitles:(BOOL)arg3 updates:(id)arg4 inUpdatesMode:(BOOL)arg5 ;
-(UIEdgeInsets)layoutMargins;
-(CKAvatarView *)avatarView;
-(NSDictionary *)contactMap;
-(void)setBannerType:(unsigned long long)arg1 ;
-(void)setBottomSeparatorView:(UIView *)arg1 ;
-(void)setTopSeparatorView:(UIView *)arg1 ;
-(double)_titleLabelAlignmentX;
-(BOOL)useNamedSubtitles;
-(void)setUseNamedSubtitles:(BOOL)arg1 ;
-(void)setTitleLabelAlignmentX:(double)arg1 ;
-(void)setAvatarViewAlignmentX:(double)arg1 ;
-(void)setContactMap:(NSDictionary *)arg1 ;
-(id<CKBannerUpdatesViewDelegate>)updatesDelegate;
-(void)setUpdatesDelegate:(id<CKBannerUpdatesViewDelegate>)arg1 ;
-(UITextView *)subtitleLabel;
-(void)layoutSubviews;
-(UIView *)topSeparatorView;
-(UIView *)bottomSeparatorView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateAvatarView;
-(BOOL)inUpdatesMode;
-(id)cancelGlyph;
-(void)setUseNamedTitles:(BOOL)arg1 ;
-(void)setInUpdatesMode:(BOOL)arg1 ;
-(UIImageView *)contactsIconView;
-(void)setSecondaryAvatarView:(CKAvatarView *)arg1 ;
-(void)setAvatarCutoutView:(UIView *)arg1 ;
-(CKAvatarView *)secondaryAvatarView;
-(void)addSeparators;
-(UIView *)avatarCutoutView;
-(void)setContactsIconView:(UIImageView *)arg1 ;
-(void)_updateSubtitleLabel;
-(double)maxLabelWidthForSize:(CGSize)arg1 ;
-(double)titleLabelAlignmentX;
-(BOOL)useNamedTitles;
-(double)avatarViewAlignmentX;
-(void)_updateTitleLabel;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(void)setupViews;
-(void)setStyle:(unsigned long long)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(unsigned long long)style;
@end

